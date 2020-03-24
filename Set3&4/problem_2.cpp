#include <iostream>

using namespace std;

int fibonacciSeries[100];

int fibonacciWithRecursion(int n){
    if(n<=1){
        fibonacciSeries[n] = n;
    }
    else{
        fibonacciSeries[n] = fibonacciWithRecursion(n-1)+fibonacciWithRecursion(n-2);
    }
    return fibonacciSeries[n];
}

int fibonacciWithoutRecursion(int n){
    fibonacciSeries[0] = 0;
    fibonacciSeries[1] = 1;
    int number = 1;
    for(int i = 2; i <= n; i++){
        fibonacciSeries[i] = fibonacciSeries[i-1]+fibonacciSeries[i-2];
    }
    return fibonacciSeries[n];

}

int main(){
    int n, choice;
    cout << "Enter the term: ";
    cin >> n;

    cout << "Press 1 for using recursive method" << endl;
    cout << "Press 2 for using non recursion method" << endl;
    cin >> choice;

    switch(choice){
        case 1: {
            cout << n << "th term of the Fibonacci Sequence is " << fibonacciWithRecursion(n);
            break;
        }
        case 2: {
            cout << n << "th term of the Fibonacci Sequence is " << fibonacciWithoutRecursion(n);
            break;
        }
    }

    return 0;
}
