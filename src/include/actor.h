#ifndef ACTOR_H
#define ACTOR_H
typedef struct ACTOR_STRUCT
{
    float x;
    float y;
    float z;
} actor_T;

actor_T* init_actor(float x, float y, float z);

void tick_actor(actor_T* actor);

void draw_actor(actor_T* actor);
#endif
