// #include <stdio.h>
void swap (int *a, int *b){
    int t = *a;
    *a = *b ;
    *b = t;
}

int partition(int arr[], int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<=high; j++){
        if(arr[j]<pivot){
            i++;
            swap(& arr[i],& arr[j]);
        }
    }
    swap(& arr[i+1],& arr[high]);
    return i+1;
}

void quicksort(int arr[],int low, int high){
    if(low<high){
        int q = partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i< n;i++){
        printf("%d",arr[i]);
    }
    printf("Sorted Array:\n");
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}

