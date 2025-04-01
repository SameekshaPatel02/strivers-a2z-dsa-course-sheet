#include <bits/stdc++.h>
    using namespace std;

void pattern(int N)
{
    // Outer loop for the number of rows.
    for (int i = 0; i < N; i++)
    {
        // for printing the spaces.
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // for printing the characters.
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // for printing the spaces again after characters.
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // next row and give a line break otherwise all letters would get printed in 1 line.
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
