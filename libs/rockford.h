#ifndef _ROCKFORDH_
#define _ROCKFORDH_

#include "utils.h"
#include "sprite.h"
#include "explosion.h"
#include "audio.h"

typedef struct ROCKFORD_STRUCT
{
    int x, y;
    int lives;
    int direction;
    int last_direction;
    int source_x;
    int source_y;
    int score;
    int quantity_of_diamonds;
    int started_time_easter_egg;
    bool won;
    bool lose;
    bool active;
    bool redraw;
    bool is_easter_egg_active;
} ROCKFORD_STRUCT;

ROCKFORD_STRUCT *allocate_rockford();

void rockford_init(
    ROCKFORD_STRUCT *rockford,
    int pos_x,
    int pos_y);

void rockford_update(
    ROCKFORD_STRUCT *rockford,
    char map[MAP_HEIGHT][MAP_WIDTH],
    EXPLOSION_STRUCT *explosion,
    AUDIO_STRUCT *audio,
    unsigned char key[ALLEGRO_KEY_MAX],
    SPRITES_STRUCT *sprites,
    long int count);

void rockford_draw(
    ROCKFORD_STRUCT *rockford,
    SPRITES_STRUCT *sprites);

void rockford_free(ROCKFORD_STRUCT *rockford);

#endif