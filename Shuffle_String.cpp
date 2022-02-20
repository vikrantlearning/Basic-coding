//Shuffle String
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      //map<int,char>mp;
      int n=indices.size();
      /*for(int i=0;i<n;i++)
      {
          mp[indices[i]]=s[i];
      }
      string s1;
      for(int i=0;i<n;i++)
      {
          s1.push_back(mp[i]);
      }
      return s1;
      */
        string s1=s;
      for(int i=0;i<n;i++)
      {
         int k=indices[i];
         s1[k]=s[i];
      }
      return s1;
    }
};