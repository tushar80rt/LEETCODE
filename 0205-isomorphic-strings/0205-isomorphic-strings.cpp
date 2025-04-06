class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        vector<int>v(200,2000);
        int n=v.size();

        // check prospective of S

        for(int i=0;i<s.length();i++){
            // get the ascii value 
            int idx=(int)(s[i]);
            //  both the ascii value substract and store the vector V;
            if(v[idx]==2000)v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i]))return false;
        }

        // check the prospective of T
        // Restore the value of (V)
        for(int i=0;i<n;i++){
            v[i]=2000;
        }

        // Then check prospective of T
        for(int i=0;i<t.size();i++){
            // get the ascii value 
           int idx=(int)(t[i]);
            //  both the ascii value substract and store the vector V;
            if(v[idx]==2000)v[idx]=t[i]-s[i];
            else if(v[idx]!=(t[i]-s[i]))return false;
        }
        return true;
    }
};