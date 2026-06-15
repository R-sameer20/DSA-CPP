
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         int n = 0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             n++;
//         }

        
//         vector<ListNode*> ans;
//         int size = n/k;
//         int rem = n%k;
//         temp = head ;
       
//         while(temp!=NULL){
//             ListNode* c = new ListNode(0);
//             ListNode* tempC = c;
//             int s = size;
//             if(rem>0) s++;
//             rem--;
//             for(int i = 1 ; i<=s ; i++){
//                 tempC->next = temp;
//                 temp = temp->next;
//                 tempC = tempC->next;
//             }
//             tempC->next = NULL ; 
//             ans.push_back(c->next);

//         }
//         if(ans.size()<k){
//             int extra = k- ans.size();
//             for(int i = 1 ; i<=extra ; i++){
//                 ans.push_back(NULL);
//             }
//         }
//         return ans;
        
//     }
// };