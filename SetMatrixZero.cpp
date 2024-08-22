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

/* Note:- In the brute force solution, if any matrix will contain non zero numbers, especially -1, then it will also make it zero, which may lead to the failure of some of the testcases.*/