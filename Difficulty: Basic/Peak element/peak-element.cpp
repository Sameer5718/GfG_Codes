class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int lo = 0;
        int n = arr.size();
        int hi = n-1;
        int mid = 0;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            if(mid>0 && mid<n-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
            }
            if(arr[mid]<arr[mid+1])lo = mid+1;
            else if(arr[mid]>arr[mid+1])hi = mid-1;
        }
        return mid;
    }
};