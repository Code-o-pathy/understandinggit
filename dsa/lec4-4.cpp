#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1; 
        
        while (j <= n)
        { int x=1;
            while(x<=n-i){
                cout<<" ";
                x++;
                 j++;
            }

           
            cout << "*";
            j++;

           
        }
        cout << endl;
        i++;
    }
}