#include<iostream>
using namespace std;

void dfs(int g[][7],int start,int n)
{
    static int visited[7]={0};
    
    if(visited[start]==0)
    {
        visited[start]=1;
        cout<<start<<" ";
        
        for(int i=1;i<=n;i++)
        {
         if(g[start][i]==1&&visited[i]==0)
            dfs(g,i,7);
        }
    }
}

int main()
{
    int g[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};
    
    dfs(g,3,7);
    
    return 0;
}
