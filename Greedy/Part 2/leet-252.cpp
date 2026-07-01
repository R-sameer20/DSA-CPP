#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   
bool canAttendMeetings(vector<vector<int>>& arr) {
    if(arr.size() == 0) return true;
    vector<int> meetingStart;
    vector<int> meetingEnd ;
    for(auto ele : arr){
        meetingStart.push_back(ele[0]);
        meetingEnd.push_back(ele[1]);
    }

    sort(meetingStart.begin() , meetingStart.end());
    sort(meetingEnd.begin() , meetingEnd.end() );
    int i = 0 , j = 0 , room = 0 , ans = 0;
    while(i < meetingStart.size() && j < meetingEnd.size()){
        if(meetingStart[i] < meetingEnd[j]){
            room++;
            ans = max(ans , room);
            i++;
        }
        else if(meetingStart[i] > meetingEnd[j]){
            room--;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return ans <= 1;
}

int main(){
    vector<vector<int>> arr1 = {{0, 30}, {5, 10}, {15, 20}};
    cout << "Test Case 1: " << (canAttendMeetings(arr1) ? "true" : "false") << "\n";

    vector<vector<int>> arr2 = {{7, 10}, {2, 4}};
    cout << "Test Case 2: " << (canAttendMeetings(arr2) ? "true" : "false") << "\n";

    vector<vector<int>> arr3 = {{1, 5}, {5, 10}, {10, 15}};
    cout << "Test Case 3: " << (canAttendMeetings(arr3) ? "true" : "false") << "\n";

    vector<vector<int>> arr4 = {};
    cout << "Test Case 4: " << (canAttendMeetings(arr4) ? "true" : "false") << "\n";

    vector<vector<int>> arr5 = {{1, 5}, {2, 3}};
    cout << "Test Case 5: " << (canAttendMeetings(arr5) ? "true" : "false") << "\n";

    return 0;
}