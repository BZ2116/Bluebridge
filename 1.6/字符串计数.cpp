/*输入描述
输入一行包含一个单词，单词只由小写英文字母组成。

对于所有的评测用例，输入的单词长度不超过 1000。

输出描述
输出两行，第一行包含一个英文字母，表示单词中出现得最多的字母是哪 个。如果有多个字母出现的次数相等，输出字典序最小的那个。

第二行包含一个整数，表示出现得最多的那个字母在单词中出现的次数。*/
#include <iostream>

using namespace std;
int c[26];//表示26个字母
int main()
{
    string a;
    cin >> a; int max = 0;
    int i; int b = 97; char x;
    for (i = 0; i < a.length(); ++i)
    {
        ++c[a[i] - 97];//如果出现一次，就在相应位置加1，记录出现次数
    }
    for (i = 0; i < 26; ++i)
    {
        if (c[i] > max) {
            max = c[i];
            x = i + 97;
        }
    }
    cout << x << endl << max << endl;
    return 0;
}
