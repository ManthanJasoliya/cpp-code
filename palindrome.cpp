#include<iostream>
#include<cstring>
using namespace std ;
int main(){
    char str[100];
    int length;
    char rev[100]; 
    cout<<"Enter a string : ";
    cin >> str;
    length = strlen(str);
    int j=0;
    for(int i = length-1 ;i>=0 ;i--){
        rev[j++]=str[i];
    }
    rev[j]='\0';
    cout << rev << endl;
    if (strcmp(str,rev)==0)
    {
        cout << "This is the palindrome !!";
    }
    else
        cout << "This is not a palindrome !!";

    return 0;
}