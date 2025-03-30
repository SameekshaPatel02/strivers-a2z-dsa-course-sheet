#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    // Outer loop for no. of rows
    for (int i = 0; i < N; i++)
    {       
        // Inner loop will loop for i times and
        // print alphabets from A to A + i
        for ( char ch ='A'; ch<='A'+i;ch++)
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