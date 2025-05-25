#include<iostream>
using namespace std;
int main(){
    int number ,reversed=0 ,rem;
    cout << "Enter a number : ";
    cin >> number ;
    while (number != 0)
    {
        rem = number % 10;
        reversed = reversed*10 + rem ;
        number = number / 10 ;
    }
    std::cout << reversed << std::endl;
    return 0;
}