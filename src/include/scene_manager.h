#ifndef PONG_SCENE_MANAGER_H
#define PONG_SCENE_MANAGER_H
#include "dynamiclist.h"
#include "scene.h"

typedef struct SCENE_MANAGER_STRUCT
{
    int scene_index;
    dynamic_list_T* scenes;
} scene_manager_T;

scene_manager_T* init_scene_manager();

scene_T* get_current_scene_scene_manager(scene_manager_T* sm);

void append_scene_scene_manager(scene_manager_T* sm, scene_T* s);
#endif
