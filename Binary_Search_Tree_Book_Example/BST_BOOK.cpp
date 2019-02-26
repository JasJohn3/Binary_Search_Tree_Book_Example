#include "BST_Book.h"
template <typename Comparable>
BinarySearchTree<Comparable>::BinarySearchTree()
{
	
}
template <typename Comparable>
BinarySearchTree<Comparable>::BinarySearchTree(BinarySearchTree&& rhs)
{
	
}
template <typename Comparable>
BinarySearchTree<Comparable>::BinarySearchTree(const BinarySearchTree& rhs)
{
	
}
/*Returns true if x is found in the Tree*/
template <typename Comparable>
bool BinarySearchTree<Comparable>::contains(const Comparable& x) const
{
	return contains(x, root);
}
/*Recursive Contains Method for internal Use.*/

template <typename Comparable>
bool BinarySearchTree<Comparable>::contains(const Comparable& x, BinaryNode* t) const
{
	/*x is the item being searched for*/
	/*t is the node that roots the subtree*/
	/*base case if t is a null pointer, x does not exist*/
	if (t==nullptr)
	{
		return false;
	}
	/*if x is less than the element(key value) of t, recurse left*/
	else if (x<t->element)
	{
		return contains(x, t->left);
	}
	/*if x is greater than the element(key value) of t, recurse right*/
	else if (x>t->element)
	{
		return contains(x, t->right);
	}
	/*if key value is in t->element, x is found return true*/
	else { true; }
}

/*Inserts the x value into the tree, any duplicate data is ignored*/
template <typename Comparable>
void BinarySearchTree<Comparable>::insert(const Comparable& x)
{
	insert(x, root);
}
/*Removes x from the tree.  If X is not found, remove is ignored*/
template <typename Comparable>
void BinarySearchTree<Comparable>::remove(const Comparable& x)
{
	remove(x, root);
}





