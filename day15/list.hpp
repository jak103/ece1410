#ifndef _LIST_HPP
#define _LIST_HPP

class List
{
    public: 
        List();

        void insert(int value);
        int remove(int value);
        int find(int value);
    
    private:
        Node* head;
};

class Node
{
    public:
        Node(int value);
        int getData();
        Node* getNext();
        void setNext(Node* newNext);
        void setData(int value);

    private:
        int data;
        Node* next;

};


#endif