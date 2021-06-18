#include <stdio.h>
#include "../util/util.h"
#include "lec41.h"

void lec41() {

  title_header( "41. typedef" );

  typedef int Int32;  //  자료형 선언

  Int32 n = 10;       //  자료형 사용

  printf( "n = %d\n", n );
  printf( "sizeof(n) = %ld\n", sizeof( n ) );   //  long sizeof()

  title_header( "ex) 좌표 형식" );

  typedef int Pair[2];      //  자료형 선언

  Pair point = { 3, 4 };    //  자료형 사용

  printf( "point = ( %d, %d )\n", point[0], point[1] );

  title_header( "ex) 문자열" );

  typedef char *String;

  String name = "AmadeusMK";

  printf( "이름 : %s\n", name );

}