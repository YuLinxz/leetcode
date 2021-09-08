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
    
    //�ù��캯����ʼ�����
    //�����ڴ����´����Ľ�㽫�����������м�ĳ���к�̽��ĵط�ʱ
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//��ȡ�м�Ԫ�ص�����
class Solution3 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head, * q = head;
        //�������ż��������ȡ���м俿����һ����
        /*  while (q != nullptr && q->next != nullptr) {
              p = p->next;
              q = q->next->next;
          }*/
        //�����������������ȡ���м�ֵ
        //�����ż����������ȡ���м俿ǰ�Ǹ���
        while (q->next->next != nullptr) {
            p = p->next;
            q = q->next->next;
        }
        return p;
    }
};


//------------�д�����
//������������β�巨
//  ����ͷ�ڵ�head�����ҽ���ǰ���pָ��ͷ��㣨p=head��
//  ������һ�����q����ǰ���p����һ���Ϊq��p->next = q��
//  ���p����һλ��p = p->next��
void CreateList(ListNode* head) {
    int num;    //������ֵ
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



//��������
void TravalLinkList(ListNode* head)
{
    if (head == NULL) {
        cout << "����Ϊ�ձ�" << endl;
    }
    while (head != NULL)        //��ָ�����һ����ַ��Ϊ��ʱ��ѭ�����p��������
    {
        cout << head->val << " ";
        head = head->next;               //ָ����һ����ַ
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

    
//    test01();   //�����ڴ����´����Ľ�㽫�����������м�ĳ���к�̽��ĵط�ʱ
//    test02();   //������˳�򽨱������������ĩβ
    test03();
    return 0;
}


