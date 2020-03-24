#include <iostream>
using namespace std;
void max_heap(int *a, int m, int n) {
   int t = a[m];
   int j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a,int n) {
      for(int k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
int main() {
   int noOfelements;
   cout<<"Enter no of elements of array: ";
   cin>>noOfelements;
   int arr[30];
   for (int i = 1; i <= noOfelements; i++) {
      cout<<"Enter element no " << i << " : " <<endl;
      cin>>arr[i];
   }
   build_maxheap(arr,noOfelements);
   cout<<"Max Heap" << endl;
   for (int i = 1; i <= noOfelements; i++) {
      cout<<arr[i]<<endl;
   }
}
