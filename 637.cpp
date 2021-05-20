#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;

        int siz;
        if(n%4==0) siz=n/4;
        else siz=(n/4)+1;

        int left_series[siz][2];
        int right_series[siz][2];


        int ad=1,rev=((4*siz)/2)+1;
        for(int i=0;i<siz;i++)
        {
            left_series[i][0]= ad;
            left_series[i][1]= ad+1;
            ad+=2;
        }

        for(int i=0;i<siz;i++)
        {
            right_series[i][0]=rev;
            right_series[i][1]=rev+1;
            rev+=2;
        }


        for(int i=0;i<siz;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(left_series[i][j]>n)
                    left_series[i][j]=0;
                if(right_series[i][j]>n)
                    right_series[i][j]=0;
            }
        }


        int j=siz-1;
         cout<<"Printing order for "<<n<<" pages:"<<endl;
        for(int i=0;i<siz;i++)
        {
            if(right_series[j][1]>0 || left_series[i][0]>0)
            {
                if(right_series[j][1]==0)
                    cout<<"Sheet "<<i+1<<", front: "<<"Blank, "<<left_series[i][0]<<endl;

                else if(left_series[i][0]==0)
                    cout<<"Sheet "<<i+1<<", front: "<<right_series[j][1]<<", Blank"<<endl;

                else cout<<"Sheet "<<i+1<<", front: "<<right_series[j][1]<<", "<<left_series[i][0]<<endl;
            }

            if(right_series[j][0]>0 || left_series[i][1]>0)
            {
                if(right_series[j][0]==0)
                    cout<<"Sheet "<<i+1<<", back : "<<left_series[i][1]<<", Blank"<<endl;

                else if(left_series[i][1]==0)
                    cout<<"Sheet "<<i+1<<", back : "<<"Blank, "<<right_series[j][0]<<endl;

                else cout<<"Sheet "<<i+1<<", back : "<<left_series[i][1]<<", "<<right_series[j][0]<<endl;
            }
            
            j--;
        }


    }

    return 0;
}
