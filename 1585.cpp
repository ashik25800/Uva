#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    string a;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        int sum=0,j=1;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='X')
                j=1;
            else
            {
                sum+=j;
                j++;
            }
        }cout<<sum<<endl;
    }

    return 0;
}
