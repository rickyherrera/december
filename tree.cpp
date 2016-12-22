#include <iostream>
using namespace std;

class Tree {
    char name;
    Node root;
}

struct Node {
    int val;
    Node* lNode;
    Node* rNode;
};