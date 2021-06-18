#include <stdio.h>
#include "../util/util.h"
#include "lec50.h"

/*
  main() 함수가 끝나면 기본적으로는 
  open 한 파일을 close 해 주지만 
  동시에 열수 있는 파일 갯 수 가 한정되어 있음으로 
  파일 작업이 끝나는 즉시, 명시적으로 파일을 닫아 주도록 함
*/
void lec50() {

  title_header( "50. 파일 입출력" );

  // file_read();

  // file_write();

  file_read_string();
}

void file_read() {

  int n;

  FILE *in;   //  파일 포인터(스트림) 선언

  in = fopen( "input.txt", "r" ); //  파일에 대한 포인터(스트림) 반환

  //  파일이 존재 하지 않을 경우, NULL 반환
  // printf( "%d\n", in );   //  0
  printf( "%p\n", in );   //  (nil)

  if ( in != NULL ) {

    fscanf( in, "%d", &n );         //  스트림에서 내용 읽기

    printf( "%d\n", n );

    fclose( in );                   //  open 한 파일을 닫아줌. 
  }
}

void file_write() {

  int n = 67890;

  FILE *out;

  //  "w" 기존의 내용을 지우고 새로 저장
  //  "a" 기존의 내용에 내용 추가
  out = fopen( "optput.txt", "a" );

  fprintf( out, "%d\n", n );      //  파일에 쓰기

  fclose( out );                  //  open 한 파일을 닫아줌. 
}

void file_read_string() {

  FILE *in = fopen( "main.c", "r" );

  char ch;

  while( ! feof(in) ) {       //  파일의 끝부분이면 true
    fscanf( in, "%c", &ch );  //  1 문자씩 읽음
    printf( "%c", ch );       //  파일의 끝일 경우, 마지막 읽은 문자를 한번더 출력 하게 됨...
  }

  //  fscanf() 함수는 읽어들인 문자 갯수를 반환
  //  읽은 문자가 없을 경우 EOF(-1) 반환
  // while( fscanf( in, "%c", &ch ) != EOF ) {   //  1 문자씩 읽음.
  //   printf( "%c", ch );
  // }

  fclose( in );
}