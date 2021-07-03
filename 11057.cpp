#include <bits/stdc++.h>


using namespace std;


bool bin_search(int ele,int arr[],int first,int n)
{
    int f = first,l = n-1;
    int mid;



    while(1)
    {

        mid = (l+f)/2;
        if(l<f)
        {
            return 0;
        }

        else if(ele == arr[mid])
        {
            return 1;
        }

        else if(ele> arr[mid])
            {
                f=mid+1;

            }
        else if(ele<arr[mid])
        {
            l=mid-1;
        }
    }

}

int main()
{
    int n,taka;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];


        cin>>taka;
        sort(arr,arr+n);
        int maxi=n;
        for(int i=0;i<n;i++)
            if(arr[i] >= taka)
                {
                    maxi=i;
                    break;
                }

        int filterd_arr[maxi];
        for(int i=0;i<maxi;i++)
            filterd_arr[i] = arr[i];


        int diff=1000001,s,l;
        bool flag;
        for(int i=0;i<maxi;i++)
        {
            flag = bin_search((taka-filterd_arr[i]),filterd_arr,i,maxi);
            if(flag)
            {
                int temp = filterd_arr[i] - (taka-filterd_arr[i]);
                if(temp<0) temp*=-1;

                if(diff>temp)
                {
                    diff = temp;
                    s= filterd_arr[i];
                    l = taka-filterd_arr[i];
                }
            }
        }


        if(s>l)
        {
            int temp  =  s;
            s  =  l;
            l  =  temp;
        }

        cout<<"Peter should buy books whose prices are "<<s<<" and "<<l<<"."<<endl<<endl;



    }
    return 0;
}
