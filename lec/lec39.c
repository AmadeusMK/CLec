#include <stdio.h>
#include "../util/util.h"
#include "lec39.h"

void lec39() {

  title_header( "39. 배열을 매개변수로 넘기기" );

  int arr[4] = { 1, 2, 3, 4 };
  int len = sizeof( arr ) / sizeof( int );
  print_array1( arr, len );
  call_type( arr, len );  //  배열의 값 변경 확인. Call by reference
  print_array1( arr, len );
  print_array2( arr, len );

  title_header( "2차원 배열을 매개변수로 넘기기" );

  int arr2[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
  int rows = sizeof( arr2 ) / sizeof( arr2[0] );
  // int cols = sizeof( arr2[0] ) / sizeof( int );
  print_array3( arr2, rows );
  print_array4( arr2, rows );

}

//  배열은 포인터로 전달
//  Call-by-reference 형태로 전달 됨
void call_type( int arr[], int len ) {
  for ( int i = 0 ; i < len ; i++ ) {
    arr[i] *= 2;
  }
}

//  배열의 크기를 알수 없음으로, 사이즈를 함께 전달 하거나, 
//  배열의 끝을 알리는(null 과 같은...) 코드를 함께 전달 해야 함.
void print_array1( int arr[], int len ) {

  for ( int i = 0 ; i < len ; i++ ) {
    printf( "%d ", arr[i] );
  }
  printf( "\n" );
}

void print_array2( int *arr, int len ) {

  for ( int i = 0 ; i < len ; i++ ) {
    printf( "%d ", arr[i] );
  }
  printf( "\n" );
}

//  2차원 배열 전달시, cols 에 해당하는 값은 입력 해줘야 함. 선언시에도 입력 함
void print_array3( int arr[][3] , int rows ) {
  int cols = sizeof( arr[0] ) / sizeof( int );
  for ( int r = 0 ; r < rows ; r++ ) {
    for ( int c = 0 ; c < cols ; c++ ) {
      printf( "%d ", arr[r][c] );
    }
    printf( "\n" );
  }
}

void print_array4( int ( *arr )[3] , int rows ) {
  int cols = sizeof( arr[0] ) / sizeof( int );
  for ( int r = 0 ; r < rows ; r++ ) {
    for ( int c = 0 ; c < cols ; c++ ) {
      printf( "%d ", arr[r][c] );
    }
    printf( "\n" );
  }
}

