#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r = 1;
    int con = 1;
    while (r<=n)
    {
        /* code */
        int c = 1;
        while (c<=r)
        {
            cout<<con<<" ";
            con= con+1;
            c = c+1;
        }
        cout<<endl;
        r = r+1;
        
    }
    
}
