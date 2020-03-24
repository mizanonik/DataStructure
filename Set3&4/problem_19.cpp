#include <iostream>

using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i<n1 && j <n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];
}

void printArray(int arr[], int n)
{
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int numberofElements1;
    cout << "Enter the number of elements in list 1: ";
    cin >> numberofElements1;

    int listOfNumbers1[numberofElements1];
    for(int i = 0; i<numberofElements1; i++){
        cout << "Enter a number: ";
        cin >> listOfNumbers1[i];
    }

    int numberofElements2;
    cout << "Enter the number of elements in list 2: ";
    cin >> numberofElements2;

    int listOfNumbers2[numberofElements2];
    for(int i = 0; i<numberofElements2; i++){
        cout << "Enter a number: ";
        cin >> listOfNumbers2[i];
    }

    int sortedList[numberofElements1+numberofElements2];
    mergeArrays(listOfNumbers1, listOfNumbers2, numberofElements1, numberofElements2, sortedList);
    printArray(sortedList, numberofElements1+numberofElements2);

    return 0;
}
