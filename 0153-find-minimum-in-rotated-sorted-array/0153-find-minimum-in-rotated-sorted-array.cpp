class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans=-1;
        int j;
        for(int i=0; i<n-1; i++){
            j=i+1;
            if(nums[j]<nums[i])  ans = nums[j];
        }
        if(ans==-1) return nums[0];
        return ans;
    }
};