#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<stack>
#include<string.h>
using namespace std;


string cons = "aeiouAEIOU";
string digit ="0123456789";


bool vow_checker(char ch)
{
    for(int i=0;i<cons.length();i++)
        if(ch==cons[i])
            return 1;
    return 0;
}
bool digit_checker(char ch)
{
    if(ch>='0'&&ch<='9')
        return 1;
    return 0;
}
bool valid_char(char ch)
{
    if(digit_checker(ch)||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        return 1;
    return 0;
}

int main()
{
    string a;
    char temp;
    while(getline(cin,a))
    {
        bool flag = 1;
        for(int i=0;i<a.length();i++)
        {
            if(valid_char(a[i]))
            {
                if(flag && !vow_checker(a[i]) && !digit_checker(a[i]))
                {
                    temp = a[i];
                    i++;
                    while(valid_char(a[i])&&!digit_checker(a[i]))
                    {
                        cout<<a[i];
                        i++;
                    }cout<<temp<<"ay";
                    i--;
                    flag = 0;

                }
                else if(flag && vow_checker(a[i])&& !digit_checker(a[i]))
                {
                    while(valid_char(a[i])&&!digit_checker(a[i]))
                    {
                        cout<<a[i];
                        i++;
                    }cout<<"ay";
                    i--;
                    flag =0;
                }
                else
                {
                    cout<<a[i];
                    flag =1;
                }

            }
            else
            {
                cout<<a[i];
                flag =1;
            }

        }cout<<endl;
    }


    return 0;
}
