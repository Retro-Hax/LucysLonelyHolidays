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
#include "levels/cotmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, cotmc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xE0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xE1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_COTMC, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_COTMC, 0x01, 0x02, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, -1956, 15, -2475, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, 889, -140, 1865, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLUE_COIN, 87, -140, 382, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -385, -140, 47, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 219, -140, 1354, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1048, -140, 1683, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -1203, -140, -645, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BLUE_COIN, -1203, -140, -645, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		MARIO_POS(0x01, -90, -711, 2329, 5558),
		OBJECT(MODEL_NONE, -711, 2329, 5558, 0, -90, 0, 0x000A0000, bhvSpinAirborneCircleWarp),
		OBJECT(MODEL_MR_BLIZZARD, 1806, 39, 599, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 2028, 39, -1068, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -2038, 39, -1011, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 217, -228, 29, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 556, -228, 1579, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -1326, -228, 11, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 1753, 39, 2077, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -267, -228, 1898, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 1430, 2362, -1944, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 754, 2362, -1944, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -841, 2362, -1944, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -1574, 2362, -1944, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 1244, 1254, -3155, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 1883, 673, -4370, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -1147, 1992, -2591, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, 1165, 1992, -2602, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_NONE, -10, 1992, -2719, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_RED_COIN, -1258, -140, 645, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 631, -140, 706, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 878, -140, -618, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_BLUE_COIN, 664, -140, 146, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_RED_COIN, -1956, 15, -2475, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -254, 48, 1937, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -95, 1200, -880, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -95, 1200, -880, 0, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1926, 39, 347, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1898, 39, 1656, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1755, 39, 1371, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1823, 39, -196, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1361, 39, 2602, 0, 120, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 642, 399, -4308, -35, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -1528, 673, -3511, 0, 90, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_NONE, -1528, 673, -4016, 0, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_1UP, -1528, 673, -4016, 0, 90, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_NONE, -97, 39, 2821, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -115, 1254, -3167, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -93, 1638, -881, 0, 0, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -17, 673, -3590, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1167, 673, -3182, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -349, 15, -4109, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 1736, 1137, -3967, 0, 0, 0, 0x01000000, bhvHiddenStar),
		OBJECT(MODEL_NONE, 1736, 673, -3967, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -1853, 39, 2638, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_RED_COIN, -843, 2038, 5242, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_MR_BLIZZARD_HIDDEN, -843, 2038, 5242, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_SNOWBALL, -349, 15, -4109, 0, 0, 0, 0x00000000, bhvSnowBall),
		OBJECT(MODEL_SNOWBALL, 1905, 673, -3114, 0, 0, 0, 0x00000000, bhvSnowBall),
		OBJECT(MODEL_SNOWBALL, 627, 1254, -3084, 0, 0, 0, 0x00000000, bhvSnowBall),
		OBJECT(MODEL_SNOWBALL, -17, 673, -3590, 0, 0, 0, 0x00000000, bhvSnowBall),
		OBJECT(MODEL_SNOWBALL, -1167, 673, -3182, 0, 0, 0, 0x00000000, bhvSnowBall),
		OBJECT(MODEL_NONE, 627, 1254, -3084, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 1905, 673, -3114, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -55, 2923, -1981, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -55, 2490, -1981, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -93, 246, -881, 0, 90, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -735, 15, -4292, 0, 90, 0, 0x00020000, bhvWarpPipe),
		OBJECT(MODEL_RED_COIN, -830, 15, -4133, 0, 90, 0, 0x00010000, bhvRedCoin),
		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, -711, 2329, 5558),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
