#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;
int main(){
    srand(time(0));
    int sec_n = rand() % 100 + 1;
    int guess;
    int count ;
    
    cout << "Lets start the Game ! \n";
    do{
        cout << "Enter your Guess : ";
        cin >> guess ;
        count ++ ;
        if (guess > sec_n)
            cout << "Aochu feco ! \n";
        else if (guess < sec_n)
            cout << "Jaju feco ! \n";
        else 
            cout << "Tukko chali gayo ho ! \n";
    }while(guess != sec_n);

}