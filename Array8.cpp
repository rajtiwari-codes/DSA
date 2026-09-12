#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int size){//pass your arry name and size

    cout<<"print the arry"<<endl;
    for (int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }

    cout<<"printing is done"<<endl;
}

int main(){
    
    int number[15];//declare a array

    cout<<"value at 14 index "<<number[14] << endl;//acces a arry
    cout<<"value at 29 index "<<number[29] << endl;

    int secound[3]={3,45,66};
     cout<<"value at 2 index "<<secound[2] << endl;

     int third[15]={2,5};
     int n=15;

    //  cout<<"print the arry"<<endl;
    //   for(int i=0;i<n;i++){
    //     cout<<third[i]<<" ";//only 0 and 1 index get value and oyher value get ==0
    //     }

    printArray(third,15);

int fourth[10]={0};//all th elocation value 0 store hogi
      n=10;
    //  cout<<"print the arry"<<endl;
    //    for(int i=0;i<n;i++){
    //     cout<<fourth[i]<<endl;//only 0 and 1 index get value and oyher value get ==0
    //     }

     printArray(fourth,10);


        
int fifth[10]={1};//fisrt value is 1 and all other is 0
      n=10;

//      cout<<"print the arry"<<endl;
//        for(int i=0;i<n;i++){
//         cout<<fifth[i]<<" ";
//         }
// cout<<endl;

 printArray(fifth,10);


//assingn array value whwter we want
int raj[100000];
    n=50;
    fill(raj,raj+20,3);//0 index se 19 index tak and raj dneote base address and array name
    for(int i=0;i<n;i++){
        cout<<raj[i]<<" ";
        }



     cout<<"everything is good" << endl;
 return 0;

}