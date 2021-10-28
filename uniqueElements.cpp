#include <iostream>

using namespace std;

int main()
{
    int lenFirstArray, lenSecondArray;
    
    cout << "Enter the number of elements in the first array: ";
    cin >> lenFirstArray;
    
    char firstArray[lenFirstArray];
    
    for (int i = 0; i < lenFirstArray; i++){
        cin >> firstArray[i];
    }
    
    cout << "Enter the number of elements in the second array: ";
    cin >> lenSecondArray;
    
    char secondArray[lenSecondArray];
    
    for (int i = 0; i < lenSecondArray; i++){
        cin >> secondArray[i];
    }
    
    char uniqueElements[lenFirstArray+lenSecondArray];
    
    int counter = 0, flag = 0, x = 0;
    for (int i = 0; i < lenFirstArray; i++){
        for (int j = 0; j < lenSecondArray; j++){
            if (firstArray[i] == secondArray[j]){
                flag = 0;
                break;
            }
            else{
                flag = 1;
                x = i;
            }
        }
        if (flag == 1){
            uniqueElements[counter] = firstArray[x];
            counter++;
        }
    }
    for (int i = 0; i < lenSecondArray; i++){
        for (int j = 0; j < lenFirstArray; j++){
            if (secondArray[i] == firstArray[j]){
                flag = 0;
                break;
            }
            else{
                flag = 1;
                x = i;
            }
        }
        if (flag == 1){
            uniqueElements[counter] = secondArray[x];
            counter++;
        }
    }
    
    int temp;
    for(int i = 0; i<counter; i++) {
        for(int j = i+1; j<counter; j++){
            if(uniqueElements[j] < uniqueElements[i]) {
                temp = uniqueElements[i];
                uniqueElements[i] = uniqueElements[j];
                uniqueElements[j] = temp;
            }
        }
    }
    
    cout << "Unique Characters: ";
    for (int i = 0; i < counter; i++){
        cout << uniqueElements[i] << " ";
    }
    
}
    
