#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
};
List* fillList()
{
    List *head = new List;
    int x; cin>>x;
    if (x)
    {
        head -> info = x;
        head -> next = NULL;
        List *p = head;
        cin>>x;
        while(x)
        {
            List *r = new List;
            r->info = x;
            r->next = NULL;
            p->next = r;
            p = p->next;
            cin>>x;
        }
    }
    return head;
}
bool ifVozr(List *p)
{
    while(p->next!=NULL)
    {
        if(p->next->info<p->info) return false;
        p = p->next;
    }
    return true;
}
void maxElem(List *p, int &m)
{
    if (p!=NULL)
    {
        if(p->info>m) m = p->info;
        maxElem(p->next,m);
    }
}

void InsertAfterChet(List *p, int x)
{
    if(p!=NULL)
    {
        if (p->info%2==0)
        {
            List *r = new List;
            r->info = x;
            r->next = p->next;
            p->next = r;
            p=r;
        }
        p = p->next;
        InsertAfterChet(p,x);
    }
}


void printList(List *head)
{
    List *p = head;
    while(p!=NULL)
    {
        cout<<p->info<<endl;
        p = p->next;
    }
    cout<<endl;
}
int main()
{
    List *head = fillList();
    int mx = head->info;
    maxElem(head,mx);
    if (ifVozr(head)) InsertAfterChet(head,mx);
    printList(head);
}