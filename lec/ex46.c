#include <stdio.h>
#include "../util/util.h"
#include "ex46.h"

typedef int PointArr[2];     //  int p[2] = { 3, 4 };
typedef PointArr *PointPtr;  //  Point **pp = &p;

void ex46() {

  title_header( "46. 종합문제" );

  // exec1();
  exec2();

}

void exec1() {

  PointArr p = { 3, 4 };
  PointPtr pp = &p;

  //  **pp <= *(*pp) <= p
  printf( "%d %d %d\n", **pp, (*pp)[0], (*pp)[1] );
}

typedef struct { 
  int x, y;
  // void pSwap() {
  //   int tmp = x;
  //   x = y;
  //   y = tmp;
  // }
} Point;

void pSwap( Point *p ) {
  int tmp = p->x;
  p->x = p->y;
  p->y = tmp;
}

void exec2() {

  Point p = { 3, 4 };

  pSwap( &p );
  // p.pSwap();

  printf( "( %d, %d )\n", p.x, p.y );
}
