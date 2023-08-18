#include<iostream>
using namespace std;

// void printn(int arr[], int size){
//     int ans = 0;
//     for(int i=0; i < size; i++){
//         ans = ans ^ arr[i];
//     }
//     // return ans;
// }


int main(){
    int a[10] = {1,2,3,3,5,4};
    
    int ans = 0;
    int size = 10;
    for(int i=0; i < size; i++){
        ans = ans ^ a[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    
    cout << "ans is = " << ans;

   
}