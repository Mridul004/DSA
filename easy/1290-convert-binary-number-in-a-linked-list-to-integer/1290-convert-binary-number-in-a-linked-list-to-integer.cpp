class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
       int count=-1;
       while(curr)
       {
           count++;
           curr=curr->next;
       } 
       curr=head;
       int ans=0;
       while(curr)
       {
           ans+=curr->val*(pow(2,count));
           count--;
           curr=curr->next;
       }
       return ans;
    }