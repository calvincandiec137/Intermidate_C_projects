#include <stdio.h>
#include <string.h>

void desired_len_str(char *s, int length);
 char str[80];
int main(void){

   
    strcpy(str,"this is");
    
    desired_len_str(str,10);
    printf("%s", str);
    printf("%d", strlen(str));
    return 0;
}

void desired_len_str(char *s, int length){

int l=strlen(str);

if (l<length)
{
    int i;
  for ( i = l; i < length; i++)
  {
    //str[i]=printf(" ");
    str[i]=' ';
  }
    
}

}