#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top ,S[1000];

void push(int x){
    S[++top] = x;
}

int pop(){
     top--;
     return S[top+1];
}

int main(){
    int a,b;
    top = 0;
    char s[100]; //文字の最大サイズを制限

    while ( scanf("%s\n", s) != EOF ) //EOFの意味https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11121778031
    {
        if (s[0] == '+' )
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
            push(atoi(s));
        }
    }

    printf("%d\n", pop());
    return 0;
}

