class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>l,m,r;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot) l.push_back(nums[i]);
            else if(nums[i]==pivot) m.push_back(nums[i]);
            else r.push_back(nums[i]);
        }
        reverse(r.begin(),r.end());
        while(m.size()!=0 or r.size()!=0)
        {
            if(m.size()!=0){
                l.push_back(m[m.size()-1]);
                m.pop_back();
            }
            else if(r.size()!=0){
                l.push_back(r[r.size()-1]);
                r.pop_back();
            }
        }
        return l;
    }
};