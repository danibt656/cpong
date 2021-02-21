#include <stdio.h>
#include <stdlib.h>
#include "include/dynamiclist.h"
#include "include/actor.h"
#include "include/scene_manager.h"
#include "include/scene_registry.h"
#include "include/graphics.h"


scene_manager_T* SCENE_MANAGER;


int main(int argc, char* argv[])
{
    printf("Pong game!\n");

    setup_graphics();

    SCENE_MANAGER = init_scene_manager();
    register_scenes(SCENE_MANAGER);

    return 0;
}
