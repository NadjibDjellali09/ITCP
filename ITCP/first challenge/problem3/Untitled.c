#include<stdio.h>
#include<stdlib.h>
struct maillon{
 int val;
 struct maillon*suiv;
};
 typedef struct maillon*liste;
 void LLC(liste*l){
  liste t,p,q,s;
     t=NULL;
   if(l!=NULL){
    t=NULL; q=l;
     p=(liste)malloc(sizeof(struct maillon));
     p->val=(q->val); p->suiv=NULL; t=p; s=p;
    while(q!=NULL){
     if((p->val)==(q->val)){
     free(q);
     }
      else {
        p=(liste)malloc(sizeof(struct maillon));
        p->val=q->val;
       s->suiv=p;
       s=s->suiv;
     }
      q=l; l=q->suiv;
}
}

}
