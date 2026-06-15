// // my solution


// class Solution {
// public:
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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right) return head;
//         ListNode* temp = head ;
//         ListNode* Right = head ;

//         ListNode* PreRight = head ;
//         ListNode* NextLeft = head ;

//         ListNode* Left = head ;
//         int n = 1;
//         for(int i = 1 ; i<left ; i++){
//             if(i == left - 1) PreRight = temp;
//             if(i == left) Right = temp;
//             temp = temp->next;
//         }
//         Left = temp;
//         NextLeft = temp->next;

//         ListNode* c = new ListNode(0) ;
//         ListNode* tempC = c;
//         temp = Left;
//         while(temp!=Right){
//             ListNode* k = new ListNode(temp->val);
//             tempC->next = k;
//             temp = temp->next;
//             tempC = tempC->next;
            
//         }
//         c = c->next;

//         c = reverseList(c);
//         PreRight->next = c;
//         temp = c;
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = NextLeft;

//         return head;
        

        

        
//     }
// };

//