class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size()<2) return 0;
        priority_queue <long long int, vector<long long int>, greater<long long int>> pq;
        int c1=0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(nums[i]<k) c1++;
        }
        if(c1==0) return 0;
        int c=0;
        while(pq.top()<k){
            long long int a=pq.top();
            pq.pop();
            long long int b=pq.top();
            pq.pop();
            pq.push(a*2+b);
            c++;
        }
        return c;
    }
};