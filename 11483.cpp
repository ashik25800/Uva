#include<bits/stdc++.h>
using namespace std;

char slash = 92;
char inverted = 34;


string pre = "#include<string.h>\n#include<stdio.h>\nint main()\n{";
string post = "printf(\"\\n\");\nreturn 0;\n}";

int main()
{
    int n;
    int index = 1;
    string temp;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;

        getchar();

        string a[n];
        for(int i=0;i<n;i++)
            getline(cin,a[i]);


        cout<<"Case "<<index<<":"<<endl;
        cout<<pre<<endl;

        
        for(int i=0;i<n;i++)
        {
            temp = "printf(\"";
            for(int j=0;j<a[i].length();j++)
            {
                if(a[i][j] == 34 || a[i][j] == 92)
                    temp.push_back(slash);
                temp.push_back(a[i][j]);
            }
            temp.push_back(slash);
            temp.push_back('n');
            temp.push_back(inverted);
            temp.push_back(')');
            temp.push_back(';');

            cout<<temp<<endl;
        }


        cout<<post<<endl;

        index++;


    }

    return 0;
}
