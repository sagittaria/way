public class leetcode463{
  public static void main(String[] args){
    int a[][]={{0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0}};
    System.out.println(islandPerimeter(a));
  }

  public static int islandPerimeter(int[][] grid) {
    int i,j;
    int p=0;
    int r=grid.length, c;
    for(i=0;i<r;i++){
      c=grid[i].length;
      for(j=0;j<c;j++){
        if(grid[i][j]>0){
          if(i==0 || grid[i-1][j]==0) {p++;}//up
          if(j==c-1 || grid[i][j+1]==0) {p++;}//right
          if(i==r-1 || grid[i+1][j]==0) {p++;}//bottom
          if(j==0 || grid[i][j-1]==0) {p++;}//left
        }
      }
    }
    return p;
  }
}