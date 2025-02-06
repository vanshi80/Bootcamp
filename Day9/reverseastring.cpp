#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[] = "Vanshika Mittal";
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    cout<<i;
    int lo = 0,hi = i;
    while(lo<=hi){
        char temp = str[lo];
        str[lo] = str[hi];
        str[hi] = temp;
        lo++;
        hi--;
    }
    for(int j=0;j<=i;j++){
        cout<<str[j];
    }
    return 0;
}