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
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(script_func_global_1), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x31, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x30, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, 6938, 214, -932, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -4056, -1721, -4502, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BULLY, 4544, -1819, 405, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 4145, -1819, -892, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 4066, -1819, -2973, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 5761, -1819, -3265, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 5310, -840, -557, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 6365, -732, -2581, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -2367, -1721, -4574, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -3326, -1001, 1867, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -3064, -1001, 2516, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -4374, -1721, -4375, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -2530, -1001, 1867, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -1356, 5053, 4067, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -1293, -1001, 1867, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -1031, -1001, 2516, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_EXCLAMATION_BOX, -3000, -1416, -4502, 0, 0, 0, 0x00030000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 5117, -1364, 537, 0, 0, 0, 0x00030000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -3696, -638, 1742, 0, 0, 0, 0x00030000, bhvExclamationBox),
		OBJECT(MODEL_GOOMBA, -47, -191, 4417, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3763, -1001, 2452, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -530, 1596, 3201, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2187, -1001, 2615, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -665, 4677, 3281, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -163, -1001, 2001, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1305, -472, 3936, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1530, -1001, 1971, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -4119, -1606, 689, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -2615, -1606, 689, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -2635, -1606, -1062, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -4175, -1606, -1062, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -2637, -1606, -2430, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -4120, -1606, -2407, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -3380, -1606, -3293, 90, 0, 0, 0x00040000, bhvFlamethrower),
		OBJECT(MODEL_NONE, -4119, -1920, 689, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2635, -1920, -1062, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4175, -1920, -1062, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2637, -1920, -2430, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4120, -1920, -2407, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3380, -1920, -3293, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2615, -1920, 689, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -7475, -1920, -8145, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1115, -1920, 6985, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5723, -1920, 7745, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6498, -1920, 6876, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4056, -1721, -4502, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6222, -1920, -7559, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6932, 214, -924, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, -2615, -1213, 689, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4119, -1213, 689, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2635, -1213, -1062, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4175, -1213, -1062, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2637, -1213, -2430, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4120, -1213, -2407, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -3380, -1213, -3293, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4056, -1721, -4502, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		MARIO_POS(0x01, 0, -3397, -1030, -4497),
		OBJECT(MODEL_NONE, -3397, -1030, -4497, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PIRANHA_PLANT, 6424, -732, -84, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -4630, -1001, 2264, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -671, -1001, 2857, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_RED_COIN, 7060, -1819, -1951, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 7435, -1819, -1358, 0, 15, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 7316, -1819, -127, 0, -15, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4919, -1539, -2662, -15, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4960, -1151, -1527, -20, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4074, -1819, -1763, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4344, -1819, 99, 0, 45, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6976, -1819, 1107, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6279, -732, -2027, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_RED_COIN, 5743, -1819, -1268, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -7475, -1920, -8145, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1115, -1920, 6985, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5723, -1920, 7745, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -6498, -1920, 6876, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6222, -1920, -7559, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3471, -1208, 1209, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 5743, -1819, -2494, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6932, 556, -924, 0, 0, 0, 0x00020000, bhvHiddenStar),
		OBJECT(MODEL_NONE, 6891, -1819, 2057, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -3377, -1920, -5835, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -120, 2056, 4515, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 6745, -732, -1967, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -825, 5882, 5351, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 6938, -298, -932, 0, 0, 0, 0x00010000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 6910, -739, -847, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_YELLOW_COIN, 6891, -1819, 2057, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6751, -732, -1970, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3377, -1920, -5835, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -3377, -1920, -5835, 0, 0, 0, 0x000A0000, bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -120, 2056, 4515, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 6938, -739, -932, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_CUTSCENE_LAKITU),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3397, -1030, -4497),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
