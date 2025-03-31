// #include <stdio.h>
int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90},n= 7,i,j;
    for(i = 0;i<n-1;++i){
             int swapped = 0;
        for(j = 0;j<n-i-1;j++){
           
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
            }
            if(!swapped){
                break;
        }

    }
    printf("\nSorted Array:\n");
    for(i =0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
