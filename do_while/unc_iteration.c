#include<stdio.h>

int main()
{
    double x;
    double y;
    int i;
    double fnc;
    printf("積を求めます。");
    scanf("%lf %lf",&x,&y);

    if (x == 0 || y == 0)
    {
        printf("0");
        return 0;
    }

    else
    {
        fnc = 0;
        for ( i = 0; i < y; i++)
        {
            fnc = fnc + x;
            printf("途中式%lf\n",fnc);
        }
        printf("ans%lf\n",fnc);
        return 0;
    }
}
