#include<iostream>
using namespace std;

int main(){

    int n=3;

    int r = 1;
    while (r<=n)
    {
        /* code */
        int c = 1;
        int con = r;
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
