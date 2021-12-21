/*Binary tree implementation using linked list, including postorder, inorder, preorder traversal,searching
insertion, deletion, etc. */

#include <stdio.h>
#include <stdlib.h>

void deletion();
void inorder();
void printleaf();

typedef struct node
{
    int d;
    struct node *l;
    struct node *r;
}Node;

Node *nd,*rt,*drt;   //rt=main ROOT node, nd = node to be deleted, drt=root node whose l/d address has to be set to NULL

Node* create(int d)
{
    Node *t = (Node*)malloc(sizeof(Node));
    t->d = d;
    t->l = NULL;
    t->r = NULL;
    return(t);
}

Node* insert(Node *root, int d)
{
    if(root==NULL)
    {
        root = create(d);
        return(root);
    }
    else
    {
        Node *t;
        if(d>root->d)
        {
            t=insert(root->r,d);
            root->r = t;
        }
        else 
        {
            t=insert(root->l,d);
            root->l = t;
        }
        return(root);
    }
}

int search(Node *root, int s, int tr, int m)//Binary search algorithm. Time complexity: O(log2n), where n is the no. of nodes
//d=deletion trigger 0/1 - NON-DELETION/DELETE, m=marker for left/right - 1/2 - L/R

/*Explanation: Worst Case: No. of recursions=No. of nodes on the longest possible path from the root to
a leaf node = Height of a tree+1. Height of a tree: log2n. Thus, total no. of steps: log2n+1 = O(log2n)*/

{
    if(root!=NULL)
    {
        if(s==root->d)
        {
            if(tr==1)//deletes the left right of the root node whose children was the node containing the address if deletion trigger=1
            {
                if(m==1)
                drt->l=NULL;
                else
                drt->r=NULL;
            }
            nd = root;//this will be useful only during deletion process, and not otherwise
            return 1;
        }
        else
        {
            drt = root;
            int t=0;    //NOTE: note how variables CAN be declared inside an if-else block in C
            if(s>root->d)
            {
                t = search(root->r,s,tr,2);
            }
            else
            {
                t = search(root->l,s,tr,1);
            }
            return (t);
        }
    }
    else
    return 0;   
}
void inorder(Node *root)//standard traversal algorithm of any binary tree; it will cover ALL of the nodes of a binary tree.
{
    if(root!=NULL)
    {
        inorder(root->l);
        printf("%d ",root->d);
        inorder(root->r);
    }
}

void deletion(Node *dr)
{
    if(dr!=NULL)
    {
        insert(rt,dr->d);
        deletion(dr->l);
        deletion(dr->r);
    }
}
void printleaf(Node *root)
{
    if(root!=NULL)
    {
        if(root->l==NULL&&root->r==NULL)
        printf("%d ",root->d);
        else
        {
            printleaf(root->l);
            printleaf(root->r);
        }
    }

}
int count(Node *root)
{
    if(root==NULL)
    return 0;
    else
    return(1+count(root->l)+count(root->r));
}

int height(Node *root)
{
    if(root!=NULL)
    {
        int li = 1+height(root->l);
        int ri = 1+height(root->r);
        return((li>=ri)?li:ri);
    }
    else
    return 0;
}

int main()
{
    int ch,n,s=0;
    printf("Enter 1 to insert a node, 0 to exit:\n");
    scanf("%d", &ch);
    printf("\nEnter the data of the node:\t");
    scanf("%d", &n);
    rt = insert(rt, n);
    printf("\nEnter 1 to insert a node, 2 to search, 3 for traversal, 4 for deletion, 5 to count, 0 to exit:\n");
    printf("Enter 6 to print leaves, Enter 7 to print height of the tree\n");
    scanf("%d", &ch);
    while(ch)
    {
        if(ch==1)
        {
            printf("\nEnter the data of the node:\t");
            scanf("%d", &n);
            rt = insert(rt, n);
        }
        else if(ch==2)
        {
            printf("\nEnter the number to be searched:\t");
            scanf("%d", &n);
            s = search(rt, n,0,0);
            if(s)
            printf("\nSearch successful!, number present!");
            else
            printf("\nSearch unsuccessful, number not present");
        }
        else if(ch==4)
        {
            printf("\nEnter the number to be deleted:\t");
            scanf("%d", &n);
            s = search(rt, n,1,0);
            if(s)
            {
                deletion(nd->l);
                deletion(nd->r);
                printf("\nThe node has been deleted");
            }
            else
            printf("\nThe node does not exist");
        }
        else if(ch==5)
        printf("\nThe number of nodes are %d",count(rt));
        else if(ch==6)
        printleaf(rt);
        else if(ch==7)
        printf("The height of the binary tree is %d",height(rt)-1);
        else
        {
            printf("\nInorder traversal:\n");
            inorder(rt);
            // printf("\nPreorder traversal:\n");
            // preorder(root);
            // printf("\nPostorder traversal:\n");
            // postorder(root);
        }
        printf("\nEnter 1 to insert a node, 2 to search, 3 for traversal, 4 for deletion, 5 to count, 0 to exit:\n");
        printf("Enter 6 to print leaves, 7 for height\n");
        scanf("%d", &ch);
    }
    return 0;
}

