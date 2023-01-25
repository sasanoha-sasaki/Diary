#include<stdio.h>

/*マクロ定義*/
#define LIST_MAX 1000
#define NAME_MAX 128

int main()
{
    int n;/*参加者の人数は変数n*/
    char name[NAME_MAX]; /*はじめに変数を格納するための箱を用意してあげる*/
    double score[LIST_MAX];
    int i;/*左辺の行　ループカウンタ 行*/
    int j;/*左辺の行　ループカウンタ 列*/
    int k;/*右辺の行　ループカウンタ 行*/
    int l;/*右辺の行　ループカウンタ 列*/
    int tmp;

    /*参加者数の入力*/
    printf("参加者数を入力してくださいn");
    scanf("%d",&n);

    if (n < 1 || LIST_MAX<n)
    {
        printf("参加者数は1以上%d未満の値を指定してください。\n",LIST_MAX);
        return -1;
    }

    /*左辺の行列の値を代入*/
    
    for (i = 0; i < n; i++)
    {
            /*printf("%d人目の名前を入力してください",i+1);
            scanf("%s",&name[i]);
            printf("%sさんの点数を入力してください",&name[i]);
            scanf("%lf",&score[i]);*/
            printf("%d人目の名前と点数を入力して",i+1);
            scanf("%s %lf",&name[i],&score[i]);/*半角開けて入力*/
    }

    for (i=0; i<n; ++i) {
        for (j=i+1; j<n; ++j) {
            if (score[i] > score[j]) {
            tmp =  score[i];
            score[i] = score[j];
            score[j] = tmp;
            }
        }
    }
}
