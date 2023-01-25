#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*プロトタイプ宣言*/
int push(int num);
int pop();
int top,S[1000];

/*main*/
int main(){
    int a,b;
    top = 0;
    char s[100];

    while( scanf("%s\n",s) != EOF )
    {
        if (s[0] = '+' )
        {
            a = pop();
            b = pop();
            push(a + b);
        }
        else if (s[0] == '-' )
        {
            b = pop();
            a = pop();
            push(a - b);
        }
        else if (s[0] == '*' )
        {
            a = pop();
            b = pop();
            push(a * b);
        }
        else{
            push(atoi(s));/*演算子を考慮してcharの箱s[100]を用意したため、intに変換するためatoiが必要*/
        }
    }
}



/*pusu関数*/
int push(int num)
{
    S[++top] = num;
    return 0;
}

/*pop関数*/
int pop()
{
    top--;
    return S[top+1];
}

 

