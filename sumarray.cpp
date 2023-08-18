#include<iostream>
using namespace std;
int main(){

    int sum = 0;
    int sum2 = 0;
    int n = 5;
    int a[5] = {1,2,3,5};

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    for (int j = 0; j < n-1; j++)
    {
        sum2 = sum2 + a[j];
    }

    cout << sum << endl;

    int mis = sum - sum2;

    cout << mis << endl;
    
    cout<<"NAMSTE SUNIYA :-" <<endl;
}