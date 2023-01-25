#include<stdio.h>
#include<string.h>
#define LEN 100005

/*プロセスを表す構造体 https://marycore.jp/prog/c-lang/typedef-struct/*/
typedef struct pp {
    char name[100];
    int t; /*timeの入れ物*/
}Pro;

Pro Q[LEN]; /*nの要素数を入れる箱*/
int head, tail, n;

/*末尾のtailに変数xを代入する。*/
void enqueue(Pro x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

/*headが指す変数xの値を記録し、headを1増やしてからxの値を返します。*/
Pro dequeue(){
    Pro x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

/*三項演算子
条件 ? 式1 : 式2の形になって、
条件がtrue相当なら式1、false相当なら式2の値を返します。
*/
int min(int a , int b){ return a < b ? a : b; }/*最小値を返す*/

int main(){
    int elaps = 0, c; /**/
    int i, q; /*i;ループカウンタ*/
    Pro u;
    scanf("%d %d",&n, &q);

    /*すべてのプロセスをキューに順番に追加する。*/
    for ( i = 1; i <= n; i++)
    {
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    head = 1; tail = n + 1;

/*シミュレーション*/
    while ( head != tail )
    {
        u = dequeue(); /*先頭から新しい値を得る*/
        c = min(q, u.t); /*cには最小時間のqまたはu.t分だけ処理を行う*/
        u.t -= c; /*残りの必要時間のみを計算(引き算)*/
        elaps += c; /*経過時間を加算*/
        if (u.t > 0 )enqueue(u);
        else{
            printf("%s %d\n",u.name , elaps);
        }
    }

    return 0;
}

