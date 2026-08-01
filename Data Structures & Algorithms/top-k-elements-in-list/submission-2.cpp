class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(auto x:nums){
            m[x]++;
        }

        vector<vector<int>>bucket(nums.size()+1);
        
        for(auto i:m){
            bucket[i.second].push_back(i.first);
        }


        vector<int>result;
        for(int i=nums.size();i>=1;i--){
            for(int j=0;j<bucket[i].size();j++){
                if(k==0)return result;
                else{
                    result.push_back(bucket[i][j]);
                    k--;
                }
            }
        }
        return result;
    }
};
