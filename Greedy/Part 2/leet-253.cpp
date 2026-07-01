#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
    // bool cmp (vector<int>& v1 , vector<int>& v2 ){
    //         return v1[1] > v2[1] ;
    // }
    int minMeetingRooms(vector<vector<int>>& arr) {
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
        return ans;
    }
int main(){
  vector<vector<int>> arr1 = {{0, 40}, {5, 10}, {15, 20}};
    cout << "Test Case 1: " << minMeetingRooms(arr1) << "\n";

    vector<vector<int>> arr2 = {{1, 5}, {5, 10}, {10, 15}};
    cout << "Test Case 2: " << minMeetingRooms(arr2) << "\n";

    vector<vector<int>> arr3 = {{1, 10}, {2, 6}, {3, 7}, {4, 8}};
    cout << "Test Case 3: " << minMeetingRooms(arr3) << "\n";

    vector<vector<int>> arr4 = {};
    cout << "Test Case 4: " << minMeetingRooms(arr4) << "\n";

    vector<vector<int>> arr5 = {{1, 4}, {2, 5}, {6, 9}, {7, 10}};
    cout << "Test Case 5: " << minMeetingRooms(arr5) << "\n";

    return 0;
}