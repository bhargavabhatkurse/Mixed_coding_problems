#include <iostream>
using namespace std;
int m=4;
int n=5;

void dfs_neighbours(int grid[][5],int i,int j) {
    if(i<0 || j<0 || i>m || j>n || grid[i][j] != 1) return;
    //out of bound(i and j reach outside the array) or the current element is not 1, then return
    
    
     grid[i][j]=0;  //reset the 1 to 0 i.e island to water

     dfs_neighbours(grid,i-1,j);    //explore the top
     dfs_neighbours(grid,i+1,j);    //explore the bottom
     dfs_neighbours(grid,i,j-1);    //explore the left
     dfs_neighbours(grid,i,j+1);    //explore the right
}

int no_of_islands(int grid[][5]) {
    int number=0;  //initially the number of islands is 0
    
    //check for all the elements in the array 
    for(int i=0;i<4;i++)
    for(int j=0;j<5;j++)
    if(grid[i][j] == 1){  //if 1 is found
        number+=1;    //increase the number of islands
        dfs_neighbours(grid,i,j);  //explore its neighbours
    }              
                       
    return number;      //return the number of islands
    
}
int main() {
   
    int grid1[][5] = {{1,1,1,1,0},
                     {1,1,0,1,0},
                     {1,1,0,0,0},
                     {0,0,0,0,0}};  //o/p 1
  
int grid2[][5] = {{1,1,0,0,0},     //o/p 3
                 {1,1,0,0,0},
                 {0,0,1,0,0},
                 {0,0,0,1,1}};
   
    cout<<no_of_islands(grid1)<<endl;
    cout<<no_of_islands(grid2);
    return 0;
}
