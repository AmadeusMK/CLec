#include <stdio.h>
#include "../util/util.h"
#include "lec44.h"

//  lec43.h 에 같은 이름의 구조체가 선언 되어 있어서...
typedef struct {    //  108Byte
  int num;          //  4Byte
  char name[100];   //  100Byte
  int cost;         //  4Byte
} ProductInfo;

void lec44() {

  title_header( "44. 구조체 가리키기(포인터)" );

  // struct_pointer();
  // struct_function();
  struct_swap();
}

void struct_pointer() {

  title_header( "상품 초기화" );

  //  초기화
  ProductInfo myProduct = {
    4797283,
    "제주 한라봉",
    19900
  };

  //  포인터
  ProductInfo *ptr_product = &myProduct;

  title_header( "포인터로 상품 정보 출력. (*ptr) 형식" );

  printf( "상품번호 : %d\n", (*ptr_product).num  );
  printf( "상 품 명 : %s\n", (*ptr_product).name );
  printf( "가    격 : %d\n", (*ptr_product).cost );

  title_header( "포인터로 상품 정보 출력. 화살표(->) 사용" );

  printf( "상품번호 : %d\n", ptr_product->num  );
  printf( "상 품 명 : %s\n", ptr_product->name );
  printf( "가    격 : %d\n", ptr_product->cost );

}

// void productSale( ProductInfo p, int percent ) {    //  Call by value
void productSale( ProductInfo *p, int percent ) {   //  Call by reference
  p->cost -= p->cost * percent / 100;
}

void struct_function() {

  title_header( "상품 초기화" );

  //  초기화
  ProductInfo myProduct = {
    4797283,
    "제주 한라봉",
    20000
  };

  title_header( "상품 정보 출력" );

  printf( "상품번호 : %d\n", myProduct.num  );
  printf( "상 품 명 : %s\n", myProduct.name );
  printf( "가    격 : %d\n", myProduct.cost );

  title_header( "상품 가격 할인" );

  // productSale( myProduct, 10 ); //  Call by value
  productSale( &myProduct, 10 ); //  Call by reference

  printf( "상품번호 : %d\n", myProduct.num  );
  printf( "상 품 명 : %s\n", myProduct.name );
  printf( "가    격 : %d\n", myProduct.cost );

}

void product_swap( ProductInfo *a , ProductInfo *b ) {
  ProductInfo tmp = *a;
  *a = *b;
  *b = tmp;
}
void struct_swap() {

  title_header( "상품 초기화" );

  //  초기화
  ProductInfo myProduct  = { 4797283, "제주 한라봉", 20000 };
  ProductInfo myProduct2 = { 4797284, "성주 참회"  , 10000 };

  title_header( "상품 Swap" );

  product_swap( &myProduct, &myProduct2 );

  printf( "상품번호 : %d\n", myProduct.num  );
  printf( "상 품 명 : %s\n", myProduct.name );
  printf( "가    격 : %d\n", myProduct.cost );

}
