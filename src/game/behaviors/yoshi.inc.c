// Behaviour File for the Pony i forgot the name of aka i thought
// she was called Spritzie so thats her behavior file

//Debug Stuff
// #define DEBUG
 
void bhv_spritzie_init(void) {
    o->oGravity = 2.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    o->oInteractionSubtype = INT_SUBTYPE_NPC;

    if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) < 35
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
>= 35 && cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_105)) {
            set_mario_npc_dialog(MARIO_DIALOG_STOP);

            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oSpritzieHasTalkedToLucy = SPRITZIE_HAS_TALKED;
            o->oInteractStatus = 0;
            o->oAction = SPRITZIE_SPAWN_SECRET_STARS;
            }
if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) \
== 44 && cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_106)) {
            set_mario_npc_dialog(MARIO_DIALOG_STOP);

            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oAction = SPRITZIE_SPAWN_50_STAR;
            }
if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) \
== 45 && cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_106)) {
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

        case SPRITZIE_SPAWN_SECRET_STARS:
            spritzie_spawn_secret_star();
            break;
    }

    set_object_visibility(o, 3000);
}

void bhv_spritzie_loop(void) {
    spritzie_actions();

    curr_obj_random_blink(&o->oSpritzieBlinkTimer);

    o->oInteractStatus = 0;
}

// This Spawns the 45th Star after collecting all 44 Stars
// TODO: Make Sar only spawn Once
void spritzie_spawn_final_star(void) {

       gCurrentObject->oBehParams = 0x04 << 24;
       spawn_no_exit_star(-7390, -1340, -6256);

o->oAction = SPRITZIE_ACT_IDLE;
}

// This Spawns the Secret Stars after talking with Spritzie
void spritzie_spawn_secret_star(void) {

    // The only Stage hiding also Warp Actors
    // COURSE_NONE is all Hubworlds Combined aka Castle Grounds, Castle Courtyard and Inside Castle
    if (gCurrCourseNum == COURSE_NONE) {
    save_file_get_course_star_count(gCurrSaveFileNum, gCurrCourseNum);
    struct Object *warppipe = spawn_object(o, MODEL_CASTLE_GROUNDS_WARP_PIPE,  bhvWarpPipe);
    warppipe->oBehParams2ndByte= 0xAB;
    warppipe->oPosX= -3988;
    warppipe->oPosY= -191;
    warppipe->oPosZ= -4578;
    struct Object *warp = spawn_object(o, MODEL_NONE, bhvWarp);
    warp->oBehParams2ndByte = 0xAF;
    warp->oPosX= -7275;
    warp->oPosY= -1340;
    warp->oPosZ= -6301;

    warppipe->activeFlags = ACTIVE_FLAG_ACTIVE;
    warp->activeFlags = ACTIVE_FLAG_ACTIVE;

    struct Object *star = spawn_object(o, MODEL_STAR, bhvStar); //0x00000000
    star->oPosX= -3796;
    star->oPosY= 37;
    star->oPosZ= -4293;

    star->activeFlags = ACTIVE_FLAG_ACTIVE;

    struct Object *star2 = spawn_object(o, MODEL_STAR, bhvStar); //0x00010000
    star2->oPosX= -5545;
    star2->oPosY= -683;
    star2->oPosZ= 174;

    star2->activeFlags = ACTIVE_FLAG_ACTIVE;

}

    //if (gCurrCourseNum == COURSE_BOB) 

    if (gCurrCourseNum == COURSE_WF & gCurrAreaIndex == 0x01) {
    struct Object *star = spawn_object(o, MODEL_STAR, bhvStar);
    star->oPosX= -47;
    star->oPosY= -332;
    star->oPosZ= 5326;
    
    star->activeFlags = ACTIVE_FLAG_ACTIVE & ACTIVE_FLAG_IN_DIFFERENT_ROOM;
    } else if (gCurrCourseNum == COURSE_WF & gCurrAreaIndex == 0x02) {
	struct Object *star = spawn_object(o, MODEL_STAR, bhvStar);
    star->oPosX= -308;
    star->oPosY= 235;
    star->oPosZ= 3929;

    star->activeFlags = ACTIVE_FLAG_ACTIVE & ACTIVE_FLAG_IN_DIFFERENT_ROOM;
    }

    //if (gCurrCourseNum == COURSE_JRB)

o->oAction = SPRITZIE_ACT_IDLE;
}
