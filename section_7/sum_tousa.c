#include<stdio.h>
int main()
{
    double a;
    double d;
    double a_i;
    double s_j;
    int n;
    int i;
    int j;

    printf("初項a,公差dを入力してください\n");
    scanf("%lf%lf",&a,&d);
    printf("何項までの和を求めますか？n= \n");
    scanf("%d",&n);

    /*等差数列の和の計算*/
    s_j = 0.0;
    printf("計算中\n");
    for(j=0; j<=n; j++)
    {
        a_i = a;
        printf("第%4d項を計算中\n",j);
        for ( i = 0; i < j; i++)
        {
            a_i = a_i+d;
        }
        /*この時点で第i項の値がa_iの代入される。*/
        s_j = s_j+a_i;
    }

    /*結果表示*/
    printf("初項(%6.2f)公差(%6.2f)の等差数列の\n",a,d);
    printf("初項から第(%4d)項まで和S(%4d)は\n",n,n);
    printf("%6.2f \nです。\n",s_j);
}