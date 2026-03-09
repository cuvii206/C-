#include <iostream>
using namespace std;

int main()
{
    int score = 0;

    cout << "Please input your score: ";
    cin >> score;

    switch (score/10)
    {
    case 10: 9;
        cout << "A Class";
        break;
    case 8:
        cout << "B Class";
        break;
    case 7:
        cout << "C Class";
        break;
     case 6:
        cout << "D Class";
        break;    
    default:
        cout << "E Class";
        break;
    }
}