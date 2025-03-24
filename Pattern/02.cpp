#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main(){
    int N;
    cout <<"Enter number you want to enter:";
    cin >> N;
    pattern( N);
    return 0;
}