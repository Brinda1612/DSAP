#include<iostream>
using namespace std;

void insertion(int a[], int n){
    // 0th index allready sorted 
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j=i-1;
        for ( ; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                // shift element
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = temp;
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
    
    insertion(a, 5);
    cout<<"Sorted Array : ";
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}