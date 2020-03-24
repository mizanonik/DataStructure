#include<iostream>
using namespace std;

main(){
    int row, column, rowSum = 0, colSum = 0;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    int matrix[row][column];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i<row; i++){
        rowSum = 0;
        for(int j = 0; j<column; j++){
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i+1 << " : " << rowSum << endl;
    }


    for(int j = 0; j<column; j++){
        colSum = 0;
        for(int i = 0; i<row; i++){
            colSum += matrix[i][j];
        }
        cout << "Sum of column " << j+1 << " : " << colSum << endl;
    }
}
