#include <stdio.h>

void fib(int num, int it);

int main(void){
    int num,it;

    printf("Enter where to start the fibonacci series from: ");
    scanf("%d", &num);

    printf("Enter the number of iteration: ");
    scanf("%d", &it);

    fib(num,it);
}

void fib(int num,int it){

    int num1,num2,i;
    num1=num+num;
    printf("%d\n",num);
    printf("%d\n",num1);
    for ( i = 0; i <it-1 ; i++)
    {
        num2=num+num1;
        printf("%d\n",num2);
        num=num1;
        num1=num2;
    }   
}