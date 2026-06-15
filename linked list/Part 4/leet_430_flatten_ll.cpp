// My logic
// class Solution {
// public:
//     Node* flatten(Node* head) {
//         Node* temp = head;
//         Node* end = new Node(100);
//         vector<Node*> mark;
//         while(temp){
//             if(temp->child == NULL){
//                 temp = temp->next;
//             }
//             else{
//                 mark.push_back(temp->next);
//                 temp->next = temp->child;
//                 if(temp->next == NULL) end = temp;
//                 temp = temp->next;
//             }
//         }
//         while(mark.size()!= 0){
//             end->next = mark[mark.size() - 1];
//             end = end->next;
//             mark.pop_back();
//         }
//         return head;
        
//     }
// };