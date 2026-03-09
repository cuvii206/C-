#include <iostream>
#include <vector>
#include <string>
#include <number>
using namespace std;

int main() {
    cout<< "輸入半徑: "<< endl;
    double radius;
    cin >> radius;
    double area = pi() * radius * radius;
    cout << "圓面積: " << area << endl;


    return 0;
}