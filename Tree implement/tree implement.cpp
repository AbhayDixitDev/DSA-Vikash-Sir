#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

void inOrder(Node* root,int &c,int &l , int &k) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left,c,l,k);  

	cout << root->data << " "; 
    inOrder(root->right,c,l,k);
    
    
//    if(root->left==nullptr && root->right==nullptr){
    	c++;
//	}
   
}

int height(Node* root) {
    if (root == nullptr) {
        return 0; 
    }
    int l = height(root->left);
    int r = height(root->right);
 
    return max(l, r) + 1;
}

void preOrder(Node* root,int &c) {
    if (root == nullptr) {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left,c);    
    preOrder(root->right,c);
    if(root->left==nullptr && root->right==nullptr){
    	c++;
	}
}

void postOrder(Node* root,int &c) {
    if (root == nullptr) {
        return;
    }
    
    postOrder(root->left,c);   
    postOrder(root->right,c);
    if(root->left==nullptr && root->right==nullptr){
    	c++;
	}
	cout<<root->data<<" "; 
}



int main() {
    Node* root = nullptr;

    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 8);
    insert(root, 1);
    insert(root, 9);
    int c=0,l=0,k=0;
    cout << "In-order traversal: ";
    inOrder(root,c,l,k);
//    cout << endl <<"there are "<< c << " leaves node in tree"<< endl;
    cout << endl <<"there are "<< c << "  node in tree"<< endl;
  

    cout << "Pre-order traversal: ";
    preOrder(root,c);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root,c);
    cout << endl;
    
      cout << endl <<"height of tree is  "<< height(root)<< endl;

    return 0;
}