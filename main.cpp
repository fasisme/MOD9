#include <iostream>
#include "Btree.h"

using namespace std;

int main()
{
// Nama : Daffa Pratama  NIM : 1301184382
    address Root = allocation(8);
    inOrder(Root);
    cout <<"  Insert 8" <<endl;

    address Node = allocation(10);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 10" <<endl;

    Node = allocation(3);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 3" <<endl;

    Node = allocation(1);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 1" <<endl;

    Node = allocation(6);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 6" <<endl;

    Node = allocation(14);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 14" <<endl;

    Node = allocation(4);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 4" <<endl;

    Node = allocation(7);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 7" <<endl;

    Node = allocation(13);
    Insert_BST(Root,Node);
    inOrder(Root);
    cout <<"  Insert 13" <<endl;

    cout << endl;
    cout << "Jumlah Internal Node : " << count_Internal_Node(Root) << endl;
    cout << "Daun/Leaves          : ";
    Print_Leaves(Root);
    cout << endl;
    cout << "Jumlah Daun/Leaves   : " << count_Leaves(Root) << endl;

}
