class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
       
       int left=0;
       int len=0;
       for(int i=0;i<s.size();i++){
            if(m.count(s[i])){
                left=max(left,m[s[i]]+1);
            }
           
            m[s[i]]=i;
            len=max(len,i-left+1);
       }
       return len;

    }
};
