#include <iostream>
using namespace std;
 
int main()
{
int number = 10;
cout << number / 3 << endl;
// 因為 number 是整數，⽽除數 3 也是整數
// 運算出來的結果被⾃動轉換為整數
double number1 = 10.0;
cout << number1 / 3 << endl;
// 上述語法中 3 會被提升為 3.0 再進⾏運算，結果即可顯⽰正確值
// 左⽅值為⽬標型態，當右⽅值型態⽐左⽅值型態⻑度⼩時，右⽅值會⾃動提升為⽬標型
int num = 10;
double number2 = num;
cout << number2 << endl;
// 當右⽅值型態⽐左⽅值型態的型態⻑度⼤時，超出可儲存範圍的部份會被⾃動消去
int num1 = 0;
double number3 = 3.14;
num1 = number3;
cout << num1 << endl;
// 下列語法即為進⾏顯⽰轉換
int a = 10;
int b = 3;
cout << a / b << endl;
cout << (double) a / b << endl;
cout << double(a) / b << endl;
// 另⼀種顯⽰轉換⽅式
int num2 = 0;
double number4 = 3.14;
num2 = int(number4);
cout << num2 << endl;
return 0;
}