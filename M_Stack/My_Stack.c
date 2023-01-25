#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int top ,S[1000];

void initialize(){
    top = 0;
}

void isFull(){
    return top >= MAX -1; //MAXはどのように定義したら良いのだろうか？
}

void isEmpty(){
    return top == 0;
}

void push(int x){
    if (isFull()){
        return 0;
    }
    else{
        S[++top] = x;
    }
}

void pop(){
    int c;
    if (isEmpty()){  //「式には演算型またはポインター型が必要です」とは？
        return 0;
    }
    else
    {
        top--;
        c = S[top+1];
    }
}

int main(){
    int a,b;
    top = 0;
    char s[100];

    while ( scanf("%s", s) != EOF)
    {
        if (s[0] == '+')
        {
            a = pop();
            b = pop();
            push(a + b);
        }
        elseif (s[0] == '-')
        {
            a = pop();
            b = pop();
            push(a - b);
        }
        if (s[0] == '*')
        {
            a = pop();
            b = pop();
            push(a * b);
        }
        else{
            push(atoi(s));
        }
        
        printf("%d\n", pop());
        return 0;
    }
    
}

*/