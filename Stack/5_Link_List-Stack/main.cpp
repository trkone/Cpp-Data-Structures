#include "Yapi.hpp"



int main()
{
    Stack root;
    
    root.ekle(15);
    root.ekle(50);
    root.ekle(690);
    root.ekle(4352314);
    root.Yaz();
    
    root.cikar();
    root.cikar();
    root.cikar();
    root.cikar();
    root.Yaz();
    
    root.ekle(55);
    root.ekle(120123);
    root.Yaz();
    return 0;
}