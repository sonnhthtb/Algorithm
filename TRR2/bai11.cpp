#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Ke;
int truoc[100];
int chuaxet[100];
int s,t;
void DFS(int i)
{
    int Stack[100], dau = 1;
    Stack[dau] = i;
    chuaxet[i] = false;
    while (dau > 0)
    {
        int u = Stack[dau];
        dau--;
        for (auto v: Ke[u])
        {
            if (chuaxet[v] )
            {
                // printf("%3d", t);
                chuaxet[v] = false;
                Stack[++dau] = u;
                Stack[++dau] = v;
                truoc[v]=u;
                // cout << "truoc["<<v<<"]=="<<u<<endl;
                break;
            }
        }
    }
}
void BFS(int i)
{ //Thuật toán BFS
    int queue[100], low = 1, high = 1, u, v;
    queue[low] = i;
    chuaxet[i] = false;
    while (low <= high)
    {
        for(int j=low;j<=high;j++){
            cout << queue[j]<<' ';
        }
        cout << endl;
        u = queue[low];
        low = low + 1;
        for (auto v:Ke[u])
        {
            if (chuaxet[v])
            {
                high = high + 1;
                queue[high] = v;
                truoc[v] = u;
                cout << "truoc ["<<v<<"] = "<<u<<endl;
                chuaxet[v] = false;
            }
        }
    }
}
void Duongdi()
{
    if (truoc[t] == 0)
    {
        cout << "Duong di khong ton tai"<<endl;
        return;
    }
    cout << "Duong di :"<<endl;
    int j = t;
    cout << j <<"<==";
    while (truoc[j] != s)
    {
        cout << truoc[j]<<"<==";
        j = truoc[j];
    }
    cout << s;
}
int main()
{
    for(int i=0;i<100;i++) chuaxet[i]=1;
    Ke.push_back({0});
    Ke.push_back({2, 3, 4});
    Ke.push_back({1, 3, 4, 6});
    Ke.push_back({1, 2, 4, 5});
    Ke.push_back({1, 2, 3, 7});
    Ke.push_back({3, 6, 7, 8, 12});
    Ke.push_back({2, 5, 7, 12});
    Ke.push_back({4, 5, 6, 8});
    Ke.push_back({5, 7, 12});
    Ke.push_back({10, 11, 13});
    Ke.push_back({9, 11, 12, 13});
    Ke.push_back({9, 10, 13});
    Ke.push_back({5, 6, 8, 10});
    Ke.push_back({9, 10, 11});
    printf("\n Dinh dau:");
    scanf("%d", &s);
    printf("\n Dinh cuoi:");
    scanf("%d", &t);
    DFS(s); 
    // BFS(s);
    Duongdi();
    return 0;
}