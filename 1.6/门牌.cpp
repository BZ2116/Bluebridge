
//小蓝要为一条街的住户制作门牌号。
//
//这条街一共有 20202020 位住户，门牌号从 11 到 20202020 编号。
//
//小蓝制作门牌的方法是先制作 00 到 99 这几个数字字符，最后根据需要将字符粘贴到门牌上，例如门牌 1017 需要依次粘贴字符 1、0、1、71、0、1、7，即需要 11 个字符 00，22 个字符 11，11 个字符 77。
//
//请问要制作所有的 11 到 20202020 号门牌，总共需要多少个字符 22？

#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int num = 0;
    for (int i = 1; i <= 2020; i++) {
        if (i % 10 == 2) num++;
        if (i / 10 % 10 == 2) num++;
        if (i / 100 % 10 == 2) num++;
        if (i / 1000 == 2) num++;
    }
    cout << num;
    return 0;
}
