#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter a number of rows: ";
    cin >> rows;
    cout << "Enter a number of columns: ";
    cin >> columns;
    int matrix[rows][columns];
    int data = 0;
    for (int x = 1; x <= rows; x++){
        for (int y = 1; y <= columns; y++){
            cin >> data;
            matrix[x-1][y-1] = data;
        }
    }
    cout << "Matrix elements from a spiral form to a straight line: " << endl;
    int startRowIdx = 0, startColIdx = 0;
    while (startRowIdx < rows && startColIdx < columns){
        for (int i = startColIdx; i < columns; i++){
            cout << matrix[startRowIdx][i] << " ";
        }
        startRowIdx++;
        for (int i = startRowIdx; i < rows; i++){
            cout << matrix[i][columns - 1] << " ";
        }
        columns--;
        if (startRowIdx < rows){
            for (int i = columns - 1; i >= startColIdx; i--){
                cout << matrix[rows - 1][i] << " ";
            }
            rows--;
        }
        if (startColIdx < columns){
            for (int i = rows - 1; i >= startRowIdx; i--){
                cout << matrix[i][startColIdx] << " ";
            }
            startColIdx++;
        }
    }
    return 0;
}
