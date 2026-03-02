#include <iostream>
using namespace std;
int main()
{
cout << (1 + 2 * 3) << endl;
cout << 1 + 2 + 3 / 4 << endl;
cout << (1 + 2 + 3) / 4 < endl;
// 亂數產⽣函式為 rand，可產⽣正整數亂數
// 產⽣ 0 到 99 的亂數⽅式如下：
cout << rand() % 100 << endl;
// 可利⽤ % 來作循環計數
// 例如：由 0 計數⾄ 9 不斷循環：
int counter = 0;
counter = (counter + 1) % 10;
cout << counter << endl;
counter = (counter + 1) % 10;
cout << counter << endl;
return 0;
}