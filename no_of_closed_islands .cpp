class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        
        int number = 0;

        for(int i=0;i<grid.size();i++)
         for(int j=0;j<grid[0].size();j++)
            if(grid[i][j] == 0) {
            number +=func(grid,i,j)?1:0;
            }
        return number;
    }

    bool func(vector<vector<int>>& grid,int i,int j) {
        
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return false;
        
        if(grid[i][j] == 1) return true;
        
        grid[i][j] = 1;

        bool b1 = func(grid,i-1,j);
        bool b2 = func(grid,i+1,j);
        bool b3 = func(grid,i,j-1);
        bool b4 = func(grid,i,j+1);

        return b1 && b2 && b3 && b4;

    }


};