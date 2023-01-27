#include<stdio.h>


double calc_integral(double lower, double upper, int param);
double target(double x);
void description();

int main()
{
    int n;
    double a;
    double b;
    double answer;

    printf("関数");
    description();
    printf("の定積分を行います\n");

    printf("積分区間の加減を入力してください:\n");
    scanf("%lf",&a);

    printf("積分区間の上限を入力してください\n");
    scanf("%lf",&b);

    if (b <= a)
    {
        printf("下限の値は上限の値 未満 を入力してください。\n");
        return -1;
    }
    

    printf("区間[%3.1f, %3.1f]をいくつの区間に分割して積分値を求めますか？\n",a,b);
    scanf("%d",&n);

    answer = calc_integral(a,b,n);

    printf("関数f(x)の区間[%3.1f, %3.1f]における積分値は？\n",a,b);
    printf("%16.12f\n です。\n",answer);

    return 0;
}

double calc_integral(double lower, double upper, int param)
{
    int i;
    double integral;
    double h;
    double y_i;

    h=(upper - lower)/((double)param); 

    y_i = 0;
    integral = 0.0;
    for(int i = 0; i < param; i++)
    {
        y_i = ((target(lower + h*i) + target(lower + h*(i+1))) / 2.0);
        integral = y_i + integral;  /*より簡易的なプログラム( 1/2f(x_0) + f(x_1) + ・・・ + f(x_n-1) + 1/2f(x_n) )が存在する*/
        /*printf("%lf\n",x_i);*/
    }
    integral = integral * h; /*計算誤差を減らすため、最後に高さをかける*/
    return integral;
}

double target(double x)
{
    return 1.0/x;
}

void description()
{
    printf("f(x)=1.0/x");
    return;
}