class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>a;
        map<char,int>b;

        for(auto x:s){
            a[x]++;
        }
        for(auto x:t){
            b[x]++;
        }

        if(a==b){
            return true;
        }
        return false;
    }
};
