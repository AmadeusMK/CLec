#include <stdio.h>
#include "../util/util.h"
#include "ex33.h"

void ex33() {

  title_header( "33. 배열과 포인터 종합문제 (2)" );

  int arr[3][3] = { 0 };  //  배열 선언 후 전체 0 으로 초기화

  title_header( "arr" );
  printf( "arr  : %p\n", arr  );
  printf( "&arr : %p\n", &arr );
  printf( "*arr : %p\n", *arr );

  title_header( "arr[0]" );
  printf( "arr[0]  : %p\n", arr[0]  );
  printf( "&arr[0] : %p\n", &arr[0] );
  printf( "*arr[0] : %d\n", *arr[0] );

  title_header( "arr[0][0]" );
  printf( "arr[0][0]  : %d\n", arr[0][0]  );
  printf( "&arr[0][0] : %p\n", &arr[0][0] );
  // printf( "*arr[0][0] : %d\n", *arr[0][0] );  //  오류

  title_header( "arr + 1" );
  printf( "arr + 1  : %p\n", arr + 1  );        //  arr[1]    주소값
  printf( "&arr + 1 : %p\n", &arr + 1 );        //  arr 배열의 다음 주소값

  title_header( "arr[0] + 1" );
  printf( "arr[0] + 1  : %p\n", arr[0] + 1  );  //  arr[0][1] 주소값
  printf( "&arr[0] + 1 : %p\n", &arr[0] + 1 );  //  arr[1]    주소값

}