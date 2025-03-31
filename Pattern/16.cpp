#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    // Outer loop for no. of rows
    for (int i = 0; i < N; i++)
    {
        char ch ='A'+i;    
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<' ';
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