#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        cout << "\n";
        i--;
    }

} // namespace std;
