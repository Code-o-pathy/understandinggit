#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int space = n - i;
        while (space>=1)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int space = n - i+1;
//         while (space>=1)
//         {
//             cout << "*";
//             space = space - 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "-";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int n;
//     cin >> n;
//     while (i <= n)
//     {
//         int j = n-i+1;
//         while (j >= 1)
//         {
//             cout << "*";
//             j--;
//         }
//         cout << endl;
//         i++;
//     }
// }