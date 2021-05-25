#include<stdio.h>
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;



int main()
{
    int n,loc1,avg;
    list<int> a;

    while(cin>>n)
    {

        list<int> :: iterator i;
        a.push_back(n);
        a.sort();

        if(a.size()%2!=0)
        {
            i=a.begin();

            advance(i,a.size()/2);
            cout<<*i<<endl;
        }
        else
        {
            i=a.begin();

            loc1=(a.size()/2)-1,avg=0;
            advance(i,loc1);
            avg+=*i;
            i++;
            avg+=*i;
            cout<<avg/2<<endl;
        }



    }


    return 0;
}
