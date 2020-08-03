#include"bookshelfiterator.hpp"
template <typename T>
BookShelfIterator<T>::BookShelfIterator(BookShelf<T> *bookshelf) {
    this->bookshelf = bookshelf;
    index = 0;
}
template <typename T>
bool BookShelfIterator<T>::hasNext() {
    if (index < bookshelf->get_len()) {
        return true;
    } else {
        return false;
    }
}

template <typename T>
T BookShelfIterator<T>::next() {
    Book book = bookshelf->get_book_at(index);
    index++;
    return book;
}

template BookShelfIterator<Book>::BookShelfIterator(BookShelf<Book> *bookshelf);
template bool BookShelfIterator<Book>::hasNext();
template Book BookShelfIterator<Book>::next();