#include <stdio.h>
#include "../util/util.h"
#include "lec27.h"

void lec27() {

  title_header( "27. 변수 가리키기(포인터)" );

  int v = 10;

  int *ptr;   //  ptr 을 선언하면서, 포인터임을 알려주는 별표. 

  ptr = &v;

  printf( "변수 v 의 값 : %d\n", v );
  printf( "변수 v 의 주소값 : %p\n", &v );
  printf( "ptr 의 값 : %p\n", ptr );
  printf( "ptr 이 가리키는 변수의 값 : %d\n", *ptr );   //  선언의 의미가 아닌, 포인트가 가리키는 변수값을 사용. *ptr = v

  //  포인터변수의 주소 변경
  title_header( "포인터변수의 주소 변경" );

  int a = 20;
  ptr = &a;
  printf( "ptr 이 가리키는 변수의 값 : %d\n", *ptr );

  //  포인터가 가리키는 변수값 변경
  title_header( "포인터가 가리키는 변수값 변경" );

  printf( "변수 a 의 값 : %d\n", a );
  *ptr = 30;
  printf( "변수 a 의 값 : %d\n", a );

  //  포인터를 가리키는 포인터
  title_header( "포인터를 가리키는 포인터" );

  int **ptr_ptr;
  ptr_ptr = &ptr;

  printf( "변수 a 의 값 a = %d\n", a );
  printf( "변수 a 의 주소값 &a = %p\n", &a );

  printf( "ptr 의 값 ptr = %p\n", ptr );
  printf( "ptr 의 주소값 &ptr = %p\n", &ptr );

  printf( "ptr_ptr 의 값 ptr_ptr = %p\n", ptr_ptr );
  printf( "ptr_ptr 의 주소값 *ptr_ptr = %p\n", *ptr_ptr );
  printf( "ptr_ptr 의 주소값의 주소값 **ptr_ptr = %d\n", **ptr_ptr );

}