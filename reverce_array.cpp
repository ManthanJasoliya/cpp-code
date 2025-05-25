#include <iostream>
using namespace std;

int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int reverse(int arr[] ,int n){
    int start = 0 ;
    int end = n-1 ;

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start ++ ;
        end -- ;
    }
    
}

int main(){
    int arr1[] = {1,3,15,63,-98,73};
    int arr2[] = {8,4,23,45,-8};

    reverse(arr1 ,6);
    reverse(arr2 ,5);

    print(arr1 ,6);
    print(arr2 ,5);
}