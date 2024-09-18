class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(to_string(nums[i]));
        }
        string ans="";
        sort(v.begin(),v.end(),[](string &a, string &b) {
            return a + b > b + a;
        });
        for(int i=0;i<nums.size();i++){
            if(ans=="0" and v[i]=="0") continue;
            else ans+=v[i];
        }
        return ans;
    }
};