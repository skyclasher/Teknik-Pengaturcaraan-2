#include<iostream>
using namespace std;

class Chapter 
{
	private:
		int no_of_pages;
	public:
	Chapter(int pages);
	int get_pages();
};
Chapter::Chapter(int pages)
{
	no_of_pages=pages;
}

int Chapter::get_pages()
{
	return no_of_pages;
}
class Book
{
	public:
	Chapter c1,c2,c3,c4;
	Book (int pages1, int pages2,int pages3,int pages4):c1(pages1), c2(pages2), c3(pages3), c4(pages4)
	{ }
	void showNumberofPages();
};

void Book::showNumberofPages()
{
	cout<<"Total number of pages: "<<(c1.get_pages() + c2.get_pages() + c3.get_pages() + c4.get_pages())<<endl;
}
int main()
{
	Book TP2(200, 190, 50, 100);
	TP2.showNumberofPages();	
}