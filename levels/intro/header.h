#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_000414[];

// leveldata
extern u8 LLHLogo_Rainbow_ci8[];
extern u8 LLHLogo_Rainbow_ci8_pal_rgba16[];
extern u8 LLHLogo_LucyBodyTexture_ci4[];
extern u8 LLHLogo_LucyBodyTexture_ci4_pal_rgba16[];
extern Vtx LLHLogo_Logo_mesh_vtx_0[1439];
extern Gfx LLHLogo_Logo_mesh_tri_0[];
extern Vtx LLHLogo_Logo_mesh_vtx_1[377];
extern Gfx LLHLogo_Logo_mesh_tri_1[];
extern Gfx mat_LLHLogo_f3d_material_001[];
extern Gfx mat_revert_LLHLogo_f3d_material_001[];
extern Gfx mat_LLHLogo_f3d_material[];
extern Gfx mat_revert_LLHLogo_f3d_material[];
extern Gfx LLHLogo_Logo_mesh[];

extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

extern const GeoLayout intro_geo_error_screen[];
extern const LevelScript level_intro_entry_error_screen[];
extern Gfx *geo18_display_error_message(u32 run, UNUSED struct GraphNode *sp44, UNUSED u32 sp48);

#endif
