#include<iostream>
using namespace std;

void print(int n){
    if (n==0)
    return;

    print(n-1);

    if (n %2 == 0)
    cout<< n <<" ";
    
} 

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print(n);
    return 0;
}