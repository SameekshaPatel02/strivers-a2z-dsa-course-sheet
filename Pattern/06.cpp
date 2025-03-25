#include <bits/stdc++.h>
using namespace std;

void pattern(int Num){
    for (int i = 0; i < Num; i++)
    {
        for (int j = Num; j > i; j--)
        {
            cout << Num-j+1 ;
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