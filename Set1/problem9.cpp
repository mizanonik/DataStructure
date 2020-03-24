#include <iostream>
#include <cmath>
#include <list>
using namespace std;

main(){
    int highestLimit = pow(2, 15), number;
    bool isPrime = false;
    list<int> cancelledNumbers;
    list<int> primeNumbers;
    list<int> :: iterator itr;

    for(int i = 2; i<=highestLimit; i++){
        bool isCancelled = false;
        if(!cancelledNumbers.empty()){
            for(itr = cancelledNumbers.begin(); itr != cancelledNumbers.end(); itr++){
                if(*itr == i){
                    isCancelled = true;
                }
            }
        }

        if(!isCancelled){
            primeNumbers.push_back(i);
            int squares = i*2;
            for(squares; squares<=highestLimit; squares=squares*i){
                cancelledNumbers.push_back(squares);
            }
        }
    }

    cout << "Enter your number: ";
    cin >> number;
    if(!primeNumbers.empty()){
        for(itr = primeNumbers.begin(); itr != primeNumbers.end(); itr++){
            if(*itr == number){
                isPrime = true;
                break;
            }
        }
    }

    if(isPrime){
        cout << number << " is a prime number";
    }
    else{
        cout << number << " is not a prime number";
    }
}
