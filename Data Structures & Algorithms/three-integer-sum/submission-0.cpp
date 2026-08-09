class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size();
        vector<vector<int>>a;
        sort(nums.begin(),nums.end());

        for(int i=0;i<l;i++){
            int left=i+1;
            int right=l-1;
            
            if(i>0 && nums[i]==nums[i-1])continue;

            while(left<right){
                int d=nums[left]+nums[right]+nums[i];

                if(d==0){
                    a.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                }
                else if(d<0)left++;
                else right--;
            }
        }
        return a;
    }
};
