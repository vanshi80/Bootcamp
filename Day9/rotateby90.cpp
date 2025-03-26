// This is matrix rotation in anticlockwise direction.
#include<bits/stdc++.h>
using namespace std;
// to rotate the matrix by 90 deg in clockwise direction we follow the apporach by first reversing the rows and then transposing the matrix
// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     // first reverese the rows
//     for(int i=0;i<n/2;i++){
//         for(int j=0;j<n;j++){
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[n-i-1][j];
//             matrix[n-i-1][j] = temp;
//         }
//     }
//     // now just transpose the matrix
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//     }
// }
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