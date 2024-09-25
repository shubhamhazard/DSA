#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str, int i, int j){
        if (i > j)
            return true;

        if(str[i] != str[j])
            return false;

        else{
            return checkPalindrome(str, i+1, j-1);
        }
}

int main()
{
    string name = "abcde";
    cout << endl;
    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "It is a palindrome" << endl;
    }

    else
    {
        cout << "It is not a palindrome" << endl;
    }
    return 0;
}