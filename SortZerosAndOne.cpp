#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    //COUNTING
    for (int i=0; i<n; i++){
        if( arr[i] == 0){
            zeroCount++ ;
        }
        if( arr[i] == 1){
            oneCount++ ;
        }
    }

    //INSERTION

    /* for(int i=0; i<zeroCount; i++){
    arr[i]=0;
    }
    for(int i= zeroCount; i<n; i++){
    arr[i]=0;
    }
    */
   
    int i=0;
    for( ; i < zeroCount; i++){
        arr[i]=0;
    }
    for( ; i < n ; i++){
        arr[i]=1;
    }

}
int main(){
    int arr[]= {1,1,0,0,0,1,1};
    int n=7;
    sortZeroOne (arr, n);

    //PRINTING THE ARRAY
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}