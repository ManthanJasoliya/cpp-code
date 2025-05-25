#include <bits/stdc++.h>
using namespace std;
int main(){
    int w ; cin >> w ;
    if(w <= 100){
        if(w%2 == 0 && w != 2 && w!=0 ){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}