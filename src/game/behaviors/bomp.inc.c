// bomp.inc.c

void bhv_large_bomp_init(void) {
    o->oMoveAngleYaw += 0x4000;
    o->oTimer = random_float() * 100.0f;
}

void bhv_large_bomp_loop(void) {
    //obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_SNOWBALL);

    if (o->oTimer == 0) {
        breakable_box_init();
    }

    if (cur_obj_was_attacked_or_ground_pounded()) {
        obj_explode_and_spawn_coins(46.0f, 1);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }

    if (obj_check_if_collided_with_object(o, gMarioObject) == TRUE) {
        struct Object *hiddenStar = cur_obj_nearest_object_with_behavior(bhvHiddenStar);

        if (hiddenStar != NULL) {
            hiddenStar->oHiddenStarTriggerCounter++;

            if (hiddenStar->oHiddenStarTriggerCounter != 5) {
                spawn_orange_number(hiddenStar->oHiddenStarTriggerCounter, 0, 0, 0);
            }
            play_sound(SOUND_MENU_COLLECT_SECRET
                       + (((u8) hiddenStar->oHiddenStarTriggerCounter - 1) << 16), gGlobalSoundSource);
        }

        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
