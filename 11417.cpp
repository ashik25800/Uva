#include<stdio.h>
#include<iostream>
#include<list>
using namespace std;

int GCD(int n1, int n2) {
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int  G=0;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
            {
                G+=GCD(i,j);
            }

        cout<<G<<endl;

    }

    return 0;
}
