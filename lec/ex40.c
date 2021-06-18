#include <stdio.h>
#include "../util/util.h"
#include "ex40.h"

void ex40() {

  title_header( "40. 종합문제" );

  exec4();

}

// void print_no_space( char *str ) {
//   int n = 0;
//   char c = str[n++];
//   while ( c != 0 ) {
//     if ( c != 32 ) {
//       printf( "%c", c );
//     }
//     c = str[n++];
//   }
// }

void print_no_space( char *str ) {
  for ( int i = 0 ; str[i] != '\0' ; i++ ) {
    if ( str[i] != ' ' ) {
      printf( "%c", str[i] );
    }
  }
}

void exec4() {

  print_no_space( "Hello, World!\n" );
  print_no_space( "I am Tom.\n" );
  print_no_space( "You are Jane.\n" );

}