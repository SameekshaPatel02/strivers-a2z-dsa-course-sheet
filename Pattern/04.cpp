#include <bits/stdc++.h>
using namespace std;

void pattern(int Num){
    for (int i = 1; i <= Num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
        cout << endl;
    }
    
}

int main(){
    int Num;
    cout << "Enter value of number:";
    cin >> Num;
    pattern(Num);
}