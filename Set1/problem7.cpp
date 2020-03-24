#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int k){
    for(int x = 0; x<n; x++){
        if(arr[x] == k){
            return x;
        }
    }
    return -1;
}

main(){
    int n,k;
	cout<<"Enter number of elements: ";
	cin>>n;

    int a[n];
	for(int i=0;i<n;++i){
        cout<<"Enter element no " << i+1 << " : ";
		cin>>a[i];
	}

    cout<<"Enter the element you want to search: ";
    cin >> k;

    int index = linearSearch(a, n, k);

    if(index == -1){
        cout << "The element you are searching, is not found in the array";
    }
    else{
        cout << "Your element " << k << " is found at index " << index;
    }
}
