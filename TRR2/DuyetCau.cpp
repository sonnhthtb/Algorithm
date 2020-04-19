#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX 50
int A[MAX][MAX], n, chuaxet[MAX], solt = 0;
//Doc du lieu
void Read_Data()
{
    fstream fp;
    fp.open("DOTHI.IN", ios::in);
    fp >> n;
    cout <<"So dinh do thi: "<< n<<endl;
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] = true;
        for (int j = 1; j <= n; j++)
        {
            fp >> A[i][j];
            cout << A[i][j]<<' ';
        }
        cout << endl;
    }
}
//Thuat toan BFS
void BFS(int u)
{
    int queue[MAX], low = 1, high = 1, s, t;
    queue[low] = u;
    chuaxet[u] = false;
    while (low <= high)
    {
        s = queue[low];
        low = low + 1;
        cout << s <<" ";
        for (t = 1; t <= n; t++)
        {
            if (A[s][t] && chuaxet[t])
            {
                high = high + 1;
                queue[high] = t;
                chuaxet[t] = false;
            }
        }
    }
}
void ReInit()
{
    for (int i = 1; i <= n; i++)
        chuaxet[i] = true;
}
int Test_So_Lien_Thong()
{
    for (int u = 1; u <= n; u++)
        if (chuaxet[u])
            return (1);
    return (0);
}
int main()
{
    Read_Data();
    ReInit();
    for (int u = 1; u < n; u++)
    {
        for (int v = u + 1; v <= n; v++)
        {
            if (A[u][v])
            { 
                cout << u << " "<<v<<endl;
                A[u][v] = 0;
                A[v][u] = 0; 
                BFS(1); 
                cout << endl;
                if (Test_So_Lien_Thong())
                    cout << "Canh "<<u << " "<<v<<endl;
                A[u][v] = 1;
                A[v][u] = 1;
                ReInit(); 
            }
        }
    }
    return 0;
}