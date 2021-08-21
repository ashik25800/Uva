#include<bits/stdc++.h>
using namespace std;


int handeler = 0;

void creator(int arr[],int n,int x = 1)
{


    for(int i = 0;i<n;i++)
            arr[i] = i+1;

        vector<int> v;

        int terget = 1;
        v.push_back(arr[0]);
        arr[0] = 0;
        int i = 0;


        
        

        while(1)
        {
            i=i%n;
            if(i==0)
            {
                int total = 0;
                for(int j=0;j<n;j++)
                    if(!arr[j])
                        total++;
                if(total == n)
                    break;

            }
            if(terget == x)
            {
                while(!arr[i])
                    i = (i+1)%n;
                v.push_back(arr[i]);
                arr[i] = 0;
                terget = 1;
            }

            if(arr[i])
                terget++;

            i++;



        }
        if(v[n-1]==13)
         {
           handeler = x;
           return;
         }   
        else creator(arr,n,x+1);
}


int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int arr[n];
        creator(arr,n);
        cout<<handeler<<endl;
        handeler = 0;

        

    }


    return 0;
}
