#include<bits/stdc++.h>
using namespace std;

//doing that thing with the help of adjency list


int main()
{   
    int n,m;
    while(cin>>n>>m)
    {
        map<int, vector<int>> mp; //all v(i) location will entered into this map

        int a[n];
        int k,v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]].push_back(i+1); //same numbers are entering into one vector
        }

        while(m--)
        {
            cin>>k>>v;
            if(mp[v].size()) //checking the number is exisist or not
            {
                if(mp[v].size()<k) //checking the occerence is less then the length or not
                    cout<<0<<endl;
                else
                {
                    cout<<mp[v][k-1]<<endl; //for pisitive signal it's printing the location
                }
            }
            else cout<<0<<endl;
        }


    }


    return 0;
}
