#include <iostream>
using namespace std;

int set_bit(int n){
    int count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n = n >> 1 ;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n ;

    if(n < 0){
        cout << "Enter a positive number " << endl;
        goto end ;
    }
    if (set_bit(n)==1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    end :
    return 0 ;
}