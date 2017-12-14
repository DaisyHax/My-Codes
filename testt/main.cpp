#include <bits/stdc++.h>

using namespace std;
int reductionCost(vector < int > num)
{
    int tsum=0;
    vector <int> :: iterator i;
    vector <int> sum;
    for(i=num.begin();i!=num.end();++i)
    {
        int s=0;
        int a=*i,b=*(i+1);
        s=a+b;
        sum.push_back(s);
        vector <int> copy;
        vector <int> :: iterator j;
        vector <int> :: iterator k;
        for(j=copy.begin();j!=copy.end();++j)
        {
            for(k=i+2;k!=num.end();++i)
            {
                int c=*k;
                copy.push_back(c);
            }
        }copy.push_back(s);
        //vector <int> :: iterator j;
       // vector<int>::iterator k;
        for(j=num.begin();j!=num.end();j++)
        {
            for(k=copy.begin();k!=copy.end();++k)
            {
                int d=*k;
                num.push_back(d);
            }
        }

    }
   // vector <int> :: iterator i;
    for(i=sum.begin();i!=sum.end();++i)
    {
        int e=*i;
        tsum+=e;
    }
  //  cout<<tsum;
    return 10;
}

int main() {
    //ofstream fout(getenv("OUTPUT_PATH"));
    int res;
    int _num_size = 0;
    cin >> _num_size;
  //  cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _num;
    int _num_item;
    for(int _num_i=0; _num_i<_num_size; _num_i++) {
        cin >> _num_item;
    //    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _num.push_back(_num_item);
    }

    res = reductionCost(_num);
    cout << res << endl;

    //cout.close();
    return 0;
}

