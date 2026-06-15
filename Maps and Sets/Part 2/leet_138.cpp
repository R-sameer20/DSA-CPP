

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // step 1 create a copy without random
//         Node* temp = head;
//         Node* dummy = new Node(100);
//         Node* tempC = dummy;
//         while(temp){
//             Node* p = new Node(temp->val);
//             tempC->next = p;
//             tempC = tempC->next;
//             temp = temp->next;    
//         }
//         Node* b = dummy->next; //duplicate wala
//         Node* a = head; //origmal wala

//         unordered_map<Node* , Node*> m;
//         Node* tempA = a;
//         Node* tempB = b;
//         while(tempA!=NULL){
//             m[tempA] = tempB;
//             tempA = tempA->next;
//             tempB = tempB->next;
//         }
//         for(auto ele : m){
//             Node* original = ele.first;
//             Node* duplicate = ele.second;
//             if(original->random != NULL){
//                 Node* originalRandom = original->random;
//                 Node* duplicateRandom =m[original->random];
//                 duplicate->random = duplicateRandom;

//             }
//         }
//         return b;

   
//     }
// };