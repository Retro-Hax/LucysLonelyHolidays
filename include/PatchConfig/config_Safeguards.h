//Safeguards! pls dont touch unless you know what you are doing! thx! :3
#ifdef FORCED_CAMERA_MODE
    #undef USE_COURSE_DEFAULT_MODE
    #define USE_COURSE_DEFAULT_MODE // Forced camera mode overwrites the default mode
#endif

#ifndef WATER_SURFACE_CAMERA_MODE
    #define WATER_SURFACE_CAMERA_MODE CAMERA_MODE_WATER_SURFACE
#endif

#ifndef DEEP_WATER_CAMERA_MODE
    #define DEEP_WATER_CAMERA_MODE CAMERA_MODE_BEHIND_MARIO
#endif

#ifndef FLYING_CAMERA_MODE
    #define FLYING_CAMERA_MODE CAMERA_MODE_BEHIND_MARIO
#endif