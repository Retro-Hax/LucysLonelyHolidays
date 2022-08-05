// Behaviour File for the Pony i forgot the name of aka i thought
// she was called Spritzie so thats her behavior file

//Debug Stuff
// #define DEBUG
 
void bhv_spritzie_init(void) {
    o->oGravity = 2.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    o->oInteractionSubtype = INT_SUBTYPE_NPC;
    if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) < 39
        || sYoshiDead == TRUE) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void spritzie_act_idle(void) {
    s16 collisionFlags;

    o->oSpritziePosXCopy = o->oPosX;
    o->oSpritziePosYCopy = o->oPosY;
    o->oSpritziePosZCopy = o->oPosZ;

    collisionFlags = object_step();

    if (o->oDistanceToMario < 1000.0f) {
        o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x140);
    }

    if (o->oInteractStatus == INT_STATUS_INTERACTED) {
        o->oAction = SPRITZIE_ACT_TURN_TO_TALK;
    }
}

void spritzie_act_talk(void) {
    if (set_mario_npc_dialog(MARIO_DIALOG_LOOK_FRONT) == MARIO_DIALOG_STATUS_SPEAK) {
        o->activeFlags |= ACTIVE_FLAG_INITIATED_TIME_STOP;

if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) \
== 39 && cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_106)) {
            set_mario_npc_dialog(MARIO_DIALOG_STOP);

            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oAction = SPRITZIE_SPAWN_50_STAR;
            }
if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) \
== 40 && cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_106)) {
            set_mario_npc_dialog(MARIO_DIALOG_STOP);

            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oSpritzieHasTalkedToLucy = SPRITZIE_HAS_TALKED;
            o->oInteractStatus = 0;
            o->oAction = SPRITZIE_ACT_IDLE;
        }
    }
};

void spritzie_act_turn_to_talk(void) {

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x1000);

    if ((s16) o->oMoveAngleYaw == (s16) o->oAngleToMario) {
        o->oAction = SPRITZIE_ACT_TALK;
    }

    cur_obj_play_sound_2(SOUND_ACTION_READ_SIGN);
}

void spritzie_actions(void) {
    switch (o->oAction) {
        case SPRITZIE_ACT_IDLE:
            spritzie_act_idle();
            break;

        case SPRITZIE_ACT_TURN_TO_TALK:
            spritzie_act_turn_to_talk();
            break;

        case SPRITZIE_ACT_TALK:
            spritzie_act_talk();
            break;

        case SPRITZIE_SPAWN_50_STAR:
            spritzie_spawn_final_star();
            break;
    }

    set_object_visibility(o, 3000);
}

void bhv_spritzie_loop(void) {
    spritzie_actions();

    curr_obj_random_blink(&o->oSpritzieBlinkTimer);

    o->oInteractStatus = 0;
}

// This Spawns the 40 Star after collecting all 39 Stars
// TODO: Make Sar only spawn Once
void spritzie_spawn_final_star(void) {

       gCurrentObject->oBehParams = 0x04 << 24;
       spawn_no_exit_star(-7390, -1340, -6256);

o->oAction = SPRITZIE_ACT_IDLE;
}

