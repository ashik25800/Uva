#include<stdio.h>

int main()
{
    int m,n;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m==0&&n==0) break;
        if(m<4||n<4)
        {
            if((m==0&&n>2)||(n==0&&m>2)) printf("%d knights may be placed on a %d row %d column board.\n",(m*n),m,n);
            if(m<=2&&n<=2)
                printf("%d knights may be placed on a %d row %d column board.\n",(m*n),m,n);

            else if(m>=3&&n>=3)
                {
                    int x=m*n;
                    if(x%2!=0)x++;
                    printf("%d knights may be placed on a %d row %d column board.\n",x/2,m,n);
                }
            else if((m==3&&n==2)||(m==2&&n==3))
                printf("%d knights may be placed on a %d row %d column board.\n",4,m,n);
            else if(m==1||n==1)
                printf("%d knights may be placed on a %d row %d column board.\n",m*n,m,n);
            else if(((m==2&&n>3)||(m>3&&n==2))||((m==3&&n>3)||(m>3&&n==3)))
            {
                int x;
                if(n>3) x = n;
                else x=m;

                if(x%2==0)
                {
                    if(x%4==0)
                        printf("%d knights may be placed on a %d row %d column board.\n",x,m,n);
                    else printf("%d knights may be placed on a %d row %d column board.\n",x+2,m,n);
                }
                else
                {
                    if((x-1)%4==0)
                        printf("%d knights may be placed on a %d row %d column board.\n",x+1,m,n);
                    else printf("%d knights may be placed on a %d row %d column board.\n",x+1,m,n);
                }

            }
        }
        else
        {
            int x=m*n;
            if(x%2!=0)x++;
            printf("%d knights may be placed on a %d row %d column board.\n",x/2,m,n);
        }
    }


    return 0;
}
