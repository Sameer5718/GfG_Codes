class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>res;
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        int first = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==x){ first = mid; hi = mid-1; }
            else if(arr[mid]<x)lo = mid+1;
            else hi = mid-1;
        }
        lo = 0;
        hi = n-1;
        int second = -1;
        while(lo<=hi){
        int mid = lo+(hi-lo)/2;
            if(arr[mid]==x){ second = mid; lo = mid+1; }
            else if(arr[mid]<x)lo = mid+1;
            else hi = mid-1;
        }
        if(first==-1 && second!=-1)return {second,second};
        else if(first!=-1 && second==-1)return {first,first};
        else return {first,second};
    return {-1,-1};
    }
};