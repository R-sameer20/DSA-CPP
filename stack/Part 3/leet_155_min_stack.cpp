// method 1
// class MinStack {
// public:
//     stack<int> st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//        st.push(val); 
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top();
//     }
    
//     int getMin() {
//         stack<int> helper;
//         int mn = INT_MAX;
//         while(st.size() > 0 ){
//             mn = min(mn , st.top());
//             helper.push(st.top());
//             st.pop();
//         }
//         while(helper.size()!=0){
//             st.push(helper.top());
//             helper.pop();
//         }
//         return mn;
        
//     }
// };

// method 2

// class MinStack {
// public:
//     stack<int> st;
//     stack<int> helper;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         st.push(val);
//         if(helper.size()==0 || val<helper.top()){
//             helper.push(val);
//         }
//         else helper.push(helper.top());
//     }
    
//     void pop() {
//         st.pop();
//         helper.pop();
//     }
    
//     int top() {
//         return st.top();
//     }
    
//     int getMin() {
//         return helper.top();

//     }
// };

// method 3
// class MinStack {
// public:
// vector<int> v;

//     MinStack() {
        
//     }
    
//     void push(int val) {
//         v.push_back(val);
//     }
    
//     void pop() {
//         v.pop_back();
//     }
    
//     int top() {
//         return v[v.size()-1];
//     }
    
//     int getMin() {
//         int mn = v[0];
//         for(int i = 0 ; i<v.size() ; i++){
//             mn = min(v[i] , mn);
//         }
//         return mn;
//     }
// };

// method 4

// class MinStack {
// public:
// long long min;
// stack<long long> st;
//     MinStack() {
//         min = LLONG_MAX;
//     }
    
//     void push(int val) {
//         long long x = (long long) val;
//         if(st.size()==0 ){
//             st.push(x);
//             min = x;
//         }
//         else if(x>=min) st.push(val);
//         else{
//             st.push(2*x-min);
//             min = x;
//         }

//     }
    
//     void pop() {
//         if(st.top()<min){
//             long long oldMin = 2*min - st.top();
//             min = oldMin;
//         }
//         st.pop();
       
//     }
    
//     int top() {
//         if(st.top()<min) return (int)min;
//         else return (int)st.top();
//     }
    
//     int getMin() {
//         return min;
//     }
// };


