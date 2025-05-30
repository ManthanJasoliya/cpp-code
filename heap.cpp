#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;

    heap(){
        arr[0]=-1;
        size = 0;
    }

    void insertion(int data){
        size = size+1;
        int index = size;
        arr[index]=data;

        int parent = index/2;

        while(index >1){
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent ;
            }else{
                return ;
            }
        }
    }

    void deletion(){
        if(size==0){
            cout << "Nothing to delete." << endl;
            return ;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftindex = 2*i;
            int rightindex = 2*i + 1;

            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i = rightindex ;
            }else{
                return ;
            }
        }
    }

    void print(){
        for(int i =1 ;i<=size ; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};

void position(int arr[] , int n , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left ;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        position(arr,n,largest);
    }
}

void heapsort(int arr[] , int n){
    int size = n;
    while(size > 1){
        swap(arr[size] , arr[1]);
        size--;
        position(arr,size,1);
    }
}

int main(){
    heap h;
    h.insertion(50);
    h.insertion(51);
    h.insertion(53);
    h.insertion(52);
    h.insertion(55);
    h.print();

    h.deletion();
    h.print();
    int arr[7] ={-1 , 23 , 34 , 45 , 56 , 67, 12};
    int n = 6;
    for (int i = n/2 ; i>0 ; i--){
        position(arr,n,i);
    }
    cout << "Printing array : " << endl;
    for(int i = 1 ; i <n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
    
    heapsort(arr,n);
    cout << "Printing array : " << endl;
    for(int i = 1 ; i <n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
       
}