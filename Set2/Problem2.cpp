#include<iostream>
using namespace std;

main(){
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    int firstMatrix[row][column];
    int secondMatrix[row][column];
    int resultMatrix[row][column];

    cout << "Enter first Matrix" << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter Second Matrix" << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> secondMatrix[i][j];
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            resultMatrix[i][j]=firstMatrix[i][j]+secondMatrix[i][j];
        }
    }

    cout << "Addition of two matrices: " << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout <<  resultMatrix[i][j] << "\t";
        }
        cout << endl;
    }

}

