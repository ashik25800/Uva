#include<bits/stdc++.h>
using namespace std;


void view(int a[],int b[],int c[],int l,int m,int n,int *first,int *second,int *third)
{
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<l;i++)
        if(a[i]!=0)
            x++;
    for(int j=0;j<m;j++)
        if(b[j]!=0)
            y++;
    for(int i=0;i<n;i++)
        if(c[i])
            z++;

    *first = x;
    *second = y;
    *third = z;
}

int main()
{
    int n,o,t,th;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>o;
       int one[o];
       for(int j=0;j<o;j++)
            cin>>one[j];

        cin>>t;
        int two[t];
        for(int j=0;j<t;j++)
            cin>>two[j];

        cin>>th;
        int three[th];
        for(int j=0;j<th;j++)
            cin>>three[j];

        for(int j=0;j<o;j++)
        {
            if(one[j])
            {
                bool isfound = 0;
                for(int k=0;k<t;k++)
                {
                    if(one[j]==two[k])
                    {
                        two[k]=0;
                        isfound =1;
                        break;
                    }
                }
                for(int k=0;k<th;k++)
                {
                    if(one[j]==three[k])
                    {
                        one[j] = 0;
                        three[k] = 0;
                        break;
                    }
                    
                }
                if(isfound)
                    one[j] = 0;
            }
        }

        for(int j=0;j<t;j++)
        {
            if(two[j])
            {
                bool isfound = 0;
                for(int k=0;k<o;k++)
                {
                    if(two[j]==one[k])
                    {
                        one[k]=0;
                        isfound =1;
                        break;
                    }
                }
                for(int k=0;k<th;k++)
                {
                    if(two[j]==three[k])
                    {
                        two[j] = 0;
                        three[k] = 0;
                        break;
                    }
                    
                }
                if(isfound)
                    two[j] = 0;
            }
        }
        sort(one,one+o);
        sort(two,two+t);
        sort(three,three+th);
        int first,second,third;
        view(one,two,three,o,t,th,&first,&second,&third);

        int max;
        int terget;
        if(first>=second && first>=third)
        {
            max = first;
            terget = 1;
        }
        else if(second>=first && second>=third)
        {
            max = second;
            terget = 2;
        }    
        else 
        {
            max = third;
            terget = 3;
        }
        cout<<"Case #"<<i<<":"<<endl;


        if(terget == 1)
        {
            cout<<terget<<" "<<max;
            for(int l=0;l<o;l++)
            {
                if(one[l])
                {
                    cout<<" "<<one[l];
                }
            }cout<<endl;
            if(max==second)
            {
                cout<<2<<" "<<max;
                for(int l=0;l<t;l++)
                {
                    if(two[l])
                    {
                        cout<<" "<<two[l];
                    }
                }cout<<endl;
            }
            if(max == third)
            {
                cout<<3<<" "<<max;
                for(int l=0;l<th;l++)
                {
                    if(three[l])
                    {
                        cout<<" "<<three[l];
                    }
                }cout<<endl;
            }

        }
        else if(terget == 2)
        {
            cout<<terget<<" "<<max;
            for(int l=0;l<t;l++)
            {
                if(two[l])
                {
                    cout<<" "<<two[l];
                }
            }cout<<endl;
            if(max == first)
            {
                cout<<1<<" "<<max;
                for(int l=0;l<o;l++)
                {
                    if(one[l])
                    {
                        cout<<" "<<one[l];
                    }
                }cout<<endl;

            }
            if(max == third)
            {
                cout<<3<<" "<<max;
                for(int l=0;l<th;l++)
                {
                    if(three[l])
                    {
                        cout<<" "<<three[l];
                    }
                }cout<<endl;
            }
        }

        else
        {
            cout<<terget<<" "<<max;
            for(int l=0;l<th;l++)
            {
                if(three[l])
                {
                    cout<<" "<<three[l];
                }
            }cout<<endl;
            if(max == first)
            {
                cout<<1<<" "<<max;
                for(int l=0;l<o;l++)
                {
                    if(one[l])
                    {
                        cout<<" "<<one[l];
                    }
                }cout<<endl;
            }

            if(max ==  second)
            {
                cout<<2<<" "<<max;
                for(int l=0;l<o;l++)
                {
                    if(one[l])
                    {
                        cout<<" "<<one[l];
                    }
                }cout<<endl;
            }
        }

    }


    return 0;
}
