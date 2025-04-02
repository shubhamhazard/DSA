#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int size, int key){
    if(size == 0)
        return false;

    if(key == arr[0]){
        return true;
    }

    return (arr+1, size, key);
}

int main(){
    int arr[5] ={1,2,3,4,5};
    int size = 5;
    int key = 4;
    bool ans = isPresent(arr, size, key);
    if(ans){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array";
    }
    return 0;
}