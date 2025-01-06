#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int n=5;
    int key=3;
    int found =-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
        }
    }
    if(found !=-1){
        cout<<"The key" <<key<< " is found."<<found;
    }
    else cout<<"Not found !.";

    return 0;
}