#include <stdio.h>
#include "../util/util.h"
#include "lec31.h"

//  31. 포인터 배열 : 포인터들의 배열. 각 포인터는 변수 또는 배열을 가리킴. ex) int *ptr[5];
void lec31() {

  title_header( "31. 포인터 배열" );

  int *ptr[4];

  title_header( "포인터 배열 1" );

  int a = 10, b = 20, c = 30, d = 40;
  ptr[0] = &a, ptr[1] = &c, ptr[2] = &d, ptr[3] = &b;
  printf( "%d / %d / %d / %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3] );

  title_header( "포인터 배열 2" );

  int arr[4] = { 1, 2, 3, 4 };
  int len = sizeof( arr ) / sizeof( int );
  for ( int i = 0 ;  i < len ; i++ ) {
    ptr[i] = &arr[i];
  }
  for ( int i = 0 ;  i < len ; i++ ) {
    printf( "*ptr[%d] = %d\n", i, *ptr[i] );
  }

  title_header( "문자열 출력 1" );

  //  printf() 함수에서 %s 를 사용할 경우, char 배열을 순환하면서 출력

  char hello[] = "Hello"; // null 문자를 포함해서, 크기가 6 인 char형 배열
  printf( "%p\n", &hello );

  title_header( "문자열 출력 2" );

  char str[3][10] = { "Hello" , "World", "Doodle" };

  int strlen = sizeof( str ) / sizeof( str[0] );

  for ( int i = 0 ; i < strlen ; i++ ) {
    // printf( "%s\n", &str[i] );
    printf( "%s\n", &str[i][0] );
  }

  title_header( "포인터 배열을 이용한 문자열 출력" );

  char *p_str[ strlen ];

  for ( int i = 0 ; i < strlen ; i++ ) {
    p_str[i] = str[i];
  }

  for ( int i = 0 ; i < strlen ; i++ ) {
    printf( "%s\n", p_str[i] );
  }

}