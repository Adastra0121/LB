#include <iostream>
using namespace std;
string jisuan(string s1, string s2, string s3) {
    // 这里需要定义两个实数类型变量
    double a, b;
    // 取第一个数字
    a = atof(s1.c_str());
    // 取第二个数字，并与第一个数字进行乘法运算
    b = atof(s2.c_str());
    // 取第三个数字，并与前两个数字的乘积进行除法运算
    int c = atoi(s3.c_str());
    // 返回结果
    return to_string((long long)(a * b / c));
}
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string ans = jisuan(s1, s2, s3);
    cout << ans << endl;
    return 0;
}