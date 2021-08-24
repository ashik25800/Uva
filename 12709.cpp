#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int temp_vel;
    double temp_f;

    while(1)
    {
        int vel = 0;
        double f = 0.0;

        cin>>n;
        if(n==0)
            break;

        int l,w,h;
        for(int i=0;i<n;i++)
        {
            cin>>l>>w>>h;
            temp_vel = l*w*h;
            temp_f = 1.00 - (1.00/(2.00* ((double)h)));

            if((temp_f>f) || ((temp_f==f) && temp_vel > vel))
            {
                f = temp_f;
                vel = temp_vel;
            }

        }
        cout<<vel<<endl;




    }
}
