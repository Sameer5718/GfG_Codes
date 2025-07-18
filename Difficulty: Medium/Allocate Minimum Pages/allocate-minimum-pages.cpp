class Solution {
  public:
  int getsplit(vector<int>&arr, int mid, int k){
      int maxsum = 0;
      int sr = 1;
      for(int i = 0; i<arr.size(); i++){
          if(arr[i]+maxsum <= mid){
              maxsum+=arr[i];
          }
          else{
              sr++;
              maxsum=arr[i];
          }
      }
     // cout<<sr<<" mid = "<<mid<<endl;
      return sr;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k>n)return -1;
        int lo = *max_element(arr.begin(),arr.end());
        auto f = arr.begin();
        auto l = arr.end();
        int hi = accumulate(f, l, 0);
        //cout<<hi;
        int m = INT_MAX;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
           // cout<<" -> "<<mid<<endl;
            if(getsplit(arr,mid,k)<=k){
         //       cout<<m<<" inside "<<endl;
                m=min(m, mid);
                hi = mid-1;
            }
            else lo = mid+1;
            
        }
        return m==INT_MAX?-1:m;
    }
};