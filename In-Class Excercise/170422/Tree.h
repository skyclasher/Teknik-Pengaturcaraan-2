#ifndef TREE_H
#define TREE_H

class Tree
{
	private:
		static int objectCount;   
	public:
		Tree(){ objectCount++; }
		int getObjectCount() const { return objectCount; }
};

int Tree::objectCount = 0;

#endif