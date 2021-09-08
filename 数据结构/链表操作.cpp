#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

/**
 * Definition for singly-linked list.\
 *  */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    
    //用构造函数初始化结点
    //适用于创建新创建的结点将被插入链表中间某个有后继结点的地方时
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//获取中间元素的问题
class Solution3 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head, * q = head;
        //如果共有偶数个数，取到中间靠后那一个数
        /*  while (q != nullptr && q->next != nullptr) {
              p = p->next;
              q = q->next->next;
          }*/
        //如果有奇数个数可以取到中间值
        //如果有偶数个数可以取到中间靠前那个数
        while (q->next->next != nullptr) {
            p = p->next;
            q = q->next->next;
        }
        return p;
    }
};


//------------有错！！！
//创建单链表——尾插法
//  创建头节点head，并且将当前结点p指向头结点（p=head）
//  创建下一个结点q，当前结点p的下一结点为q（p->next = q）
//  结点p后移一位（p = p->next）
void CreateList(ListNode* head) {
    int num;    //插入数值
    cin >> num;
    head = new ListNode(num);
    ListNode* p = head;
    while (num==0) {
        cin >> num;
        ListNode* q = new ListNode(num);
        p->next = q;
        p = p->next;
    }
}



//遍历链表
void TravalLinkList(ListNode* head)
{
    if (head == NULL) {
        cout << "链表为空表" << endl;
    }
    while (head != NULL)        //当指针的下一个地址不为空时，循环输出p的数据域
    {
        cout << head->val << " ";
        head = head->next;               //指向下一个地址
    }
}

void test01() {
    ListNode* head = nullptr;
    ListNode* secondPtr = nullptr;
    ListNode* thirdPtr = nullptr;

    
    thirdPtr = new ListNode(3, nullptr);
    secondPtr = new ListNode(2, thirdPtr);
    head = new ListNode(1, secondPtr);    //Allocate new node
   
    TravalLinkList(head);
}


void test02() {
    ListNode* head = nullptr;
    ListNode* secondPtr = nullptr;
    ListNode* thirdPtr = nullptr;

    head = new ListNode(1, secondPtr);    //Allocate new node
    secondPtr = new ListNode(2, thirdPtr);
    head->next = secondPtr;
    thirdPtr = new ListNode(3, nullptr);
    secondPtr->next = thirdPtr;

    TravalLinkList(head);
}


void test03() {
    ListNode* head = nullptr;
    ListNode* secondPtr = nullptr;
    ListNode* thirdPtr = nullptr;
    ListNode* forthPtr = nullptr;
    ListNode* test = nullptr;

    head = new ListNode(1, secondPtr);    //Allocate new node
    secondPtr = new ListNode(2, thirdPtr);
    head->next = secondPtr;
    thirdPtr = new ListNode(3, nullptr);
    secondPtr->next = thirdPtr;
    forthPtr = new ListNode(4, nullptr);
    thirdPtr->next = forthPtr;

    Solution3 s;
    test = s.middleNode(head);
    cout << test->val;
}
int main() {

    
//    test01();   //适用于创建新创建的结点将被插入链表中间某个有后继结点的地方时
//    test02();   //适用于顺序建表，结点放在链表的末尾
    test03();
    return 0;
}


