

#include<bits/stdc++.h>
using namespace std;


int main() {
    system("cls");


    int a = 8, b = 4;

    a = a ^ b; // 8 ^ 4 => 1000 ^ 0010 = 1010 => 10
    b = a ^ b; // 10 ^ 4 => 1010 ^ 0010 = 1000 => 8
    a = a ^ b; // 10 ^ 8 => 1010 ^ 1000 = 0010 => 4

    cout << a << " -> " << b << endl;

    cin.get();
    return 0;
}