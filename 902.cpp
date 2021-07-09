#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,t=0;
    string a,temp,main_temp;
    map<string,int> m;
    map<string,int> :: iterator l;
    while(cin>>n)
    {
        cin>>a;
        for(int i=0;i<=(a.length()-n);i++)
        {
            for(int j=i;j<(i+n);j++)
                temp.push_back(a[j]);
            m[temp]+=1;
            if(t<m[temp])
                {
                    main_temp = temp;
                    t=m[temp];
                }
            temp="";
        }

        cout<<main_temp<<endl;
        main_temp="";
        t=0;

        m.clear();
    }

    return 0;
}
