#include<bits/stdc++.h>
using namespace std;
void spiraltraversal(int** mat,int r,int c){
    int top = 0,right = c-1,bottom = r-1,left = 0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        cout<<endl;
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        cout<<endl;
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
            cout<<endl; 
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
            cout<<endl; 
        }
    }
}
int main(){
    int r,c;
    cin>>r;
    cin>>c;
    int** mat = new int*[r];
    for (int i = 0; i < r; i++) {
        mat[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    spiraltraversal(mat,r,c);
    return 0;
}