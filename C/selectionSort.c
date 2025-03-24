// Online C compiler to run C program online
// #include <stdio.h>
void swap(int *Arr,int i,int j){
    int temp = Arr[i];
    Arr[i ] = Arr[j];
    Arr[j]= temp;
}

int findMinIndex(int *A, int start, int end){
    int min_index = start;
    ++start;
    while(start<end){
        if(A[start]<A[min_index]){
           min_index = start;
        }
             
           ++start;
    }
    return min_index;
}

void selectionSort(int *Arr,int n){
    for(int i = 0;i<n-1;i++){
    int min_index = findMinIndex(Arr,i,n);
    
    if(i!=(min_index)){
        swap(Arr,i,min_index);
    }
    }
}

int main(){
    int Arr[] = {1,5,9,7,3},n = 5;
    selectionSort(Arr,n);
    
    for(int i =0;i<n;i++){
        printf("%d",Arr[i]);
    }
    return 0;
}
    