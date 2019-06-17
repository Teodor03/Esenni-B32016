#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int Max_N=3001;
const int Max_S=2001;
int n,m,s,result=999999;
struct Rebro
{
    int to;
    int time;
    int price;
};
struct Edge
{
    int index_edge;
    int price;
    int time;
    bool operator <(Edge other)const
    {
        return time>other.time;
    }
};

priority_queue<Edge> queuem;
vector<Rebro> graph [Max_N];
int shortest_paths [Max_N][Max_S];

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>s>>n>>m;
    int a,b,c,d;
    for(int counter=0; counter<m; counter++)
    {
        cin>>a>>b>>c>>d;
        a--;
        b--;
        graph[a].push_back({b,c,d});
        graph[b].push_back({a,c,d});
    }
    for(int coun=0; coun<n; coun++)
    {
        for(int co=0; co<=s; co++)
        {
            shortest_paths[coun][co]=999999;
        }
    }
    Edge starting_edge;
    starting_edge.index_edge=0;
    starting_edge.price=0;
    starting_edge.time=0;
    queuem.push(starting_edge);
    Edge current;
    Edge adding_edge;
    Rebro current_rebro;
    int curr_time;
    int curr_price;
    while(!queuem.empty())
    {
        current=queuem.top();
        queuem.pop();
        for(int counter=0; counter<graph[current.index_edge].size(); counter++)
        {
            current_rebro=graph[current.index_edge][counter];
            curr_time=current.time+current_rebro.time;
            curr_price=current.price+current_rebro.price;
            if(curr_time<shortest_paths[current_rebro.to][curr_price] and curr_price<=s){
                shortest_paths[current_rebro.to][curr_price]=curr_time;
                adding_edge.index_edge=current_rebro.to;
                adding_edge.price=curr_price;
                adding_edge.time=curr_time;
                queuem.push(adding_edge);
            }
        }
    }
    for(int counter=0;counter<=s;counter++){
        if(shortest_paths[n-1][counter]<result){
            result=shortest_paths[n-1][counter];
        }
    }
    if(result==999999){
        cout<<"-1";
        return 0;
    }
    cout<<result;
return 0;
}
