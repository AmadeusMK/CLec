#include <stdio.h>
#include "../util/util.h"
#include "lec38.h"

void lec38() {

  title_header( "38. 재귀함수" );

  int n = 10;
  printf( "%d! = %d\n", n, factorial( n ) );
}

int factorial( int n ) {
  if ( n == 1 ) return 1;
  return n * factorial( n - 1 );
}