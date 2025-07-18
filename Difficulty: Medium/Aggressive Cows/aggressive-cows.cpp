// User function Template for C++

class Solution {
  public:
bool isValid(vector<int>&arr, int k, int mid){
    int n = arr.size();
    int lp = arr[0];
    int cp = 1;
    for(int i = 1; i<n; i++){
        if(arr[i]-lp>=mid){
            lp = arr[i];
            cp++;
        }
    }
    return cp>=k;
}
    int aggressiveCows(vector<int> &stall, int k) {

        // Write your code here
        sort(stall.begin(),stall.end());
        int n = stall.size();
        int lo = 1;
        int hi = stall[n-1]-stall[0];
        int m = INT_MAX;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isValid(stall, k, mid)){
                m = mid;
                lo = mid+1;
            }
            else hi = mid-1;
        }
        return m;
    }
};