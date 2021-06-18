#include <stdio.h>
#include "../util/util.h"
#include "lec49.h"

//  비트 연산           : AND(&) / OR(|) / XOR(^) / NOT(~)
//  비트 논리 연산      : 
//  시프트(shift) 연산  : << / >>

void lec49() {

  title_header( "49. 비트 연산" );

  char a = 12, b = 10;

  printf( "a & b = %d\n", a & b );
  printf( "a | b = %d\n", a | b );
  printf( "a ^ b = %d\n", a ^ b );
  printf( "~a    = %d\n", ~a    );

  printf( "a << 1 = %d\n", a << 1 );
  printf( "a << 3 = %d\n", a << 3 );
  printf( "a << 6 = %d\n", a << 6 );  //  
  printf( "sizeof( a << 6 ) = %ld\n", sizeof( a << 6 ) );  //  int 형으로 변환해서 계산 된듯...

  printf( "a >> 1 = %d\n", a >> 1 );
  printf( "a >> 3 = %d\n", a >> 3 );
  printf( "a >> 6 = %d\n", a >> 6 );
}

