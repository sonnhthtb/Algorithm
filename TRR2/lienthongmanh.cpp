#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 50
#define TRUE 1
#define FALSE 0
int A[MAX][MAX], n, chuaxet[MAX], solt = 0;
//Doc du lieu
void Read_Data(void)
{
    int i, j;
    FILE *fp;
    fp = fopen("dothi.IN", "r");
    fscanf(fp, "%d", &n);
    printf("\n So dinh do thi:%d", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
            printf("%3d", A[i][j]);
        }
    }
    cout << endl;
}
int check_bfs=0;
//Thuat toan BFS
void BFS(int u)
{
    int queue[MAX], low = 1, high = 1, s, t;
    queue[low] = u;
    chuaxet[u] = FALSE;
    while (low <= high)
    {
        s = queue[low];
        low = low + 1;
        printf("%3d", s);
        check_bfs++;
        for (t = 1; t <= n; t++)
        {
            if (A[s][t] && chuaxet[t])
            {
                high = high + 1;
                queue[high] = t;
                chuaxet[t] = FALSE;
            }
        }
    }
}
//Thuat toan DFS
int check_dfs=0;
void DFS(int u)
{
    int v; 
    printf("%3d",u);
    check_dfs++;
    chuaxet[u] = FALSE;
    for (v = 1; v <= n; v++)
    {
        if (A[u][v] && chuaxet[v])
            DFS(v);
    }
}
//Khoi dau lai mang chuaxet[]
void ReInit(void)
{
    check_bfs=0;
    for (int i = 1; i <= n; i++)
        chuaxet[i] = TRUE;
}
//Kiem tra tinh lien thong manh
int Strong_Conective(void)
{
    Read_Data();
    ReInit();
    for (int u = 1; u <= n; u++)
    { 
        cout <<endl<< u <<" thuoc V"<< endl;
        BFS(u);
        if(check_bfs!=n) return 0;
        ReInit();
    }
    return 1;
}
int main(void)
{
    if (Strong_Conective())
        printf("\n Do thi lien thong manh");
    else
        printf("\n Do thi khong lien thong manh");
    return 0;
}