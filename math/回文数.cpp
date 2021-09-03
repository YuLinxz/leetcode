/*
 ����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ�������������磬121 �ǻ��ģ��� 123 ���ǡ�

ʾ��:
���룺x = -121
�����false
���ͣ��������Ҷ�, Ϊ -121 �� ���������, Ϊ 121- �����������һ����������

 */
#include<iostream>
using namespace std;
#include<string>


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        string s = to_string(x);
        int len = s.length();
        int j = len;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len-i-1]) {
                return false;
            }
            j--;
        }
        return true;
    }
};


//�ٷ���
class Solution2 {
public:
    bool isPalindrome(int x) {
        // ���������
        // ������������ x < 0 ʱ��x ���ǻ�������
        // ͬ���أ�������ֵ����һλ�� 0��Ϊ��ʹ������Ϊ���ģ�
        // �����һλ����ҲӦ���� 0
        // ֻ�� 0 ������һ����
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // �����ֳ���Ϊ����ʱ�����ǿ���ͨ�� revertedNumber/10 ȥ��������λ�����֡�
        // ���磬������Ϊ 12321 ʱ���� while ѭ����ĩβ���ǿ��Եõ� x = 12��revertedNumber = 123��
        // ���ڴ�����λ�����ֲ�Ӱ����ģ����������Լ���ȣ����������ǿ��Լ򵥵ؽ���ȥ����
        return x == revertedNumber || x == revertedNumber / 10;
    }
};



int main() {
    Solution s;
    bool result = s.isPalindrome(-10);
    cout << result << endl;
}
