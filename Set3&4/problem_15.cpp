#include <iostream>
using namespace std;

typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(int arr[], int n)
{
    ll ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}

int main()
{
    int numberOfElements;
    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    int arr[numberOfElements];

    for(int i = 0; i<numberOfElements; i++){
        cout << "Enter the element: ";
        cin >> arr[i];
    }
    cout << "LCM of given numbers: " << findlcm(arr, numberOfElements);
    return 0;
}
