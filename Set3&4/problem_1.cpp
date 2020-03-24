#include <iostream>

using namespace std;

int getFactorial(int number){
    if(number <= 1)
        return number;
    return number*getFactorial(number -1);
}

int getFactorialWithoutRecursion(int number){
    int result = number;
    if(number <= 1)
        return number;
    while(number > 1){
        result *= (number -1);
        number--;
    }
    return result;
}

int main(){
    int n, choice;
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Press 1 for using recursive method" << endl;
    cout << "Press 2 for using non recursion method" << endl;
    cin >> choice;

    switch(choice){
        case 1:{
            cout << "Factorial of the number: " << getFactorial(n);
            break;
        }
        case 2:{
            cout << "Factorial of the number: " << getFactorialWithoutRecursion(n);
            break;
        }
    }

    return 0;
}
