void lec39();

//  배열의 함수 전달시 
//  Call-by-reference 형태로 전달 됨

void call_type( int [], int );

//  1차원 배열 함수 전달

//  배열의 크기를 알수 없음으로, 사이즈를 함께 전달 하거나, 
//  배열의 끝을 알리는(null 과 같은...) 코드를 함께 전달 해야 함.
void print_array1( int [] , int );
void print_array2( int * , int );

//  2차원 배열 함수 전달

//  헤더에서도 cols 에 해당하는 배열의 크기를 지정해야 함. ( 컴파일시 오류 )
//  ex) void print_array3( int arr[][3], 2 ) {}
void print_array3( int [][3] , int );   //  rows 만 전달. cols 는 자체 계산

//  cols 에 해당하는 배열의 크기를 지정해서 받아야 함
//  ex) void print_array3( int (*arr)[3], 2 ) {}
void print_array4( int (*)[] , int );  //  rows 만 전달. cols 는 자체 계산
