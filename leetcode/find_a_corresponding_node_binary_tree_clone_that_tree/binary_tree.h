#ifndef _BINARY_H_
#define _BINARY_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Extra Credit
template <typename D>
class node
{
	public:
		D data;
		int number;
		node *right;
		node *left;
		node *next;
		node()
		{
			right=NULL;
			left=NULL;
			number=0;
			next=NULL;
		}
		node(D value)
		{
			next=NULL;
			data=value;
		}
};

template <typename D>
class qnode
{
	public:
		qnode<D> *next;
		D value;
		qnode(D data)
		{
			value=data;
			next=NULL;
		}
};


template <typename D>
class queue
{
	private:
		qnode<D>* rear;
		qnode<D>* front;
		int count;
	public:
		queue()
    		{ 
        	front = rear = NULL;
		count=1;
    		}
		int getCount()
		{
			return count;
		}
    		void enQueue(D x) 
    		{
			qnode<D>* temp = new qnode<D>(x);
			if (rear == NULL)
			{
				front = rear = temp;
				return;
			}
			rear->next = temp;
			rear = temp;
			count++;
		}

		void deQueue()
		{
			if (front == NULL)
				return;
			qnode<D>* temp = front;
			front = front->next;
			if (front == NULL)
				rear = NULL;
			delete (temp);
			count--;
		}

		void print(ostream &out)
		{
			qnode<D>* temp=front;
			while(temp!=NULL)
			{
				out<<temp->value<<endl;
				temp=temp->next;
			}
		}

		bool isempty()
		{
			if(front==NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		D getFront()
		{
			return front->value;
		}

};

template <typename D>
class binary
{
	private:
		node<D> *root;
		int count;
		void clear(node<D>* root1);
		node<D> *adding(node<D>* root1,D value);
		void printing_count(node<D>* root1 , ostream &out);
		void printing1(node<D>* root1,ostream &out);
		void printing2(node<D>* root1,ostream &out);
		void printing3(node<D>* root1,ostream &out);
		void printLevelOrder(node<D>* root1,ostream &out);
		int depth(node<D>*root1);
	public:
		binary();
		~binary();
		node<D>* getRoot(){return root;};
		int add(D value);
		int getDepth();
		bool check(D value){return contains(root,value);};
		int getCount(){return count;};
		void print_commonwords(ostream &out);
		void print_breadth(ostream &out);
		void print_in_Order(ostream &out);
		void print_pre_Order(ostream &out);
		void print_post_Order(ostream &out);
		void saveTreeToFile(ostream &out);
		void saveTreeToFile11(ostream &out);
		void loadTreeFromFile(string fname);
};


template <typename D>
binary<D>::binary()
{
	root=NULL;
	count=0;
}

template <typename D>
void binary<D>::clear(node<D>* root1)
{
if (root1 != NULL)
{
	clear(root1->left);
	root1->left=NULL;
        clear(root1->right);
	root1->right=NULL;
	delete root1;
}
}

template <typename D>
binary<D>::~binary()
{
	clear(root);
	root=NULL;
}

template <typename D>
node<D>* binary<D>::adding(node<D>* root1,D value)
{
if (root1==NULL)
{
	node<D> *temp = new node<D>();
	temp->data = value;
	count++;
	return temp;
}
else
{
	if (value<root1->data)
	{
		root1->left = adding(root1->left,value);
	}
	if (value>root1->data)
	{
		root1->right =adding(root1->right,value);
	}
	if(value==root1->data)
	{
		root1->number=(root1->number+1);
	}
	return root1;
}
}

template <typename D>
int binary<D>::add(D value)
{
root=adding(root,value);
return count;
}

template <typename D>
void binary<D>::printing2(node<D>* root1,ostream &out)
{
if(root1!=NULL)
{
	printing2(root1->left,out);
	out<<root1->data<<endl;
	printing2(root1->right,out);
}
}

template <typename D>
void binary<D>::printing3(node<D>* root1,ostream &out)
{
if(root1!=NULL)
{
	printing3(root1->left,out);	
	printing3(root1->right,out);
	out<<root1->data<<endl;
}
}

template <typename D>
void binary<D>::printing_count(node<D>* root1,ostream &out)
{
if(root1!=NULL)
{
	out<<root1->data<<"	"<<root1->number<<endl;
	printing_count(root1->left,out);
	printing_count(root1->right,out);
}
}

template <typename D>
void binary<D>::printing1(node<D>* root1,ostream &out)
{
if(root1!=NULL)
{
	out<<root1->data<<endl;
	printing1(root1->left,out);
	printing1(root1->right,out);
}
}

template <typename D>
void binary<D>::print_in_Order(ostream &out)
{
	printing2(root,out);
}

template <typename D>
void binary<D>::print_pre_Order(ostream &out)
{
	printing1(root,out);
}

template <typename D>
void binary<D>::print_post_Order(ostream &out)
{
	printing3(root,out);
}

template <typename D>
int binary<D>::depth(node<D>* root1)
{
	if (root1==NULL)
	{
		return 0;
	}
	else
	{
		int depth_left=depth(root1->left);
		int depth_right=depth(root1->right);
		if(depth_left>depth_right)
		{
			return (depth_left+1);
		}
		else
		{
			return (depth_right+1);
		}
	}
}

template <typename D>
int  binary<D>::getDepth()
{
	return depth(root);
}

template <typename D>
void binary<D>::saveTreeToFile(ostream &out)
{
	printing1(root,out);
}

template <typename D>
void binary<D>::saveTreeToFile11(ostream &out)
{
	printing_count(root,out);
}

template <typename D>
void binary<D>::loadTreeFromFile(string fname)
{
	string filename=fname+".txt";
	string outname="loader_"+fname+".txt";
	fstream file;
	ofstream output;
	output.open(outname);
	file.open(filename);
	D words;
	int temp;
	while(file>>words>>temp)
	{
		add(words);
	}
	print_pre_Order(output);
	file.close();
	output.close();

}


template <typename D>
void binary<D>::printLevelOrder(node<D> *root1,ostream &out)
{
    if (root1 == NULL)
    {
	    return;
    }
    queue<node<D> *> pm;  
    pm.enQueue(root1);
    while (!pm.isempty() )  
    {  
        int nodeCount = pm.getCount();
        while (nodeCount > 0) 
        {  
            node<D> *node = pm.getFront();  
            cout << node->data <<"	";  
            if (node->left != NULL)
	    { 
                pm.enQueue(node->left);
	    }
            if (node->right != NULL)
	    {
                pm.enQueue(node->right);
	    }
		pm.deQueue();
		nodeCount--;  
        }  
        cout <<endl<< "============="<<endl;  
    }  
}


template <typename D>
void binary<D>::print_breadth(ostream &out)
{
printLevelOrder(root,out);
}

#endif
