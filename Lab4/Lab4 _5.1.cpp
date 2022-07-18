#include<stdio.h>

int main(){
/*
 	Function Name : Main
 	@Para 	Input 	user	char		First 	input 	from User
 	@Para   Input 	hrs 	int			second 	input 	from User
 	@Para   Input 	salary 	int			Third 	input 	from User
 	@Para   Output 	tatal 	float		First 	output 	from Program
*/
	char 	user[10];     	// %c
	int 	hrs;			// %d
	int 	salary;			// %d
	float 	total;			// %.2f
	
	printf( "Input the Employees Id :" ) ;
    scanf( "%s" ,&user) ;					
    
	printf( "Input the working hrs :" );
	scanf( "%d",&hrs);
	
	printf( "Salary amount/hr (bath) : " );
	scanf( "%d" ,&salary );
	
	total = hrs * salary ;				// hrs Multipile salary = tatal
	
	printf( "\n----" ) ;
	printf( "\nExpected Output :" ) ;
	printf( "\nEmployees ID = %s" ,user ) ;
	printf( "\nAmount/day = %.2f Bath(s)" ,total ) ;
	return 0 ;
}	//End function 





