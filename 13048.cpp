#include<bits/stdc++.h>
using namespace std;

#define b_five a[i-1]
#define a_five a[i+1]
#define b_ten a[i-2]
#define is_clear =='-'
#define is_occupied = 'X';


int main()
{
    int n;
    cin>>n;
    string a;
    for(int k=1;k<=n;k++)
    {
        cin>>a;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='B')
            {
                if(b_five is_clear)
                    b_five is_occupied
                if(b_ten is_clear)
                    b_ten is_occupied

            }

            else if(a[i] == 'S')
            {
                if(b_five is_clear)
                    b_five is_occupied
                if(a_five is_clear)
                    a_five is_occupied
            }
        }

        int count = 0;
        for(int i=0;i<a.length();i++)
            if(a[i] is_clear)
                count++;

        cout<<"Case "<<k<<": "<<count<<endl;

    }


    return 0;
}
