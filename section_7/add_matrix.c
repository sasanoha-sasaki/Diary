#include<stdio.h>

/*マクロ定義*/
#define MAXSIZE 100

int main()
{
    int m;/*入力行列、出力行列の行（入力）*/
    int n;/*入力行列、出力行列の列（入力）*/
    double left[MAXSIZE][MAXSIZE]; /*はじめに変数を格納するための箱を用意してあげる*/
    double right[MAXSIZE][MAXSIZE];
    double product[MAXSIZE][MAXSIZE];
    int i;/*左辺の行　ループカウンタ 行*/
    int j;/*左辺の行　ループカウンタ 列*/
    int k;/*右辺の行　ループカウンタ 行*/
    int l;/*右辺の行　ループカウンタ 列*/

    /*行数の入力*/
    printf("行列の行数を入力してください\n");
    scanf("%d",&m);

    if (m < 1 || MAXSIZE<m)
    {
        printf("行の数は1以上%d未満の値を指定してください。\n",MAXSIZE);
        return -1;
    }

    /*列数の入力*/
    printf("行列の列数を入力してください\n");
    scanf("%d",&n);
    if (n < 1 || MAXSIZE<n)
    {
        printf("行の数は1以上%d未満の値を指定してください。\n",MAXSIZE);
        return -1;
    }

    /*左辺の行列の値を代入*/
    printf("%d次行列(左辺)の成分を行ごとに順に入力してください",n);
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%lf",&left[i][j]);
        }
    }
    printf("%d次正方行列(右辺)の成分を行ごとに順に入力してください",n);
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%lf",&right[i][j]);
        }
    }
    
    /*行列の足し算*/
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            product[i][j] = 1.0;
            product[i][j] = left[i][j]+right[j][k];
        }
    }

    /*計算過程の表示*/
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%6.2f",left[i][j]);
        }
        printf("\n");
    }
    printf("+\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%6.2f",right[i][j]);
        }
        printf("\n");
    }
    printf("=\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%6.2f",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}