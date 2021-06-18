#include <stdio.h>
#include "../util/util.h"
#include "lec29.h"

/*
  int arr[];
  int *ptr = arr;

    1. arr     == &arr[0]
    2. *arr    == arr[0]
    3. arr + 1 == arr 에 sizeof(*arr) 을 더한 값

  arr 은 ptr 로 대입 가능

    1. ptr     == &ptr[0]
    2. *ptr    == ptr[0]
    3. ptr + 1 == ptr 에 sizeof(*ptr) 을 더한 값
*/
void lec29() {

  title_header( "29. 배열 가리키기(배열 포인터)" );

  /*
    arr[i] = *( arr + i ) = *( ptr + i ) = ptr[i]
    i[ptr] => 실행시 *( i + ptr ) = *( ptr + i ) 로 변경되서 동작함으로, 가능한 표현

  */
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  int len = sizeof( arr ) / sizeof( int );

  title_header( "배열의 주소값" );

  printf( "arr = %p\n", arr );
  printf( "arr + 1 = %p\n", arr + 1 );    //  +4  <-   

  printf( "&arr = %p\n",& arr );
  printf( "&arr + 1 = %p\n", &arr + 1 );  //  +40 <-  arr 전체 size 를 더한 값

  title_header( "배열 포인터 사용" );

  //  길이 len 인 int 형 배열을 가리키는 포인터를 선언 ( 배열 포인터 )
  // int ( *ptr_arr )[len] = &arr;
  int ( *ptr_arr )[len];
  ptr_arr = &arr;

  for ( int i = 0 ; i < len ; i++ ) {
    printf( "( *ptr_arr )[%d] = %d\n", i, ( *ptr_arr )[i] );
  }

}