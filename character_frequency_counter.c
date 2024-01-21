#include <stdio.h>
#include <string.h>

void ch_f(char word[],char c );

int main(void){
char word[20],c;

printf("Enter a word: ");
scanf("%s",&word);

while ((getchar()) != '\n');

printf("Enter a character: ");
scanf("%c",&c);

ch_f(word,c);

return 0;
}

void ch_f(char word[],char c){

int counter=0;
int l=strlen(word);

for (int i = 0; i < l; i++)
{
    if (word[i]==c)
    {
        counter++;  
    }
    
}

printf("The character %c is repeated %d times.",c, counter);

}