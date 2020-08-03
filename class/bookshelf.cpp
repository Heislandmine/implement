#include"bookshelf.hpp"
#include"bookshelfiterator.hpp"
template <typename T>
BookShelf<T>::BookShelf(int maxsize) {
    last = 0;
    books = new Book[maxsize];
}
template <typename T>
BookShelf<T>::~BookShelf() {
    delete[] books;
}
template <typename T>
Book BookShelf<T>::get_book_at(int index) {
    return books[index];
}
template <typename T>
void BookShelf<T>::append_book(Book book) {
    books[last] = book;
    last++;
}
template <typename T>
int BookShelf<T>::get_len() {
    return last;
}
template <typename T>
Iterator<T>* BookShelf<T>::iterator() {
    return new BookShelfIterator<T>(this);
}

template BookShelf<Book>::BookShelf(int maxsize);
template BookShelf<Book>::~BookShelf();
template Book BookShelf<Book>::get_book_at(int index);
template void BookShelf<Book>::append_book(Book book);
template int BookShelf<Book>::get_len();
template Iterator<Book>* BookShelf<Book>::iterator();