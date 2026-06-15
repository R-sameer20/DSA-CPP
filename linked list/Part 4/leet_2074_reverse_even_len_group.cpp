// my logic
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
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* temp = head;
//         ListNode* a = head;
//         ListNode* b = head;
//         ListNode* preA = head;
//         ListNode* nextB = head;

//         temp = temp->next;
//         a = a->next;
//         b = b->next;
//         nextB = nextB->next;

//         int count = 1;
//         int i = 2;

//         while(temp){
//             temp = temp->next;
//             b = b->next;
//             nextB = nextB->next;
//             count++;
//             if(count == i){
//                 nextB = nextB->next;
//                 count = 1;
//                 ListNode* newHead = reverseList(a);
//                 preA->next = newHead;
//                 a->next = nextB;
//                 temp = nextB;
//                 while(count != ((i*2) - 1) - 1 && temp != NULL ){
//                     temp = temp->next;
//                 }
//                 preA = temp ;
//                 temp = temp->next;
//                 a = temp;
//                 b = temp;
//                 nextB = temp;
//                 i = i*2;
//                 count = 1;

//             }
//         }
//         return head;



        
//     }
// };


// chatgpt 

// class Solution {
// public:

//     ListNode* reverse(ListNode* head){
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr){
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }

//         return prev;
//     }

//     ListNode* reverseEvenLengthGroups(ListNode* head) {

//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;

//         ListNode* prev = dummy;
//         ListNode* curr = head;

//         int groupSize = 1;

//         while(curr){

//             ListNode* start = curr;
//             int count = 0;

//             while(curr && count < groupSize){
//                 curr = curr->next;
//                 count++;
//             }

//             if(count % 2 == 0){

//                 ListNode* nextGroup = curr;
//                 start->next = NULL;

//                 ListNode* newHead = reverse(start);

//                 prev->next = newHead;

//                 while(prev->next)
//                     prev = prev->next;

//                 prev->next = nextGroup;
//             }
//             else{
//                 for(int i = 0; i < count; i++)
//                     prev = prev->next;
//             }

//             groupSize++;
//         }

//         return dummy->next;
//     }
// };


// actual solution

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
//         ListNode* a = NULL ;
//         ListNode* b = NULL ;
//         ListNode* c = NULL ;
//         ListNode* d = NULL ;

//         ListNode* temp = head ;
//         int n = 1;
//         while(temp!=NULL){
//             if(n == left - 1) a = temp;
//             if(n == left) b = temp;
//             if(n == right ) c = temp;
//             if(n == right + 1) d = temp;
//             temp = temp->next;
//             n++;
//         }
//         if(a) a->next = NULL;
        
//         if(c)c->next =NULL;
//         c = reverseList(b);

//         if(a) a->next = c;
//         b->next = d;
        

//         if(a) return head;
//         else return c;
        

        

        
//     }
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//        ListNode* temp = head;
       
//        int gap = 1;
//        while(temp!= NULL && temp->next !=NULL){
//         int remlen = 0;
//         ListNode* t = temp->next;
//         for(int i = 1 ; i<=gap+1 && t!=NULL; i++){
//             t = t->next;
//             remlen++;
//         }
//             if(remlen < gap+1) gap = remlen-1;
//             if(gap%2!=0) reverseBetween(temp , 2 , gap+2); 
//             gap++;
//             for(int i = 1 ; temp!=NULL &&  i<=gap ; i++){
//                 temp = temp->next;
//             }
//         }
//         return head;
        
//     }
// };