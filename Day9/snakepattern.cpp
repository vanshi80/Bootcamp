#include<bits/stdc++.h>
using namespace std;
void printsnakepattern(int** mat,int r,int c){
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl; 
        }
        else{
            for(int j=c-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int r,c;
    cin>>r;
    cin>>c;
    int** mat = new int*[r];
    for(int i=0;i<c;i++){
        mat[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    printsnakepattern(mat,r,c);
    return 0;
}