
#include<iostream>
#include<string>

struct book {
	std::string name_book;
	std::string book_author;
	int yaer=0;
	int quantity=0;
	double price=0;
};

int main() {
	

	book* books = new book[2]{
		{ "book1",
		"Ivfn ivanov",
		2010,
		105,
		90
		},
		{
			"Alice",
			"LC",
			1890,
			400,
			500,
		}
	};
	
	std::getline(std::cin, books[0].name_book);

	return 0;
}
