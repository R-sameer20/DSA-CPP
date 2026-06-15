// method 1
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
//     bool isPalindrome(ListNode* head) {
//         ListNode* c = new ListNode(0);
//         ListNode* tempC = c;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             ListNode* t = new ListNode(temp->val);
//             tempC->next = t;
//             temp = temp->next ;
//             tempC = tempC->next ;
//         }
//         c = c->next ;
//         c = reverseList(c);
//         temp = head;
//         tempC = c;
//         while(temp!=NULL){
//             if(temp->val != tempC->val) return false;
//             temp = temp->next ;
//             tempC = tempC->next ;

//         }
//         return true;

//     }
// };

// method 2;

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
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while( fast->next!=NULL  && fast->next->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         // slow is at left middle


//         ListNode* newHead = reverseList(slow->next);
//         ListNode* a = head;
//         ListNode* b = newHead;
//         while(b){
//             if(a->val != b->val) return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
        

//     }
// };