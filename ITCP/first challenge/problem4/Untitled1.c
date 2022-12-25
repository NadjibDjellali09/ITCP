#include<stdio.h>
void merage(int t[],int v[],int n,int m){
 int i,c,j;
  for(i=0;i<n;i++){
    c=t[i];
    for(j=0;j<m;j++){
        if(c>v[j]){
            t[i]=v[j];
            v[j]=c;
            c=t[i+1];
        }
    }
  }
}
void main(){
 int i,j;
 int v[10];
 int t[10];
  for(i=0;i<5;i++){
    scanf("%d",&t[i]);
}
  for(j=0;j<3;j++){
    scanf("%d",&v[j]);
}
merage(t,v,5,3);
  for(i=0;i<5;i++){
    printf("%d",t[i]/n);
}
  for(j=0;j<3;j++){
    printf("%d",v[j]/n);
}
}
