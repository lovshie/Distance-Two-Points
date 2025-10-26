/*
    Nama : Amela Luna Andrealova 
    NIM   : 25/566386/TK/63891 
*/

#include <iostream>
#include <cmath>
using namespace std;

float findDistance(int x1, int x2, int y1, int y2);
float findRadius(int xr1, int xr2, int yr1, int yr2);
float findCircumference(float PI, float radius);
float findArea(float PI, float radius);
const float PI = 3.1416;

int main() {
    int x1, x2, y1, y2;
    cout << "Masukkan koordinat x titik pusat : ";
    cin >> x1;
    
    cout << "Masukkan koordinat y titik pusat : ";
    cin >> y1;

    cout << "Masukkan koordinat x titik sembarang : ";
    cin >> x2;

    cout << "Masukkan koordinat y titik sembarang : ";
    cin >> y2;

    float distance = findDistance(x1, x2, y1, y2); 
    cout << "Maka jarak antara kedua titik : " << distance << endl;

    float radius = findRadius(x1, x2, y1, y2);
    cout << "Maka radius lingkaran : " << radius << endl;

    cout << "Maka keliling lingkaran : " << findCircumference(PI, radius) << endl;
    cout << "Maka luas lingkaran : " << findArea(PI, radius) << endl;


    return 0;
}

float findDistance(int xd1, int xd2, int yd1, int yd2){
    return sqrt(pow(xd2-xd1,2)+pow(yd2-yd1,2));
    
}

float findRadius(int xr1, int xr2, int yr1, int yr2){
    return findDistance(xr1, xr2, yr1, yr2);
    
}

float findCircumference(float PI, float radius){
    float circumference = 2*PI*radius;
    return circumference;

}

float findArea(float PI, float radius){
    return PI*radius*radius;
    
}