#ifndef QUEUE_HPP
#define QUEUE_HPP

#define MAX 10

class Queue
{
private:
    int Dizi[MAX];
    int ES,KB,KS;
public:
    Queue();
    bool ekle(int);
    bool sil(int&);
    void Yaz();
};

#endif /* QUEUE_HPP */


