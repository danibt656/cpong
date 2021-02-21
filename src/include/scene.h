#ifndef SCENE_H
#define SCENE_H
#include "dynamiclist.h"

typedef struct SCENE_STRUCT
{
    dynamic_list_T* actors;    
} scene_T;

scene_T* init_scene();

void tick_scene(scene_T* scene);

void draw_scene(scene_T* scene);
#endif
