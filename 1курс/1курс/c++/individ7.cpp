#include <iostream>
using namespace std;
struct Tree
{
    int info;
    Tree *l;
    Tree *r;
    int level;
};
void addNode(Tree* t, int x)
{
    if(x<t->info)
    if(t->l == NULL)
    {
        Tree* q = new Tree;
        q->info = x;
        t->l = q;
        q->l = NULL; q->r = NULL;
        q->level=t->level+1;
    }
    else addNode(t->l, x);
    else
    if (t->r==NULL)
    {
        Tree *q = new Tree;
        q->info = x;
        t->r = q;
        q->l = NULL; q->r = NULL;
        q->level=t->level+1;
    }
    else addNode(t->r,x);
}
Tree* fillTree()
{
    Tree* root = new Tree;
    cout<<"Input elems"<<endl;
    int x; cin>>x;
    root->info = x; 
    root->l = NULL; 
    root->r = NULL;
    root->level = 0;
    while(x)
    {
        cin>>x;
        if(x) addNode(root,x);
    }
    return root;
}
void srar(Tree *t, float &s, float &k, int lvl)
{
    if(t==NULL) return;
    if (t->level==lvl)
    {
        s+=t->info;
        k++;
    }
    srar(t->l, s, k, lvl);
    srar(t->r, s, k, lvl);
}
void printTree(Tree* t)
{
    if(t!=NULL)
    {
        cout<<t->info<<endl;
        printTree(t->l);
        printTree(t->r);
    }
}
int main()
{
    //Input data: 8 3 10 1 6 14 4 7 13
    float s = 0, k = 0;
     Tree *root = fillTree();
    cout<<"INput Level: "<<endl;
    int y; cin >>y; 
    srar(root, s,k,y);
    cout<<s/k<<endl;
}