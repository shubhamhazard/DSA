#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void stringReverse(string str, int i,int j){
    if(i >= j){
        cout<<"Reversed string is "<<str<<endl;
        return;
    }

    swap(str[i++], str[j--]);
    // i++;
    // j--;
    stringReverse(str,i,j);
}

int main(){
    string str = "abcde";
    int i = 0;
    int j = str.length()-1;
    stringReverse(str,i,j);
    cout<<str;
    return 0;
}