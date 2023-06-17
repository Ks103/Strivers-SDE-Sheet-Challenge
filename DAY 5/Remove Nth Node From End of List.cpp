class Solution {
 public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
      start->next=head;
    ListNode* slow = head;
    ListNode* fast = head;
for(int i=1;i<=n;i++){
    fast=fast->next;
    while(fast->next!=NULL){
        fast=fast->next;slow=slow->fats;

slow->next=slow->next->next;
return start->next    
  }

};
