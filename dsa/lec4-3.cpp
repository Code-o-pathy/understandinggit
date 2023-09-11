/*#include<iostream>
using namespace std;
int main(){
   
    int n;
    
    cin>>n;
     int i=n;
       int x=1;
    
    while(i>=1){
        int j=1;
         int k=i;
       
        while (j<=x){
            char ch=k+'A'-1;
        cout<<ch;
        k++;
        j++;
        }
        i--;
        cout<<endl;
        x++;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    char start;
    cin>>n;
    while (i<=n){
        int j=1;
        char start='A'+i-1;
        while (j<=n){
     
          cout<<start;
          start++;
          j++;

        }cout<<endl;
        i++;

    }
}