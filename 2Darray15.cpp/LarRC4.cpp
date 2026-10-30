#include <iostream>
#include<climits>
using namespace std;

// print row wise sum
void sumRow(int arr[][3], int row, int col)
{
        int maxSum=INT_MIN;//minimum value of int stote kiya
        int index=-1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
      for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
           
        }
              if(sum>maxSum){
                maxSum=sum;
                index=row;
            }
    }
   
   
    cout<<"the largest sum of element in a row is = " << maxSum <<" "<<"and there index is = "<<index<<" "<<endl;
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
    return 0;
}