#include<bits/stdc++.h>
using namespace std;



bool checker(string a,string b)
{
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}

bool processor(string a,string b)
{
    string x;
    for(int i=0;i<a.length();i++)
        if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
            x.push_back(a[i]);


    if(x.length()!=b.length())
        return 0;

    else if(checker(x,b))
        return 1;
    else return 0;
}

int main()
{
    int n;
    cin>>n;
    getchar();
    string in,out;
    for(int l=1;l<=n;l++)
    {
        getline(cin,in);
        getline(cin,out);
        if(in.length()==out.length())
        {
            if(!checker(in,out))
                cout<<"Case "<<l<<": "<<"Wrong Answer"<<endl;
            else cout<<"Case "<<l<<": "<<"Yes"<<endl;

        }
        else 
        {
            if(processor(in,out))
                cout<<"Case "<<l<<": "<<"Output Format Error"<<endl;

            else cout<<"Case "<<l<<": "<<"Wrong Answer"<<endl;
        }

    }   


    return 0;
}
