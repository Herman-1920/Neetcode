class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            s+=strs[i]+"#";
        }
        return s;
    }

    vector<string> decode(string s) {
        string t;
        for(int i=0;i<s.length();i++){
            if(s[i]=="#")i++;
            t+=s[i];
        }
        return t;
    }
};
