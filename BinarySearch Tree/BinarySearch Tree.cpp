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

private:


	node* root = nullptr;

	void rec(node* temp, int v)
	{

		if (v <= temp->data)
		{
			if (temp->left == nullptr)
			{
				temp->left = new node(v);
			}
			else
			{
				rec(temp->left, v);
			}
		}
		if (v > temp->data)
		{
			if (temp->right == nullptr) {
				temp->right = new node(v);
			}
			else
			{
				rec(temp->right, v);
			}
		}
	}

	void Rec2(node* temp, int v)
	{
		if (v > temp->data)
		{
			if (temp->right != nullptr) {
				return Rec2(temp->right, v);
			}
			else
				temp->right = new node(v);
		}
		else
			if (temp->left != nullptr) {
				return Rec2(temp->left, v);
			}
			else
				temp->left = new node(v);
	}

	int RecMax(node* temp)
	{
		if (temp->right == nullptr)
		{
			return temp->data;
		}
		return RecMax(temp->right);
	}

	int RecMin(node* temp)
	{
		//temp = temp->left;
		if (temp->left == nullptr)
		{
			return temp->data;
		}
		return RecMin(temp->left);
	}

	int RecHeight(node* counter)
	{
		if (counter == nullptr)
			return -1;

		//int LeftSubTree  = RecHeight(counter->left);
		//int RightSubTree = RecHeight(counter->right);

		//return 1 + max(LeftSubTree, RightSubTree);
		return 1 + max(RecHeight(counter->left), RecHeight(counter->right));


	}

public:

	bool IsEmpty()
	{
		if (root == NULL)
			return true;
		else
			return false;
	}

	// Using Recursion

	void AddRec2(int v)
	{

		if (IsEmpty() == true)
		{
			root = new node(v);
		}
		else
			Rec2(root, v);

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

	int GetMax()
	{
		if (IsEmpty() == true)
			return -1;
		else
			return RecMax(root);
	}

	int GetMin()
	{
		if (IsEmpty() == true)
			return -1;
		else
			return RecMin(root);
	}

	int GetHeight()
	{
		if (IsEmpty() == true)
		{
			return -1;
		}

		else
			RecHeight(root);
	}

	//void AddItr(int value)
	//{
	//	///*node* new_node;
	//	//new_node = new node;
	//	//new_node->data = value;
	//	//new_node->left = nullptr;
	//	//new_node->right = nullptr;*/
	//	//node n = new node(value);
	//	if (IsEmpty() == true)
	//	{
	//		root = new node(value);
	//	}
	//	node* temp = root;
	//	node* parent = nullptr;
	//	while (temp != nullptr)
	//	{
	//		parent = temp;
	//		if (value <= temp->data)
	//			temp = temp->left;
	//		else
	//			temp = temp->right;
	//	}

	//	if (value <= parent->data)
	//		parent->left = new node(value);
	//	else
	//		parent->right = new node(value);
	//}

	// Using Iteration

	void AddItr2(int v)
	{
		if (IsEmpty() == true)
		{
			root = new node(v);
		}
		else {
			node* NodeV = root;

			if (v > NodeV->data)
			{
				while (NodeV->right != nullptr)
				{
					NodeV = NodeV->right;

				}
				NodeV->right = new node(v);
			}
			else
				while (NodeV->left != nullptr)
				{
					NodeV = NodeV->left;
				}
			NodeV->left = new node(v);
		}
	}

	int GetMax2()
	{
		if (IsEmpty() == true)
		{
			return -1;
		}

		else {
			node* temp = root;

			while (temp->right != nullptr)
			{
				temp = temp->right;
			}
			return temp->data;
		}
	}

	int GetMin2()
	{
		if (IsEmpty() == true)
		{
			return -1;
		}

		else {
			node* temp = root;

			while (temp->left != nullptr)
			{
				temp = temp->left;
			}
			return temp->data;
		}
	}

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

	int GetRoot()
	{
		return root->data;
	}




};



int main()
{
	BST bst_obj;

	bst_obj.AddRec2(100);
	bst_obj.AddRec2(80);
	bst_obj.AddRec2(120);
	bst_obj.AddRec2(85);
	bst_obj.AddRec2(110);

	


	cout << bst_obj.GetMax2() << endl;
	cout << bst_obj.GetMin2() << endl;
	cout << bst_obj.GetRoot() << endl;

	cout << bst_obj.GetHeight() << endl;

	//cout << a.GetMin() << endl;
	//cout << a.GetMax() << endl;





}