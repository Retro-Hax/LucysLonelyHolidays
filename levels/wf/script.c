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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x21, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -4410, 3984, 89, 0, 0, 0, 0x00010000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -4480, 4696, 89, 0, 90, 0, 0x00020000, bhvWarp),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, 3466, 934, 3535, 0, 0, 0, 0x00030000, bhvBobombBuddy, ACT_1),
		OBJECT_WITH_ACTS(MODEL_NONE, 402, 2285, 3861, 0, 0, 0, 0x000B0000, bhvExclamationBox, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_BLUE_COIN, 2339, 5078, 519, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2411, 5738, 46, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1679, 6364, 19, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3187, 6342, -59, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_NONE, 3187, 6342, -59, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3142, 934, 3317, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 406, 1470, 3887, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2328, 2532, 3822, 90, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2340, 2571, 4863, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1611, 3549, 893, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3011, 3549, 893, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3011, 3549, -814, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1611, 3549, -764, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1679, 6364, 19, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, 578, 5078, -775, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4419, 5078, -803, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4327, 5078, 791, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 587, 5078, 800, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT_WITH_ACTS(MODEL_NONE, 1451, 1386, 5312, 0, 0, 0, 0x01000000, bhvHiddenStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_KING_BOBOMB, -1476, 4696, 69, 0, 0, 0, 0x00000000, bhvKingBobomb, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -1476, 4696, 69, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		MARIO_POS(0x01, 0, 2629, 4054, -2435),
		OBJECT(MODEL_NONE, 2629, 4054, -2435, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT_WITH_ACTS(MODEL_DL_CANNON_LID, 3141, 1117, 3323, 0, 0, 0, 0x00030000, bhvCannonClosed, ACT_1),
		OBJECT(MODEL_1UP, -4619, 3948, -92, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 2327, 5078, 879, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT_WITH_ACTS(MODEL_NONE, 3013, 1207, 6641, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLUE_COIN, 3013, 1207, 6641, 0, 0, 0, 0x00000000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLUE_COIN, 2269, 1207, 8964, 0, 0, 0, 0x00000000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLUE_COIN, -608, 1207, 9253, 0, 0, 0, 0x00000000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLUE_COIN, -2013, 1207, 8175, 0, 0, 0, 0x00000000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLUE_COIN, -106, 1207, 6673, 0, 0, 0, 0x00000000, bhvRedCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 2269, 1207, 8964, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -608, 1207, 9253, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -2013, 1207, 8175, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -106, 1207, 6673, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_STAR, -308, 235, 3929, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 1788, 934, 4380, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -2934, 4696, 105, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 1601, 3549, -2010, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 3792, 934, 4765, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 2841, 3549, 2396, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -2947, 3549, 2507, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 217, 3549, 2347, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -2578, 3549, -2375, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, -1900, 2132, 4228, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -975, 2137, 4282, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1590, 2134, 5010, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1005, 2136, 5254, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3160, 3292, 4335, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -3828, 3292, 4658, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, -4353, 3292, 5213, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4216, 3292, 4389, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3195, 3292, 5153, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, 5526, 981, -2548, 0, 0, 0, 0x00000000, bhvTreasureChests),
		OBJECT(MODEL_NONE, 5526, 598, 4858, 0, 0, 0, 0x00000000, bhvTreasureChests),
		OBJECT(MODEL_NONE, -5682, 598, 4866, 0, 0, 0, 0x00000000, bhvTreasureChests),
		OBJECT(MODEL_NONE, -5613, 981, -2601, 0, 0, 0, 0x00000000, bhvTreasureChests),
		OBJECT(MODEL_NONE, 5526, 981, -2548, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5526, 598, 4858, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5682, 598, 4866, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5613, 981, -2601, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3141, 934, 3323, 0, 0, 0, 0x00030000, bhvWarpPipe),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOT),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x21, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_WF, 0x02, 0x01, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, 1065, 598, -1602, 0, 0, 0, 0x00040000, bhvBobombBuddy),
		OBJECT(MODEL_NONE, -768, 598, -6716, 0, 0, 0, 0x00080000, bhvBobombBuddy),
		OBJECT(MODEL_NONE, -768, 598, -6425, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 780, 598, -6369, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_METAL_DOOR, 414, 598, -4458, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_METAL_DOOR, 412, 598, -4389, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_RED_COIN, 5487, 57, 3981, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 780, 598, -6369, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1039, 327, -2555, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -720, 327, -2762, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 106, 115, -55, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5533, 57, -1907, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5492, 57, -1878, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2, 57, 4018, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 57, 969, 4880, 0, 0, 0, 0x03000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, -47, -332, 5326, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 5225, -1035, -3148, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_NONE, 351, 710, 384, 0, 0, 0, 0x01000000, bhvTreasureChestsJrb),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -472, 598, -6437, 0, 0, 0, 0x000A0000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -166, 598, -1568, 0, -180, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 102, 115, 171, 0, 0, 0, 0x00020000, bhvWarpPipe),
		OBJECT(MODEL_NONE, 57, 598, 4880, 0, 0, 0, 0x00010000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 0, 598, -5384, 0, 0, 0, 0x00010000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 336, 598, -3581, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 460, 598, -1606, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 293, 327, -2613, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2880, 360, 4789, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2800, 360, 4789, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5481, 57, 2482, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5481, 57, 182, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5538, 57, 2482, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5538, 57, 182, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 12, 57, 2091, 0, 0, 0, 0x00000000, bhvCoinFormation),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_CUTSCENE_ENDING),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2629, 4054, -2435),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
