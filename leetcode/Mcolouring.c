#include <stdio.h>
int n, graph[10][10], x[10], m, false = 0;
void nextvalue(int k)
{
    int j;
    while (1)
    {
        x[k] = (x[k] + 1) % (m + 1);
        if (x[k] == 0)
        {
            return;
        }
        for (j = 1; j <= k - 1; j++)
        {
            if (graph[k][j] == 1 && x[j] == x[k])
                break;
        }
        if (j == k)
        {
            return;
        }
    }
}
void mcolour(int k)
{
    while (1)
    {
        int i, j;
        nextvalue(k);
        if (x[k] == 0)
        {
            return;
        }
        if (k == n)
        {
            for (i = 1; i <= n; i++)
            {
                printf(" %d ", x[i]);
            }
            printf("\n");
        }
        else
        {
            mcolour(k + 1);
        }
    }
}
int main()
{
    int i, j;
    FILE *fp;
    printf("\nenter the total colour\n");
    scanf("%d", &m);
    fp = fopen("graph.txt", "r");
    if (fp == NULL)
    {
        printf("\n error to open the file");
    }
    fscanf(fp, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &graph[i][j]);
        }
    }
    fclose(fp);
    printf("\nThe graph is :\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" %d ", graph[i][j]);
        }
        printf("\n");
    }
    int l = 1;
    printf("\nthe total no of combination is:\n");
    mcolour(l);
    return 0;
}
