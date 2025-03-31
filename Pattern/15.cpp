#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{

    for (int i = 0; i < N; i++)
    {
        // Inner loop will loop for i times and
        // print alphabets from A to A + (N-i-1).
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++)
        {
            cout << ch << " ";
        }
        // next row and give a line break otherwise all letters
        // would get printed in 1 line.
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Enter value of number:";
    cin >> N;
    pattern(N);
}