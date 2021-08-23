#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,w,h,theta;
    int a,b,c,d;
    const double pi = 2*acos(0.0);
    const double rad = pi/180;

    while(cin>>a>>b>>c>>d)
    {
        l = (double) a;
        w = (double) b;
        h = (double) c;
        theta = (double) d;

        double temp = tan(theta*rad) * l;

        if(temp <=h )
        {
            theta = tan(theta*rad);

            double lon;
            lon = l * theta;

            double ayoton = (0.5 * lon * l) * w;
            double total = l * w * h;

            cout<<fixed<<setprecision(3)<<total-ayoton<<" mL"<<endl;
        }
        else 
        {
            double omega = ((double) 90) - theta;
            omega = tan(omega*rad);

            double lon = h * omega;

            double ayoton = (0.5 * lon * h) * w;
          

            cout<<fixed<<setprecision(3)<<ayoton<<" mL"<<endl; 
        }


    }


    return 0;
}
