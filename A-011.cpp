#include<bits/stdc++.h>
using namespace std;

void nextMonth(int& a, int threshold, int subtraction) {
    if(a > threshold - 11) {
        a -= subtraction;
    }
}

int main(){
    int a;
    cin >> a;
    nextMonth(a, 12, 11)if{a, 11, +1}
    cout << a << endl;
}