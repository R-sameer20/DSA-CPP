// my solution
// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         ListNode* temp = head;
//         temp = temp->next;
//         vector<int> Min;
//         vector<int> Max;
//         vector<int> ans;
//         int n = 2;
//         while(temp->next!=NULL || temp->next->next!=NULL){
//             // local minima
//             if((temp->val > temp->next->val) &&( temp->next->next->val > temp->next->val) ){
//                 Min.push_back(n);
//             }
//             // local max
//             if((temp->val < temp->next->val) &&( temp->next->next->val < temp->next->val) ){
//                 Max.push_back(n);
//             }
//             temp = temp->next;
//             n++;
//         }

//         sort(Max.begin(), Max.end());   
//         sort(Min.begin(), Min.end());
//         if(Max.size() == 0 && Min.size()==0){
//             ans.push_back(-1);
//             ans.push_back(-1);
//             return ans;
//         }
//         else{
//             ans.push_back(min((Max[1] - Max[0])  , (Min[1] - Min[0]) ));
//             ans.push_back(max((Max[Max.size() - 1] - Max[0]), (Min[Min.size() - 1] - Min[0])));
//             return ans;
//         }

        
        
//     }
// };

// chatgptclass Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {

//         ListNode* prev = head;
//         ListNode* curr = head->next;
//         int pos = 2;

//         vector<int> critical;

//         while(curr->next != NULL){

//             if((curr->val > prev->val && curr->val > curr->next->val) ||
//                (curr->val < prev->val && curr->val < curr->next->val)){
//                 critical.push_back(pos);
//             }

//             prev = curr;
//             curr = curr->next;
//             pos++;
//         }

//         if(critical.size() < 2) return {-1,-1};

//         int minDist = INT_MAX;

//         for(int i=1;i<critical.size();i++){
//             minDist = min(minDist , critical[i] - critical[i-1]);
//         }

//         int maxDist = critical.back() - critical.front();

//         return {minDist , maxDist};
//     }
// };

// raghav solution


// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int idx = 1;
//         int fidx = -1;
//         int sidx = -1;
//         ListNode* a = head;
//         ListNode* b = head->next;
//         ListNode* c = head->next->next;
//         while(c){
//             if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val) ){
//                 if(fidx==-1) fidx = idx;
//                 else sidx = idx;   
//             }
//             a = a->next ; 
//             b = b->next ; 
//             c = c->next ;
//             idx++;
//         }
//         if(sidx == -1) return {-1,-1};
//         int maxd = sidx - fidx;
//         int mind = INT_MAX;
//         fidx = -1;
//         sidx = -1;
//         a = head;
//         idx = 1;
//         b = head->next;
//         c = head->next->next;
//         while(c){
//             if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val) ){
//                 fidx = sidx;
//                 sidx = idx;
//                 if(fidx!=-1){  
//                     int d = sidx - fidx;
//                     mind = min(mind,d);
//                 }
//             }
//             a = a->next ; 
//             b = b->next ; 
//             c = c->next ;
//             idx++;
//         }
//         return {mind, maxd};


//     }
// };