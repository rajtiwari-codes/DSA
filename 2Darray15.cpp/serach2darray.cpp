// #include<iostream>
// using namespace std;

// int search(int arr[],int n,int key){
//     int s=0;
//     int e=n-1;
    

//    while(s<=e){

//      int mid=s+(e-s)/2;          //find mid --->> kis index par present haii

//         if(key==arr[mid]){       //that mid ki index ki <---value---> ko aceesss kiya
//             return mid;           //index ko return kiya
//         }else if(key>arr[mid]){
//             s=mid+1;

//         }else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }

// //print all arrryyomly
// // void pin(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";

// //     }
// //     cout<<endl;
// // }

// int main(){

//     int arr[7]={3,5,7,9,10,15,20};
//     int n=7;
//     int key=20;

//     int result=search(arr,n,key);
//     // pin(arr,n);

//      if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     }
//     else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }

//Serach in 2 D arryy

#include <iostream>
using namespace std;

bool searchMatrix(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int element = arr[mid / col][mid % col];

        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 16;

    if (searchMatrix(arr, 3, 4, target))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}