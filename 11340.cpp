#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    int ch_size,line_size;
    string str;
    char temp;
    float int_temp;
    int total_count;
    map<char,float> pam;
    cin>>n;
    while(n--)
    {
        total_count = 0;
        cin>>ch_size;
        for(int i=0;i<ch_size;i++)
        {
            cin>>temp>>int_temp;
            pam[temp]=int_temp;
        }

        cin>>line_size;
        getchar();
        for(int i=0;i<line_size;i++)
        {
            getline(cin,str);
            for(int j=0;j<str.length();j++)    
            {
                if(pam[str[j]])
                    total_count+=pam[str[j]];
            }
        }

        cout<<fixed<<setprecision(2)<<(float)(total_count)/100<<"$"<<endl;
        pam.clear();
        


    }

    return 0;
}
