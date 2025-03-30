#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    int num=1;
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<num<<" ";
            num++;
        } 

        cout << endl;
    }
    
}

int main(){
    int N;
    cout << "Enter value of number:";
    cin >> N;
    pattern(N);
}