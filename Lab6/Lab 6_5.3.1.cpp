#include <stdio.h>

int main() {
    int num ;
    int i ;
    int j ;										//int use %d
    int x ;
    int y ;
    char star = '*' ;							//char use %c
    printf( "Input your line : " ) ;
    scanf( "%d", &num ) ;
    if( num % 2 == 0 ) {
        for ( i = 1 ; i <= num ; i++ ) {
            for ( j = num ; j > i ; j-- ) {
                printf( " " );
            } 									//end for j=num
            for (int x = 1 ; x < i ; x++ ) {
            printf( "%c", star );
            } 									//end for int x
            for (int z = 1 ; z <= i ; z++ ) {
            printf( "%c", star );
            }									//end int z
        printf( "\n" );
        }										//for i=1
    } else if ( num % 2 == 1 ) {		
        for ( i = 1 ; i <= num ; i++ ) {
            for ( j = 1 ; j < i ; j++ ) {
                printf( " " ); 
            }										//end for int j=1
            for (int x = num ; x > i ; x-- ) {
                printf( "%c", star );
            }										//end for int x
            for (int z = num ; z >= i ; z-- ) {
                printf( "%c", star );
            } 										//end for int z
        printf( "\n" );
        }
    }												//end else if num % 2 
		else {
        printf( "Error" );
    } //end else
    return 0 ;
} //end funtion
