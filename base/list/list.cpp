//
// Created by zhangyangshuo on 2020/12/15.
//

#include<iostream>
using namespace std;
class Node  //节点
{
    friend class List; //声明为友元类，以使得List的成员函数可以使用Node的私有属性
private:
    int data;   //节点中的数据
    Node* next; //指针指向下一个节点
};

class List
{
public:
    void test();
    void show();

private:
    Node* head; //头指针
};

void List::show()
{
    cout<<head->data<<endl
    <<head->next->data<<endl;
}


int main(){
    std::cout<<"你好"<<std::endl;
}