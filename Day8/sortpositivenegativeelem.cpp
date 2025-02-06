#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortarray(int arr[],int n){
    int lo =0,hi=n-1;
    while(lo<=hi){
        if(arr[lo]>0 && arr[hi]<0){
            swap(&arr[lo],&arr[hi]);
            lo++;
            hi--;
        }
        if(arr[lo]<0&&arr[hi]>0){
            hi--;
            lo++;
        }
        else if(arr[lo]<0){
            lo++;
        }
        else if(arr[hi]>0){
            hi--;
        }
    }
    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // lo=0,hi=n-1;
    // int i =0;
    // while(lo<=hi){
    //     if(i%2==0){
    //         cout<<arr[lo++];
    //     }else{
    //         cout<<arr[hi--];
    //     }
    //     i++;
    // }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarray(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}