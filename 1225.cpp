#include<bits/stdc++.h>
using namespace std;

string intTostr(int n)
{
    string str;
    char ch;
    while(n!=0)
    {
        ch = (n%10)+48;
        str.push_back(ch);
        n/=10;
    }
    reverse(str.begin(),str.end());
    return str;
}


int main()
{
    int n,x;
    cin>>n;
    string main,temp;
    
    while(n--)
    {
        int count[] = {0,0,0,0,0,0,0,0,0,0};
        cin>>x;

        for(int i=1;i<=x;i++)
        {
            main+=intTostr(i);
        }
        for(int i=0;i<main.length();i++)
            count[(main[i]-48)]++;
        for(int i=0;i<9;i++)
            cout<<count[i]<<" ";

        cout<<count[9]<<endl;

        main = "";



    }
    return 0;
}
