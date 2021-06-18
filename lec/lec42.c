#include <stdio.h>
#include "../util/util.h"
#include "lec42.h"

void lec42() {

  title_header( "42. 구조체 만들기" );

  struct_def1();
  struct_def2();
  // struct_def3();    //  가능한 방법이지만, 컴파일시 오류 발생... 

  //  일반적으로 전역 변수로 선언해서 사용
  title_header( "전역변수로 선언한 구조체 사용" );

  Point p;

  p.x = 3;
  p.y = 4;

  printf( "p.x = %d / p.y = %d\n", p.x, p.y );
  printf( "sizeof( p ) = %ld\n", sizeof( p ) );

}

void struct_def1() {

  title_header( "typedef 를 사용한 선언" );

  //  구조체 선언
  typedef struct { 
    int x;
    int y;
  } Point;    //  구조체 타입

  Point p;

  p.x = 3;
  p.y = 4;

  printf( "p.x = %d / p.y = %d\n", p.x, p.y );
}

void struct_def2() {

  title_header( "struct 를 직접 사용한 변수 선언" );

  //  구조체 변수 선언
  struct { 
    int x;
    int y;
  } p;

  p.x = 3;
  p.y = 4;

  printf( "p.x = %d / p.y = %d\n", p.x, p.y );
}

// void struct_def3() {

//   title_header( "struct 만 사용한 구조체 선언" );

//   //  구조체 선언
//   struct Point { //  가능한 방법이지만, 컴파일시 오류 발생... 
//     int x;
//     int y;
//   };

//   Point p;

//   p.x = 3;
//   p.y = 4;

//   printf( "p.x = %d / p.y = %d\n", p.x, p.y );
// }

