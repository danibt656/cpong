#include "include/scene.h"
#include "include/actor.h"
#include "include/dynamiclist.h"
#include <stdlib.h>


scene_T* init_scene()
{
    scene_T* s = calloc(1, sizeof(struct SCENE_STRUCT));
    s->actors = init_dynamic_list(sizeof(struct ACTOR_STRUCT));

    return s;
}

void tick_scene(scene_T* scene)
{
    for(int i=0; i<scene->actors->size; i++)
    {
        tick_actor((actor_T*)scene->actors->items[i]);
    }
}

void draw_scene(scene_T* scene)
{
    for(int i=0; i<scene->actors->size; i++)
    {
        draw_actor((actor_T*)scene->actors->items[i]);
    }
}
