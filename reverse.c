#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int val;
    struct ListNode*next;
};
struct ListNode*reverseList(struct ListNode*head){
    struct ListNode*prev=NULL;
    struct ListNode*curr=head;
       while(curr!=NULL){
        struct ListNode*nextTemp=curr->next;
        curr->next=prev;
         prev=curr;
        curr=nextTemp;
        }return prev;
}
struct ListNode*creatNode(int val){
    struct ListNode*newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val=val;
    newNode->next=NULL;
    return newNode;
}
void PrintList(struct ListNode*head){
    struct ListNode*temp=head;
    while(temp!=NULL){
        int val;
        val=temp->val;
        printf("%d",val);
        temp=temp->next;
    }
}
    int main(){
        struct ListNode*newNode=creatNode(1);
        newNode->next=creatNode(2);
        newNode->next->next=creatNode(3);
        printf("the oleder line:");
        PrintList(newNode);
        struct ListNode*result=reverseList(newNode);
        PrintList(result);
        
    }
