<<<<<<< HEAD
// Even and Odd
=======
//Even and Odd
>>>>>>> ad6aae5a3d5802ac5f1295a4f29a508189688c99
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    return 0;
}

// prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a =0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        cout<<"prime";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
