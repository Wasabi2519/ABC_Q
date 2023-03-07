#include <bits/stdc++.h>
using namespace std;

int main(){

int a;
cin >> a;

int divident = a;
int divisor = 2; //除数
int quotient, remainder; //商、余り

quotient = divident / divisor; //商を計算
remainder = divident % divisor; //余りを計算 

cout << quotient + remainder << endl;
}