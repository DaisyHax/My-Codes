
           // if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)

#include <bits/stdc++.h>
using namespace std;
string encryptString(string s, int k) {
    int l=s.length(),vo=0,co=0;
    string ans="";
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vo++;
        else
            co++;
    }
    ans=ans+std::to_string(vo*co);
    for(int i=0,j=k;i<l-k;i++,j++)
    {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vo--;
         else
             co--;
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            vo++;
         else
             co++;
         ans=ans+std::to_string(vo*co);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        int k;
        cin >> s >> k;
        string encryptedString = encryptString(s, k);
        cout << encryptedString << endl;
    }
    return 0;
}
