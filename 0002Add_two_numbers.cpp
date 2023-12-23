#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
    int val;
    ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* result= new ListNode();
        int carry=0;
       while(l1 != NULL || l2 != NULL){
           int x=0,y=0;
           if(l1 !=NULL){
               x=l1->val;
               l1=l1->next;
           }
           if(l2 !=NULL){
               y=l2->val;
               l2=l2->next;
           }
           int sum = x + y + carry;
           struct ListNode* temp = result;
           if(temp->next == nullptr){
                struct ListNode* newNode=new ListNode;
                newNode->val=sum%10;
                newNode->next=NULL;
                carry=sum/10;
                temp->next=newNode;
           }else{
               while(temp->next != nullptr){
                   temp=temp->next;
               }
               struct ListNode* node=new ListNode;
               node->val=sum%10;
               node->next=NULL;
               carry=sum/10;
               temp->next=node;
           } 
       } 
       if(carry!=0){
           struct ListNode* carryNode=new ListNode;
           carryNode->val=carry;
           carryNode->next=NULL;

           struct ListNode* check= result;
           while(check->next !=NULL){
               check=check->next;
           }
           check->next=carryNode;

       }
       return result->next; 
    }
};
