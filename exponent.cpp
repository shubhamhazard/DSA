#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findPower(int a, int b){
    if(b==0)
        return 1;

    // if(b==1)
    //     return a;

    int ans = findPower(a,b/2);
    // if b is even
        if(b%2 == 0)
            return ans*ans;
        
        else
            return a*ans*ans;
}

int main(){
    int a ,b;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<endl;
    cin>>b;
    int ans = findPower(a,b);
    cout<<"Answer is " <<ans;
    return 0;
}