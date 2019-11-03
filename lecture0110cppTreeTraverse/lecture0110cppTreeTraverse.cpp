#include<iostream>
using namespace std;

class Node {
	int key;
	Node* left;
	Node* right;
public:
	Node()
	{
		key = -1;
		left = NULL;
		right = NULL;
	};
	void setKey(int key)
	{
		this->key = key;
	}
	void setLeft(Node* left)
	{
		this->left = left;
	}
	void setRight(Node* right)
	{
		this->right	= right;
	}
	int getKey()
	{
		return key;
	}
	Node* getLeft() 
	{
		return left;
	}
	Node* getRight() 
	{
		return right;
	}
};

class Tree
{
	Node* root;
public:
	Tree();
	~Tree();
	Node* getRoot()
	{
		return root;
	}
	void addNode(int key);
	void inOrder(Node* n);
	void preOrder(Node* n);
	void postOrder(Node* n);
private:
	void addNode(int key, Node* leaf);
	void freeNode(Node* leaf);
};

Tree::Tree()
{
	root = NULL;
}

Tree::~Tree()
{
	freeNode(root);
}

void Tree::freeNode(Node* leaf)
{
	if (leaf != NULL)
	{
		freeNode(leaf->getLeft());
		freeNode(leaf->getRight());
		delete leaf;
	}
}

void Tree::addNode(int key)
{
	if (root == NULL)
	{
		cout << "add root node ..." << key << endl;
		Node* temp = new Node();
		temp->setKey(key);
		root = temp;
	}
	else
	{
		cout << "add other node ..." << key << endl;
		addNode(key, root);
	}
}

//add a node(private)
void Tree::addNode(int key, Node* leaf)
{
	if (key <= leaf->getKey())
	{
		if (leaf->getLeft() != NULL)
			addNode(key, leaf->getLeft());
		else
		{
			Node* temp = new Node();
			temp->setKey(key);
			leaf->setLeft(temp);
		}
	}
	else
	{
		if (leaf->getRight() != NULL)
			addNode(key, leaf->getRight());
		else
		{
			Node* temp = new Node();
			temp->setKey(key);
			leaf->setRight(temp);
		}
	}
}

void Tree::inOrder(Node* n)
{
	if (n)
	{
		inOrder(n->getLeft());
		cout << n->getKey() << "";
		inOrder(n->getRight());
	}
}
void Tree::preOrder(Node* n)
{
	if (n)
	{
		cout << n->getKey() << "";
		preOrder(n->getLeft());
		preOrder(n->getRight());
	}
}
void Tree::postOrder(Node* n)
{
	if (n)
	{
		postOrder(n->getLeft());
		postOrder(n->getRight());
		cout << n->getKey() << "";
	}
}




int main()
{
	Tree* tree = new Tree();
	tree->addNode(3);
	tree->addNode(1);
	tree->addNode(2);
	tree->addNode(4);
	tree->addNode(5);

	cout << "InOrder Traversal " << endl;
	tree->inOrder(tree->getRoot());
	cout << endl;
	cout << "preOrder Traversal " << endl;
	tree->preOrder(tree->getRoot());
	cout << endl;
	cout << "postOrder Traversal " << endl;
	tree->postOrder(tree->getRoot());
	cout << endl;

}