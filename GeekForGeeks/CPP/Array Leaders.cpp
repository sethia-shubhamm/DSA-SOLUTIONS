

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
            vector<int> v;
            int n=arr.size();
    int mx = arr[n-1];
    v.push_back(mx);
    for(int i = n-2; i >= 0; i--){
        if(arr[i] >= mx){
            mx = arr[i];
            v.push_back(mx);
        }
    }
    reverse(v.begin(), v.end());
    return v;
    }
};

// Short Thought Process: To find the leaders in an array, we start from the rightmost element and keep track of the maximum element encountered so far. Any element that is greater than or equal to this maximum is considered a leader. We store these leaders in a vector and finally reverse the vector to maintain the original order before returning it.

//Link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1