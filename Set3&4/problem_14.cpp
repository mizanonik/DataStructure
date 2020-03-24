#include <iostream>

using namespace std;

int fibonacciSeries[100];

int fibonacciWithoutRecursion(int n){
    fibonacciSeries[1] = 1;
    fibonacciSeries[2] = 1;
    int number = 1;
    for(int i = 3; i <= n; i++){
        fibonacciSeries[i] = fibonacciSeries[i-1]+fibonacciSeries[i-2];
    }
    return fibonacciSeries[n];
}

int main(){
    int n, choice;
    cout << "Enter the term: ";
    cin >> n;

    cout << "\n" << n << " th Fibonacci number is " << fibonacciWithoutRecursion(n) << endl;

    return 0;
}
