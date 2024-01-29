// Find PI to the Nth Digit - Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go. 
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int x;
    cout<<"enter the no of digits till  u want to get answer  ";cin>>x;
    double y = exp(1);
    cout<<setprecision(x+1);
    cout<<y;
    return 0;

}