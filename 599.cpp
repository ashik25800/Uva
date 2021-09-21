#include<bits/stdc++.h>
using namespace std;

char dex = 'a';

string finding_element(char source,bool *a,int nodes_siz,map<char,int> mp,string nodes)
{
    bool vis[nodes_siz];
    for(int i = 0;i<nodes_siz;i++)
        vis[i] = false;

    queue<char> que;
    que.push(source);
    vis[mp[source]] = true;

    int counter = 0;

    while(!que.empty())
    {
        char ch = que.front();
        for(int i=0;i<nodes.length();i++)
        {
            if((*((a+mp[ch]*nodes_siz)+i)) == true && !vis[i] && nodes[i]>='A' && nodes[i]<='Z')
            {
                que.push(nodes[i]);
                vis[i] = true;
            }
        }
        if(que.size()==1 && counter == 0)
            nodes[mp[ch]] = ch;
        else nodes[mp[ch]] = dex;
        counter++;
        que.pop();
    }




    return nodes;

}



void maker(int siz,bool *a)
{
    for(int i=0;i<siz;i++)
        for(int j=0;j<siz;j++)
            *((a+i*siz)+j) = false;
}

 int main()
 {

    int test_case;
    cin>>test_case;

    while(test_case--)
    {
        string node;
        stack <string> edges;

        while(1)
        {
            cin>>node;
            if(node[0]=='*')
                break;

            edges.push(node);
        }

        cin>>node;
        string nodes;

        for(int i=0;i<node.length();i++)
        {
            if(node[i]!=',')
                nodes.push_back(node[i]);
        }

        map<char,int> mp;
        for(int i=0;i<nodes.length();i++)
            mp[nodes[i]] = i;
        

        int siz = nodes.length();
        bool arr[siz][siz];

        maker(siz,(bool *) arr);

        while(!edges.empty())
        {
            string temp = edges.top();
            arr[mp[temp[1]]][mp[temp[3]]] = true;
            arr[mp[temp[3]]][mp[temp[1]]] = true;
            edges.pop();
        }

        for(int i=0;i<nodes.length();i++)
        {
            if(nodes[i]>='A' && nodes[i]<='Z')
            {

                nodes = finding_element(nodes[i],(bool *)arr,siz,mp, nodes);
                dex++;
            }
        }dex = 'a';



        string final;
        
        sort(nodes.begin(),nodes.end());
        final.push_back(nodes[0]);

        for(int i=1;i<nodes.length();i++)
        {
            if(nodes[i]!=nodes[i-1])
                final.push_back(nodes[i]);
        }


        int acorns = 0;
        int trees = 0;
        for(int i=0;i<final.length();i++)
        {
            if(final[i]>='A' && final[i]<='Z')
                acorns++;
            else trees++;
        }


        cout<<"There are "<<trees<<" tree(s) and "<<acorns<<" acorn(s)."<<endl;

    }
    return 0;
 }
