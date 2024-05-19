#include<iostream>
#include<string>
#include<vector>
using namespace std;

class node
{
public:
	int data;
	node* right;
	node* left;

	node(int v)
	{
		data = v;
		left = right = nullptr;
	}
};

class BST
{
	node* root = nullptr;

public:

	bool IsEmpty()
	{
		if (root == NULL)
			return true;
		else
			return false;
	}

	void rec(node* temp , int v)
	{
		if (v > temp->data)
		{
			if (temp->right == nullptr)
			{
				
				temp->right = new node(v);

		    }
			else 
			{
				rec(temp->right, v);
			}

		}

		else
			if (temp->left == nullptr)
			{


				temp->left = new node(v);

			}
			else
			{
				rec(temp->left, v);
			}
		
	}

	void AddRec(int value)
	{
	

		if (IsEmpty() == true)
		{
			root = new node(value);

		}
		else
			rec(root, value);

	}
	void AddItr(int value)
	{
		///*node* new_node;
		//new_node = new node;
		//new_node->data = value;
		//new_node->left = nullptr;
		//new_node->right = nullptr;*/
		//node n = new node(value);


		if (IsEmpty() == true)
		{
			root = new node(value);

		}
		node* temp = root;
		node* parent = nullptr;
		

		while (temp!=nullptr)
		{
			parent = temp;
			if (value <= temp->data)
				temp=temp->left;

			else
				temp=temp->right;

		}

		if (value > parent->data)
			parent->right = new node(value);
		else
			parent->left = new node(value);




	}

	// recursion
	 
	int GetMax(node* temp )
	{
		node* temp = root;

		if (temp->right == nullptr)
		{
			return temp->data;
		}

		return GetMax();

	}

	// Iterative
	//int GetMax()
	//{
	//	node* temp = root;
	//	while (temp->right != nullptr)
	//	{
	//		temp = temp->right;
	//	}
	//	return temp->data;

	//}	
	//int GetMin()
	//{
	//	node* temp = root;
	//	if (IsEmpty())
	//		return 0;
	//	else
	//		while (temp->left != nullptr)
	//		{
	//			temp = temp->left;
	//	    }
	//	return temp->data;

	//}
	//int GetRoot()
	//{

	//	return root->data;

	//}

	void display()
	{
		cout << root->data;
	}

};



int main()
{
	BST a;
	a.AddItr(10);
	a.AddItr(5);
	a.AddItr(6);
	a.AddItr(7);
	a.AddItr(8);
	a.AddItr(9);
	a.AddItr(11);
	a.AddItr(12);
	a.AddItr(15);
	//cout << a.GetRoot() << endl;
	//cout << a.GetMin() << endl;
	cout << a.GetMax();
	//a.GetMax();

	


}