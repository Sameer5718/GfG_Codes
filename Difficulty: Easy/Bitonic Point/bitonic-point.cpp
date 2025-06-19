// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        // jabtak lo==hi ni hota run karte raho
        int lo = 0;
        int n = arr.size();
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(mid>0 && mid<n-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return arr[mid];
            }
            if(arr[mid]<arr[mid+1])lo = mid+1;
            else if(arr[mid]>arr[mid+1])hi = mid-1;
        }
        return -1;
    }
};