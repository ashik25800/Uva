#include<bits/stdc++.h>
using namespace std;


bool straight_pllindrome(string a,int start=0)
{

    int j=a.length()-1;
    int len = a.length();
    for(int i=start;i<=(len+start)/2;i++)
    {
        if(a[i]!=a[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
}

int maker(string a)
{
    int last = a.length()-1;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]==a[last])
        {
            bool flag = straight_pllindrome(a,i);
            if(flag)
                return i;
        }
    }
}

int main()
{
    string a;
    while(cin>>a)
    {
        if(straight_pllindrome(a))
            cout<<a<<endl;
        else
        {
            int last = maker(a);
            for(int i=0;i<a.length();i++)
                cout<<a[i];
            for(int i=last-1;i>=0;i--)
                cout<<a[i];
            cout<<endl;

        }

    }

    return 0 ;
}
