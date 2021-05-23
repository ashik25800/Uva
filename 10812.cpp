#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int n,s,d;
    cin>>n;
    while(n--)
    {
        cin>>s>>d;
        int x=(s-d)/2;
        int y=s-x;
        if((s-d)%2!=0||x<0)
            cout<<"impossible"<<endl;
        else
            cout<<y<<" "<<x<<endl;


    }
    return 0;
}
