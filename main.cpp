#include<iostream>
#include"book.hpp"
#include"bookshelf.hpp"

int main() {
    BookShelf<Book> bookshelf = BookShelf<Book>(4);
    bookshelf.append_book(Book("Around the World in 80 Days"));
    bookshelf.append_book(Book("Bible"));
    bookshelf.append_book(Book("Cinderella"));
    bookshelf.append_book(Book("Daddy-Long-Legs"));
    Iterator<Book> *it = bookshelf.iterator();

    while (it->hasNext()) {
        Book book = it->next();
        std::cout << book.getName() << std::endl;
    }
    delete it;
    
    return 0;
}