#include <iostream>
using namespace std;

void wave(int arr[][3], int rowsize, int colsize){

    for(int col=0;col<colsize;col++){//each colum ke inside  check ??even or odd

        if(col%2==0){//if even-->print T to B ?row ki value ko

            for(int row=0;row<rowsize;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{//odd-->Bto T ?? lop con change not do reverse
            for(int row=rowsize-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }

        }
    }
    cout<<endl;
}

int main()
{

    // inislise array
    int arr[3][3];

    // take input as -row WiSE
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0;col < 3; col++)
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

    wave(arr, 3, 3);
    return 0;
}