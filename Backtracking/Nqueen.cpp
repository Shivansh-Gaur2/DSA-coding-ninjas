#include <iostream>
#include <bits.h>
using namespace std;


int board[11][11];
bool isPossible(int n, int row, int col){
    // Same Column
  for(int i=row-1;i>=0;i--){
    if(board[i][col] == 1){
      return false;
    }
  }
//Upper Left Diagonal
  for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
    if(board[i][j] ==1){
      return false;
    }
  }

  // Upper Right Diagonal

  for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
    if(board[i][j] == 1){
      return false;
    }
  }

  return true;
}
void nQueenHelper(int n, int row){
    if(row == n){
        for(int i = 0; i< n; i++){
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            
        }
    cout << endl;
    return;
    }

    for(int j = 0; j < n; j++){
        if(isPossible(n, row, j)){
            board[row][j] = 1;
            nQueenHelper(n, row+1);
            board[row][j] = 0;
        }
    }
    return;
}
void placeNQueens(int n){
    memset(board, 0, 11*11*sizeof(int));//to initialize board with 0
    nQueenHelper(n, 0);
}
int main()
{
    placeNQueens(11);
    return 0;
}
