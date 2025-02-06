#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    char str[100];
    int found = 0;
    cin>>str;  //this takes a single word as input;
    // string str;
    // getline(cin,str);  //this takes the whole line as input in the string
    int n = strlen(str);
    sort(str,str+n);
    for(int i=0;i<n-1;i++){
        if(str[i] == str[i + 1] && (i == 0 || str[i] != str[i - 1])){
            cout<<str[i]<<endl;
            found = 1;
        }
    }
    if(!found) cout<<"No duplicate is found";
    return 0;
}