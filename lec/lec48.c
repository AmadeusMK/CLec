#include <stdio.h>
#include "../util/util.h"
#include "lec48.h"

void lec48() {

  title_header( "48. 매크로 자세히 알아보기" );

  // macro_square();
  // macro_max();
  macro_for();
}

//  제곱
void macro_square() {

  title_header( "제곱 계산" );

  int a;

  printf( "숫자 : " );
  scanf( "%d", &a );

  printf( "%d 제곱 : %d\n", a, SQUARE(a) );

  //  문제가 있음...
  //  매크로는 단순 치환해서 처리...

  //  ex) 100 / a * a = 100 <= 순서대로 계산이 됨으로...
  printf( "100 / SQUARE(%d) = %d\n", a, 100 / SQUARE(a) );
  // printf( "100 / ( SQUARE(%d) ) = %d\n", a, 100 / ( SQUARE(a) ) );

  //  ex) a - 1 * a - 1 = -1
  printf( "SQUARE( %d - 1 ) = %d\n", a, SQUARE( a - 1 ) );
}

void macro_max() {

  title_header( "최대값" );

  int a, b;

  printf( "숫자 두개 : " );
  scanf( "%d %d", &a, &b );

  printf( "최대값 : %d\n", MAX( a, b ) );

}

void macro_for() {

  FOR( i, 1, 10 ) {
    printf( "%d\n", i );
  }

}