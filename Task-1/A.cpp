<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;

        if (a + b + c >= 2){
            count ++;
        }
    }
    cout << count << endl;
=======
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;

        if (a + b + c >= 2){
            count ++;
        }
    }
    cout << count << endl;
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
}