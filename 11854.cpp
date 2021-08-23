#include<bits/stdc++.h>
using namespace std;

void max_maker(int *a,int *b,int *c)
{
    int temp;
    if(*a > *b && *a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    else if(*b > *a && *b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }

}

int main()
{
    int a,b,c;

    while(1)
    {
        cin>>a>>b>>c;
        if(a == 0 && b == a && c == a)
            break;

        max_maker(&a,&b,&c);

        if(c>=(a+b) || (a==b && c==a))
        {
            cout<<"wrong"<<endl;
        }
        else
        {
            int squre_sum = (a*a) + (b*b);
            squre_sum = sqrt(squre_sum);

            if(squre_sum == c)
                cout<<"right"<<endl;
            else cout<<"wrong"<<endl;

        }

        

    }


    return 0;
}
