#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../util/util.h"
#include "lec51.h"

void lec51() {

  title_header( "51. 유용한 함수들" );

  //  문자/문자열 테스트
  // str_test();

  //  난수 발생 테스트
  // random_test();

  //  exit(0);
  exit_test();
}

void str_test() {

  /********************************************************************************/

  title_header( "문자 입/출력" );

  char ch;

  printf( "문자 입력(1글자) : " );
  ch = getchar();   //  1문자 입력

  putchar( ch );    //  문자 출력
  printf( "\n" );

  /********************************************************************************/

  title_header( "문자열 입/출력" );

  // char str[100];

  // printf( "문자열 입력(100글자) : " );

  // get_c( str );   //  여기서는 안되는듯...

  char str[] = "Hello, World!";
  puts( str );    //  printf( "%s", str );

  /********************************************************************************/

  title_header( "문자열(숫자) => 숫자 변환" );

  char num[] = "456";  //  문자열 "456" 을 
  int n;                //  숫자 456 으로 변환

  sscanf( num, "%d", &n );
  printf( "n = %d\n", n );

  /********************************************************************************/

  title_header( "숫자 => 문자열 변환" );

  char snum[100];

  sprintf( snum, "%d", n );  //  숫자 n 을 문자열 snum 에 출력( 변환 )

  printf( "snum = %s\n", snum );

  /********************************************************************************/
}

void random_test() {

  /*
    stdlib.h 와 time.h 가 필요 함
  */

  /********************************************************************************/

  title_header( "난수 발생" );

  //  Seed 설정
  srand( time( NULL ) );

  for ( int i = 1 ; i <= 10 ; i++ ) {
    // printf( "%d\n", rand() );   //  컴파일러에 따라 rand() 의 리턴 타입이 다름
    //   ex) 1 ~ 10까지
    printf( "%d\n", rand() % 10 + 1 );
  }
}

void exit_test() {

  title_header( "양수만 입력.." );

  int sum = 0;

  int n;

  for ( int i = 0 ; i < 5 ; i++ ) {

    scanf( "%d", &n );

    if ( n <= 0 ) {
      printf( "Error...\n" );
      exit(0);  //  프로그램을 종료함. stdlib.h 에 포함
    }

    sum += n;
  }

  printf( "sum = %d\n", sum );
}