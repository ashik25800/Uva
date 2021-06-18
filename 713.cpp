#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<stack>
#include<string.h>

using namespace std;


void calculator(string a,string b)
{

    string main;
    char temp;
    int haat=0,sum;
    for(int i=a.length()-1;i>=0;i--)
    {
        sum = (a[i]-48)   + (b[i]-48) + haat;
        if(sum>9)
        {
            haat = 1;
            sum=sum%10;
        }
        else haat = 0;
        temp = 48+sum;
        main.push_back(temp);
    }if(haat==1)main.push_back('1');


    int terget = 0,l=0;
    for(int i=0;i<main.length();i++)
    {
        if(main[i]>48)
        {
            terget = i;
            break;
        }
    }

    for(int i=terget;i<main.length();i++)
        cout<<main[i];
    cout<<endl;


}


int main()
{
    int n,j,k;
    int temp;
    string a,b,c_a,c_b;
    char first[210],second[210];
    cin>>n;
    while(n--)
    {
        temp = 0;
        c_a="";
        c_b="";
        cin>>a>>b;


        if(a.length()>b.length())
            {
                temp = a.length()-b.length();
                for(int i=0;i<temp;i++)
                    b.push_back('0');
            }
        else
        {
            temp = b.length()-a.length();
            for(int i=0;i<temp;i++)
                a.push_back('0');
        }




        for(int i=a.length()-1;i>=0;i--)
            c_a.push_back(a[i]);
        for(int i=b.length()-1;i>=0;i--)
            c_b.push_back(b[i]);


        calculator(c_a,c_b);

    }


    return 0;
}
