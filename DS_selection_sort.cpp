#include<iostream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[minIndex]){
                 minIndex=j;
            }
        }
        swap(&arr[minIndex],&arr[i]);
    }
}
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    display(arr,n);
    return 0;
}