#include<stdio.h>
#include<iostream>
#include<iomanip>

#define c 12.01
#define h 1.008
#define o 16.00
#define n 14.01

using namespace std;

bool num_checker(char a)
{
    if(a>='0'&&a<='9')
        return 1;
    else return 0;
}

int char_to_num(char a)
{
    int b=(int )a;
    return b-48;
}

void processor(string eq)
{
    int C=0,H=0,O=0,N=0;
    for(int i=0;i<eq.length();i++)
    {
        int siz=0;
        if(num_checker(eq[i]))
        {
            if(num_checker(eq[i+1]))
            {
                siz =  (char_to_num(eq[i+1]))+((char_to_num(eq[i]))*10);
                siz--;
                eq[i+1]='X';
                eq[i]='X';
            }
            else {
                siz=char_to_num(eq[i])-1;
                eq[i]='X';
            }
        }

        if(eq[i-1]=='C')C+=siz;
        else if(eq[i-1]=='H')H+=siz;
        else if(eq[i-1]=='O')O+=siz;
        else N+=siz;
    }
    for(int i=0;i<eq.length();i++)
    {
        if(eq[i]=='C')
            C++;
        else if(eq[i]=='H')
            H++;
        else if(eq[i]=='O')
            O++;
        else if(eq[i]=='N')
            N++;
    }
    double cal=(C*c)+(H*h)+(N*n)+(O*o);
    cout<<fixed<<setprecision(3)<<cal<<endl;
}

int main()
{
    string equ;
    int x;
    cin>>x;
    while(x--)
    {
        cin>>equ;
        processor(equ);
    }

    return 0;
}
