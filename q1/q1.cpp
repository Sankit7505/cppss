#include <iostream>
#include <iomanip>

// Find PI to the Nth Digit - Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go. 
using namespace std;
int main (){
    double y = 22.0f/7.0f;
    double& x = y;
    int n;
    
    cout<<"enter the digit to keep how far a digit of pi will go "; cin>>n;
    

    cout<<setprecision(n+1);
    cout<<x;
    cin.get();


    
    return 0;
}

//my first program . the dopamine is crazy 
// learn about header files double settprision and refrenc