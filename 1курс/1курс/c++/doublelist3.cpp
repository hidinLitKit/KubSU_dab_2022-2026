#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
    List* prev;
};
List* createList()
{
    List* head = new List;
    cout<<"Input elem"<<endl;
    int x;cin>>x;
    head->info = x;
    head->next = NULL;
    head->prev = NULL;
    List *p = head;
    cin>>x;
    while(x)
    {
        List* r = new List;
        r->info = x;
        r->next = NULL;
        r->prev = p;
        p->next = r;
        p = r;
        cin>>x;
    }
    return head;
}
int maximum(List *head)
{
    if(head==NULL) return -1;
    int mx = head->info;
    while(head!=NULL)
    {
        if (head->info>mx) mx = head->info;
        head = head->next;
    }
    return mx;
}
bool ubiv(List *p)
{
    while(p->next!=NULL)
    {
        if (p->info<p->next->info) return false;
        p=p->next;
    }
        return true;
}
int proizvNech(int x)
{
    int s = 1;
    while(x)
    {
        s*=x%10;
        x/=10;
    }
    return s;
}
int sumPol(List *p)
{
    if(p!=NULL)
    {
        if(p->info>0) sumPol(p->next) +p->info;
        return sumPol(p->next);
    }
    return 0;
}
void InsertAfterPol(List *head, int x)
{
    List *p = head;
    while (p!=NULL)
    {
        if (p->info>0)
        {
            List *r = new List;
            r->info = x;
            r->next = p->next;
            r->prev = p;
            p->next->prev = r;
            p->next = r;
            p = r;
        }
        p = p->next;
    }
}
List* InsertDo3(List *head, int x)
{
    List *p = head->next;
    while (p!=NULL)
    {
        if(p->info%10==3)
        {
            List *r = new List;
            r -> info = x;
            r->next = p;
            r->prev = p->prev;
            p->prev->next = r;
            p->prev = r;
        }
        p = p->next;
    }
    if(head->info%10==3)
    {
        List *r = new List;
        r->info = x;
        r->next = head;
        r->prev = NULL;
        head->prev = r;
        head = r;
    }
    return head;
}
List* InsertDoEnd(List *head, int x)
{
    List *p = head->next;
    while (p!=NULL)
    {
        if(proizvNech(p->info)%2!=0)
        {
            List *r = new List;
            r -> info = x;
            r->next = p;
            r->prev = p->prev;
            p->prev->next = r;
            p->prev = r;
        }
        p = p->next;
    }
    if(proizvNech(head->info)%2!=0)
    {
        List *r = new List;
        r->info = x;
        r->next = head;
        r->prev = NULL;
        head->prev = r;
        head = r;
    }
    return head;
}

void printList( List *head)
{
    List *p = head;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p = p->next;
    }
}
void DeleteList(List *head)
{
    if(head!=NULL)
    {
        DeleteList(head->next);
        delete head;
    }
}

int main()
{
    List *head = createList();
    if (ubiv(head)) head = InsertDo3(head,maximum(head));
    else head = InsertDoEnd(head,sumPol(head));
    printList(head);
}