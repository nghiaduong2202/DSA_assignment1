#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include "main.h"

class SymbolTable
{
public:
    SymbolTable() {}
    void run(string filename);

    void subRun(ifstream& file, LinkedList* list, int& block);

    int countBlock(string filename);

    int checkBlock(string filename);

    bool insert(string line, LinkedList* list, int block);
    
    bool assign(string line, LinkedList* list, int block);

    int lookUp(string line, LinkedList* list, int block);

    void print(LinkedList* list, int block);

    void rprint(LinkedList* list, int block);
};
class LinkedList{
public:
    class Node;
private:
    Node* head;
    Node* tail;
public:
    LinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void add(string name, string typ)
    {
        if(!this->head)
        {
            this->head = new Node(name, typ);
            this->tail = this->head;
            return;
        }

        Node* pNew = new Node(name, typ);
        this->tail->next = pNew;
        this->tail = pNew;
        return;
    }

    bool look(string name)
    {
        Node* p = head;
        while(p)
        {
            if(p->name == name) return true;
        }

        return false;
    }

    void clear()
    {
        if(this->head == nullptr) return;
        while(this->head != this->tail)
        {
            Node* p = this->head;
            this->head = this->head->next;
            delete p;
        }
        delete head;
        return;
    }

    Node* getHead()
    {
        return this->head;
    }

    Node* getTail()
    {
        return this->tail;
    }

public:
    class Node
    {
    public:
        string name;
        string val;
        string typ;
        Node* next;
    public:
        Node()
        {
            this->next = nullptr;
        }

        Node(string name, string typ)
        {
            this->name = name;
            this->typ = typ;
            this->next = nullptr;
        }

        ~Node()
        {
            this->next = nullptr;
        }
    };
};
#endif