// my logic
// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         int idx = 0;
//         ListNode* temp = head;

//         while(temp!=NULL){
//             if(temp->val < x ) idx++
//             temp = temp->next;
//         }
//         int idx2 = tdx;
//         ListNode* i = head;
//         ListNode* j = head;
//         while(idx>0){
//             j = j->next;
//             i--;
//         }
//         ListNode* t_pre = head;
//         ListNode* t_next = head;
//         t_next = t_next->next;
//         while(idx!=idx2){
//             if(i->val<x && j->val > x ){
//                 i = i->next;
//                 j = j->next;
//                 t_pre = t_pre->next;
//                 t_next = t_next->next;
//                 idx++; 
//             }
//             else if(i->val>x && j->val < x){
//                t_pre = t_pre->next;
//                t_next = t_next->next; 
//             }
//         }

        
//     }
// };

