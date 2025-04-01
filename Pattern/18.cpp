#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    // Outer loop for the no. of rows.
    for (int i = 0; i < N; i++)
    {

        // Inner loop for printing the alphabets from
        // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
        for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++)
        {

            cout << ch << " ";
        }

        // next row give a line break else all letters would get printed in 1 line.
        cout << endl;
    }
}
int main(){
    int N;
    cout << "Enter value of number:";
    cin >> N;
    pattern(N);
}