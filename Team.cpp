#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    int arr[n][3];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < 3; j++)
        {  
            cin >> arr[i][j] ;
            c = c + arr[i][j] ;
        }
        sum[i] = c ;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum[i] >= 2){
            count++ ;
        }
    }
    cout << count <<endl ; 
}