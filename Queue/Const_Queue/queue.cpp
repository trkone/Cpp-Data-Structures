#include "queue.hpp"
#include <iostream>
Queue::Queue()
{
    ES=0;
    KB=-1;
    KS=-1;
}

bool Queue::ekle(int a)
{
    if(ES>=MAX)
        return false;
    
    if(KB==-1)
        KB++;
    
    if(KS==MAX-1)
        KS=0;
    else
        KS++;
    
    Dizi[KS]=a;
    
    ES++;
    
    return true;
}

bool Queue::sil(int &a)
{
    if(ES==0)
        return false;
    
    a=Dizi[KB];
    
    if(KB==MAX-1)
        KB=0;
    else
        KB++;
    
    ES--;
    
    if(ES==0)
        KB=KS=-1;
    
    return true;
}

void Queue::Yaz()
{
    int h;
    while(sil(h)!=false)
        std::cout<<h<<" ";
}
