//С���кܶ����ֿ�Ƭ��ÿ�ſ�Ƭ�϶������� 00 �� 99��
//
//С��׼������Щ��Ƭ��ƴһЩ��������� 11 ��ʼƴ����������ÿƴһ�����ͱ�����������Ƭ�Ͳ�������ƴ�������ˡ�
//
//С����֪���Լ��ܴ� 11 ƴ�����١�
//
//���磬��С���� 3030 �ſ�Ƭ������ 00 �� 99 �� 33 �ţ���С������ƴ�� 11 �� 1010��
//
//����ƴ 1111 ʱ��Ƭ 11 �Ѿ�ֻ��һ���ˣ�����ƴ�� 1111��
//
//����С�������� 00 �� 99 �Ŀ�Ƭ�� 20212021 �ţ��� 2021020210 �ţ�����С�����Դ� 11 ƴ�����٣�
#include <iostream>
using namespace std;
int main()
{
    // ���ڴ��������Ĵ���
    int num = 0, i;//�϶���1�����꣬���Լ���1�ľ�����
    for (i = 1; i <= 100000; i++) {
        if (i % 10 == 1) num++;
        if (i / 10 % 10 == 1) num++;
        if (i / 100 % 10 == 1) num++;
        if (i / 1000 % 10 == 1) num++;
        if (num > 2021) {
            break;
        }
    }
    cout << i - 1;
    return 0;
}