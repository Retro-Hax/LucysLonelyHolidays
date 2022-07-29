#include <ultra64.h>
#include "sm64.h"
#include "game/area.h"
#include "audio/external.h"
#include "seq_ids.h"

#include "make_const_nonconst.h"

void lvl_init_or_update_star_select_music() {

    if (gCurrLevelNum == LEVEL_BOB) {
    play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(4, SEQ_LEVEL_INSIDE_CASTLE), 0);
    }

    else if (gCurrLevelNum == LEVEL_WF) {
    play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(4, SEQ_EVENT_MERRY_GO_ROUND), 0);
    }
    
    else if (gCurrLevelNum == LEVEL_JRB) {
    play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(4, SEQ_LEVEL_KOOPA_ROAD), 0);
    }

};