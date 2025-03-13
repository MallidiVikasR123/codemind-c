class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int mid = (i+j)/2,neg=0;
        while(i<=j){
            if(nums[mid]>=0 and (mid==0 or (mid-1>=0 and nums[mid-1]<0))){
                neg = mid;
                cout<<neg;
                break;}
            else if(nums[mid]<0){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            mid = (i+j)/2;
        }
        if(i>j and neg==0) neg=mid+1;
        int pos=0;
        i=mid;
        j=nums.size()-1;
        while(i<=j){
            if(nums[mid]>0 and (mid==0 or (mid-1>=0 and nums[mid-1]<=0))){
            pos = nums.size()-mid;
                break;}
            else if(nums[mid]==0){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            mid = (i+j)/2;
        }
        return max(neg,pos);
    }
};