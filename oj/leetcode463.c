/* int** 操作二维数组有没有更好的办法？？？ */
/*
You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water. Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
Example:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]
Answer: 16
Explanation: The perimeter is the 16 yellow stripes in the image below:
*/
#include <stdio.h>
#include <malloc.h>
int islandPerimeter(int **grid, int gridRowSize, int gridColSize) {
  int i,j;
  // for(i=0;i<gridRowSize;i++){
  //   for(j=0;j<gridColSize;j++){
  //     printf("%3d ", grid[i][j]);
  //   }
  //   printf("\n");
  // }
  int p=0;
  for(i=0;i<gridRowSize;i++){
    for(j=0;j<gridColSize;j++){
      if(grid[i][j]>0){
        if(i==0 || grid[i-1][j]==0) p++;//上
        if(j==gridColSize-1 || grid[i][j+1]==0) p++;//右
        if(i==gridRowSize-1 || grid[i+1][j]==0) p++;//下
        if(j==0 || grid[i][j-1]==0) p++;//左
      }
    }
  }
  return p;
}

int main(){
  //----------------a[4][4]={{0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0}};
  int i;
  int **a;
  a=(int **)malloc(4*sizeof(int *));
  for(i=0;i<4;i++){
    *(a+i)=(int *)malloc(4*sizeof(int));
  }
  // int j;
  // for(i=0;i<4;i++){
  //   for(j=0;j<4;j++){
  //     *((*(a+i))+j)=i*4+j;
  //   }
  // }
  *((*(a+0))+0)=0;
  *((*(a+0))+1)=1;
  *((*(a+0))+2)=0;
  *((*(a+0))+3)=0;
  *((*(a+1))+0)=1;
  *((*(a+1))+1)=1;
  *((*(a+1))+2)=1;
  *((*(a+1))+3)=0;
  *((*(a+2))+0)=0;
  *((*(a+2))+1)=1;
  *((*(a+2))+2)=0;
  *((*(a+2))+3)=0;
  *((*(a+3))+0)=1;
  *((*(a+3))+1)=1;
  *((*(a+3))+2)=0;
  *((*(a+3))+3)=0;

  printf("%d\n", islandPerimeter(a,4,4));

  return 0;
}