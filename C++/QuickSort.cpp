#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i =  low-1;
    for(int j = low;j<= high;j++){
        if(arr[j]< arr[pivot]){
            swap(& arr[j],& arr[i]);
        }
    }
    swap(& arr[i+1],& arr[pivot]);
    return i+1;
}

void quicksort(int arr[],int low, int high){
    if(low<high){
        int q = partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);
    }
}

int main()
{
    int n,i;
    cout<<"Enter the number of elements to be sorted:";
    cin>>n;

    int arr[n];
    for(i = 0;i<n;i++){
        cout<<"Enter  element"<<i+1<<":";
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted Array:\n";
    for(i = 0;i<n;i++){
        cout<<"->"<<arr[i];

    }
    return 0 ;
}
	