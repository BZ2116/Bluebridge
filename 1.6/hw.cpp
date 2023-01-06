#include <iostream>
using namespace std;

//闰年判断
bool leapyear(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}
//检查日期是否符合格式
bool check(int year, int month, int day)
{
    if (month > 12 || month <= 0)
        return false;
    if (day > 31)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        if (day > 30) return false;
    if (month == 2) {
        if (leapyear(year) && day > 29)
            return false;
        if (!leapyear(year) && day > 28)
            return false;
    }
    return true;
}
int main() {
    int i, n, a, b, c, d, e, f, g, h;
    bool flag = false;
    cin >> n;
    int year, month, day;

    for (i = n + 1; i <= 99999999; i++) {
        year = i / 10000;
        month = i % 10000 / 100;
        day = i % 100;
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        e = (i / 10000) % 10;
        f = (i / 100000) % 10;
        g = (i / 1000000) % 10;
        h = (i / 10000000) % 10;
        if ((a == h) && (b == g) && (c == f) && (d == e) && flag == false) {
            if (check(year, month, day)) {
                cout << i << endl;
                flag = true;
            }
        }
        if ((a == h) && (b == g) && (c == f) && (d == e) && (a == c) && (b == d)) {
            if (check(year, month, day)) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}