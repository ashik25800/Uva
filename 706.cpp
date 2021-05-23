#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

using namespace std;



void num_to_arr(int num,int num_arr[])
{

    int i=0;
    while(num!=0)
    {
        num_arr[i]= num%10;
        num/=10;
        i++;
    }

}
int sizeofarry(int num)
{
    int siz=0;
    while(num!=0){
        num/=10;
        siz++;}

    return siz;
}

void first_layer(int a,int siz)
{
    siz=siz+2;
    char ch[siz];
    if(a==1||a==4)
    {
        for(int i=0;i<siz;i++)
            ch[i]=' ';
    }
    else
    {
        ch[0]=' ';
        ch[siz-1]=' ';
        for(int i=1;i<siz-1;i++)
            ch[i]='-';
    } ch[siz]='\0';

    cout<<ch;

}
void second_layer(int a,int siz)
{
    siz=siz+2;
    char ch[siz];

    if(a==1||a==2||a==7||a==3)
    {
        ch[siz-1]='|';
        for(int i=0;i<siz-1;i++)
            ch[i]=' ';
    }
    else if(a==5)
    {
        ch[0]='|';
        for(int i=1;i<siz;i++)
            ch[i]=' ';
    }
    else
    {
        ch[0]='|';
        ch[siz-1]='|';
        for(int i=1;i<siz-1;i++)
            ch[i]=' ';
    }ch[siz]='\0';

    cout<<ch;


}
void third_layer(int a,int siz)
{
    siz=siz+2;
    char ch[siz];

    if(a==1||a==7||a==0)
    {
        for(int i=0;i<siz;i++)
            ch[i]=' ';
    }
    else
    {
        ch[0]=' ';
        ch[siz-1]=' ';
        for(int i=1;i<siz-1;i++)
            ch[i]='-';
    }ch[siz]='\0';

    cout<<ch;
}
void fourth_layer(int a,int siz)
{
    siz=siz+2;
    char ch[siz];

    if(a==2)
    {
        ch[0]='|';
        for(int i=1;i<siz;i++)
            ch[i]=' ';
    }
    else if(a==6||a==8||a==0)
    {
        ch[0]='|';
        ch[siz-1]='|';
        for(int i=1;i<siz-1;i++)
            ch[i]=' ';
    }
    else
    {
        ch[siz-1]='|';
        for(int i=0;i<siz-1;i++)
            ch[i]=' ';
    }ch[siz]='\0';
    cout<<ch;
}

void fifth_layer(int a,int siz)
{
    siz=siz+2;
    char ch[siz];

    if(a==1||a==4||a==7)
    {
        for(int i=0;i<siz;i++)
            ch[i]=' ';
    }
    else
    {
        ch[0]=' ';
        ch[siz-1]=' ';
        for(int i=1;i<siz-1;i++)
            ch[i]='-';

    }ch[siz]='\0';
    cout<<ch;

}


void for_0_coz_its_not_working(int siz)
{
    int high=siz;
    siz=siz+2;
    char ch[siz];
    for(int i=0;i<siz;i++)
    {
        if(i==0||i==siz-1)
            cout<<' ';
        else cout<<'-';
    }cout<<endl;

    for(int i=0;i<high;i++)
    {
        for(int j=0;j<siz;j++)
        {
            if(j==0||j==siz-1)
                cout<<'|';
            else cout<<' ';
        }cout<<endl;
    }
    for(int i=0;i<siz;i++)
        cout<<' ';
    cout<<endl;
    for(int i=0;i<high;i++)
    {
        for(int j=0;j<siz;j++)
        {
            if(j==0||j==siz-1)
                cout<<'|';
            else cout<<' ';
        }cout<<endl;
    }
    for(int i=0;i<siz;i++)
    {
        if(i==0||i==siz-1)
            cout<<' ';
        else cout<<'-';
    }cout<<endl;

}


void view(int siz,int num)
{

    int num_arr[sizeofarry(num)];
    num_to_arr(num,num_arr);



    for(int i=(sizeof(num_arr)/sizeof(num_arr[0]))-1;i>=0;i--)
    {
        first_layer(num_arr[i],siz);
        cout<<' ';
    }cout<<endl;

    for(int j=0;j<siz;j++)
    {
        for(int i=(sizeof(num_arr)/sizeof(num_arr[0]))-1;i>=0;i--)
        {
            second_layer(num_arr[i],siz);
            cout<<' ';
        }cout<<endl;
    }
    for(int i=(sizeof(num_arr)/sizeof(num_arr[0]))-1;i>=0;i--)
    {
        third_layer(num_arr[i],siz);
        cout<<' ';
    }cout<<endl;

    for(int j=0;j<siz;j++)
    {
        for(int i=(sizeof(num_arr)/sizeof(num_arr[0]))-1;i>=0;i--)
        {
            fourth_layer(num_arr[i],siz);
            cout<<' ';
        }cout<<endl;
    }
    for(int i=(sizeof(num_arr)/sizeof(num_arr[0]))-1;i>=0;i--)
    {
        fifth_layer(num_arr[i],siz);
        cout<<' ';
    }cout<<endl;




}


int main()
{
    int siz,num;

    while(1)
    {
        cin>>siz>>num;
        if(siz==0 && num == 0)
            break;

        if(num==0) for_0_coz_its_not_working(siz);

        else view(siz,num);
    }

    return 0;
}
