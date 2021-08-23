#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    map<string,double> birth;
    int day,month,year;

    while(n--)
    {
        cin>>a>>day>>month>>year;

        double round_year = ((double)(day) + ((double)month*30)) / 365;
        round_year+= (double )year;

        birth[a] = round_year;
    }

    map<string,double> :: iterator it = birth.begin();
    string max_name,min_name;
    double max,min;
    max_name = min_name = it->first;
    max = min = it->second;
    
    for(auto i=birth.begin();i!=birth.end();i++)
    {
        if(i->second >max)
        {
            max = i->second;
            max_name = i->first;
        }
        if(i->second < min)
        {
            min = i->second;
            min_name = i->first;
        }
    }


    cout<<max_name<<endl<<min_name<<endl;
    return 0;
}
