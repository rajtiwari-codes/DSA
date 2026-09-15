#include<iostream>
using namespace std;
void sum(int arr[],int n,int u ){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==u){
                     cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}
// void print(int arr[],int n,int u){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         cout<<endl;
//     }
// }
int main(){
    int u=12;
    int arr[5]={1,2,3,4,5};

    sum(arr,5,u);
    // print(arr,5,u);
    return 0;
}