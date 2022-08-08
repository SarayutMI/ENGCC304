#include <stdio.h>

int main() {
    int i;				//%c
    int j; 				//%c
    int num;  			//number
    char star = '*';  	//%c
    printf("Input your line : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {			
        for (j = 1; j <= i; j++) {
            printf("%c", star);
        } //end for
        printf("\n");
    } //end for
    return 0;
} //end funtion
