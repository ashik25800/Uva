#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<list>


using namespace std;

int main()
{
    string a;
    list<char> main;
    list<char> :: iterator l=main.begin();

    while(cin>>a)
    {
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='[')
                l=main.begin();
            else if(a[i]==']')
                l=main.end();
            else
            {
                main.insert(l,a[i]);
            }
        }

        for(l=main.begin();l!=main.end();l++)
            cout<<*l;
        cout<<endl;

        main.clear();
    }
    
    
    
    
    return 0;
}
