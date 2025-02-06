#include<bits/stdc++.h>
using namespace std;
void printtranpose(int** mat,int r,int c){
    // This code is valid when there is a square matrix
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r,c;
    cin>>r;
    cin>>c;
    int **mat = new int* [r];
    for(int i=0;i<r;i++){
        mat[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    printtranpose(mat,r,c);
    return 0;
}