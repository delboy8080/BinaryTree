#pragma once

template <class T>
class BSTNode
{
	
	BSTNode<T> *parent;
	BSTNode<T> *left;
	BSTNode<T> *right;
	T data;

public:
	BSTNode();
	BSTNode(T data);
	void setItem(T item);
	int count();
	void add(T item);
	BSTNode<T>* getParent();
	BSTNode<T>* getLeft();
	BSTNode<T>* getRight();
	void setLeft(BSTNode<T> *l);
	void setRight(BSTNode<T> *r);
	T getItem();
	~BSTNode();

};
template <class T>
BSTNode<T>::~BSTNode()
{
	delete left;
	delete right;
}
template <class T>
T BSTNode<T>::getItem()
{
	return this->data;
}
template <class T>
BSTNode<T>* BSTNode<T>::getLeft()
{
	return this->left;
}
template <class T>
BSTNode<T>* BSTNode<T>::getRight()
{
	return this->right;
}
template <class T>
BSTNode<T>* BSTNode<T>::getParent()
{
	return this->parent;
}
template <class T>
void BSTNode<T>::setLeft(BSTNode<T> *l)
{
	this->left = l;
}
template <class T>
void BSTNode<T>::setRight(BSTNode<T> *r)
{
	this->right = r;
}

template <class T>
void BSTNode<T>::setItem(T item)
{
	this->data = item;
}


template <class T>
BSTNode<T>::BSTNode()
{
	parent = left = right = nullptr;
}


template <class T>
BSTNode<T>::BSTNode(T data)
{
	this->data = data;
	parent = left = right = nullptr;
}
template <class T>
int BSTNode<T>::count()
{
	return 0;
}

template <class T>
void BSTNode<T>::add(T item)
{
	if (data == item)
	{
		return;
	}
	if (item < data)
	{
		if (left == nullptr)
		{
			left = new BSTNode<T>(item);
			left->parent = this;
		}
		else
		{
			left->add(item);
		}
	}
	else
	{
		if (right == nullptr)
		{
			right = new BSTNode<T>(item);
			right->parent = this;
		}
		else
		{
			right->add(item);
		}
	}
}


