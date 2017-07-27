#include "Yapi.hpp"
#include <iostream>
using namespace std;

LinkList::LinkList(int deg)
{
    this->deg=deg;
    Sonraki=NULL;
}

Stack::Stack()
{
    root=NULL;
}

void Stack::ekle(int a)
{
    if(root==NULL)
    {
        root=new LinkList(a);
        return;
    }
    
    LinkList *iter=root;
    while(iter->Sonraki!=NULL)
        iter=iter->Sonraki;
    iter->Sonraki=new LinkList(a);
    
}

void Stack::Yaz()
{
    if(root==NULL)
    {
        cout<<"Hata Yigin'da Hic Eleman Bulunamadi!"<<endl;
        return;
    }
    LinkList *iter=root;
    int s=0;
    
    while(iter->Sonraki!=NULL)
    {
        cout<<++s<<" . "<<iter->deg<<endl;
        iter=iter->Sonraki;
    }
    cout<<++s<<" . "<<iter->deg<<endl;
    
}

bool Stack::cikar()
{
    if(root==NULL)
        return false;
    
    if(root->Sonraki==NULL)
    {
        delete root;
        root=NULL;
        
        return true;
    }
    
    LinkList *iter=root;
    
    while(iter->Sonraki->Sonraki!=NULL)
        iter=iter->Sonraki;
    
    LinkList *temp=iter->Sonraki;
    iter->Sonraki=NULL;
    delete temp;
    
    return true;
}