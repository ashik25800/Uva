#include<iostream>
#include<stdio.h>


using namespace std;

int strTonum(string a)
{
    int n=0,x=1;
    for(int i=a.length()-1;i>=0;i--)
    {
        n += (a[i]-48)*x;
        x*=10;
    }
    return n;
}


bool processor(string a)
{
    string l,r,sum;
    bool for_l=0,for_sum = 0,add=1;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='+'||a[i]=='-')
        {
            if(a[i]=='-')
                add=0;
            for_l = 1;
            i++;
        }
        if(a[i]=='=')
        {
            for_sum = 1;
            i++;
        }
        if(!for_l) l.push_back(a[i]);
        else if(for_l && !for_sum) r.push_back(a[i]);
        else if(for_sum) sum.push_back(a[i]);
    }
    if(sum[0]=='?')
        return 0;
    int L,R,SUM;
    L=strTonum(l);
    R=strTonum(r);
    SUM=strTonum(sum);

    if(((L+R)==SUM)&&add)
        return 1;
    else if(((L-R)==SUM)&&!add)
        return 1;
    else return 0;


}

int main()
{
    string a;
    int n=0;
    while(cin>>a)
    {
        if(processor(a))
            n++;
    }

    cout<<n<<endl;


    return 0;
}
