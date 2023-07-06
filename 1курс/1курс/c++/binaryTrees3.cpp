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
void printTree(Tree* t)
{
    if(t!=NULL)
    {
        cout<<t->info<<endl;
        printTree(t->l);
        printTree(t->r);
    }
}
int sumL(Tree *root)
{
    if (root==NULL) return 0;
    if(root->l == NULL && root->r==NULL) return root->info + sumL(root->l)+sumL(root->r);
    return sumL(root->l)+sumL(root->r);
}

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}
int maxLevel(Tree *t)
{
    if (t==NULL) return 0;
    if (t->l==NULL && t->r==NULL) return t->level;
    return max(maxLevel(t->l),maxLevel(t->r));
}
int koList(Tree *t, int x)
{
    if (t==NULL) return 0;
    if (t->level == x) return 1;
    return koList(t->l,x)+koList(t->r,x);
}
void chetReplace(Tree *root,int l,  int x)
{
    if (root==NULL) return;
    if (root->info%2==0 && root->level == l) root->info = x;
    return chetReplace(root->l,l,x),chetReplace(root->r,l,x); 
}
void rreplace(Tree *root,int l,  int x)
{
    if (root==NULL) return;
    if (root->level == l) root->info = x;
    return chetReplace(root->l,l,x),chetReplace(root->r,l,x); 
}

int main()
{
    Tree *root = fillTree();
    cout<<"INput Level: "<<endl;
    int y; cin >>y;
    chetReplace(root, y, sumL(root));
    printTree(root);

   
}