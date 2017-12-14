#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;
using namespace std::tr1; //technical report
/*
Yes different compilers treat TR1 headers differently. GCC for example does
the same thing that you experienced whereas MVS accepts <unordered_map>. One
 way to work around it is to use boost/tr1/unordered_map.hpp if cross
 platform or multiple compiler compilation is necessary for you.
*/
struct compare
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second < p2.second;
    }
};

int main()
{
    int t,n,arr[101],k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {cin>>arr[i];}

          unordered_map<int, int> freq;
    //    unordered_map<int, int> um;
       // unordered_map <int,int> ::iterator itr;

        for(int i=0;i<n;i++)
        { freq[arr[i]]++;}

        vector<pair<int, int> > freq_arr(freq.begin(), freq.end());
        sort(freq_arr.begin(), freq_arr.end());
        cout << k << " numbers with most occurrences are:\n";
    for (int i = 0; i<k; i++)
        cout << freq_arr[i].first << " ";
        /*for(itr=freq.begin();itr!=freq.end();itr++)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
       }*/

    }
    return 0;
}
