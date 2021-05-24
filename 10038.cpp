#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int sub(int a, int b)
{
    int sub=a-b;
    if(sub<0) return -sub;
    return sub;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int raw_arr[n];
        int diff_arr[n-1];
        for(int i=0;i<n;i++)
            cin>>raw_arr[i];

        for(int i=0;i<n-1;i++)
        {
            diff_arr[i]=sub(raw_arr[i],raw_arr[i+1]);
        }


        n--;
        sort(diff_arr,diff_arr+n);

        bool flag=1;

        for(int i=0;i<n;i++)
        {
            if(diff_arr[i]!=i+1)
            {
                flag=0;
                break;
            }

        }
        if(!flag) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;


    }

    return 0;
}
