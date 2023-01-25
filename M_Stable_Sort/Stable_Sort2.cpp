#include <iostream>
using namespace std;

struct Card
{
    char suit, value;
};

void bubble( struct Card A[],int N)
{
    for ( int i = 0; i < N; i++ )
    {
        for (int j = N-1; j >= 1+i; j--)
        {
            if (A[j].value < A[j-1].value){
                swap(A[j],A[j-1]);
            }
        }
        
    }
}

void print(struct Card A[],int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i > 0) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

int main(){
    Card C1[100];
    int N;
    char ch;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> C1[i].suit >> C1[i].value;
    }
    
    bubble(C1,N);
    print(C1,N);
    cout << "Stable" << endl;
}

