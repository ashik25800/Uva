#include<iostream>
#include<list>
#include<string>
using namespace std;


bool x_cross_checker(string a[])
{
    if(((a[0][0]==a[0][1]&&a[0][0]==a[0][2]) || (a[0][0]==a[1][0]&&a[0][0]==a[2][0]))&&a[0][0]=='X')
        return 1;
    else if (((a[1][0]==a[1][1]&&a[1][0]==a[1][2]) ||(a[0][1]==a[1][1]&&a[0][1]==a[2][1]) || (a[0][0]==a[1][1]&&a[0][0]==a[2][2]) || (a[0][2]==a[1][1]&&a[0][2]==a[2][0])) && a[1][1]=='X')
        return 1;
    else if((((a[2][0]==a[2][1]&&a[2][0]==a[2][2]) || (a[0][2]==a[1][2]&&a[0][2]==a[2][2])))&&a[2][2]=='X')
        return 1;
    else return 0;
}


bool view(string a[])
{
    int x_count=0,o_count=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            {
                if(a[i][j]=='X')
                    x_count++;
                else if(a[i][j]=='O')
                    o_count++;
            }


    if(((a[0][0]==a[0][1]&&a[0][0]==a[0][2]) || (a[0][0]==a[1][0]&&a[0][0]==a[2][0])) && (a[0][0]=='X'||a[0][0]=='O'))
    {

        if(a[0][0]=='X')
        {
            if(x_count==o_count+1)
                return 1;
            else return 0;

        }

        else if(a[0][0]=='O')
        {
            if(!x_cross_checker(a))
            {

                if(x_count==o_count)
                    return 1;
                else return 0;
            }
            else return 0;
        }




    }
    else if(((a[1][0]==a[1][1]&&a[1][0]==a[1][2]) ||(a[0][1]==a[1][1]&&a[0][1]==a[2][1]) || (a[0][0]==a[1][1]&&a[0][0]==a[2][2]) || (a[0][2]==a[1][1]&&a[0][2]==a[2][0])) && (a[1][1]=='X'||a[1][1]=='O'))
    {
        if(a[1][1]=='X')
            {
                if(x_count==o_count+1)
                    return 1;
                else return 0;
            }
        else if(a[1][1]=='O')
        {
            if(!x_cross_checker(a))
            {
                if(x_count==o_count)
                    return 1;
                else return 0;
            }
            else return 0;
        }

    }
    else if(((a[2][0]==a[2][1]&&a[2][0]==a[2][2]) || (a[0][2]==a[1][2]&&a[0][2]==a[2][2])) && (a[2][2]=='X'||a[2][2]=='O'))
    {


        if(a[2][2]=='X')
            {
                if(x_count==o_count+1)
                    return 1;
                else return 0;
            }
        else if(a[2][2]=='O')
        {
            if(!x_cross_checker(a))
            {
                if(x_count==o_count)
                    return 1;
                else return 0;
            }
            else return 0;
        }
    }





    else
    {
        if(x_count==o_count+1)
            return 1;
        else if(x_count==o_count)
            return 1;
        else return 0;
    }



}

int main()
{

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string in[3];

        for(int ii=0;ii<3;ii++)
            cin>>in[ii];

        if(!view(in)) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
    }



    return 0;
}
