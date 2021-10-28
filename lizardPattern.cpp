#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin >> num;
    
    for (int x = 1; x <= num+2; x++){
        for (int y = 1; y <= num+2; y++){
            if(x == 1 && y == 2 || x == 1 && y == num+1)
                cout << '*';
            else if(x == 3 && y == 2 || x == 3 && y == num+1)
                cout << '*';
            else if (x == 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    

    return 0;
}
