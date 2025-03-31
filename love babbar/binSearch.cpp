#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void binarySearch(int arr[], int s, int e, int k){
    print(arr,s, e);
    if(s>e){
        cout<<"Element not found"<<endl; 
        return;     
    }
    else{
        int mid = (s+e)/2;
        if(arr[mid] == k){
            cout<<"Element is present at index "<<mid<<endl;
            return;
        }

        else if(arr[mid] > k){
            binarySearch(arr, s, mid-1, k);
        }

        else{
            binarySearch(arr, mid+1, e, k);
        }
    }
}

int main(){
    int arr[] = {1,3,5,7,9};
    int size = 5;
    int target = 7;
    // int mid = (0+4)/2;
    binarySearch(arr, 0, 4,target);
    return 0;
}