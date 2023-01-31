#include<stdio.h>
#define MAXSIZE 10000
int search(int A[], int key, int n)
{
    int i = 0;
    A[n] = key;
    while (A[i] != key)
    {
        i++;
        if (i == n)
        {
            return i;
        }
    }
    
}


int main(){
    int i, n, A[MAXSIZE], q, key, sum = 0;

    scanf("%d",&n);
    for ( i = 0; i < n; i++) scanf("%d",&A[i]);


    scanf("%d",&q);       //
    for ( i = 0; i < q; i++)
    {
        scanf("%d",&key); //key2のように設定しなくても可能なのはなぜだろうか？ scanfは1度読み込んだらずれるということ？
        if (search(A,key,n)) sum++;
    }
    printf("%d\n",sum);
    return 0;
}