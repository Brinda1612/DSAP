#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=n)
        {
            /* code */
            cout<<n-j+1;
            j = j+1;
        }
        cout<<endl;
        cout<<n-i+1;
        i = i+1;
        
    }
    
}
