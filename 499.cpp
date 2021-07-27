#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    map<char,int> mp;
    
    while(getline(cin,a))
    {
        for(int i=0;i<a.length();i++)
        {
            mp[a[i]]++;
        }
        int max=0;
        char ch;

        for(int i=0;i<a.length();i++)
        {
            if(mp[a[i]]>=max && ((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)))
            {
                max = mp[a[i]];
                ch = a[i];
            }    

        }

        string str;

        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if((i->second) == max)
                if(((i->first)>=65 && (i->first)<=90) || ((i->first)>=97 && (i->first)<=122))
                 str.push_back(i->first);

        }

        cout<<str<<" "<<max<<endl;
        mp.clear();



    }
    

    return 0;
}
