=>  Brute Force Approach 
=>  T.C:- O((N*M)*(N + M)) + O(N*M)

class Solution {
public:

        void markRow(vector<vector<int>>&matrix, int n, int m, int i){
            for(int j=0; j<m; j++){
                if(matrix[i][j]!=0){
                    matrix[i][j]=-(2^31 + 10);
                }
            }
        }

        void markCol(vector<vector<int>>&matrix, int n, int m, int j){
            for(int i=0; i<n; i++){
                if(matrix[i][j]!=0){
                    matrix[i][j]=-(2^31 + 10);
                }
            }
        }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    markRow(matrix,n,m,i);
                    markCol(matrix,n,m,j);
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -(2^31 + 10)){
                    matrix[i][j]=0;
                }
            }
        }
    }
};






=>  Better Approach 
=>  T.C:- O(2*(N*M))
=>  S.C:- O(N) + O(M)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>row(n,1), col(m,1);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i]==0 || col[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
