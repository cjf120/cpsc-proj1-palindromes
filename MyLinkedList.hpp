struct MyNode {
    char data;
    MyNode *nextNode;
};


class MyLinkedList {
    public:
    MyNode *head;
    MyNode *secondLast;
    int size;
    MyLinkedList();
    ~MyLinkedList();
    MyNode addToFront(MyNode *node);
    MyNode addToFront(char c);
    MyNode addToEnd(MyNode *node);
    MyNode addToEnd(char c);
    MyNode removeFront();
    MyNode removeEnd();
    
    private:
    MyNode findSecondLast();
};
