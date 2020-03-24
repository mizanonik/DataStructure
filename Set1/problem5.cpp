#include <iostream>
using namespace std;

main(){
    int elements[] = {1,4,8,5,7};
    int noOfElementsInArray = sizeof(elements)/sizeof(elements[0]);
    cout << "Enter an element: ";
    cin >> elements[noOfElementsInArray];

    for(int x = 0; x<(sizeof(elements)/sizeof(elements[0])); x++){
        cout << elements[x] << endl;
    }

}

