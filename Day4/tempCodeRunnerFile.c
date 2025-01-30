void reverse(int arr[],int low,int high){
    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}