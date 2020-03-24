#include <iostream>

using namespace std;

int gcd(int firstNumber, int secondNumber){
    if(firstNumber == 0){
        return secondNumber;
    }
    else if(secondNumber == 0){
        return firstNumber;
    }
    else{
        int reminder = firstNumber % secondNumber;
        gcd(secondNumber, reminder);
    }
}

int main(){

    int firstNumber = 0;
    int secondNumber = 0;

    cout << "Enter the first integer: ";
    cin >> firstNumber;

    cout << "Enter the second integer: ";
    cin >> secondNumber;

    cout << "GCD of two numbers: " << gcd(firstNumber, secondNumber);

    return 0;
}
