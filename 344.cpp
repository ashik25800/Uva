#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;


string first[10]={"","i","ii","iii","iv","v","vi","vii","viii","ix"};
string deci[10]={"","x","xx","xxx","xl","l","lx","lxx","lxxx","xc"};

void cal(int n)
{
    string a;
    if(n==100)
    {
        cout<< "100: 0 i, 0 v, 0 x, 0 l, 1 c" <<endl;
        return;
    }

    int I=0,v=0,x=0,L=0,c=0;

    for(int i=1;i<=n;i++)
    {

        int l=i%10,f=(i/10)%10;
        a=deci[f]+first[l];

        for(int k=0;k<a.length();k++)
        {
            if(a[k]=='i')
                I++;
            else if(a[k]=='v')
                v++;
            else if(a[k]=='x')
                x++;
            else if(a[k]=='l')
                L++;
            else if(a[k]=='c')
                c++;
        }

    }

    cout<<n<<": "<<I<<" i, "<<v<<" v, "<<x<<" x, "<<L<<" l, "<<c<<" c"<<endl;

}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cal(n);


    }

    return 0;
}
