class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(auto x:nums){
            m[x]++;
        }

        vector<pair<int,int>>a(m.begin(),m.end());

        sort(a.begin(),a.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });

        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(a[i].first);
        }
        return result;



    }
};
