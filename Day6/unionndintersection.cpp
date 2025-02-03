#include<bits/stdc++.h>
using namespace std;
void findunion(int arr1[],int n,int arr2[],int m){
    int i=0;int j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<<arr1[i++]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr1[i++]<<" ";
    }
    while(j<m){
        cout<<arr2[j++]<<" ";
    }
}
void findintersection(int arr1[],int n,int arr2[],int m){
    int i=0;int j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i++]<<" ";
            j++;
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    findunion(arr1,n,arr2,m);
    cout<<endl;
    findintersection(arr1,n,arr2,m);
    return 0;
}