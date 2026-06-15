// ListNode* reverseList(ListNode* head) {
        
//         ListNode* pre = NULL;
//         ListNode* curr = head;
//         ListNode* Next = NULL;

//         while(curr!=NULL){
//             Next = curr->next;
//             curr->next = pre;
//             pre = curr;
//             curr = Next;
//         }
//         return pre;

//     }

// recursion


// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead =  reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newHead;
//     }
// };