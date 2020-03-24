#include <iostream>

using namespace std;


int partition_quickSort(int arr[], int p, int r){
    int x = arr[p];
    int left = p;
    for(int i = p+1; i<=r; i++){
        if(arr[i] < x){
            left++;
            int temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;
        }
    }
    int temp2 = arr[p];
    arr[p] = arr[left];
    arr[left] = temp2;
    return left;
}

void quickSort(int arr[], int p, int r){
    if(p<r){
        int q = partition_quickSort(arr, p, r);
        quickSort(arr, p, q-1);
        quickSort(arr, q+1, r);
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

    quickSort(listOfNumbers, 0, numberofElements-1);
    printArray(listOfNumbers, numberofElements);

    return 0;
}
