#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;


int main()
{

    int j,cunt;
    string a;


    while(getline(cin,a))
    {
        cunt=0;
        bool flag=0;

        for(int i=0;i<a.length();i++)
        {
            if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')))
            {
                if(!flag)
                {
                    flag=1;
                    cunt++;
                }
                else
                {
                    flag=1;
                }

            }
            else
            {

                flag=0;
            }
        }

        cout<<cunt<<endl;
    }

    return 0;
}
