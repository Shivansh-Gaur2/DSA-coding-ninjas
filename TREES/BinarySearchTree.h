#include "BinaryTreeNode.h"
class BST{
    BinaryTreeNode<int>* root;
    public:

    BST(){
        root = nullptr;
    }
    ~BST(){
        delete root;
    }

    private:
    BinaryTreeNode<int>* deleteData(int data, BinaryTreeNode<int>* node){
        if(node == nullptr){
            return nullptr;
        }
        if(data> node->data){
            node->right = deleteData(data, node->right);
        }
        else if(data < node->data){
            node->left = deleteData(data, node->left);
        }
        else{
            if(node->left == nullptr)
        }
    }
    public:
    void deleteData(int data){

    }
    private:
    BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>* node){
        if(root == nullptr){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(data < node -> data){
           node -> left = insert(data, node->left);
        }
        else{
            node->right = insert(data, node->right);
        }
        return node;
    }
    public:
    void insert(int data){
        this -> root = insert(data, this->root);
    }
    private:
    bool hasData(int data, BinaryTreeNode<int>* node){
        if(node == nullptr){
            return false;
        }

        if(node->data == data){
            return true;
        }
        else if(data < node->data){
            return hasData(data, node->left);
        }
        else{
            return hasData(data, node->right);
        }

    }
    public:
    bool hasData(int data){
        return hasData(data, root);
    }
};