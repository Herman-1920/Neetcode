class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>a;
        vector<int>b;

        for(int i=0;i<nums.size();i++){
            if(a.find(target-nums[i])!=a.end()){
                b.push_back(a[target-nums[i]]);
                b.push_back(i);
                break;
            }
            
            a[nums[i]]=i;
        }
        return b;
    }
};
