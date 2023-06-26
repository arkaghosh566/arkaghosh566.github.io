#include <stdio.h>
#include <stdlib.h>
struct tnode
{
    int data;
    struct tnode *left, *right;
};
struct tnode *root = NULL;

struct tnode * createNode(int data)
{
    struct tnode *newNode;
    newNode =(struct tnode *)malloc(sizeof(struct tnode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}
void insertion(struct tnode **node, int data)
{
        if (!*node)
           *node = createNode(data);
        else if (data < (*node)->data)
           insertion(&(*node)->left, data);
        else if (data > (*node)->data)
           insertion(&(*node)->right, data);
}
void postOrder(struct tnode *node)
{
     if (node)
        {
            postOrder(node->left);
            postOrder(node->right);
            printf("%d\t", node->data);
        }
}
void preOrder(struct tnode *node)
{
        if (node)
        {
            printf("%d\t", node->data);
            preOrder(node->left);
            preOrder(node->right);
        }
}

void inOrder(struct tnode *node)
{
    if (node)
    {
        inOrder(node->left);
        printf("%d\t", node->data);
        inOrder(node->right);
    }
}
int main()
{
    int data, ch;
    do
    {
        printf("\n1.INSERTION");
        printf("\n2.PREORDER");
        printf("\n3.POSTORDER");
        printf("\n4.INORDER");
        printf("\n5.EXIT");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                printf("\nEnter data : ");
                scanf("%d", &data);
                insertion(&root, data);
                printf("\n");
                break;
                case 2:
                preOrder(root);
                break;
                case 3:
                postOrder(root);
                break;
                case 4:
                inOrder(root);
                break;
                case 5:
                exit(1);
                default:
                printf("\n\nInvalid Option !!! Try Again!!\n\n");
                break;
            }
    }while(ch!= 5);
    return 0;
}