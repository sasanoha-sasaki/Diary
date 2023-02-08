#include<stdio.h>
#define MAXSIZE 10000
int search(int A[], int key, int n)
{
    int i = 0;
    A[n] = key;
    while (A[i] != key) i++;
    return i != n;
    
}

/*
螺旋本p119 線形探索
上記：参考書
下記：オリジナル

工夫するべき点
・35行のfor文において、keyの入力と同時にsearchの処理を行うことで、計算量の削減を図っている
・searchにおける部分のwhileの初略した記載方法と番兵方式を用いることで、同一の数字を見つけると処理を止めるようになっており、余計な探索を行わないで済んでいる。


int main(){
    int i, n, A[MAXSIZE], q, key, sum = 0;

    scanf("%d",&n);
    for ( i = 0; i < n; i++) scanf("%d",&A[i]);


    scanf("%d",&q);       //
    for ( i = 0; i < q; i++)
    {
        scanf("%d",&key); //key2のように設定しなくても可能なのはなぜだろうか？ scanfは1度読み込んだらずれるということ？
        if (search(A,key,n)) sum++; //
    }
    printf("%d\n",sum);
    return 0;
}
*/



int main(){
    int i, j, n, A[MAXSIZE], B[MAXSIZE], q, key, sum = 0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    scanf("%d",&q);
    for ( j = 0; j < q; j++)
    {
        scanf("%d",&B[j]);
    }

    for ( j = 0; j < q; j++)
    {
        if (search(A,B[j],n)) sum++; /*search(A[i],key,B[j]);で設計していたため*/
    }
    printf("%d\n",sum);
    return 0;
}