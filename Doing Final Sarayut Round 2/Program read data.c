#include <stdio.h>
#include <string.h>

int n ;
int day = 0 ;
int month = 0 ;
int years = 0 ;
int maximumY = 0 ;
int maximumM = 0 ;
int minimumY = 999 ;
int minimumM = 999 ;

char name [ 10 ] ;
char minimumN [ 10 ] ;
char maximumN [ 10 ] ;

	int main (){
	
    FILE *file ;
    file = fopen ( "Datasheet.txt", "r" ) ;
    fscanf ( file, "%*[^\n]" ) ;
    if ( file == NULL )
    {
        printf ("\nCannot search file [Err: Error Opening File]") ;
    } // end if else

    showfile ( file ) ;
    fclose ( file ) ;
    printf ( "\nMax: %s [%d Years, %d Months]" ,maximumN ,maximumY ,maximumM ) ;
    printf ( "\nMin: %s [%d Years, %d Months]" ,minimumN ,minimumY ,minimumM ) ; 
    return 0;
	}

	int showfile ( FILE *p )
 	{
	int dref = 21 ; 
	int mref = 06 ; 
	int yref = 2018 ;

	int md[] = { 31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 } ;

	while ( EOF != fscanf ( p, "%d %s %d-%d-%d", &n, &name, &years, &month, &day ) )
    {
  	years = yref - years;
  	if (mref < month)
  	{
    years--;
    month = 12 - (month - mref);       
  	}
  	else
  	{month = mref - month;}
  	if (dref < day)
  	{
    month--;
	day = md[mref - 1] - (day - dref);
	}
  	else
  	day = dref - day;
		
        if (years > maximumY)
        {
            strcpy(maximumN, name);
            maximumY = years;
            maximumM = month;
        }
        else if (years < minimumY)
        {
            strcpy(minimumN, name);
            minimumY = years;
            minimumM = month;
        }

        printf("%s %d years, %d months\n", name, years, month);
        
    }
    return 0;
}
