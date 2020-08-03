#pragma once
#include"iterator.hpp"
#include"book.hpp"
#include"bookshelf.hpp"
template <typename T>
class BookShelfIterator : public Iterator<T> {

private:
    BookShelf<T> *bookshelf;
    int index;
public:
    BookShelfIterator(BookShelf<T> *bookshelf);
    bool hasNext() override;
    T next() override;
};