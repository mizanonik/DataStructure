#include <iostream>

using namespace std;

int ackerman(int m, int n){
    if(m==0){
        return n+1;
    }
    else if(m!=0 && n==0){
        ackerman(m-1, 1);
    }
    else if(m!=0 && n!=0){
        ackerman(m-1, ackerman(m, n-1));
    }
}

int main(){

    int m, n;
    cout << "Enter two positive integers: ";
    cin >> m >> n;

    cout << ackerman(m,n);

    return 0;
}
