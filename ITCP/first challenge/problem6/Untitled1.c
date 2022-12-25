#include<stdio.h>
#include<stdlib.h>
int compare(int t[],int n,int c){
    int i;
    for(i=0;i<n;i++){
        if (t[i]=c){


            return i;

        }

    }
    return -1;
    }
void main(){
    int n,c,e,i;
    int t[50];
    printf("donner un entier");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner un valeur");
        scanf("%d",&t[i]);
    }
        printf("donner la cl�");
        scanf("%d",&c);
    e=compare(t,n,c);
    printf("l'indice est:%d",e);
