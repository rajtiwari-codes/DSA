#include <iostream>
using namespace std;

// print row wise sum
void sumRow(int arr[][3], int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// print Col wise sum
void sumCol(int arr[][3], int row, int col)
{

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{

    // inislise array
    int arr[3][3];

    // take input as -ROW WiSE
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    sumRow(arr, 3, 3);
    sumCol(arr, 3, 3);

    return 0;
}