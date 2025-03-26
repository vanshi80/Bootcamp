// here we are going to detect the repeating element in the array with the help of Floyds tortoise and hare algorithm
#include<bits/stdc++.h>
using namespace std;
int findrepeatingelement(int arr[],int n){
    int slow = arr[0]+1;
    int fast = arr[0]+1;
    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast]]+1;
    }while(slow!=fast);
    slow = arr[0]+1;
    while(slow!=fast){
        slow = arr[slow]+1;
        fast = arr[fast]+1;
    }
    return slow-1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The repeating element is "<<findrepeatingelement(arr,n)<<endl;
    return 0;
}