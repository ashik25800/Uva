#include<iostream>
#include<stdio.h>

using namespace std;

char ch[8][8];


void star_maker()
{
    for (int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            ch[i][j]=42;

}

void viewer()
{
    for (int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cout<<ch[i][j];
            }cout<<endl;
        }
}




int loc=0;
void position_maker(int i,char k)
{
    ch[i][loc]=k;
    loc++;
}

void occupied_area_maker()
{
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            if(ch[i][j]=='p')
            {

               if(ch[i+1][j+1]=='*'&&j+1<8)
                    ch[i+1][j+1]='0';
                if(ch[i+1][j-1]=='*'&&j-1>=0)
                    ch[i+1][j-1]='0';
            }
            else if(ch[i][j]=='P')
            {
                if(ch[i-1][j+1]=='*'&&j+1<8)
                    ch[i-1][j+1]='0';
                if(ch[i-1][j-1]=='*'&&j-1>=0)
                    ch[i-1][j-1]='0';
            }

            else if(ch[i][j]=='r'||ch[i][j]=='R')
            {
                int k=i-1;
                while((ch[k][j]=='*'||ch[k][j]=='0')&&k>=0)
                    {
                        ch[k][j]='0';
                        k--;
                    }
                k=i+1;
                while((ch[k][j]=='*'||ch[k][j]=='0') && k<=7)
                {
                    ch[k][j]='0';
                        k++;
                }

                k = j-1;
                while((ch[i][k]=='*'||ch[i][k]=='0')&&k>=0)
                {
                    ch[i][k]='0';
                    k--;
                }
                k = j+1;
                while((ch[i][k]=='*'||ch[i][k]=='0')&& k<=7)
                {
                    ch[i][k]='0';
                    k++;
                }

            }

            else if(ch[i][j]=='n'||ch[i][j]=='N')
            {
                if(ch[i-2][j-1]=='*'&&i-1>-1&&j-1>-1)
                    ch[i-2][j-1]='0';
                if(ch[i-2][j+1]=='*'&&i-2>-1&&j+1<8)
                    ch[i-2][j+1]='0';
                if(ch[i-1][j+2]=='*'&&i-1>-1&&j+2<8)
                    ch[i-1][j+2]='0';
                if(ch[i-1][j-2]=='*'&&i-1>-1&&j-2>-1)
                    ch[i-1][j-2]='0';
                if(ch[i+1][j-2]=='*'&&i+1<8&&j-2>-1)
                    ch[i+1][j-2]='0';
                if(ch[i+2][j-1]=='*'&&i+2<8&&j-1>-1)
                    ch[i+2][j-1]='0';
                if(ch[i+2][j+1]=='*'&&i+2<8&&j+1<8)
                    ch[i+2][j+1]='0';
                if(ch[i+1][j+2]=='*'&&i+1<8&&j+2<8)
                    ch[i+1][j+2]='0';

            }

            else if(ch[i][j]=='k'||ch[i][j]=='K')
            {
                if(ch[i-1][j-1]=='*'&& i-1>-1&&j-1>-1)
                    ch[i-1][j-1]='0';
                if(ch[i-1][j]=='*'&&i-1>-1)
                    ch[i-1][j]='0';
                if(ch[i-1][j+1]=='*'&&i-1>-1&&j+1<8)
                    ch[i-1][j+1]='0';
                if(ch[i][j-1]=='*'&&j-1>-1)
                    ch[i][j-1]='0';
                if(ch[i][j+1]=='*'&&j+1<8)
                    ch[i][j+1]='0';
                if(ch[i+1][j-1]=='*'&&i+1<8&&j-1>-1)
                    ch[i+1][j-1]='0';
                if(ch[i+1][j]=='*'&&i+1<8)
                    ch[i+1][j]='0';
                if(ch[i+1][j+1]=='*'&&i+1<8&&j+1<8)
                    ch[i+1][j+1]='0';
            }

            else if(ch[i][j]=='b'||ch[i][j]=='B')
            {
                int k=i+1;
                int l=j-1;

                while((ch[k][l]=='*'||ch[k][l]=='0') && k<8 && l>-1)
                {
                    ch[k][l]='0';
                    k++;
                    l--;
                }
                k=i-1;
                l=j+1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k>-1&&l<8)
                {
                    ch[k][l]='0';
                    k--;
                    l++;
                }
                k=i-1;
                l=j-1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k>-1&&l>-1)
                {
                    ch[k][l]='0';
                    k--;
                    l--;
                }
                k=i+1;
                l=j+1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k<8&&l<8)
                {
                    ch[k][l]='0';
                    k++;
                    l++;
                }


            }


            else if(ch[i][j]=='q'||ch[i][j]=='Q')
            {
                int k=i-1;
                while((ch[k][j]=='*'||ch[k][j]=='0')&&k>=0)
                    {
                        ch[k][j]='0';
                        k--;
                    }
                k=i+1;
                while((ch[k][j]=='*'||ch[k][j]=='0') && k<=7)
                {
                    ch[k][j]='0';
                        k++;
                }

                k = j-1;
                while((ch[i][k]=='*'||ch[i][k]=='0')&&k>=0)
                {
                    ch[i][k]='0';
                    k--;
                }
                k = j+1;
                while((ch[i][k]=='*'||ch[i][k]=='0')&& k<=7)
                {
                    ch[i][k]='0';
                    k++;
                }


                 k=i+1;
                int l=j-1;

                while((ch[k][l]=='*'||ch[k][l]=='0') && k<8 && l>-1)
                {
                    ch[k][l]='0';
                    k++;
                    l--;
                }
                k=i-1;
                l=j+1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k>-1&&l<8)
                {
                    ch[k][l]='0';
                    k--;
                    l++;
                }
                k=i-1;
                l=j-1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k>-1&&l>-1)
                {
                    ch[k][l]='0';
                    k--;
                    l--;
                }
                k=i+1;
                l=j+1;
                while((ch[k][l]=='*'||ch[k][l]=='0')&&k<8&&l<8)
                {
                    ch[k][l]='0';
                    k++;
                    l++;
                }


            }
        }
    }
}

void counter()
{
    int siz=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(ch[i][j]=='*')
                siz++;
    cout<<siz<<endl;
}


int main()
{
    string a;
    while(cin>>a)
    {
        star_maker();

        int i=0;
        for (int k=0;k<a.length();k++)
        {
            if (a[k]=='/')
            {
                i++;
                loc=0;
            }
            else if (a[k]>=49 && a[k]<=57)
            loc+=(a[k]-48);
            else position_maker(i,a[k]);

        }

        occupied_area_maker();

        counter();
        loc=0;
    }




    return 0;
}
