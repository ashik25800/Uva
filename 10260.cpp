#include<bits/stdc++.h>
using namespace std;


int main()
{
    string o = "BFPV";
    string t = "CGJKQSXZ";
    string th = "DT";
    string f = "MN";
    map<char,int> m;

    for(int i=0;i<o.length();i++)
        m[o[i]] = 1;
    for(int i=0;i<t.length();i++)
        m[t[i]] = 2;
    for(int i=0;i<th.length();i++)
        m[th[i]] = 3;
    for(int i=0;i<f.length();i++)
        m[f[i]] = 5;
    m['L'] = 4;
    m['R'] = 6;

    string in;
    list<int> lst;
    while(cin>>in)
    {
        for(int i=0;i<in.length();i++)
        {
            if(i==0)
            {
                if(m[in[i]])
                    lst.push_back(m[in[i]]);
            }

            else
            {
                if(m[in[i]]!=m[in[i-1]])
                    if(m[in[i]])
                        lst.push_back(m[in[i]]);
            }

        }
        for(auto i=lst.begin();i!=lst.end();i++)
            cout<<*i;
        cout<<endl;
        lst.clear();
            
            
    }



    return 0;
}
