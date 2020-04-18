#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 50
int A[MAX][MAX], n, chuaxet[MAX], truoc[MAX], s, t;
void Init()
{ 
    ifstream fp;
    fp.open("dothi.in", ios::in);
    fp >> n;
    cout <<"So dinh do thi: "<< n<<endl;
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] = true;
        truoc[i] = 0;
        for (int j = 1; j <= n; j++)
        {
            fp >> A[i][j];
            cout << A[i][j]<<' ';
        }
        cout << endl;
    }
}
void DFS(int i)
{
    int Stack[MAX], dau = 1;
    Stack[dau] = i;
    chuaxet[i] = false;
    while (dau > 0)
    {
        cout << "Stack :"<<endl;
        for(int j=1;j<=dau;j++){
            cout << Stack[j]<<' ';
        }
        cout << endl;
        int u = Stack[dau];
        dau--;
        for (int v = 1; v <= n; v++)
        {
            if (chuaxet[v] && A[u][v])
            {
                // printf("%3d", t);
                chuaxet[v] = false;
                Stack[++dau] = u;
                Stack[++dau] = v;
                truoc[v]=u;
                cout << "truoc["<<v<<"]=="<<u<<endl;
                break;
            }
        }
    }
}
void BFS(int i)
{ //Thuật toán BFS
    int queue[MAX], low = 1, high = 1, u, v;
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
        for (v = 1; v <= n; v++)
        {
            if (A[u][v] && chuaxet[v])
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
int main(void)
{
    Init();
    printf("\n Dinh dau:");
    scanf("%d", &s);
    printf("\n Dinh cuoi:");
    scanf("%d", &t);
    DFS(s); 
    // BFS(s);
    Duongdi();
    return 0;
}