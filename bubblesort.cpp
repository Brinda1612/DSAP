#include<iostream>
using namespace std;

void bubble(int a[], int n){

    for(int i = 1; i < n; i++){

        for (int j = 0; j < n-i; j++)
        {
            if (a[j] > a[j+1])
            {
                 swap(a[j], a[j+1]);
            }
        }
    }
}
int main(){

    int a[5] = {2,4,3,5,1};
    int s = 5;
    cout << "Unsorted Array : ";
    for (int i = 0; i < s; i++)
    {
        /* code */
        cout << a[i] << " " ;
    }
    cout << endl;
    
    bubble(a, 5);
    cout<<"Sorted Array : ";
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}