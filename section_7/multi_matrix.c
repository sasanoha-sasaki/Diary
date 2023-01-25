#include<stdio.h>

/*マクロ定義*/
#define MAXSIZE 100

int main()
{
    int n;
    double left[MAXSIZE][MAXSIZE];
    double right[MAXSIZE][MAXSIZE];
    double product[MAXSIZE][MAXSIZE];
    int i;
    int j;
    int k;

    printf("正方行列の行列数を入力してください\n");
    scanf("%d",&n);

    if (n < 1 || MAXSIZE<n)
    {
        printf("行の数は1以上%d未満の値を指定してください。\n",MAXSIZE);
        return -1;
    }
    printf("%d次正方行列(左辺)の成分を行ごとに順に入力してください",n);
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%lf",&left[i][j]);
        }
    }
    printf("%d次正方行列(右辺)の成分を行ごとに順に入力してください",n);
    for (j = 0; j < n; j++)
    {
        for ( k = 0; k < n; k++)
        {
            scanf("%lf",&right[j][k]);
        }
    }
    
    /*行列の掛け算*/
    for (i = 0; i < n; i++)
    {
        for ( k = 0; k < n; k++)
        {
            product[i][k] = 0.0;
            for ( j = 0; j < n; j++)
            {
                product[i][k] = product[i][k]+left[i][j]*right[j][k];
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%6.2f",left[i][j]);
        }
        printf("\n");
    }
    printf("✕\n");
    for ( j = 0; j < n; j++)
    {
        for ( k = 0; k < n; k++)
        {
            printf("%6.2f",right[j][k]);
        }
        printf("\n");
    }
    printf("=\n");
    for ( i = 0; i < n; i++)
    {
        for ( k = 0; k < n; k++)
        {
            printf("%6.2f",product[i][k]);
        }
        printf("\n");
    }
    return 0;
}