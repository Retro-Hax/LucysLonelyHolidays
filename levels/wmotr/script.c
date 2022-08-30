#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xD1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xD0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WMOTR, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_WMOTR, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CASTLE_GROUNDS, 0x01, 0xAB, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3227, 2994, 4101, 0, 180, 0, 0x00030000, bhvWarpPipe),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 1007, 2994, 4116, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BOO, 1007, 3328, 4116, 0, 0, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -1298, 195, -1532, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -1349, 195, 1470, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 1413, 195, -1558, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -956, 195, 621, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 1299, 195, 1419, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -867, 195, -468, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 476, 195, 799, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 539, 195, -810, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -2285, 195, -194, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -3390, 195, -104, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 333, 195, -2287, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 629, 195, -2749, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 77, 195, -3301, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 526, 195, -3532, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 3209, 195, -143, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 3671, 195, 435, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 2439, 195, 795, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 2285, 195, 358, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 2978, 195, 461, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -655, 195, 3003, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -206, 195, 2682, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -706, 195, 2309, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -231, 195, 2040, 0, 90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOOKEND, -3436, 0, 3089, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3436, 0, 2447, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3436, 0, 1934, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3436, 0, 1253, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3436, 0, 688, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, 3316, 0, -518, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, 3316, 0, -1160, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, 3316, 0, -1674, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, 3316, 0, -2354, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, 3316, 0, -2919, 0, 0, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -4977, 0, -3420, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -4335, 0, -3420, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3822, 0, -3420, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3141, 0, -3420, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -2576, 0, -3420, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -1960, 0, -3394, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -1280, 0, -3394, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -715, 0, -3394, 0, -90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_NONE, -1967, 2994, 5503, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 29, 2994, 5503, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2035, 2994, 5503, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3984, 2994, 5503, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5236, 2994, 4862, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1943, 2994, 4101, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 95, 2994, 4120, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4078, 2994, 4120, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, 687, 2994, 3818, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 687, 2994, 4040, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 687, 2994, 4235, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 947, 2994, 3818, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 947, 2994, 4040, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 947, 2994, 4235, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1229, 2994, 3818, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1229, 2994, 4040, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1229, 2994, 4235, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_MAD_PIANO, 5236, 2994, 3860, 0, 0, 0, 0x00000000, bhvMadPiano),
		OBJECT(MODEL_MAD_PIANO, -4636, 4641, 5517, 0, 0, 0, 0x00000000, bhvMadPiano),
		MARIO_POS(0x01, 90, 4820, 0, 3314),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, 4820, 0, 3314, 0, 90, 0, 0x000A0000, bhvDoorWarp),
		OBJECT(MODEL_RED_COIN, 95, 2994, 4120, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4078, 2994, 4120, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3075, 0, 3791, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5676, 0, -3059, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5691, 0, -3632, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3738, 0, 3733, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -772, 0, 3783, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 76, 345, -111, 0, 90, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 76, 0, -111, 0, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3061, 0, -3504, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 3701, 0, -3504, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -5525, 0, -3328, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -3436, 0, 3615, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -4622, 2994, 5503, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 4383, 308, 3319, 0, 0, 0, 0x01000000, bhvHiddenStar),
		OBJECT(MODEL_WOODEN_SIGNPOST, 3327, 2994, 4227, 0, 45, 0, 0x000F0000, bhvMessagePanel),
		OBJECT(MODEL_STAR, 5200, 3501, 3762, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3363, 0, -3504, 0, 0, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_RED_COIN, 3551, 0, -3731, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -4014, 2994, 5434, 0, 90, 0, 0x00020000, bhvWarpPipe),
		OBJECT(MODEL_YELLOW_COIN, 3061, 0, -3504, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3701, 0, -3504, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5525, 0, -3328, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3436, 0, 3615, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4622, 2994, 5503, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SPOOKY),
		SHOW_DIALOG(0x00, DIALOG_098),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, 4820, 0, 3314),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
