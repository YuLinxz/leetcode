//����һ������ prices �����ĵ� i ��Ԫ�� prices[i] ��ʾһ֧������Ʊ�� i ��ļ۸�
//��ֻ��ѡ�� ĳһ�� ������ֻ��Ʊ����ѡ���� δ����ĳһ����ͬ������ �����ù�Ʊ�����һ���㷨�����������ܻ�ȡ���������
//��������Դ���ʽ����л�ȡ�������������㲻�ܻ�ȡ�κ����󣬷��� 0 ��

//ʾ��1
//���룺[7, 1, 5, 3, 6, 4]
//�����5
//���ͣ��ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ��������������� = 6 - 1 = 5 ��
//ע���������� 7 - 1 = 6, ��Ϊ�����۸���Ҫ��������۸�ͬʱ���㲻��������ǰ������Ʊ��
// 
//ʾ��2
//���룺prices = [7, 6, 4, 3, 1]
//�����0
//���ͣ������������, û�н������, �����������Ϊ 0��

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

//�����ⷨ
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MAX = 0;
        int dif = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] > prices[i]) {
                    dif = prices[j] - prices[i];
                    MAX = MAX > dif ? MAX : dif;
                }
            }
        }
        return MAX;

    }
};


//��͵�������ߵ�����ԭ��
class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int MAX = 0;
        int dif = 0;
        int MINPrice = INT_MAX;
        for (int i = 0; i < prices.size()-1 ; i++) {
            if (prices[i] < MINPrice) {
                MINPrice = prices[i];
            }
            if (prices[i] > MINPrice) {
                dif = prices[i] - MINPrice;
                MAX = MAX > dif ? MAX : dif;
            }
        }
        return MAX;

    }
};


int main()
{
    vector<int> nums1{7,1,5,3,6,4};
    int v;
    Solution2 s;
    v = s.maxProfit(nums1);
    cout << v << endl;
    return 0;
}
