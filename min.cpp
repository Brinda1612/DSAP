#include<iostream>
using namespace std;

int getmax(int num[], int n ){
     int maxi = INT_MIN;

     for(int i = 0; i<n; i++){

        maxi = max(maxi , num[i]);
        // if(num[i]>max){
        //     max = num[i];
        // }
     }
     return maxi;
}

int getmin(int num[], int n ){
     int mini = INT_MAX;

     for(int i = 0; i<n; i++){

        // 1st way to find value

        mini = min(mini, num[i]);

        // 2nd way to find value
        // if(num[i]<min){
        //     min = num[i];
        // }
     }
     return mini;
}

int main(){
    int size;
    cout << "enter a size : " ;
    cin >> size;

    int num[5];
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout << "max value is = " << getmax(num, size) << endl;
    cout << "min value is = " << getmin(num, size);
}