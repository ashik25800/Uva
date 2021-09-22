#include<bits/stdc++.h>
using namespace std;


//it can be done easily with STL set

int main()
{
    string raw;
    set<string> dict;

    while(getline(cin,raw))
    {
        string temp;
        for(int i=0;i<raw.length();i++)
        {
            if((raw[i]>='A'&&raw[i]<='Z') || (raw[i]>='a' && raw[i]<='z'))//only word will push in temp
            {
                temp.push_back(raw[i]);
            }
            else
            {
                if(temp!="")
                {
                    for(int i=0;i<temp.length();i++) //if temp is not null then all uper-case will lower
                    {
                        if(temp[i]>='A'&&temp[i]<='Z')
                            temp[i] = temp[i]+32;
                    }
                    dict.insert(temp); //word will insert into the dict named set
                    temp = "";
                }
                
            }
        }if (temp!="")  //remeining word will insert again
        {
            for(int i=0;i<temp.length();i++)
                    {
                        if(temp[i]>='A'&&temp[i]<='Z')
                            temp[i] = temp[i]+32;
                    }
            dict.insert(temp);
        }
    }

    for(auto i=dict.begin();i!=dict.end();i++) //printing the dictionary
        cout<<*i<<endl;

    return 0;
}
