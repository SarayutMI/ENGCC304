#include <stdio.h>
#include <iostream>
#include <cctype>

char DetectOperator( char [] ) ; 
int GetResult( int, int , char [] ) ; 


int main(){
    char Number[3] ;
    
    printf("Input : ");
    gets(Number);
    
    DetectOperator( Number);
    

    return 0 ;
} //End function main;

char DetectOperator( char Number[3] ) {

    char sum[10] ;
    int  N1 ;
    int  N2 ;
    int  Total ;

    for (int i = 0; i < 1; i++ ) {
        if (isalnum(Number[i])){      //isalnum is detect number in string _Form libary #include<cctype>
          N1 = Number[0] - '0' ;
          N2 = Number[2] - '0' ;
          // printf("\n %d N1 is number ",N1);   // check Value N1
          // printf("\n %d N2 is number ",N2);   // check Value N2
        }        
    } 
    GetResult( N1 , N2 , Number); // int , int ,char
}//end char DetectOperator
    

int GetResult( int N1 ,int N2 ,char Number[3]){

     switch (Number[1])
      {
      case '+':
      printf("Result : %d ",(N1+N2));
        break;
      case '-':
      printf("Result : %d ",(N1 - N2));
        break;
      case '*':
      printf("Result : %d ",(N1 * N2));
        break;
      case '/':
      printf("Result : %d ",(N1 / N2));
        break;
      case '%':
      printf("Result : %d ",(N1 % N2));
        break;
      
      default:
        break;
      }

} //end function GetResult