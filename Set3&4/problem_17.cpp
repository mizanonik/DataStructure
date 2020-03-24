#include <iostream>

using namespace std;

void selectionSort(int listOfNumbers[], int n){
    int i, j, min_index;
    i=0;
    while(i<n-1){
        min_index = i;
        j = i+1;
        while(j<n){
            if(listOfNumbers[j] < listOfNumbers[min_index]){
                min_index = j;
            }
            j++;
        }
        int temp = listOfNumbers[i];
        listOfNumbers[i] = listOfNumbers[min_index];
        listOfNumbers[min_index] = temp;
        i++;
    }
}

void printArray(int arr[], int n)
{
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int numberofElements;
    cout << "Enter the number of elements: ";
    cin >> numberofElements;

    int listOfNumbers[numberofElements];
    for(int i = 0; i<numberofElements; i++){
        cout << "Enter a number: ";
        cin >> listOfNumbers[i];
    }

    selectionSort(listOfNumbers, numberofElements);
    printArray(listOfNumbers, numberofElements);

}
