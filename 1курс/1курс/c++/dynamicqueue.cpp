typedef int T;
#include <iostream> 
using namespace std;
struct Node // наша динамическая структура
{
    T data;
    Node *next;
};
struct Queue
{
    Node *head;
    Node *tail;
    Queue() // конструктор очереди
    {
        head=tail=NULL;
    }
    bool isEmpty() // проверка на пустоту
    {
        return head==NULL;
    }
    void pushQueue(T val) //добавление элемента в конец очереди
    {
        Node *temp = new Node;
        temp->data = val;
        temp->next = NULL;
        if(isEmpty())
        {
            head = tail = temp;
            return; 
        }
        tail->next = temp;
        tail = temp;
    }
    T popQueue() // извлечение из начала
    {
        Node* temp = head;
        head = head->next;
        T popData = temp->data;
        delete temp;
        return popData;
    }
};
int main()
{
    Queue q;
    int x; cin>>x;
    while(x)
    {
        q.pushQueue(x);
        cin>>x;
    }
    while(!q.isEmpty())
    {
        cout<<q.popQueue()<<endl;
    }
}