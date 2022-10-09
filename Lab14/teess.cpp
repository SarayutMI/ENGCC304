#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {

	char name[100][100] = {"Pong", "Sorn", "Aoy", "Ying", "Yot", "Pot", "Vop"} ;
	int age[100] = {32, 25, 24, 26, 28, 31, 25} ;
	int salary[100] = { 45000, 23000, 33250, 34550, 50000, 24500, 25450 } ;
	//char job[100] = { "Programmer", "Support", "Advisor", "Programmer", "Founder", "HR", "Programmer"} ;
	
	int *p [100];
	
	
	
	/*----------output---------*/	


			//end Function while(i<Number_Emp) 			

		// printf( "Employee Name %s : ",name ) ; check Data in pointer "name"
		
  	float sum = 0 ;
	  float *Pay_tax ;
	  int max = 0 ;	
	  int x ; 
	  char y[100] ;

	for ( int a = 0 ; a <= 7  ; a++ ) {
			
			if ( age[a] > max ) {
				max = age[a];
				x = salary[a] ;
				//y = name[a];
			//name = Human[i].name ;
			//Pay_tax = &(Human[i].salary) ;
		}	//end function if
	 }	//end function for

	 for ( int j = 0 ; j <= 7  ; j++ ) {
			
			if ( age[j] > max ) {
				x = salary[j];
				x = salary[j] ;
				//y = name[a];
			//name = Human[i].name ;
			//Pay_tax = &(Human[i].salary) ;
		}	//end function if
	 }	//end function for

	//printf( " \n %s ", y) ;
	printf( " \n %d ", x) ;
	printf( " \n %d ", max) ;

}









	//printf( " %d year old", max) ;

	//printf( "------------------------------------------\n") ;
	//printf( "All salary per month : %.2f Bath\n", sum) ;
	//printf( "All salary per year : %.2f Bath\n", sum*12) ;
	//printf( "Tax (7 %% per year) : %.2f Bath\n", sum*12*7/100) ;
	//printf( "Most tax in company : %s( %.2f Bath per year)", name, *Pay_tax*12*7/100 ) ;
  
  

  //call string in array
/* 
 #include <conio.h>
 #include <stdio.h>

 int main(){
	char data1[5] = {'L','o','v','e','g'};

	char *pt[5];

	for(int i = 0 ; i < 5 ; i++)
	{
		if (i % 2 == 0)
		{
			pt[i] = &data1[i];
		}

		printf("%c", *pt[i]);
	}
	
 }

 */