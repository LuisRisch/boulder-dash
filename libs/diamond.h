#ifndef _DIAMONDH_
#define _DIAMONDH_

#include "utils.h"
#include "sprite.h"
#include "rockford.h"

typedef struct DIAMOND_STRUCT
{
  int x, y;
  int source_x;
  int source_y;
} DIAMOND_STRUCT;

void diamond_init(DIAMOND_STRUCT *diamond, int pos_x, int pos_y);

void diamond_update(
    DIAMOND_STRUCT *diamond,
    SPRITES_STRUCT *sprites,
    ROCKFORD_STRUCT *rockford,
    long int count);

void diamond_draw(DIAMOND_STRUCT *diamond, SPRITES_STRUCT *sprites);

#endif