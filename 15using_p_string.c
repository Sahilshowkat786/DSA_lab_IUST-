#include<stdio.h>
#include<string.h>
int main(){
    char str[80],*p;
    printf("enter a string ");
    scanf("%s",&str);
    p =&str[0];
  //  printf("%c",*p);
  int count = 0;
    while(*p != '\0'){
        printf("%c",*p);
        p++;
        count++;
    }
    printf("\nlength of string is %d",count);
    
    
}