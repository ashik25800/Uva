#include<bits/stdc++.h>
using namespace std;

int stringtoint(string a)
{
    int f = 0;
    int counter = 1;
    for(int i=a.length()-1;i>=0;i--)
    {
        f += (a[i] - 48) * counter;
        counter*=10;
    }

    return f;
}

bool isitalldistinct(set<int> a, set<int> b)
{
    int small_size = a.size();
    int large_size = b.size();

    int small[small_size];
    int large[large_size];
    int i=0;

    for(auto it = a.begin();it!=a.end();it++)
    {
        small[i] = *it;
        i++;
    }i = 0;
    for(auto it = b.begin();it!=b.end();it++)
    {
        large[i] = *it;
        i++;
    }i = 0;

    for(i = 0;i<small_size;i++)
    {
        if(binary_search(large,large+large_size,small[i]))
            return 0;
    }
    return 1;
}


bool isitsubset(set<int> a,set<int> b)
{
    int small_size = a.size();
    int large_size = b.size();

    int small[small_size];
    int large[large_size];
    int i=0;

    for(auto it = a.begin();it!=a.end();it++)
    {
        small[i] = *it;
        i++;
    }i = 0;
    for(auto it = b.begin();it!=b.end();it++)
    {
        large[i] = *it;
        i++;
    }i = 0;


    for(i = 0;i<small_size;i++)
    {
        if(!binary_search(large,large+large_size,small[i]))
            return 0;
    }
    return 1;
}


int main()
{
    string line,second_line;
    string temp;

    while(getline(cin,line))
    {
        getline(cin,second_line);

        set<int> first,second;

        temp = "";

        for(int i=0;i<line.length();i++)
        {
            if(line[i]!=' ')
                temp.push_back(line[i]);
            
            if(line[i]==' ')
            {
                first.insert(stringtoint(temp));
                temp="";
            }

        }first.insert(stringtoint(temp));
        temp = "";

        for(int i=0;i<second_line.length();i++)
        {
            if(second_line[i]!=' ')
                temp.push_back(second_line[i]);
            if(second_line[i]==' ')
            {
                second.insert(stringtoint(temp));
                temp = "";
            }
        }second.insert(stringtoint(temp));


        if(first.size() == second.size())
        {
            if(first == second)
                cout<<"A equals B"<<endl;

            else if(!isitalldistinct(first,second))
                cout<<"I'm confused!"<<endl;
            else cout<<"A and B are disjoint"<<endl;
        }

        else if(first.size() > second.size())
        {
            if(isitsubset(second,first))
                cout<<"B is a proper subset of A"<<endl;

            else
            {
                if(isitalldistinct(second,first))
                    cout<<"A and B are disjoint"<<endl;
                else cout<<"I'm confused!"<<endl;
            }
            
        }

        else
        {
            if(isitsubset(first,second))
                cout<<"A is a proper subset of B"<<endl;

            else
            {
                if(isitalldistinct(first,second))
                    cout<<"A and B are disjoint"<<endl;
                else cout<<"I'm confused!"<<endl;
            }
        }


    }

    return 0;
}
