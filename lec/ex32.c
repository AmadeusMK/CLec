#include <stdio.h>
#include "../util/util.h"
#include "ex32.h"

void ex32() {

  title_header( "32. 배열과 포인터 종합문제 (1)" );

  ex32_1();

  ex32_4();

}

/*  32.1.
  100개 이하의 정수를 입력받아
  첫 중에 짝수 번째 숫자들을 순서대로 출력 하고, 
  다음 중에 홀수 번째 숫자들을 순서대로 출력

  입력 예
  7               <=  입력받는 숫자의 갯수
  3 1 4 1 5 9 2   <=  숫자 7개 입력

  출력 예
  1 1 9
  3 4 5 2
*/
void ex32_1() {

  title_header( "문제 1" );

  int len = 0;
  printf( "입력할 숫자 갯수 : " );
  scanf( "%d", &len );

  int arr[len];
  printf( "%d 개의 숫자를 입력 하세요.\n", len );
  for ( int i = 0 ; i < len ; i++ ) {
    scanf( "%d", &arr[i] );
  }

  title_header( "배열 출력" );
  for ( int i = 1 ; i < len ; i += 2 ) {  //  짝수번째
    printf( "%d ", arr[i] );
  }
  printf( "\n" );
  for ( int i = 0 ; i < len ; i += 2 ) {  //  홀수번째
    printf( "%d ", arr[i] );
  }
  printf( "\n" );

  // title_header( "포인터로 출력" );

  // int *ptr = arr;

  // for ( int i = 1 ; i < len ; i += 2 ) {  //  짝수번째
  //   printf( "%d ", *( ptr + i ) );
  // }
  // printf( "\n" );
  // for ( int i = 0 ; i < len ; i += 2 ) {  //  홀수번째
  //   printf( "%d ", *( ptr + i ) );
  // }
  // printf( "\n" );

}

/*
  10 * 10 이하의 정수형 아차원 배열을 입력 받아
  그 배열의 각 행의 요소의 합을 출력

  입력 예
  3 4
  4 2 6 3
  7 9 3 4
  5 1 2 1

  출력 예
  15
  23
  9
*/
void ex32_4() {

  title_header( "문제 4" );

  int row = 0;
  int col = 0;
  printf( "row * col 갯수 : " );
  scanf( "%d %d", &row, &col );

  int arr[row][col];
  printf( "%d * %d 형태의 정수형 이차원 배열을 입력 하세요.\n", row, col );
  for ( int r = 0 ; r < row ; r++ ) {
    for ( int c = 0 ; c < col ; c++ ) {
      scanf( "%d", &arr[r][c] );
    }
  }

  title_header( "각 행의 합계 출력" );
  int sum = 0;
  for ( int r = 0 ; r < row ; r++ ) {
    sum = 0;
    for ( int c = 0 ; c < col ; c++ ) {
      sum += arr[r][c];
    }
    printf( "%d 행의 합 : %d\n", r + 1, sum );
  }

  title_header( "포인터로 각 행의 합계 출력" );

  int rows = sizeof( arr ) / sizeof( arr[0] );
  int cols = sizeof( arr[0] ) / sizeof( int );

  //  2차원 배열의 1개 행을 가리키는 배열 포인터 생성
  //  => 배열 포인터가 2차원 배열의 역할을 할 수 있음
  int ( *ptr )[cols] = arr;  //  arr == &arr[0]
  for ( int r = 0 ; r < rows ; r++ ) {
    for ( int c = 0 ; c < cols ; c++ ) {
      printf( "%d ", ptr[r][c] );
    }
    printf( "\n" );
  }

}

