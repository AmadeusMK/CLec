#include <stdio.h>
#include "../util/util.h"
#include "lec45.h"

typedef struct { 
  int h, m, s;
  //  C 버전에 따라, 멤버 함수를 포함 할 수 있음...
  // int total_second() {
  //   return 3600 * h + 60 * m + s;
  // }
} Time;

void lec45() {

  title_header( "45. 구조체에 함수 집어넣기" );

  // calc_second();
  move_point();
}

//  Call by value
// int total_second( Time t ) {
//   return 3600 * t.h + 60 * t.m + t.s;
// }

//  Call by reference
int total_second( Time *t ) {
  return 3600 * t->h + 60 * t->m + t->s;
}

void calc_second() {

  Time t = { 11, 22, 33 };

  // printf( "total_second = %d\n", total_second( t  ) );  //  Call by value
  printf( "total_second = %d\n", total_second( &t ) );  //  Call by reference
  // printf( "total_second = %d\n", t.total_second() );    //  멤버 함수 사용
}

typedef struct { 
  int x, y;
  // void moveLeft()  { x--; }
  // void moveRight() { x++; }
  // void moveUp()    { y++; }
  // void moveDown()  { y--; }
} Point;

void move_point() {

  Point p = { 2, 3 };

  printf( "( %d, %d )\n", p.x, p.y );

  // p.moveRight();
  // p.moveDown();

  printf( "( %d, %d )\n", p.x, p.y );
}