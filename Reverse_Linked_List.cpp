/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode *Next;
        ListNode *curr=head;
        ListNode *prev=NULL;
        if(head!=NULL){
      while(curr!=NULL){
          Next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=Next;
          
      }}
      head=prev;
      return head;
        
    }
};
