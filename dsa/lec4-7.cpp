/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }cout<<endl;
        i++;

    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j;//cout<<n-j+1;j++;j<=n;
            j--;
        }cout<<endl;
        i++;
    }

}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }cout<<endl;
        i++;

    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;

        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n){//cout<<i+j-1;
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }cout<<endl;
        i++;
    }

}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<i-j+1;
        j++;

        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
           char ch=i+'A'-1;
           cout<<ch;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=j+'A'-1;
            cout<<ch;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch=i+'A'-1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=i+j-2+'A';
            cout<<ch;
            ch++;
            j++;

        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch=i+'A'-1;
            cout<<ch;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch=i+j-2+'A';
            cout<<ch;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch=n+j-i+'A'-1;//ch='A' + n-i; out side while loops ; ch++;
            cout<<ch;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int space;
    while (i <= n)
    {
        int space = n - i;
        while (space >= 1)
        {
            cout << " ";
            space--;
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
}*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
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
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=1;
//         while(space<=i-1){
//             cout<<" ";
//             space++;
//         }
//         int j=n-i+1;
//         while(j>=1){
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int space=1;
//         while(space<=n-i){
//             cout<<" ";
//             space++;
//         }
//         while(j<=i){
//             cout<<i;
//             j++;
//         }cout<<endl;
//         i++;

//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int value=1;
//     while(i<=n){
//         int space =1;
//         while(space<=n-i){
//             cout<<" ";
//             space++;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<value;
//             value++;
//             j++;
//         }cout<<endl;
//         i++;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while(i<=n){
//         int space=1;
//         while(space<=i-1){
//             cout<<" ";
//             space++;
//         }
//         int j=1;
//         int k=i;
//         while(j<=n-i+1){
//             cout<<k;
//             k++;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = 1;
//         while (space <= n - i + 1)
//         {
//             cout << " ";
//             space++;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j;
//             j++;
//         }
//         int k=i-1;
//         while(k>=1){
//             cout<<k;
//             k--;

//         }
//         cout << endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << j;
//             j++;
//         }
//         int star=3;
//         while(star<=2*i){
//             cout<<"*";
//             star=star+1;
//         }
//         int k=n-i+1;
//         while(k>=1){
//             cout<<k;
//             k--;
//         }
    
//         cout << endl;
//         i++;
//     }
// }