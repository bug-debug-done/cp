#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
    	for(int j=0;j<n-1-i;j++){
    		if(arr[j]>arr[j+1]){
    			swap(arr[j+1],arr[j]);
    		}
    	}
    }
}

void insersertionSort(int arr[],int n){

	for (int i = 1; i < n; ++i)
	{
		int t=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>t){
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=t;
	}

}

int main(){

	int arr[]={5,4,3,2,1};

	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	bubbleSort(arr,5);
	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}