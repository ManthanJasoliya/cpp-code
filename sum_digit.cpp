#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp=0;
    int sum = 0;
    while (n != 0)
    {
        temp=n%10;
        sum = sum + temp ;
        n=n/10;
    }
    cout << "Your sum is : " << sum << endl;
}