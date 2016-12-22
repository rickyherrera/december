#include <iostream>
using namespace std;

class Tree {
    char name;
    Node root;
}

class Node {
    char name;
    int val;
    Node lNode;
    Node rNode;
}