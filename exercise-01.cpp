#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
    float panjang;
    float lebar;
} segiempat;

void input(segiempat* s){
    cout << "input----------------- " << endl;
    cout << "input panjang : "; cin >> s->panjang;
    cout << "input lebar : "; cin >> s->lebar;
}
float keliling(segiempat s){
    return (s.panjang + s.lebar)*2;
}
float luas(segiempat s){
    return s.panjang * s.lebar;
}
float diagonal(segiempat s){
    return sqrt(s.panjang*s.panjang + s.lebar*s.lebar);
}
void print(segiempat s){
    cout << "Output----------------- " << endl;
    cout << "Panjang\t: " << s.panjang << endl;
    cout << "Lebar\t: " << s.lebar << endl;
    cout << "Luas\t: " << luas(s) << endl;
    cout << "Keliling: " << keliling(s) << endl;
    cout << "Diagonal: " << diagonal(s) << endl;
}

int main(){
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
}
