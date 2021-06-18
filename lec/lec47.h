void lec47();

//  Macro - 헤더 파일에 선언 하면 됨
#define PI 3.14159    //  '=' 과 세미콜론(;) 붙이지 않음

// //  상수 - 헤더 파일에 선언이 안되는듯...
// const int GAMESTATE_MAINMENU = 0;
// const int GAMESTATE_PLAYING  = 1;
// const int GAMESTATE_PAUSED   = 2;
// const int GAMESTATE_GAMEOVER = 3;

// //  Enum - 헤더 파일에 선언이 안되는듯...
// //  포함하는 상수의 자료형을 int 로 간주 함
// enum EGameState {
//   E_GAMESTATE_MAINMENU,   //  0
//   E_GAMESTATE_PLAYING ,   //  1
//   E_GAMESTATE_PAUSED  ,   //  2
//   E_GAMESTATE_GAMEOVER    //  3
// };

void print_macro();
void print_const( int );
void print_enum( int );