#include "btree.h"

address allocation(infotype x){
// Nama : Daffa Pratama  NIM : 1301184382
    address Node = new elmTree;
    value(Node) = x;
    Left_Node(Node) = NULL;
    Right_Node(Node) = NULL;
    return Node;
}
void Insert_BST(address &root, address Node){
// Nama : Daffa Pratama  NIM : 1301184382
    if(root == NULL){
        root = Node;
    } else{
        if(value(Node) > value(root)){
            if(Right_Node(root)== NULL)
                Right_Node(root) = Node;
            else
                Insert_BST(Right_Node(root),Node);

        } else if(value(Node) < value(root)){
            if(Left_Node(root)==NULL)
                Left_Node(root) = Node;
            else
                Insert_BST(Left_Node(root),Node);
        }
    }
}
void inOrder(address root){
// Nama : Daffa Pratama  NIM : 1301184382
    if (root!= NULL){
        inOrder(Left_Node(root));
        cout << value(root) << " ";
        inOrder(Right_Node(root));
    }
}
address findNode(address root,infotype x){
// Nama : Daffa Pratama  NIM : 1301184382
    if(root == NULL || value(root) == x)
        return root;
    if(x > value(root))
        return findNode(Right_Node(root),x);
    else
        return findNode(Left_Node(root),x);
}
int count_Internal_Node(address root){
// Nama : Daffa Pratama  NIM : 1301184382
    if (root == NULL || (Left_Node(root) == NULL && Right_Node(root) == NULL))
        return 0;
    return 1 + count_Internal_Node(Left_Node(root)) + count_Internal_Node(Right_Node(root));
}
void Print_Leaves(address root){
// Nama : Daffa Pratama  NIM : 1301184382
    if (root != NULL){
        Print_Leaves(Left_Node(root));
        Print_Leaves(Right_Node(root));
        if(Left_Node(root) == NULL && Right_Node(root) == NULL){
            cout << value(root) << " ";
        }
    }
}
int count_Leaves(address root){
// Nama : Daffa Pratama  NIM : 1301184382
    if(root == NULL)
        return 0;
    if(Left_Node(root) == NULL && Right_Node(root) == NULL)
        return 1;
    else
        return count_Leaves(Left_Node(root)) + count_Internal_Node(Right_Node(root));
}
