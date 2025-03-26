#include<bits/stdc++.h>
using namespace std;
// in cpp we could send the vector as argument for the matrix and then calclate the rows and columns and then we could create 
// an array with some name and then use the push_back function to create the array and then return that
// class Solution {
//     public:
//         vector<int> spiralOrder(vector<vector<int>>& mat) {
//             int r = mat.size();
//             int c = mat[0].size();
//             int top = 0, right = c - 1, bottom = r - 1, left = 0;
//             vector<int> result;
    
//             while (top <= bottom && left <= right) {
//                 for (int i = left; i <= right; i++) {
//                     result.push_back(mat[top][i]);
//                 }
//                 top++;
    
//                 for (int i = top; i <= bottom; i++) {
//                     result.push_back(mat[i][right]);
//                 }
//                 right--;
    
//                 if (top <= bottom) {
//                     for (int i = right; i >= left; i--) {
//                         result.push_back(mat[bottom][i]);
//                     }
//                     bottom--;
//                 }
    
//                 if (left <= right) {
//                     for (int i = bottom; i >= top; i--) {
//                         result.push_back(mat[i][left]);
//                     }
//                     left++;
//                 }
//             }
            
//             return result;  // Return the result array with the spiral order
//         }
//     };
    
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