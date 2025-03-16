#include<iostream>
using namespace std;
void sortZerosOne(int arr[], int n){
    int zeroCount =0;
    int oneCount =0;

    //COUNTING
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroCount++ ;
        }
        if(arr[i] == 1){
            oneCount++ ;
        }
    }

    //INSERTION USING THE FILL FUNCTION
    fill(arr, arr + zeroCount, 0);
    fill(arr + zeroCount, arr+n, 1);
}

int main(){
    int arr[]={1,1,1,0,0,1,0,0,1};
    int n=9;
    sortZerosOne(arr, n);

    //PRINTING THE ARRAY
    for(int i=0; i<n; i++){
        cout<< arr[i] << "  ";
    }
    return 0;
}