#ifndef YAPI_HPP
#define YAPI_HPP

class LinkList
{
public:
    LinkList(int);
    int deg;
    LinkList *Sonraki;
};

class Stack
{
private:
    LinkList *root;
public:
    Stack();
    void ekle(int);
    bool cikar();
    void Yaz();
};


#endif /* YAPI_HPP */