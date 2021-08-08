#include<bits/stdc++.h>
using namespace std;

bool prime[1000000];

int main()
{
    for(int i=0;i<1000000;i++)
        prime[i]=true;
  
    int root = sqrt(1000000);
    prime[0] = prime[1] = false;

    for(int i=2;i<=root;i++)
    {
        for(int j=i*i;j<1000000;j+=i)
            prime[j] = false;

    }

    int n;
    int temp;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        bool isfound = 0;

        for(int i=2;i<=(n/2);i++)
        {
            if(prime[i])
            {
                temp = n-i;
                if(prime[temp])
                {
                    cout<<n<<" = "<<i<<" + "<<temp<<endl;
                    isfound = 1;
                    break;
                }
            }
        }

        if(!isfound)
            cout<<"Goldbach's conjecture is wrong."<<endl;


    }


    



    return 0;
}
