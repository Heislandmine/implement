#pragma once
#include"book.hpp"
#include"aggregate.hpp"
template <typename T>
class BookShelf : public Aggregate<T> {
    public:
        BookShelf(int maxsize);
        ~BookShelf();
        Book get_book_at(int index);
        void append_book(Book book);
        int get_len();
        Iterator<T>* iterator() override;
    private:
        Book *books;
        int last;
};