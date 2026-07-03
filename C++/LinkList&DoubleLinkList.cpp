#include <iostream>
#include <vector>

using namespace std;
//定义单链表节点
class LinkNode{
public:
    int val;
    LinkNode* next;
    LinkNode(int x):val(x),next(nullptr){}
};

//把数组转换成单链表
LinkNode* createLinkList(vector<int> arr){
    if(arr.empty()){
        return nullptr;
    }
    LinkNode* head = new LinkNode(arr[0]);
    LinkNode* cur = head;
    for(int i=1;i<arr.size();i++){
        cur->next = new LinkNode(arr[i]);
        cur = cur->next;
    }

    return head;
}

//定义双链表节点
class DoubleLinkNode{
    public:
    int val;
    DoubleLinkNode* next,*prev;
    DoubleLinkNode(int x):val(x),next(nullptr),prev(nullptr){}//这里别忘了写花括号
};

DoubleLinkNode* createDoubleLinkList(vector<int> arr){
    if(arr.empty()){
        return nullptr;
    }
    DoubleLinkNode* head = new DoubleLinkNode(arr[0]);
    DoubleLinkNode* cur = head;
    for(int i=1;i<arr.size();i++){
        DoubleLinkNode* newNode = new DoubleLinkNode(arr[i]);
        cur->next = newNode;
        newNode->prev = cur;
        cur = cur->next;
    }
    return head;
}

int main(){

//创建一条单链表
LinkNode* head = createLinkList({1,2,3,4,5});

//遍历单链表
for(LinkNode* p = head;p!=nullptr;p=p->next){
    cout<<p->val<<endl;
}

//在单链表头部增加元素
LinkNode* newNode = new LinkNode(0);
newNode->next = head;
head = newNode;

//在单链表尾部增加元素
LinkNode* p = head;
while(p->next!=nullptr){
    p=p->next;
}
p->next = new LinkNode(6);

//在单链表第3个节点后增加元素,for循环结束判断条件的值需要认真思考
LinkNode*q = head;
for(int i = 0;i<2;i++){
    q=q->next;
}
LinkNode* newNode2 = new LinkNode(10);
newNode2->next = q->next;
q->next = newNode2;

//删除单链表中的一个节点，此处删除第四个节点
LinkNode* r = head;
for(int i=0;i<3;i++){
    r=r->next;
}
r->next = r->next->next;
//插入和删除节点，都需要找到待操作节点的前驱节点


//在单链表尾部删除节点
LinkNode* s = head;
while(s->next->next != nullptr){
    s = s->next;
}
s->next = nullptr;

//在单链表头部删除节点
head = head->next;

//创建一条双链表
DoubleLinkNode* head = createDoubleLinkList({1,2,3,4,5});
DoubleLinkNode* tail = nullptr;

//从前向后遍历双链表
for(DoubleLinkNode* p = head;p->next!=nullptr;p=p->next){
    cout<<p->val<<endl;
    tail = p;
}

//从后往前遍历双链表
for(DoubleLinkNode* p = tail;p->prev!=nullptr;p=p->prev){
    cout<<p->val<<endl;
}

//在双链表头部增加一个节点
DoubleLinkNode* newhead = new DoubleLinkNode(0);
newhead->next = head;
head->prev = newhead;
head = newhead;

//在双链表尾部增加一个节点
DoubleLinkNode* newnode = new DoubleLinkNode(6);
tail->next = newnode;
newnode->prev = tail;
tail = newnode;

//在双链表中间插入一个节点，此处在第3个与4个中间插入
DoubleLinkNode* p = head;
for(int i=0;i<2;i++){
    p=p->next;
}
DoubleLinkNode* newnode2 = new DoubleLinkNode(66);
newnode2->next = p->next;
newnode2->prev = p;
p->next->prev = newnode2;
p->next = newnode2;

//在双链表中删除一个节点，此处删除第4个节点，需要先找到第三个节点
DoubleLinkNode* q = head;
for(int i=0;i<3;++){
    q=q->next;
}
DoubleLinkNode* toDelete = q->next;
q->next = toDelete->next;
toDelete->next->prev = q;
toDelete->next = nullptr;//好习惯，可选
toDelete->prev = nullptr;//好习惯，可选

//在双链表头部删除元素
DoubleLinkNode* toDelete = head;
head = head->next;
head->prev = nullptr;
toDelete->next = nullptr;

//在双链表尾部删除节点
DoubleLinkNode* r = head;
while(r->next!=nullptr){
    r=r->next;
}
r->prev->next = nullptr;
r->prev = nullptr;
}