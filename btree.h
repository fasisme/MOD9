#ifndef btree_H_INCLUDED
#define btree_H_INCLUDED
#include <iostream>

#define Left_Node(P) P->Left_Node
#define Right_Node(P) P->Right_Node
#define value(P) P->value

using namespace std;

typedef int infotype;
typedef struct elmTree *address;
struct elmTree{
// Nama : Daffa Pratama  NIM : 1301184382
    address Left_Node,Right_Node;
    infotype value;
};

address allocation(infotype x);
void Insert_BST(address &root, address Node);
void inOrder(address root);
address findNode(address root,infotype x);
int count_Internal_Node(address root);
void Print_Leaves(address root);
int count_Leaves(address root);

#endif // btree_H_INCLUDED


