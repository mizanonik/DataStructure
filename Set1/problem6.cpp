#include<iostream>

using namespace std;

main()
{
	int a[500],n;
	cout<<"Enter number of elements: ";
	cin>>n;

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
	cout<<"After sorting:";
	for(int i=0;i<n;++i){
		cout<<" "<<a[i];
    }
}
