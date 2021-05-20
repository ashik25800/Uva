#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string space_remover(string terget)
{
    int j=0;
    char out[100];
    for(int i=0;i<terget.length();i++)
    {
        if(terget[i]!=' ')
        {
            out[j]=terget[i];
            j++;
        }
    }
    out[j]='\0';
    return out;
}


int char_to_num(char a)
{
    if(a=='X')
        return 10;
    return  (int)a-48;
}
void calculator(string input)
{
    int score_series[input.length()];
    for(int i=0;i<input.length();i++)
        score_series[i]=0;

    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='X')
        {
            if((i+2==input.length())||(i+1==input.length()))
                score_series[i]=10;
            else
            {

                score_series[i]=10;

                if(input[i+2]=='/')
                    {
                        score_series[i]=20;
                    }

                else
                {

                    score_series[i]+=char_to_num(input[i+1])+char_to_num(input[i+2]);
                }

            }

        }
        else if(input[i]=='/')
        {
            if(i+1>=input.length())
            {
                score_series[i]=(10-char_to_num(input[i-1]));
            }
            else
            {

                score_series[i]=(10-char_to_num(input[i-1]))+char_to_num(input[i+1]);
            }
        }
        else score_series[i]=char_to_num(input[i]);

    }
    int grid[11][2];
    int sum=0;

    for(int i=0;i<11;i++)
        for(int j=0;j<2;j++)
            grid[i][j]=0;
    int k=0;

    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='X')
        {
            grid[k][0]=score_series[i];
            k++;
        }
        else
        {
            grid[k][0]=score_series[i];
            grid[k][1]=score_series[i+1];
            k++;
            i++;
        }
    }


    for(int i=0;i<10;i++)
        for(int j=0;j<2;j++)
            sum+=grid[i][j];

    cout<<sum<<endl;




}

int main()
{
    string input;
    while(1)
    {
        getline(cin,input);
        if(input=="Game Over")
            break;

        input=space_remover(input);
        calculator(input);

    }
    return 0;
}
