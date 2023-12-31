#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pallidrome(int num);

int main(void){
    int num;
    printf("Enter the Numeber: ");
    scanf("%d",&num);
    pallidrome(num);
    return 0;
}

void pallidrome(int num){

    char n[20];
    sprintf(n, "%d" ,num);

    int i,m,l;
    l=strlen(n);

    int ispallidrome=1;

    for ( i = 0 , m=l-1; i < m; i++,m--)
    {
        if(n[i]!=n[m]){
         ispallidrome=0;
        // break;
         }
    }

    if (ispallidrome)
    {
        printf("The given number is pallidrome.");
    }
    else
    {
        printf("The given number is not a pallidrome.");
    }    
}