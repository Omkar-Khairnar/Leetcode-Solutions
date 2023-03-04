#include <stdio.h>
#include<stdlib.h>
  struct ListNode {
      int val;
      struct ListNode *next;
  };
  int checkLength(struct ListNode *l){
     int ct=0;
     while(l != NULL){
          l=l->next;
          ct++;
     }     
     return ct;
}

  struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
     struct ListNode *h1=head;
     struct ListNode *h2=head;
     struct ListNode *fr=NULL;
  int len=checkLength(head);
  int ct=0;
  int a=len-n-1;
  int b=len-n+1;

  if(a<0){
     return head->next;
  }
  else{
     while(ct !=a){
          h1=h1->next;
          ct++;
     }
     ct=0;
     while(ct !=b){
          h2=h2->next;
          ct++;
     }
     fr=h1->next;
     free(fr);
     h1->next=h2;
     return head;
  }

}

int main(){
     printf("hello ");

     return 0;
}