#include<stdio.h>
#include<stdlib.h>
int main(){
char ch[50];
int i;
printf("donner un chaine de caractere");
scanf("%s",ch);
i=atoi(ch);
if (i=0)
    printf("bad string");
else
    printf("entiger of the string is %d",i);
return 0;
}
