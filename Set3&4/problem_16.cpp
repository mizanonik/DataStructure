#include <iostream>

using namespace std;

void insertionSort(int arr[])
{
    int i, key, j;
    for (i = 1; i < sizeof(arr); i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[])
{
    cout << "sorted array: " << endl;
    for (int i = 0; i < sizeof(arr); i++){
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

    insertionSort(listOfNumbers);
    printArray(listOfNumbers);

}
