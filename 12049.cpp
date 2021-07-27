#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,n,temp,count;
    cin>>n;
    while(n--)
    {
        count = 0;
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        int one[a],two[b];

        for(int i=0;i<a;i++)
            cin>>one[i];
        for(int i=0;i<b;i++)
            cin>>two[i];

        for(int i=0;i<a;i++)
        {
            if(one[i])
            {
                for(int j=0;j<b;j++)
                {
                    if(one[i]==two[j])
                    {
                        one[i] = 0;
                        two[j] = 0;
                        break;
                    }
                }
            }
            
        }



        for(int i=0;i<a;i++)
            if(one[i])
                count++;

        for(int i=0;i<b;i++)
            if(two[i])
                count++;

        cout<<count<<endl;


    }
    return 0;
}
