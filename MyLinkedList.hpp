struct MyNode {
    char data;
    MyNode *nextNode;
};


class MyLinkedList {
    public:
    int size = 0;
    MyLinkedList();
    ~MyLinkedList();
    MyNode addToFront(MyNode *node);
    MyNode addToFront(char c);
    MyNode addToEnd(MyNode *node);
    MyNode addToEnd(char c);
    char removeFront();
    char removeEnd();
    char seeFront();
    char seeEnd();
    
    private:
    MyNode *head = nullptr;
    MyNode *secondLast = nullptr;
    MyNode findSecondLast();
};
