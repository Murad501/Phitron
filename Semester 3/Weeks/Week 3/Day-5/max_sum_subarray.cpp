class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
       int l = 0;
       int r = 0;
       int n = arr.size();
       long long ans = 0, sum = 0;
       
       while(r<n){
           sum+=arr[r];
           if(r - l+1 == k){
               ans = max(ans, sum);
              sum-=arr[l];
               r++;
               l++;
           }else{
               
               r++;
           }
       }
       return ans;
    }
};