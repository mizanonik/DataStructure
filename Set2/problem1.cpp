#include<iostream>
using namespace std;

main(){
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    int matrix[row][column];
    int transMatrix[row][column];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> matrix[i][j];
        }
    }

    cout << "Input matrix: " << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout <<  matrix[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            transMatrix[i][j] = matrix[j][i];
        }
    }

    cout << "Transposed matrix: " << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout <<  transMatrix[i][j] << "\t";
        }
        cout << endl;
    }

}
