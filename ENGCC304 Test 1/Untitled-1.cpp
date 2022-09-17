#include <stdio.h>

int count = 0 ;

struct  Employee {
	char	name [ 100 ] ;
	int 	salary ;
	int 	year ;
} typedef MainTYPE ;


void Data( MainTYPE [], int ) ; 
void PrintData( MainTYPE [], int ) ;
void total( MainTYPE [], int ) ;


int main() {
    int n = 100 ;
    MainTYPE inputdata [ n ] ;
    Data( inputdata , n ) ;
    PrintData( inputdata , n ) ;

    return 0 ;
} //end function 


//-----------------function Data----------------------
void Data( MainTYPE inputdata [], int n ) {

    char 	Check ;
	int 	i = 0 ;
	bool 	conditions ;

		do{
		printf( "Do you want to Enter Employee Information? (y/n) : " ) ;
		scanf( "%s", &Check ) ;
		
		switch( Check ){
			case 'n' : 
				conditions = false ;
					break ;
			default :					
				conditions = true ;
			printf( "Employee Name : " ) ;
			scanf( "%s", inputdata[ i ].name ) ;
			printf( "Salary (Bath/Month) : " ) ;
			scanf( "%d", &inputdata[ i ].salary ) ;
			printf( "Duration (Year) : " ) ;
			scanf( "%d", &inputdata[ i ].year ) ;
				i++ ;
				count++ ;					//count( count = count + 1 ) use counting loop
		}	// end switch
		} while( conditions ) ;   			// condition == true 
}   //end Void Data



void PrintData( MainTYPE inputdata [], int n ) {

	int 	i = 	0 ;
	int 	a = 	0 ;
	int 	max = 	0 ;
	int 	index = 0 ;
	float 	sum = 	0 ;
	float 	summax ;  
    
	    printf( "--------------------------------------------------------------" ) ;
    
		while( a < count ) {
            sum = sum + inputdata[ a ].salary ;    
            a++ ;
            } 								//end function while( a < count )	

        while( i < count ) {
        while( inputdata[ i ].salary > max ) {
            max = inputdata [ i ].salary ;
            index = i ;
            break ;
        	}									//end function while( inputdata[ i ].salary > max )		
		i++ ;	
	    } 									// end function while(i < count) 
        
        summax = inputdata[ index ].salary ;

        printf( "\nAverage of Salary : %.2f Bath\n" , (sum/count) ) ;
        printf( "Payment of every month : %.2f Bath\n" , sum ) ;
        printf( "** Most salary in this business***\n" ) ;
        printf( "Name : %s ( %d Years)\n" ,inputdata[index].name , inputdata[ index ].year ) ;
        printf( "Salary : %.2f\n" , summax ) ;

}	//end function PrintData