#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<list>


using namespace std;


bool char_checker(char ch)
{
    if(((ch>='a'&& ch<='z') ||(ch>='A' && ch<='Z')))
        return 1;
    else return 0;

}

bool num_checker(char ch)
{
    if(ch>='0'&&ch<='9')
        return 1;
    else return 0;
}

int strTonum(string a)
{
    int ch,x=1,n=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        ch=(int )a[i];

        n+= (ch-48) *x;
        x*=10;
    }
    return n;
}

int main()
{
    char ch,checker='a';
    string a;

    while(1)
    {
        ch = getchar();
        if(ch=='0'&& !num_checker(checker))
            break;
        checker = ch;
        a.push_back(ch);

    }


    string temp,num_temp,output;
    list<string> lst;
    list<string> :: iterator l;
    int loc,k;
    string temp_list;

    for(int i=0;i<a.length();i++)
    {
        if(num_checker(a[i]))
        {
            while(num_checker(a[i])!=0)
            {
                num_temp.push_back(a[i]);
                i++;
            }

            loc = strTonum(num_temp);
            num_temp="";

            k=1;
            temp_list="";
            for(l=lst.begin();l!=lst.end();l++)
            {
                if(k==loc)
                {
                    temp_list = *l;
                    lst.remove(*l);
                    break;
                }
                k++;

            }

            lst.push_front(temp_list);
            for(int j=0;j<temp_list.length();j++)
                output.push_back(temp_list[j]);

        }

        if(char_checker(a[i]))
        {

            while(char_checker(a[i])!=0)
            {
                output.push_back(a[i]);
                temp.push_back(a[i]);
                i++;
            }i--;
            lst.push_front(temp);
            temp="";
        }
        else output.push_back(a[i]);

    }

    cout<<output;

    return 0;
}
