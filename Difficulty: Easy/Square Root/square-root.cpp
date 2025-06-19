// Function to find square root
// x: element to find square root
class Solution {
  public:
  int search(int num, int lo, int hi){
      while(lo<=hi){
          int mid = lo+(hi-lo)/2;
          int v = pow(mid+1,2);
          if(v==num)return mid+1;
          else if(v<num) lo = mid+1;
          else hi = mid-1;
      }
      return min(lo+1, hi+1);
  }
    int floorSqrt(int n) {
        // Your code goes here
        return search(n, 0, n/2);
    }
};