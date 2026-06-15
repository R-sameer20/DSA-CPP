// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

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
//         dummy = dummy->next;

//         // step 2 making alternative connection 
//         // My logic
//         // Node* a = head;
//         // Node* tempA = head;
//         // Node* b = c;
//         // Node* tempB = c;
//         // while(tempA ){
//         //     a = tempA->next;
//         //     b = tempB->next;
//         //     tempA->next = tempB;
//         //     tempA = a;
//         //     tempB->next = temp;
//         //     tempB = b;
//         // }

//         Node* duplicate = dummy;
//         Node* a = head;
//         Node* b = duplicate;
//         Node* tempA = head;
//         dummy = new Node(-1);
//         Node* tempD = dummy;
//         while(a){
//             tempD->next = a;
//             a = a->next;
//             tempD = tempD->next;

//             tempD->next = b;
//             b = b->next;
//             tempD = tempD->next;
//         }
//         dummy = dummy->next;
//         // step 3 assinging random to deep copy

//         Node* t1 = dummy;
//         Node* t2 = NULL;
//         while(t1){
//             t2 = t1 ->next;
//             if(t1->random!=NULL) t2->random = t1->random->next ;
//             t1 = t1->next->next;
//         }

//         // step 4 seprating list (odd even ll)

//         Node* d1 = new Node(1);
//         Node* d2 = new Node(1);

//         Node* p1 = d1;
//         Node* p2 = d2;

//         Node* t = dummy;
//         while(t){
//             p1->next = t ;
//             t = t->next ; 
//             p1 = p1->next;

//             p2->next = t ;
//             t = t->next ; 
//             p2 = p2->next;

//         }
//         p1->next = NULL;
//         p2->next = NULL;
//         d1 = d1->next;
//         d2 = d2->next;
//         return d2;



        

        
//     }
// };