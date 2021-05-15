#include<iostream>
#include<stdio.h>
using namespace std;

void co_checker(int coardent,int *x,int *y)
{
    int a[8][8],k=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            {
                a[i][j]=k;
                k++;
            }


    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(a[i][j]==coardent)
            {
                *x=i;
                *y=j;
                return;
            }


}

bool validity(int king_x,int king_y,int mov_x,int mov_y)
{
    if(((mov_x==king_x&&mov_y==king_y)||(mov_x==king_x+1&&mov_y==king_y)||(mov_x==king_x-1&&mov_y==king_y)||(mov_x==king_x&&mov_y==king_y+1)||(mov_x==king_x&&mov_y==king_y-1)))
        return 0;
    return 1;
}

bool over_flow_checker(int king_x,int king_y,int queen_x,int queen_y,int mov_x,int mov_y)
{

    if(mov_x==queen_x && king_x==mov_x)
    {
        if(mov_y>queen_y&&mov_y>king_y&&queen_y<king_y)
            return 0;
        else if(mov_y<queen_y&&mov_y<king_y&&queen_y>king_y)
            return 0;

        else return 1;


    }
    else if(mov_y==queen_y && king_y==mov_y)
    {


        if(mov_x>queen_x&&mov_x>king_x&&queen_x<king_x)
            return 0;
        else if(mov_x<queen_x&&mov_x<king_x&&queen_x>king_x)
            return 0;

        else return 1;

    }
    return 1;
}


int decision(int king,int queen,int mov)
{
    int king_x,king_y,queen_x,queen_y,mov_x,mov_y;
    co_checker(king,&king_x,&king_y);
    co_checker(queen,&queen_x,&queen_y);
    co_checker(mov,&mov_x,&mov_y);


    bool flag=validity(king_x,king_y,mov_x,mov_y);
    bool another_flag = over_flow_checker(king_x,king_y,queen_x,queen_y,mov_x,mov_y);



    if(!another_flag) return 1;


    if (queen==mov || king == mov) return 1;

    if((mov_x!=queen_x && mov_y!=queen_y))
        return 1;

    if((mov_x==queen_x||mov_y==queen_y)  && !flag)
        return 2;

    if((mov_x==queen_x||mov_y==queen_y) && flag && ( (king==56&&mov==49)||(king==63&&mov==54)||(king==7&&mov==14)||(king==0&&mov==9)) )
        return 4;

    else return 3;

}


int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==b)cout<<"Illegal state"<<endl;
        else
        {
            int x=decision(a,b,c);
            if(x==1)printf("Illegal move\n");
            else if(x==2) printf("Move not allowed\n");
            else if(x==3) printf("Continue\n");
            else if(x==4)printf("Stop\n");


        }

    }

    return 0;
}
