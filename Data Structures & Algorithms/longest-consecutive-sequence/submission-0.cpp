class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int current=1;
        int best=1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                current++;
                best=max(current,best);
            }
            else if(nums[i+1]>nums[i]+1){
                current=1;
            }
        }
        return best;
    }
};
