#include "src/game/envfx_snow.h"

const GeoLayout jrb_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -822, 6076, 5327, jrb_dl_Circle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -47, 4731, 4429, jrb_dl_Circle_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1439, 5668, 4006, jrb_dl_Circle_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -681, 5292, 3231, jrb_dl_Circle_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -47, 2755, 4429, jrb_dl_Circle_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1375, 2475, 4006, jrb_dl_Circle_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -617, 1903, 3231, jrb_dl_Circle_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -47, 3927, 4429, jrb_dl_Circle_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1439, 4364, 4006, jrb_dl_Circle_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -681, 3311, 3231, jrb_dl_Circle_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -47, -69, 4429, jrb_dl_Circle_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1375, -350, 4006, jrb_dl_Circle_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -47, 1233, 4429, jrb_dl_Circle_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1375, 952, 4006, jrb_dl_Circle_013_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -617, 445, 3231, jrb_dl_Circle_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4265, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4119, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3960, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4265, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4119, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3960, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2761, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2615, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2456, -1416, 808, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4265, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4119, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3960, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2761, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2615, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2456, -1416, 689, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2761, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2615, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2456, -1416, 541, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2781, -1416, -833, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2635, -1416, -833, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2476, -1416, -833, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2781, -1416, -952, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2635, -1416, -952, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2476, -1416, -952, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2781, -1416, -1100, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2635, -1416, -1100, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2476, -1416, -1100, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4321, -1416, -942, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4175, -1416, -942, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4016, -1416, -942, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4321, -1416, -1062, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4175, -1416, -1062, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4016, -1416, -1062, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4321, -1416, -1210, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4175, -1416, -1210, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4016, -1416, -1210, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2783, -1416, -2311, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2637, -1416, -2311, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2478, -1416, -2311, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2783, -1416, -2430, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2637, -1416, -2430, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2478, -1416, -2430, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2783, -1416, -2579, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2637, -1416, -2579, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2478, -1416, -2579, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4266, -1416, -2288, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4120, -1416, -2288, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3961, -1416, -2288, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4266, -1416, -2407, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4120, -1416, -2407, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3961, -1416, -2407, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4266, -1416, -2555, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -4120, -1416, -2555, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3961, -1416, -2555, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3526, -1416, -3174, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3380, -1416, -3174, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3221, -1416, -3174, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3526, -1416, -3293, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3380, -1416, -3293, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3221, -1416, -3293, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3526, -1416, -3441, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3380, -1416, -3441, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3221, -1416, -3441, 90, 0, 0),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, -180, 0, 0, jrb_dl_Level_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2632, -1763, -2446, jrb_dl_PlatformHiddenFire_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4125, -1763, -2428, jrb_dl_PlatformHiddenFire_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3372, -1763, -3308, jrb_dl_PlatformHiddenFire_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4165, -1763, -1071, jrb_dl_PlatformHiddenFire_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4110, -1763, 671, jrb_dl_PlatformHiddenFire_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2643, -1763, -961, jrb_dl_PlatformHiddenFire_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2607, -1763, 653, jrb_dl_PlatformHiddenFire_006_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, -180, 0, 0, jrb_dl_Walls_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jrb_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, jrb_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_LAVA_BUBBLES, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, jrb_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};