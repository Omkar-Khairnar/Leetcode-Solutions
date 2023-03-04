/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode{
//      int val;
//      struct ListNode *next;
// };
struct ListNode* createNode(int v){
     struct ListNode* new;
     new=(struct ListNode*)malloc(sizeof(struct ListNode));
     new->val=v;
     return new;
     free(new);
}
int checkLength(struct ListNode *l){
     int ct=0;
     while(l != NULL){
          l=l->next;
          ct++;
     }
    //  printf("Length =%d\n", ct);
     return ct;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
     struct ListNode* ans=(struct ListNode*)malloc(sizeof(struct ListNode));
     struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
     struct ListNode* head1=(struct ListNode*)malloc(sizeof(struct ListNode));
     struct ListNode* head2=(struct ListNode*)malloc(sizeof(struct ListNode));
     head1=l1;
     head2=l2;
     head=ans;
     int quo = 0, size=0;
     int c = 0, a=0, b=0;
     int s1=checkLength(l1);
     int s2=checkLength(l2);
     int x=s1, y=s2;
     if(x>y){
          while(l2->next !=NULL){
               l2=l2->next;
          }

          while(s1 != s2){
               l2->next=createNode(0);
               l2=l2->next;
              
            //   printf("size s1=%d, size s2=%d \n", s1,s2);
                s1--;
          }
          
     }
     else if(x<y)
     {   
        //  printf("\nYES\n");
         while(l1->next !=NULL){
               l1=l1->next;
          }
          while(s1 != s2){
               l1->next=createNode(0);
               l1=l1->next;
            //   printf("size s1=%d, size s2=%d \n", s1,s2);
               s2--;
          } 
     }
     
     size= (x>= y) ? x : y;
     int sum=0;
     while (size >0){
         sum= head1->val + head2->val;
        //  ans->val=(sum+quo) %10;
         ans=createNode((sum+quo) %10);
         if(sum+quo >=10){
               quo=1;
         }
         else{ quo=0;
         }
         head1=head1->next;
         head2=head2->next;
         ans=ans->next;
         size--;
     }
     
     if(quo ==1){
         ans->val=1;
     }
     

    return head;
}
