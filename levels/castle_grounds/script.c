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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group10_mio0SegmentRomStart, _group10_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1F, LEVEL_CASTLE_GROUNDS, 0x01, 0x1F, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x00, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BITFS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x10, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_SA, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_WMOTR, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_COTMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0F, LEVEL_CASTLE_GROUNDS, 0x01, 0x1E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1E, LEVEL_CASTLE_GROUNDS, 0x01, 0x0F, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x40, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x41, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x30, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x31, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_TOTWC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xAF, LEVEL_CASTLE_GROUNDS, 0x01, 0xAB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xAB, LEVEL_CASTLE_GROUNDS, 0x01, 0xAF, WARP_NO_CHECKPOINT),
		WARP_NODE(0xC0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xC1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2528, -2319, 2501, 180, 0, 0, 0x00410000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, -2476, -2302, 2489, -90, 0, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, -2528, -2319, 2501, 180, 0, 0, 0x00400000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, -1396, -1983, -1357, 0, 0, 0, 0x00000000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -1816, -1693, -1637, 0, 0, 0, 0x00110000, bhvDeathWarp),
		OBJECT(MODEL_NONE, -1816, -1693, -1637, 0, -180, 0, 0x00100000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1692, -1983, -1444, 0, 0, 0, 0x001E0000, bhvMessagePanel),
		OBJECT(MODEL_NONE, -1512, 708, 2510, 0, -180, 0, 0x00310000, bhvDeathWarp),
		OBJECT(MODEL_NONE, -889, 300, 2474, 0, 0, 0, 0x00030000, bhvWarp),
		OBJECT(MODEL_NONE, -1512, 708, 2510, 0, 0, 0, 0x00300000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_1UP, -4148, 2420, 1875, 0, 50, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -2386, -2327, 2765, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -4815, -1393, -25, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, -1403, -1018, -1740, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_NONE, -4620, 1899, 1224, 0, 0, 0, 0x00E10000, bhvDeathWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -4620, 1568, 1509, 0, 0, 0, 0x000E0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -4620, 1951, 1224, 0, 0, 0, 0x00E00000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, 145, 1716, 3112, 0, 0, 0, 0x000B0000, bhvFadingWarp),
		OBJECT(MODEL_BOBOMB_BUDDY, -323, 321, 2500, 0, -180, 0, 0x00000000, bhvHeaveHo),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, -4022, -1805, -4478, 0, 32, 0, 0x000D0000, bhvDoorWarp),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, -3903, -1805, -4552, 0, -148, 0, 0x000D0000, bhvDoorWarp),
		MARIO_POS(0x01, 0, -2051, -2119, 1),
		OBJECT(MODEL_NONE, -2051, -1685, 1, 0, 0, 0, 0x00F10000, bhvDeathWarp),
		OBJECT(MODEL_NONE, -2051, -2109, 1, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -2051, -2109, 1, 0, 0, 0, 0x001F0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 941, -2278, 88, 0, 90, 0, 0x00210000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, 1985, -2846, 932, 0, -180, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 946, -2272, 101, 0, 90, 0, 0x00200000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_YOSHI, -7254, -1805, -6416, 0, -180, 0, 0x00000000, bhvYoshi),
		OBJECT(MODEL_STAR, -3796, 37, -4293, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, -5545, -683, 174, 0, 0, 0, 0x00010000, bhvStar),
		OBJECT(MODEL_NONE, -4526, -2008, -17, 90, -90, 0, 0x00C10000, bhvLaunchDeathWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -4526, -2008, -17, 0, -90, 0, 0x000C0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -4526, -2008, -17, 90, -90, 0, 0x00C00000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -3988, -191, -4578, 0, 0, 0, 0x00AB0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -7275, -1340, -6301, 0, -180, 0, 0x00AF0000, bhvWarp),
		OBJECT(MODEL_NONE, -608, 50, 2046, -62, 0, 0, 0x001E0000, bhvWarp),
		OBJECT(MODEL_NONE, -730, -1562, 1192, 62, -180, 0, 0x000F0000, bhvWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_CUTSCENE_INTRO),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -2051, -2119, 1),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
