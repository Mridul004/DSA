                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom) {
                for(int i=right; i>=left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if(left<=right) {
                for(int i=bottom; i>=top;i--) {
                    ans.push_back(matrix[i][left]);
                }
            }
            left++;
        }
        return ans;
    }