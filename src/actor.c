#include "include/actor.h"
#include <stdio.h>
#include <stdlib.h>


actor_T* init_actor(float x, float y, float z)
{
    actor_T* actor = calloc(1, sizeof(struct ACTOR_STRUCT));
    actor->x = x;
    actor->y = y;
    actor->z = z;

    return actor;
}

void tick_actor(actor_T* actor)
{
    printf("Tick actor!\n"); 
}

void draw_actor(actor_T* actor)
{
    printf("Draw actor!\n");
}
