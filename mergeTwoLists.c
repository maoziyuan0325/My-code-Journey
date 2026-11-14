
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode*dumyhead=(struct ListNode*)malloc(sizeof(struct ListNode));
    dumyhead->next=NULL;
    struct ListNode*curr=dumyhead;
    while(list1!=NULL&&list2!=NULL){
        if(list1->val<list2->val){
            curr->next=list1;
            list1=list1->next;
            curr=curr->next;
        }
        else{
            curr->next=list2;
            list2=list2->next;
            curr=curr->next;
        }
    }if(list1==NULL&&list2!=NULL){
       while(list2!=NULL) {
        curr->next=list2;
          list2=list2->next;
         curr=curr->next; }}
          else{
       while(list1!=NULL) {
        curr->next=list1;
          list1=list1->next;
          curr=curr->next;}
          

        }
                  return dumyhead->next;}
