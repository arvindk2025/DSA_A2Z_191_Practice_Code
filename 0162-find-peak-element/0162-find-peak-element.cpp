class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)return 0;

        int index=0;
        int j;

        for(int i=0; i<n-1; i++){
            j=i+1;
            if(nums[i]<nums[j])index = j;
        }
        return index;
    }
};