#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x,y;
    string str;
    cin>>n;
    for(int l=1;l<=n;l++)
    {
        cin>>x>>y;
        getchar();
        list<string> a,b;
        for(int i=0;i<x;i++)
        {
            getline(cin,str);
            a.push_back(str);
        }
        for(int i=0;i<y;i++)
        {
            getline(cin,str);
            b.push_back(str);
        }
        set<string> g;
        for(auto i=a.begin();i!=a.end();i++)
            for(auto j=b.begin();j!=b.end();j++)
                g.insert(*i+*j);

        cout<<"Case "<<l<<": "<<g.size()<<endl;
    }

    return 0;
}
