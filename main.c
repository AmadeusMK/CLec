#include <stdio.h>

//  3. 배열과 포인터
/*
  https://edu.goorm.io/learn/lecture/21611/%EB%8F%99%EC%8B%9C%EC%97%90-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%99%80-c

  포인터(pointer) : 변수의 주소를 저장 하는 변수
  배열 포인터 : 배열을 가리키는 포인터. ex) int *(ptr)[5];
  포인터 배열 : 포인터들의 배열. 각 포인터는 변수 또는 배열을 가리킴. ex) int *ptr[5];
*/
#include "lec/lec27.h"  //  27. 변수 가리키기(포인터)
#include "lec/lec28.h"  //  28. 배열과 포인터의 관계
#include "lec/lec29.h"  //  29. 배열 가리키기(배열 포인터)
#include "lec/lec30.h"  //  30. 2차원 배열과 배열 포인터
#include "lec/lec31.h"  //  31. 포인터 배열
#include "lec/ex32.h"   //  32. 배열과 포인터 종합문제 (1)
#include "lec/ex33.h"   //  33. 배열과 포인터 종합문제 (2)

//  4부. 함수
#include "lec/lec38.h"  //  38. 재귀함수
#include "lec/lec39.h"  //  39. 배열을 매개변수로 넘기기
#include "lec/ex40.h"   //  40. 종합문제

//  5부. 구조체
#include "lec/lec41.h"  //  41. typedef
#include "lec/lec42.h"  //  42. 구조체 만들기
#include "lec/lec43.h"  //  43. 구조체와 메모리
#include "lec/lec44.h"  //  44. 구조체 가리키기(포인터)
#include "lec/lec45.h"  //  45. 구조체에 함수 집어넣기
#include "lec/ex46.h"   //  46. 종합문제

//  6부. C언어 고급 기능
#include "lec/lec47.h"  //  47. 상수 만들기
#include "lec/lec48.h"  //  48. 매크로 자세히 알아보기
#include "lec/lec49.h"  //  49. 비트 연산
#include "lec/lec50.h"  //  50. 파일 입출력
#include "lec/lec51.h"  //  51. 유용한 함수들


int main(void) {

  //  3. 배열과 포인터
  // lec27();
  // lec28();
  // lec29();
  // lec30();
  // lec31();
  // ex32();
  // ex33();

  //  4부. 함수
  // lec38();
  // lec39();
  // ex40();

  //  5부. 구조체
  // lec41();
  // lec42();
  // lec43();
  // lec44();
  // lec45();
  // ex46();
  
  //  6부. C언어 고급 기능
  // lec47();  //  47. 상수 만들기
  // lec48();  //  48. 매크로 자세히 알아보기
  // lec49();  //  49. 비트 연산
  // lec50();  //  50. 파일 입출력
  lec51();  //  51. 유용한 함수들

  return 0;
}