#include <stdio.h>
#include "../util/util.h"
#include "lec47.h"

//  Macro - 헤더 파일에 선언 하면 됨
// #define PI 3.14159    //  '=' 과 세미콜론(;) 붙이지 않음

//  상수 - 헤더 파일에 선언이 안되는듯...
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAYING  = 1;
const int GAMESTATE_PAUSED   = 2;
const int GAMESTATE_GAMEOVER = 3;

//  Enum - 헤더 파일에 선언이 안되는듯...
//  포함하는 상수의 자료형을 int 로 간주 함
enum EGameState {
  E_GAMESTATE_MAINMENU,   //  0
  E_GAMESTATE_PLAYING ,   //  1
  E_GAMESTATE_PAUSED  ,   //  2
  E_GAMESTATE_GAMEOVER    //  3
};

void lec47() {

  title_header( "47. 상수 만들기" );

  print_macro();

  print_const( GAMESTATE_MAINMENU );

  print_enum( E_GAMESTATE_GAMEOVER );
}

void print_macro() {

  title_header( "macro로 정의한 변수 출력" );

  printf( "PI = %f\n", PI );
}

void print_const( int gamestate ) {

  title_header( "const 사용" );

  switch( gamestate ) {
    case GAMESTATE_MAINMENU :
      printf( "Main Menu\n" );
      break;
    case GAMESTATE_PLAYING :
      printf( "Game Playing~!\n" );
      break;
    case GAMESTATE_PAUSED :
      printf( "Game Paused...\n" );
      break;
    case GAMESTATE_GAMEOVER :
      printf( "Game Over...!\n" );
      break;
    default:
      break;
  }
}

void print_enum( int e_gamestate ) {

  title_header( "enum 사용" );

  switch( e_gamestate ) {
    case E_GAMESTATE_MAINMENU :
      printf( "Main Menu\n" );
      break;
    case E_GAMESTATE_PLAYING :
      printf( "Game Playing~!\n" );
      break;
    case E_GAMESTATE_PAUSED :
      printf( "Game Paused...\n" );
      break;
    case E_GAMESTATE_GAMEOVER :
      printf( "Game Over...!\n" );
      break;
    default:
      break;
  }
}