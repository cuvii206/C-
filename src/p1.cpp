#include <iostream>
#include <vector>
#include <string>
#include <numbers>
using namespace std;

int main() {
    cout<< "輸入半徑: ";
    double radius;
    cin >> radius;
    double area = std::numbers::pi * radius * radius;
    cout << "圓面積: " << area << endl;


    return 0;
}