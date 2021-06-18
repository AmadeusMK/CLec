#include <stdio.h>
#include "../util/util.h"
#include "lec30.h"

void lec30() {

  title_header( "30. 2차원 배열과 배열 포인터" );


  int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

  int rows = sizeof( arr ) / sizeof( arr[0] );
  int cols = sizeof( arr[0] ) / sizeof( int );

  printf( "row 의 길이 : %d\n", rows );
  printf( "col 의 길이 : %d\n", cols );

  printf( "%ld\n", sizeof( arr ) );        //  배열의 전체 크기
  printf( "%ld\n", sizeof( arr[0] ) );     //  row 의 크기
  printf( "%ld\n", sizeof( arr[0][0] ) );  //  col 의 크기. 각 항목의 크기

  //  동일한 결과 출력
  printf( "%p\n", &arr );       //  
  printf( "%p\n", &arr[0] );    //  
  printf( "%p\n", &arr[0][0] ); //  

  title_header( "배열 포인터 1" );

  //  ptr == arr / ptr == &arr[0] / 
  // int ( *ptr )[len] = &arr;
  // int ( *ptr )[len];
  // ptr = &arr;
  //  2차원 배열의 1개 행을 가리키는 배열 포인터 생성
  //  => 배열 포인터가 2차원 배열의 역할을 할 수 있음
  int ( *ptr )[cols] = arr;  //  arr == &arr[0]

  /*
    1. ptr[i]    == arr[i]
    2. ptr[i][j] == arr[i][j]
    3. ptr       == arr
  */
  for ( int r = 0 ; r < rows ; r++ ) {
    for ( int c = 0 ; c < cols ; c++ ) {
      printf( "%d ", ptr[r][c] );
    }
    printf( "\n" );
  }

  title_header( "배열 포인터 2" );

  //  *row 는 하나의 배열(1차원)을 의미함
  //  col 은 *row, 즉 &(*row)[0] 
  for ( int ( *row )[cols] = arr ; row < arr + rows ; row++ ) {
    for ( int *col = *row ; col < *row + cols ; col++ ) {
      printf( "%d ", *col );
    }
    printf( "\n" );
  }

}