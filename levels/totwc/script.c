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
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
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
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x40, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x41, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_TOTWC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, -14882, 991, 20, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -9442, 1618, 51, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, -13386, 991, 1529, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9070, 991, -2137, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -11997, -2022, -15, 90, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -11997, 30, -15, 90, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9239, -2022, -15, 90, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9239, 30, -15, 90, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_HEART, -6613, -2872, 30, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 3503, -2842, 30, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_NONE, 3503, -2842, 30, 90, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6613, -2872, 30, 90, 90, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -10606, 991, 1462, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -9442, 991, 51, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -11853, 991, 3012, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -12028, 991, -2511, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -13422, 991, -1572, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, -10596, 1613, -1429, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -13418, 1615, -1578, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -10606, 1630, 1462, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -13386, 1616, 1529, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -9447, 1617, 47, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_NONE, -15494, 1390, 22, 0, 0, 0, 0x00000000, bhvHiddenStar),
		MARIO_POS(0x01, 0, -14442, 1548, 21),
		OBJECT(MODEL_NONE, -14442, 1548, 21, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PIRANHA_PLANT, 6961, 1413, -23, 0, -180, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 11773, 1331, 276, 0, -180, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_NONE, 9895, 991, 2178, 0, -180, 0, 0x00010000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 6945, 991, -922, 0, -180, 0, 0x00010000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_RED_COIN, 11544, 1331, 53, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -11853, 1619, 3012, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 12466, 991, 11, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 8057, 991, -3091, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 9999, 991, -3036, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 9325, -3593, 22, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -12028, 1620, -2511, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -14442, 1548, 21, 0, 0, 0, 0x00020000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -13422, 1617, -1572, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -13382, 1616, 1532, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -10596, 1622, 1460, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -10596, 1613, -1429, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -9442, 1618, 51, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_RED_COIN, -12079, -3593, -25, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -10596, 991, -1429, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_STAR, 9046, 1196, -2637, 0, -180, 0, 0x00010000, bhvStar),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_POWERUP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, totwc_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x21, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_YELLOW_COIN, 8520, 2512, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 9108, 2525, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 13832, 1637, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 14107, 1637, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 14420, 1637, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 14695, 1650, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 19776, 2534, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 20386, 2525, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7932, 2512, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 20965, 2516, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, -3355, 1040, 0, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_NONE, -12703, 287, 0, 0, 90, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 18126, 1942, 0, 0, 0, 0, 0x00020000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, 22463, 1271, 0, 0, 0, 0, 0x00010000, bhvStar),
		TERRAIN(totwc_area_2_collision),
		MACRO_OBJECTS(totwc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_CUTSCENE_VICTORY),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -14442, 1548, 21),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
