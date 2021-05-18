#include<stdio.h>
#include<iostream>
using namespace std;


void show(int arr[],int siz)
{
    for(int i=0;i<siz;i++)
        cout<<"Position of player "<<i+1<<" is "<<arr[i]<<'.'<<endl;

}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int player_count,ladders_snakes_count,die_count;
        cin>>player_count>>ladders_snakes_count>>die_count;

        int player[player_count];
        int head[ladders_snakes_count],tail[ladders_snakes_count];
        int die[die_count];

        for(int ii=0;ii<ladders_snakes_count;ii++)
            cin>>head[ii]>>tail[ii];


        for(int ii=0;ii<die_count;ii++)
            cin>>die[ii];

        for(int ii=0;ii<player_count;ii++)
            player[ii]=1;

        int j=0;
        for(int ii=0;ii<die_count;ii++)
        {
            player[j]+=die[ii];
            for(int k=0;k<ladders_snakes_count;k++)
            {
                if(player[j]==head[k])
                    player[j]=tail[k];
            }

            if(player[j]>=100)
            {
                player[j]=100;
                break;
            }


            j++;
            if(j==player_count)
                j=0;
        }

        show(player,sizeof(player)/sizeof(player[0]));

    }

    return 0;
}
