#include <iostream>

using namespace std;
main(){
    int numbersList[] = {1,2,3,12,4,5};
    int largestNumber = 0;
    for(int i=0; i<(sizeof(numbersList)/ sizeof(numbersList[0])); i++){
        if(numbersList[i]>largestNumber){
            largestNumber = numbersList[i];
        }
    }

    cout << "Largest Number: " << largestNumber;
}
