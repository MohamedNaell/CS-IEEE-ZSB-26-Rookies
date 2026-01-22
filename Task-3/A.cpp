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
