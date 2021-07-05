#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,increaser=1;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int integer[n];

        for(int i=0;i<n;i++)
            cin>>integer[i];

        cin>>m;
        int queries[m];

        for(int i=0;i<m;i++)
            cin>>queries[i];

        int sum = integer[0] + integer[1],temp_sum,temp_diff;
        int diff;
        cout<<"Case "<<increaser<<":"<<endl;

        for(int k=0;k<m;k++)
        {
            diff = sum - queries[k];
            if(diff<0) diff*=-1;

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        temp_sum = integer[i] + integer [j];
                        temp_diff = temp_sum - queries[k];
                        if(temp_diff<0) temp_diff*=-1;


                        if(temp_diff<diff)
                        {
                            sum = temp_sum;
                            diff = temp_diff;
                        }


                    }
                }
            }cout<<"Closest sum to "<<queries[k]<<" is "<<sum<<"."<<endl;
        }
        increaser++;



    }


    return 0;
}
      
