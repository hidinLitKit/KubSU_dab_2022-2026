#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
    List* prev;
};
List* ringInit()
{
    List *head = new List;
    cout<<"Input elem"<<endl;
    int x; cin>>x;
    head->info=x;
    head->next=NULL;
    head->prev=NULL;
    List *p = head;
    cin>>x;
    while(x)
    {
        List*q = new List;
        q->info = x;
        q->next = NULL;
        q->prev = p;
        
        p->next = q;
        p = p->next;
        cin>>x;
    }
    head->prev = p;
    p->next = head;
    return head;
}

List* deleteMin(List* h, int x)
{
    List *p = h;
    do
    {
        if(p->info==x)
        {
            if(p==h) h=h->prev;
            
        }
        p = p->next;
    } while (p!=h);
    
}

void printRing(List* h)
{
    List* p = h;
    do
    {
        cout<<p->info<<" ";
        p=p->next;
    } while(p!=h);
}
int main()
{
    List* h = ringInit();
    printRing(h);

}