#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    int search;
    for(int i=0;i<x;i++)
    {
        cin>>search;
        search--;
        if(a[search]!="?")
            cout<<a[search]<<endl;
        else
        {
            int left = -1;
            int right = -1;

            for(int j=search+1;j<n;j++)
            {
                if(a[j]!="?")
                {
                    right = j;
                    break;
                }
            }

            for(int j=search-1;j>=0;j--)
            {
                if(a[j]!="?")
                {
                    left = j;
                    break;
                }
            }


            if(left == -1)
            {
              
                int temp = right - search;
                while(temp--)
                    cout<<"left of ";
                cout<<a[right]<<endl;
            }

            else if(right == -1)
            {
                int temp = search - left;
                while(temp--)
                    cout<<"right of ";
                cout<<a[left]<<endl;
            }

            else if(   (right-search) == (search-left)   && (right!=-1) &&(left!=-1)  )
            {


                cout<<"middle of "<<a[left]<<" and "<<a[right]<<endl;
            }

            else if(  (right-search) < (search-left) && (right!=-1) &&(left!=-1)  )
            {
                int temp = right - search;
                while(temp--)
                    cout<<"left of ";
                cout<<a[right]<<endl;
            }
            else if( (right-search) > (search-left) && (right!=-1) &&(left!=-1) )
            {
                int temp= search - left;
                while(temp--)
                    cout<<"right of ";
                cout<<a[left]<<endl;
            }
            
        }

        




    }


    return 0;
}
