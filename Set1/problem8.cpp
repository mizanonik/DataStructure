#include <iostream>
using namespace std;

int binarySearch(int arr[], int i, int r, int k)
{
    if (r >= i) {
        int mid = i + (r - i) / 2;
        if (arr[mid] == k)
            return mid;

        if (arr[mid] > k)
            return binarySearch(arr, i, mid - 1, k);

        return binarySearch(arr, mid + 1, r, k);
    }

    return -1;
}

main(void)
{
    int n,k;
	cout<<"Enter number of elements: ";
	cin>>n;

	int a[n];
	for(int i=0;i<n;++i){
        cout<<"Enter element no " << i+1 << " : ";
		cin>>a[i];
	}

	for(int i=1;i<n;++i)
	{
		for(int j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	cout << "Enter the element you want to search: ";
	cin >> k;

    int index = binarySearch(a, 0, n - 1, k);

    if(index == -1){
        cout << "The element you are searching, is not found in the array";
    }
    else{
        cout << "Your element " << k << " is found at index " << index;
    }
}
