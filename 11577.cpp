#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    string s;
    char temp;
    cin>>n;
    getchar();
    map<char,int> m;
    while(n--)
    {
        getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                if(s[i]>='A' && s[i]<='Z')
                    temp = char(s[i]+32);
                else temp = s[i];



                if(m[temp])
                    m[temp]++;
                else m[temp] = 1;
            }
        }

        int max=0;
        for(map<char,int> :: iterator i=m.begin();i!=m.end();i++)
        {
            if((i->second)>max)
                {
                    max = i->second;
                }
        }

        string hey;

        for(map<char,int> :: iterator i=m.begin();i!=m.end();i++)
        {
            if((i->second)==max)
                hey.push_back(i->first);
        } 

      

        for(int i=0;i<hey.length();i++)   
            cout<<hey[i];
        cout<<endl;
        m.clear();

    }

    return 0;
}
