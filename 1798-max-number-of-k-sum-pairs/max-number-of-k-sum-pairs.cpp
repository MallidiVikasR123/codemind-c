class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(k==nums[i]+nums[j])
            {
                cnt++;
                i++;j--;
            }
            else if(nums[i]+nums[j]<k) i++;
            else j--;
        }
        return cnt;
    }
};