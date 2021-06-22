#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<stack>
#include<string.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        string code[n],sentence[n],main[n];
        for(int i=0;i<n;i++)
        {
            main[i]="-";
            cin>>code[i]>>sentence[i];
        }

        int temp_siz,k=0,comparism;

        for(int i=0;i<n;i++)
        {
            temp_siz = sentence[i].length()-1;
            comparism=0;
            while(1)
            {
                if(main[k%n] == "-")
                {
                    if(temp_siz==comparism)
                    {
                        main[k%n] = code[i];
                        k++;
                        break;

                    }
                    comparism++;
                    k++;
                }
                else k++;
            }
        }

        for(int i=0;i<n-1;i++)
            cout<<main[i]<<" ";
        cout<<main[n-1]<<endl;
    }


    return 0;
}
