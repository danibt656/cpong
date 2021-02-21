#ifndef PONG_DYNAMIC_LIST_H
#define PONG_DYNAMIC_LIST_H
#include <stdlib.h>

typedef struct DYNAMIC_LIST_STRUCT
{
    size_t size;
    size_t item_size;
    void** items;
} dynamic_list_T;

dynamic_list_T* init_dynamic_list(size_t item_size);

void append_dynamic_list(dynamic_list_T* dlist, void* item);

void free_dynamic_list(dynamic_list_T* dlist);
#endif
