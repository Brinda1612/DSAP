#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
    
}
int main(){

    int arr[3] = {1,2,3};

    int key;
    cout << "enter the key = ";
    cin >> key;

    bool found = search(arr, 3, key);

    if (found)
    {
        /* code */
        cout << "key is preasent" << endl;
    }
    else{
        cout << "key is not preasent" << endl;
    }
    

}