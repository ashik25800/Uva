#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
    1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
    47045881, 64000000 , 85766121};


    int n=sizeof(arr)/sizeof(arr[0]);
    map<int,char> a;

    for(int i=0;i<n;i++)
        a[arr[i]] = 'y';

    int x;
    while(1)
    {
        cin>>x;
        if(x==0)
            break;

        if(a[x]=='y')
            cout<<"Special"<<endl;
        else cout<<"Ordinary"<<endl;
    }


    return 0;
}
