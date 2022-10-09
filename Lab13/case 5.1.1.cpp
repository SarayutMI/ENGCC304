#include <stdio.h>
#include <string.h>

struct  Employee{
	char name[ 100 ] ;
	float salary ;
}typedef employee ;        

void Output_And_Calculate(Employee[], int);

int main() {
	
  int All = 100;
  employee Output_And_Vat [All] ;
	Output_And_Calculate(Output_And_Vat , All) ;
	
	return 0;

}

void Output_And_Calculate(employee Output_And_Vat[], int){

	int n = 0 ;
	int Breakfn ;
	int i = 0 ;
	int Number_Emp = 1 ;
	char Check [ 100 ] = "-1" ;
	char *name ;
	
	float sum = 0 ;
	float *Vat ;
	float max = 0 ;	

		while( i < Number_Emp ){
			printf( "Employee %d's Name  : ",Number_Emp ) ;
			scanf( "%s", Output_And_Vat[ n ].name ) ;

			name = Output_And_Vat[ n ].name ; 
			Breakfn = strcmp( name , Check ) ; 
			if ( Breakfn == 0 ) {
				break ;
			}	
			
			printf( "Salary (Bath/Month) : " ) ;
			scanf( "%f", &Output_And_Vat[ n ].salary ) ;
			i++ ;
			n++ ;
			Number_Emp++ ;	

		}
		
	for ( int i = 0 ; i < n  ; i++ ) {
		sum = sum + Output_And_Vat[i].salary ;
		if (Output_And_Vat[i].salary > max ) {
			max = Output_And_Vat[i].salary ;
			name = Output_And_Vat[i].name ;
			Vat = &(Output_And_Vat[i].salary) ;
		}	
	 }	// MAX Employ

	printf( "------------------------------------------\n") ;
	printf( "All salary per month : %.2f Bath\n", sum) ;
	printf( "All salary per year : %.2f Bath\n", sum*12) ;
	printf( "Tax (7 %% per year) : %.2f Bath\n", sum*12*7/100) ;
	printf( "Most tax in company : %s( %.2f Bath per year)", name, *Vat*12*7/100 ) ;
  printf( "------------------------------------------\n") ;

}
