#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a,b;
    string temp;
    map<char,int> m;
    while(n--)
    {
        cin>>a>>b;
        string s[a];
        for(int i=0;i<a;i++)
            cin>>s[i];
        string con = "";

        for(int i=0;i<b;i++)
        {
            temp = "";
            for(int j=0;j<a;j++)
            {
                temp.push_back(s[j][i]);
            }
            sort(temp.begin(),temp.end());
            for(int j=0;j<temp.length();j++)
            {
                if(m[temp[j]])
                    m[temp[j]]++;
                else m[temp[j]] = 1;
            }
            int max = -1;
            char top;
            for(auto j=m.begin();j!=m.end();j++)
            {
                if((j->second)>max)
                {
                    max = (j->second);
                    top = j->first;
                }
            }
            con.push_back(top);
            m.clear();

        }
        
        int count = 0;
        for(int j=0;j<a;j++)
            for(int k=0;k<b;k++)
                if(con[k]!=s[j][k])
                    count++;

        cout<<con<<endl<<count<<endl;

    }
    


    return 0;
}
