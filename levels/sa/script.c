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
#include "levels/sa/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sa_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bidw_skybox_mio0SegmentRomStart, _bidw_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sa_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xC0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x00, LEVEL_SA, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, 7019, 1709, -1284, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, 6298, 1709, 3298, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -4505, 2839, 934, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -2732, 2833, -108, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -2679, 2835, -2248, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -4253, 2832, -3362, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -5509, 2801, -656, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLUE_COIN, 6322, 258, 4563, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7080, 258, 4140, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7565, 258, 2829, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7976, 258, 1681, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 8332, 258, 661, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 8157, 258, -914, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7594, 258, -2228, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 5639, 990, 3242, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, -4006, 2205, -787, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2717, 2199, -108, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2679, 2201, -2248, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4253, 2198, -3362, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5543, 2205, -656, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_HEART, -4006, 2318, -787, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 6001, 1236, 890, 0, 90, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_BREAKABLE_BOX, 376, 1105, 754, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_NONE, 1863, 1403, 876, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5859, 1400, 3388, 0, 0, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 5422, 1400, 3139, 0, 0, 0, 0x01000000, bhvHiddenStar),
		MARIO_POS(0x01, 90, 6001, 1504, 890),
		OBJECT(MODEL_NONE, 6001, 1504, 890, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 6001, 1139, 890, 0, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4485, 2205, 917, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_RED_COIN, 1945, 751, -1277, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 115, 454, 1708, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1335, 454, 1670, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2212, 454, 1441, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1450, 454, -3575, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2699, 454, -2983, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1884, 454, 215, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 857, 454, 274, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 6741, 393, 4416, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 7420, 393, 3388, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 7794, 393, 2245, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 8163, 393, 1143, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 8220, 393, -145, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 1863, 1763, 876, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_PURPLE_SWITCH, -8681, 692, 35, 0, 0, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_BREAKABLE_BOX, -176, 1105, 593, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 934, 1105, 869, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT_WITH_ACTS(MODEL_CASTLE_GROUNDS_WARP_PIPE, -4006, 2205, -787, 0, 0, 0, 0x00000000, bhvWarpPipe, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_YELLOW_COIN, 8163, 393, 1143, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6741, 393, 4416, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7420, 393, 3388, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7794, 393, 2245, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 8220, 393, -145, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7898, 393, -1563, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(sa_area_1_collision),
		MACRO_OBJECTS(sa_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_BOSS_KOOPA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, 6001, 1504, 890),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
