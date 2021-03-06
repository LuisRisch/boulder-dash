#ifndef _DIRTH_
#define _DIRTH_

#include "utils.h"
#include "sprite.h"
#include "rockford.h"

typedef struct DIRT_STRUCT
{
  int x, y;
  bool redraw;
} DIRT_STRUCT;

DIRT_STRUCT *allocate_array_dirt(int dirtCount);

void dirt_init(DIRT_STRUCT *dirt, int pos_x, int pos_y);

void dirt_update(
    DIRT_STRUCT *dirt,
    int *dirtCount,
    char map[MAP_HEIGHT][MAP_WIDTH]);

void dirt_draw(
    DIRT_STRUCT *dirt,
    int *dirtCount,
    SPRITES_STRUCT *sprites);

void dirt_free(DIRT_STRUCT *dirt);

#endif