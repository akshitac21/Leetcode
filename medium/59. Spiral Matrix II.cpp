class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

    vector<vector<int>> mat(n, vector<int>(n));
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int num = 0;
    while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) { //left to right
                mat[top][i] = ++num; //increments first row (0,0)->(0,1)->(0,2)->(0,3)
            }
            top++; //next row starts from row 1
            for (int i = top; i <= bottom; i++) { //(1,3),(2,3),(3,3)
                mat[i][right] = ++num; //top to bottom from 2nd row last col increment
            }
            right--;//before last col

            for (int i = right; i >= left; i--) { //right to left, starting from 2nd last col
                mat[bottom][i] = ++num; //(3,2),(3,1),(3,0)
            }
            bottom--; //before the last row

            for (int i = bottom; i >= top; i--) { //bottom to top
                mat[i][left] = ++num; //(2,0),(2,1)(2,2)(1,0)(1,1)(1,2)
            }
            left++;
        }
    return mat;
}
};
