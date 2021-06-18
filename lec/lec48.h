void lec48();

//  제곱을 구하는 매크로. 
#define SQUARE(X) X * X   //  <=  문제가 있음

//  매개 변수가 있을 경우, 다음과 같이, 
//  각 매개 변수와 전체 식에 괄호를 쳐줘야 안전함
// #define SQUARE(X) ( (X) * (X) )   //  정상 동작

//  최대값
#define MAX( A, B ) ( ( (A) > (B) ) ? (A) : (B) )

//  for _ loop 를 매크로로 정의
#define FOR( I, S, E ) for ( int i = S ; I <= E ; I++ )

void macro_square();

void macro_max();

void macro_for();