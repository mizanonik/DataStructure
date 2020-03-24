#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void deleteRoot(int arr[], int& n)
{
    int lastElement = arr[n - 1];
    arr[0] = lastElement;
    n = n - 1;
    heapify(arr, n, 0);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;;
}

int main()
{
    int noOfElement;
    cout << "Enter number of elements: ";
    cin >> noOfElement;

    int arr[noOfElement];
    for(int i = 0; i<noOfElement; i++){
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Heap of elements" << endl;
    printArray(arr, n);

    deleteRoot(arr, n);

    cout << "Heap of elements after deletion" << endl;
    printArray(arr, n);

    return 0;
}
