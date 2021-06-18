#include <stdio.h>
#include "../util/util.h"
#include "lec43.h"

void lec43() {

  title_header( "43. 구조체와 메모리" );

  product_info();

}

void product_info() {

  title_header( "상품 저장" );

  //  초기화
  ProductInfo myProduct = {
    4797283,
    "제주 한라봉",
    19900
  };

  title_header( "상품 정보" );

  printf( "상품번호 : %d\n", myProduct.num  );
  printf( "상 품 명 : %s\n", myProduct.name );
  printf( "가    격 : %d\n", myProduct.cost );
  printf( "sizeof( myProduct ) = %ld\n", sizeof( myProduct ) );

  title_header( "메모리 저장 주소" );
  printf( "%p\n", & myProduct );  //  시작주소
  printf( "상품번호 : %p\n", & myProduct.num  );  //  시작주소
  printf( "상 품 명 : %p\n", myProduct.name );    //  시작주소 + 4Byte
  printf( "가    격 : %p\n", &myProduct.cost );   //  시작주소 + 100Byte
}
