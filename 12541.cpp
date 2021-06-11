//done but runtime error

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<sstream>
#include<bits/stdc++.h>
#define DAY 365.2425
using namespace std;


float char_to_num(string day,string month,string year)
{
    float n=0.0,total=0.0,temp=0.0;
    stringstream y(year);
    y>>n;
    total+=n;
    stringstream m(month);
    m>>n;
    n*=30;
    temp+=n;
    stringstream d(day);
    d>>n;
    temp+=n;

    temp/=DAY;
    total+=temp;


    return total;

}

void print_this(string x[],int n)
{
    float for_sort[n],uniq;

    for(int i=0;i<n;i++)
    {
        int loc[3];
        int cont=1,d=0,m= 0,y=0;
        char day[5],month[4],year[5];

        for(int j=0;j<(x[i].length());j++)
        {
            if(x[i][j]==' '&&cont==1)
            {
                cont++;
                loc[0]=j;
            }
            else if(x[i][j]==' '&&cont==2)
            {
                cont++;
                loc[1]=j;
            }
            else if(x[i][j]==' '&&cont==3)
            {
                loc[2]=j;
            }
        }

        for(int k=loc[0]+1;k<loc[1];k++)
        {
            day[d]=x[i][k];
            d++;
        } day[d]='\0';

        for(int k=loc[1]+1;k<loc[2];k++)
        {
            month[m]=x[i][k];
            m++;
        } month[m]='\0';string mon=month;

        for(int k=loc[2]+1;k<=x[i].length();k++)
        {
            year[y]=x[i][k];
            y++;
        } year[y]='\0';
        uniq=char_to_num(day,mon,year);
        for_sort[i]=uniq;


    }
    float for_sort_copy[n];
    for(int i=0;i<n;i++)
        for_sort_copy[i]=for_sort[i];

    sort(for_sort_copy,for_sort_copy+n);

    int minimum,maximum;

    for(int i=0;i<n;i++)
    {
        if(for_sort[i]==for_sort_copy[0])
            minimum=i;
        if(for_sort[i]==for_sort_copy[n-1])
            maximum=i;
    }


    for(int i=0;i<n;i++)
    {
        if(i==minimum)
        {
            int j=0;
            while(x[i][j]!=' ')
                {
                    cout<<x[i][j];
                    j++;
                }cout<<endl;
        }

        if(i==maximum)
        {
            int j=0;
            while(x[i][j]!=' ')
            {
                cout<<x[i][j];
                j++;
            }cout<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    string x[n];
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,x[i]);
    }

    print_this(x,n);
    return 0;
}
