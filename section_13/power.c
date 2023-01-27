#include<stdio.h>

/*プロトタイプ宣言　*/
double power(double base, int exponent);/*階乗を計算する関数*/

int main()
{
    /*変数宣言*/
    
    double input_a;
    int input_k;
    double num;

    printf("実数aのk乗を求めます。");
    printf("実数a？");
    scanf("%lf",&input_a);
    printf("非負整数？");
    scanf("%d",&input_k);

    if (input_k < 0)
    {
        printf("kは非負整数を入力してください");
        return -1;
    }
    
    /*正常な挙動*/
    num = power(input_a,input_k);
    printf("%lf の %d 乗は %lf", input_a,input_k,num);
    return 0;
}

/*階乗を求める関数*/
double power(double base, int exponent)
{
    /*漸化式に基づく再帰的関数*/
    if ( exponent == 0 )
    {
        return base;
    }
    else{
        
        return base * power( base , exponent - 1);
    }
}