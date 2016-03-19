#ifndef BULLET_H
#define BULLET_H

#include "enemies.h"
#include "level.h"

// constants /////////////////////////////////////////////////////////////////

#define BULLET_MAX        6
#define BULLET_WIDTH      2
#define BULLET_HEIGHT     2
#define BULLET_DIRECTIONS 8

const char BulletXVelocities[] = {
  0,
  -2,
  -3,
  -2,
  0,
  2,
  3,
  2,
};

// structures ////////////////////////////////////////////////////////////////

struct Bullet {
  int x;
  int y;
  int vx;
  int vy;
  byte active;
};

// globals ///////////////////////////////////////////////////////////////////

extern Bullet bullets[BULLET_MAX];

// method prototypes /////////////////////////////////////////////////////////

void setBullet(Bullet& obj, int x, int y, int vx, int vy);
void addBullet(int x, int y, byte direction, int vx, int vy);
void updateBullet(Bullet& obj);
void updateBullets();
void drawBullets();
void clearBullets();

#endif