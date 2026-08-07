class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;

        unordered_set<int>s;

       for(auto i:nums)s.insert(i);

       
       int best=1;

       for(auto i:s){
        if(s.find(i-1)==s.end()){
            int length=1;
            int n=i;
            while(s.find(n+1)!=s.end()){
                length++;
                best=max(best,length);
                n++;
            }
        }

       }
       return best;
    }
};
