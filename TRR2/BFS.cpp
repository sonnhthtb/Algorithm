#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 50
#define TRUE 1
#define FALSE 0
int A[MAX][MAX], n, chuaxet[MAX];
vector <int> ans;
FILE *fp;
void Init(void)
{
    int i, j;
    fp = fopen("DOTHI.IN", "r");
    fscanf(fp, "%d", &n);
    printf("\n So dinh do thi:%d", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        chuaxet[i] = TRUE;
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
            printf("%3d", A[i][j]);
        }
    }
}
void BFS(int u)
{
    int queue[MAX], low = 1, high = 1, v;
    queue[low] = u;
    chuaxet[u] = FALSE;
    printf("\n Ket qua:");
    while (low <= high)
    {
        for(int i=low;i<=high;i++){
            cout << queue[i]<<' ';
        }
        cout << endl;
        for(auto x: ans){
            cout <<x<<" ";
        }
        cout << endl;
        u = queue[low];
        low = low + 1;
        // printf("%3d", u);
        ans.push_back(u);

        for (v = 1; v <= n; v++)
        {
            if (A[u][v] && chuaxet[v])
            {
                high = high + 1;
                queue[high] = v;
                chuaxet[v] = FALSE;
            }
        }
    }
}
int main(void)
{
    int u;
    Init();
    printf("\n Dinh bat dau duyet:");
    scanf("%d", &u);
    BFS(u);
    return 0;
}