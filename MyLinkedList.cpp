/*
Custom Linked List Class for Data Structures Project 1 - Palindromes
*/

#include "MyLinkedList.hpp"

MyLinkedList::MyLinkedList() {    }
MyLinkedList::~MyLinkedList() {
    MyNode *deleteNode;
    MyNode *currentNode = head;
    MyNode *nextNode = head->nextNode;
    for (int i = 0; i < size; i++) {
        *deleteNode = *currentNode;
        *currentNode = *nextNode;
        *nextNode = *currentNode->nextNode;
        delete deleteNode;
    }
    delete deleteNode;
    delete currentNode;
    delete nextNode;
}
MyNode MyLinkedList::addToFront(MyNode *node) {
    MyNode *oldHead;
    *oldHead = *head;
    *head = *node;
    head->nextNode = oldHead;
    size += 1;
    return *oldHead;
}
MyNode MyLinkedList::addToFront(char c) {
    MyNode *oldHead;
    *oldHead = *head;
    MyNode *node;
    node->data = c;
    *head = *node;
    head->nextNode = oldHead;
    size += 1;
    return *oldHead;
}
MyNode MyLinkedList::addToEnd(MyNode *node) {
    if (size > 1) {
        MyNode *last = secondLast->nextNode;
        last->nextNode = node;
        *secondLast = *last;
        size += 1;
        return *secondLast;
    } else if (size == 1) {
        head->nextNode = node;
        *secondLast = *head;
        size += 1;
        return *secondLast;
    } else {
        return addToFront(node);
    }
}
MyNode MyLinkedList::addToEnd(char c) {
    if (size > 1) {
        MyNode *last = secondLast->nextNode;
        MyNode *node;
        node->data = c;
        last->nextNode = node;
        *secondLast = *last;
        size += 1;
        return *secondLast;
    } else if (size == 1) {
        MyNode *node;
        node->data = c;
        head->nextNode = node;
        *secondLast = *head;
        size += 1;
        return *secondLast;
    } else {
        return addToFront(c);
    }
}
char MyLinkedList::removeFront() {
    if (size == 0 || head == nullptr) {
        return head->data;
    } else {
        MyNode *toReturn = head;
        head = head->nextNode;
        size -= 1;
        return toReturn->data;
    }
}
char MyLinkedList::removeEnd() {
    if (size == 0 || head == nullptr) {
        return head->data;
    } else {
        MyNode *toReturn = secondLast->nextNode;
        secondLast->nextNode = nullptr;
        size -= 1;
        *secondLast = findSecondLast();
        return toReturn->data;
    }
}
char MyLinkedList::seeFront() {
    return head->data;
}
char MyLinkedList::seeEnd() {
    return secondLast->nextNode->data;
}
MyNode MyLinkedList::findSecondLast() {
    if (size == 0) {
        return *head;
    } else if (size == 1) {
        return *head->nextNode;
    } else if (size == 2) {
        return *head;
    } else {
        MyNode *returnNode = head;
        for (int i = 1; i < size - 1; i++) {
            *returnNode = *returnNode->nextNode;
        }
        return *returnNode;
    }
}
