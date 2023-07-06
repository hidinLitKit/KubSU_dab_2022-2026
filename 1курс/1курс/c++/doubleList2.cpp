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
int isSymm(List* head)
{
    List *end = head;
    while(end->next!=NULL)
    {
        end = end->next;
    }
    while(head!=end)
    {
        if(head->info !=end->info) return 0;
        head = head->next;
        end = end->prev;
    }
    return 1;
}
int main()
{
    List* head = createList();
    cout<<(int)isSymm(head);
    int w; cin>>w;
}