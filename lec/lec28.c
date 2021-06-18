#include <stdio.h>
#include "../util/util.h"
#include "lec28.h"

void lec28() {

  title_header( "28. 배열과 포인터의 관계" );

  int a = 10;
  int *ptr = &a;  //  선언과 동시에 초기화

  title_header( "포인터 + 1" );

  printf( "ptr 의 값 : %p\n", ptr );
  //  ptr 이 int 값을 가리키는 포인터 임으로, int 크기(4byte)만큼 증가 함
  printf( "ptr + 1 의 값 : %p\n", ptr + 1 );

  title_header( "배열과 포인터" );

  int arr[10];  //  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int len = sizeof( arr ) / sizeof( int );
  for ( int i = 0 ; i < len ; i++ ) {
    arr[i] = i + 1;
  }

  //  배열은 메모리상에서도 실제로 연속되어져 있음...
  for ( int i = 0 ; i < len ; i++ ) {
    printf( "&arr[%d] = %p\n", i, &arr[i] );
  }

  //  arr = &arr[0]
  //  arr 은 배열의 시작을 가리키는 포인터
  //  즉, arr + i = &arr[i]
  printf( "arr 의 값 %p\n", arr );

  title_header( "포인터를 이용한 출력 1" );

  for ( int i = 0 ; i < len ; i++ ) {
    printf( "arr + %d = %d\n", i, *( arr + i ) );
  }

  title_header( "포인터를 이용한 출력 2" );

  //  ptr 포인터를 정의 하면서, arr 의 주소(&arr[0])를 초기값으로 설정
  //  ptr + i = arr + i = &arr[i]
  for ( int *ptr = arr ; ptr < arr + len ; ptr++ ) {
    printf( "*ptr = %d\n", *ptr );
  }

  title_header( "포인터를 이용한 출력 3" );

  //int *ptr = arr;
  ptr = arr;  //  위에서 ptr 선언 되어 있어서...

  /*
    arr[i] = *( arr + i ) = *( ptr + i ) = ptr[i]
    i[ptr] => 실행시 *( i + ptr ) = *( ptr + i ) 로 변경되서 동작함으로, 가능한 표현
  */

  for ( int i = 0 ; i < len ; i++ ) {
    printf( "%d[ptr] = %d\n", i, i[ptr] );
  }

}