#include <iostream>
#include <math.h>

using namespace std;

int main(){

    string binaryNumber;
    unsigned int numberOfDigits = 0;
    int decimalNumber = 0;

    cout << "Enter you binary number: ";
    cin >> binaryNumber;

    int power = binaryNumber.length() -1;

    for(int i = 0; i<binaryNumber.length(); i++){
        decimalNumber += (pow(2, power)*(binaryNumber[i] - '0'));
        power --;
    }

    cout << decimalNumber;

    return 0;
}
