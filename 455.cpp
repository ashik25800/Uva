#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int n;
    string a;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>a;

        char ch = a[0];
        string temp;
        
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==ch && i!=0)
            {
                bool flag =1;
                int k=0;
                
                for(int j=i;j<i+temp.length();j++)
                {
                    if(temp[k]!=a[j])
                        {flag = 0; break;}
                    k++;

                }
                if(flag) break;

            }
            temp.push_back(a[i]);
        }

        bool ispreodic = true;
        
        if(a.length()%temp.length()!= 0)
            ispreodic = false;

        else 
        {
            int x=0;
            for(int i=temp.length();i<a.length();i++)
            {
                if(a[i]!=temp[x%(temp.length())])
                {
                    ispreodic = false;
                    break;
                }
                x++;

            }
        }

        if(ispreodic)
            cout<<temp.length()<<endl;
        else cout<<a.length()<<endl;
        if(k!=n-1)
            cout<<endl;

        
    }
    
    return 0;
}
