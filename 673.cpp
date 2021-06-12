#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<stack>
#include<string.h>
using namespace std;


int main()
{

    int n;
    stack <char> raw;
    string str;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,str);
        if(str.length()==0)
            cout<<"Yes"<<endl;
        else
        {
            bool flag =1;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='(' || str[i]=='[')
                {
                    raw.push(str[i]);
                }
                if(str[i]==')' || str[i]==']')
                {
                    if(raw.empty())
                    {
                        flag = 0;
                        break;
                    }
                    else if(str[i]==')'&&raw.top()=='(')
                        raw.pop();
                    else if(str[i]==']' && raw.top()=='[')
                        raw.pop();
                    else
                    {
                        flag =0;
                        break;
                    }
                }

            }
            if(!flag) cout<<"No"<<endl;
            else
            {
                if(!raw.empty()) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
        }
        while(!raw.empty())
            raw.pop();
    }

    return 0;
}
