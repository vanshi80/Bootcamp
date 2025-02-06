#include<bits/stdc++.h>
using namespace std;
void reverse(int** mat,int r,int c){
    for(int i=0;i<c;i++){
        for(int j=i+1;j<r;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rotateby90(int** mat,int r,int c){
    reverse(mat,r,c);
    for(int i=0;i<c;i++){
        int low = 0,high = r-1;
        while(low<high){
            swap(&mat[low][i],&mat[high][i]);
            low++;
            high--;
        }
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
    rotateby90(mat,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateby90(mat,r,c);
    return 0;
}