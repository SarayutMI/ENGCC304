#include<stdio.h>
 
int main()
{   
    int n ;
    
    	printf("input : ");
    	scanf("%d",&n);
    
	while( n >= 1 ) {
         n-- ; 
        	if (( n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 ) 
            	&& ( n != 2 && n != 3 && n!= 5 && n !=7 ))
				{
            	continue;
       			} // end if
			printf( "%d\n ", n );
		    		} // end while
	return 0;
} //end main

 



