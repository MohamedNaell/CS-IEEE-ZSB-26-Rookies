<<<<<<< HEAD
#include <iostream>
using namespace std;

int attack(int damage, int health){
    return (health + damage - 1) / damage;
}

int main(){
    int H, A;
    cin >> H >> A;

    cout << attack(A, H);

    return 0;
}
=======
#include <iostream>
using namespace std;

int attack(int damage, int health){
    return (health + damage - 1) / damage;
}

int main(){
    int H, A;
    cin >> H >> A;

    cout << attack(A, H);

    return 0;
}
>>>>>>> f78810c68a665b6303464d7d2e3356c610cc4a88
