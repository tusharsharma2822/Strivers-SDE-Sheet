/*Brute force solution for Set matrix zeros*/
class Solution {
public:
    void markRow(vector<vector<int>>& matrix,int i){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }

    void markCol(vector<vector<int>>& matrix,int j){
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    markRow(matrix,i);
                    markCol(matrix,j);
                }
            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

/* Note:- In the brute force solution, if any matrix will contain non zero numbers, especially -1, then it will also make it zero, which may lead to the failure of some of the testcases.
Time complexity - O(N^3)
space complexity - O(1)
*/

/*Better Solution*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> rowArray(n,0);
        vector<int> colArray(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    rowArray[i] = 1;
                    colArray[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowArray[i] == 1 || colArray[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

Note:- In the better solution, All the testcases that was failed in the brute force Solution will be passed.
Time complexity of the better solution is (2*N*M) where N is the number of rows and M is the number of coloums.
Space Complexity:- O(n) + O(m)

/*Optimal Solution*/
