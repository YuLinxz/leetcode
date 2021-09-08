//给定2个数组，编写一个函数计算它们的交集
// 
// 示例：
//输入：nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出：[2, 2]
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        while (i != n && j != m) {
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else if (nums1[i] == nums2[j]) {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
           
        }
        return v;
    }
};


int main()
{
    vector<int> nums1{ 1,2,2,1 };
    vector<int> nums2{ 2,2 };
    vector<int> v;
    Solution s;
    v=s.intersect(nums1, nums2);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    return 0;
}
