class Solution {
public:
    char findTheDifference(string s, string t) {
        char res;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++)
        {
            if(int(s[i])^int(t[i])) return t[i];
        }
        return t[s.size()];
    }
};