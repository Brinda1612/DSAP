#include<iostream>
using namespace std;

void printarr(int arr[] , int size){

    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
   int a[3] = {1,2,3};
   int n = 2;
   printarr(a, 3);
   cout<<endl;

//  find  size of array
int s = sizeof(a)/sizeof(int);
cout << "size of array is = " << s << endl;
    
}