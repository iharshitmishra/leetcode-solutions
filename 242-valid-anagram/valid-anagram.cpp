class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashs[26] = {0};
        int hasht[26] = {0};
        if(s.length() != t.length())return false;

        for(int i = 0; i<s.length();i++){
            hashs[s[i]-'a']+=1;
            hasht[t[i]-'a']+=1;

        }
      for(int i = 0; i < 26; i++){
    if(hashs[i] != hasht[i]) return false;
}
return true;
}
};