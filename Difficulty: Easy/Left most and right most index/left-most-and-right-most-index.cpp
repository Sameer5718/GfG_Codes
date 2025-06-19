class Solution {
  public:
    pair<long, long> indexes(vector<long long> v, long long x) {
        // code here
        // 2 bar chalana h bs ispe
        int n = v.size();
        int lo = 0;
        int hi = n-1;
        long long first = -1,second = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(v[mid]==x){
                first = mid;
                hi = mid-1;
            }
            else if(v[mid]<x)lo = mid+1;
            else hi = mid-1;
        }
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(v[mid]==x){
                second = mid;
                lo = mid+1;
            }
            else if(v[mid]<x)lo = mid+1;
            else hi = mid-1;
        }
        return {first,second};
    }
};