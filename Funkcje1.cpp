#include <iostream>
#include<math.h>
#include <conio.h>
using namespace std;

int pole_prostokata(int a, int b) {
    return a * b;
}
int v_prostokata(int a, int b,int c) {
    return a * b * c;
}

int pole_trojkata(int a, int h) {
    return (a * h)/2;
}
int v_trojkata(int a, int h) {
    return (a * h) / 2 * h;
}
float pole_kola(float r) {
    return 4 * 3,14 * r * r;
}
float v_kola(float r) {
    return 4.0 / 3.0 * 3,14 * r * r * r;
    }
int pole_szescianu(int a) {
    return 6 * a * a;
}
int v_szescianu(int a) {
    return a * a * a;
}
int pole_walca(int r, int h) {
    return 2 * (3, 14 * r * r) + 2 * 3, 14 * r * h;
}
int v_walca(int r, int h) {
    return 3, 14 * r * r * h;
}



int main()
{   
    cout << "wpisz liczbe: ";
    int a, b,c, h, r;
    cout << "wpisz bok a: ";
    cin >> a;
    cout << "wpisz bok b: ";
    cin >> b;
    cout << "wpisz h: ";
    cin >> h;
    cout << "wpisz r: ";
    cin >> r;
    cout << "Pole prostokata wynosi: " << pole_prostokata(a, b) << endl;
    cout << "v prostokata wynosi: " << v_prostokata(a, b, c) << endl;
    cout << "Pole trojkata wynosi: " << pole_trojkata(a, h) << endl;;
    cout << "v trojkata wynosi: " << v_trojkata(a, h) << endl;;
    cout << "Pole kola wynosi: " << pole_kola(r) << endl;;
    cout << "v kola wynosi: " << v_kola(r) << endl;;
    cout << "Pole szescianu wynosi: " << pole_szescianu(a) << endl;;
    cout << "v szescianu wynosi: " << v_szescianu(a) << endl;;
    cout << "Pole walca wynosi: " << pole_walca(r, h) << endl;;
    cout << "v walca wynosi: " << v_walca(r, h) << endl;;
    
    
}//koniec
