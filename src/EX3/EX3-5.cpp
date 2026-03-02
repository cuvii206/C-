#include <iostream>
using namespace std;
int main()Back to top
 
{
int a = 10;
int b = 3;
cout << static_cast<double>(a) / b <<endl; // 顯⽰ 3.33333
int num = 0;
double number = 3.14;
num = static_cast<int>(number);
cout << num << endl;
const double PI = 3.14159;
double *pi = &PI; // error: invalid conversion from 'const double*' to
double *pi = (double*) &PI; // 沒有錯誤也沒有警訊
double *pi = static_cast<double*>(&PI); // error: invalid static_cast fr
double *pi = const_cast<double*>(&PI); // 這個是正確的寫法
cout << *pi << endl;
// PI 是個 const 修飾過的變數，儲存的值是唯讀的，以上程式碼試圖將唯讀的記憶體空
// 如果之後試圖對 pi 位址處的資料做變動，執⾏時期會有不可預期的結果
return 0;
}