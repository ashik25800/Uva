#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,temp,count;
    while(1)
    {
        count = 0;
        cin>>a>>b;
        if(a==0 && b==0)
            break;

        map<int,char> mp;
        while(a--)
        {
            cin>>temp;
            mp[temp] = 'y';
        }

        while(b--)
        {
            cin>>temp;
            if(mp[temp]=='y')
                count++;
        }

        cout<<count<<endl;

    }
}
