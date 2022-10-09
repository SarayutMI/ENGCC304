#include <stdio.h>
#include <string.h>

int count = 0;

struct  Employee{
	char name[ 100 ] ;
	int salary ;
	int year ;
} typedef Emp ;         //Emp means Employee

void inputData( Emp [], int ) ;
void PrintData( Emp [], int ) ;
void total_endProgram( Emp [], int) ;

int main() {
	int n = 100 ;
	Emp B[ n ] ;

	inputData( B, n ) ;				//go to the function inputData
	//PrintData( B, count ) ;			//go to the function printData
	//total_endProgram( B, count ) ;	//go to the function totoal_endprogram
	return 0 ;
} // end function main

void inputData( Emp InputArr[], int n) {
	char c ;
	int i = 0 ;
	bool con ;

for ( i = 0 ; i<= count; i++)
			printf( "Employee Name : " ) ;
			scanf( "%s", InputArr[ i ].name ) ;
			printf( "Salary (Bath/Month) : ") ;
			scanf( "%d", &InputArr[ i ].salary );
			printf( "Duration (Year) : " ) ;
			scanf( "%d", &InputArr[ i ].year) ;
			i++;
			count++;					//count( count = count + 1 ) use counting loop
		} 								// end switch



void total_endProgram( Emp InputArr[], int n ) {

 // find payment
	float sum = 0;		//%f
	int i = 0 ;				
	while( i < n ) {			
	sum = sum + InputArr[ i ].salary ;
	i++ ;
	}
	printf( "Payment of every month : %.2f\n Bath" , sum ) ;

 // find average
	float average = 0;
	average = sum / count ;
	printf( "Average of Salary : %.2f Bath", average ) ;

 // find duration
	int max = 0, index = 0;
	i = 0 ;
	while( i < count ) {
	while(InputArr[ i ].year > max) {
	max = InputArr[ i ].year ;
	index = i ;
	break ;
	}
		i++ ;	
	}
 		printf( "\n* Most duration in this business *" );
		printf( "Name : %s (%d Years)\nSalary : %d Bath", 	
		InputArr[ index ].name,
		InputArr[ index ].year,
		InputArr[ index ].salary
	);
	}


void PrintData( Emp InputArr[], int n) {
	int i = 0 ;
		while( i < n ) {
			printf( "---------------------------------------\n" );
			printf( "model[ %d ] \nname : %s \nsalary : %d \nyear : %d\n", 
			i, 
			InputArr[ i ].name, 	
			InputArr[ i ].salary,
			InputArr[ i ].year
			);
			printf( "---------------------------------------\n" );
			i++ ;
	}	// end while
	}	//end function PrintData