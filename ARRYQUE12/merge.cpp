#include<iostream>
#include<vector>
using namespace std;

int merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0,j=0,k=0;
    while(i<n && j<m){//when both condition true this loop run

        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];//i value small put k inside
            i++;
            k++;
        }else{
             arr3[k]=arr2[j];
             j++;
             k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}





int main(){

    int arr1[5]={2,4,6,8,10};
    int arr2[4]={1,3,5,7};
    int arr3[9]={0};//3 aary whjhere we put element

    merge(arr1,5,arr2,4,arr3);

    print(arr3,9);

    return 0;
}