#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    string s;
    map<char,int> m;
    m['M'] = 0;
    m['A'] = 0;
    m['R'] = 0;
    m['G'] = 0;
    m['I'] = 0;
    m['T'] = 0;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='M'||s[i]=='A'||s[i]=='R'||s[i]=='G'||s[i]=='I'||s[i]=='T')
            {
                
                m[s[i]]++;
                
            }
        }
        
        m['A'] = m['A']/3;
        m['R'] = m['R']/2;

        int min=600;
        for(auto i=m.begin();i!=m.end();i++)
            if((i->second)<min)
                min = i->second;
        if(m.size()<6)
            cout<<0<<endl;

        else cout<<min<<endl;
      
        m.clear();

    }
    
    return 0;
}
