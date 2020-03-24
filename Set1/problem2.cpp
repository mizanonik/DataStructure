#include <iostream>
using namespace std;
main(){
    int a = 1,b = 2,c = 4;

    int x = (b*b)-(4*a*c);

    int root1 = (-b+x)*2*a;
    int root2 = (-b-x)*2*a;

    cout << root1 << endl;
    cout << root2 << endl;
}
