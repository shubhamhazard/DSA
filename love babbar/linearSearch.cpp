#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array is "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int n, int tar){
    print(arr,n);
    if(n == 0){
        return false;
    }

    if(arr[0] == tar){
        return true;
    }

    return linearSearch(arr+1, n-1, tar);
}

// bool find(vector<int> &arr, int n, int tar, int index = 0) {
//     if (index == n) { // Base case: If we reach the end of the array
//         return false;
//     }

//     if (arr[index] == tar) { // If we find the target, return true
//         return true;
//     }

//     return find(arr, n, tar, index + 1); // Recursive call with next index
// }


int main(){
    int arr[] = {1,2,3,4,5};
    int target = 6;
    int n = 5;

    bool ans = linearSearch(arr,n,target);
    cout<<ans;
    cout<<endl;
    if(ans)
        cout<<"Element is present";
    else    
        cout<<"Element is not present";
    return 0;
}