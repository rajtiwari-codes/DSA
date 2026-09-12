// #include<iostream>
// using namespace std;

// int main(){
//     //sum of array
//  int sum=0;
//  int arr[6]={2,4,68,35,6,6};
//  int n=6;
//  for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//  }
//  cout<<sum<<endl;

//     return 0;
// }

//scope logic

#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout << endl << "Inside the function" <<endl;
    
    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;


    cout << "Going back to main function" << endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}