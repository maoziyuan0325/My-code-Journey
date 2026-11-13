
bool hasCycle(struct ListNode *head) {
    
    
   struct ListNode*fast=head;
    struct ListNode*slow=head;
    int pos=0;
    while(fast!=NULL&&fast->next!=NULL)
  {fast=fast->next->next;
  slow=slow->next;
  if(slow==fast) {pos=1;
  return pos;}
  
  }  return pos;
}
