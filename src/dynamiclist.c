#include "include/dynamiclist.h"
#include <stdlib.h>
#include <stdio.h>


dynamic_list_T* init_dynamic_list(size_t item_size)
{
    dynamic_list_T* list = calloc(1, sizeof(struct DYNAMIC_LIST_STRUCT));
    list->size= 0;
    list->item_size = item_size;
    list->items = (void*) 0;

    return list;
}

void append_dynamic_list(dynamic_list_T* dlist, void* item)
{
    dlist->size += 1;

    if(dlist->items == (void*) 0)
        dlist->items = calloc(dlist->size, dlist->item_size);
    else
        dlist->items = realloc(dlist->items, dlist->size * dlist->item_size);

    dlist->items[dlist->size-1] = item;
}

void free_dynamic_list(dynamic_list_T* dlist)
{
    if(dlist == NULL)
        return;
    free(dlist->items);
    free(dlist);
}
