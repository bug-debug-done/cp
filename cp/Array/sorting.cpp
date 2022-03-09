#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		for(int j=0;j<n-1-i;j++){
			if(arr[j+1]<arr[j]){
				swap(arr[j+1],arr[j]);
			}
		}
	}
}

void slectionSort(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		int min=i;
		for (int j = i; j < n; ++j)
		{
			if(arr[min]>arr[j]){
				min=j;
			}
		}

		swap(arr[min],arr[i]);
	}
}


int main() {

	int arr[]={5,4,3,2,1};
	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<" ";
	}
	// bubbleSort(arr,5);
	slectionSort( arr,5);
	cout<<endl;

	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<" ";
	}

	
	return 0;
}