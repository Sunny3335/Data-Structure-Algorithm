#include<iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[], int n) {
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n) {
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){

    int size;
    cin>>size;

    int num[1000];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"minimun number "<<getMin(num,size)<<endl;
    cout<<"maximun number "<<getMax(num,size)<<endl;
    return 0;
}