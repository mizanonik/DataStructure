#include<iostream>
using namespace std;

main(){
    int row1, row2, column1, column2;
    cout << "Enter number of rows of first matrix: ";
    cin >> row1;
    cout << "Enter number of columns of first matrix: ";
    cin >> column1;
    cout << "Enter number of rows of Second matrix: ";
    cin >> row2;
    cout << "Enter number of columns of Second matrix: ";
    cin >> column2;

    int firstMatrix[row1][column1];
    int secondMatrix[row2][column2];
    int resultMatrix[row1][column2];

    cout << "Enter first Matrix" << endl;
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column1; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter Second Matrix" << endl;
    for(int i = 0; i<row2; i++){
        for(int j = 0; j<column2; j++){
            cout << "Enter value at " << i+1 << " " << j+1 << " : ";
            cin >> secondMatrix[i][j];
        }
    }

    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column2; j++){
            resultMatrix[i][j] = 0;
        }
    }

    if(column1!=row2){
        cout << "column of first matrix not equal to row of second matrix";
    }
    else{
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<column2; j++){
                    for(int k = 0; k<column1; k++){
                        resultMatrix[i][j]+=(firstMatrix[i][k]*secondMatrix[k][j]);
                }
            }
        }

        cout << "Multiplication of two matrices: " << endl;
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<column2; j++){
                cout <<  resultMatrix[i][j] << "\t";
            }
            cout << endl;
        }
    }

}


