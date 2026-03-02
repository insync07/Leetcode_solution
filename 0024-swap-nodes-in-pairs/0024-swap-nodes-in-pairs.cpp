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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
          ListNode* prev=NULL;
          ListNode*curr=head;
          ListNode*next=NULL;
          int k=1;
          while(curr!=NULL&&k<=2)
          {
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
          k++;
          }
          if(next!=NULL)
          {
            head->next=swapPairs(next);
          }
          return prev;
    }

};