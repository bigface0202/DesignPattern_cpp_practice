/**
 * @file answer.cpp
 * 
 * Iteratorパターン
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// イテレータ
class Iterator {
public:
  /* 次の要素が存在するか？ */
  virtual bool hasNext() = 0;
  /* 次の要素 */
  virtual void* next() = 0;
  virtual ~Iterator() {}
};

// 集合体
class Aggregate {
public:
  virtual std::unique_ptr<Iterator> GetIterator() = 0;
  virtual ~Aggregate() {}
};

// 本
class Book {
private:
  std::string name;

public:
  /* コンストラクタ */
  Book (std::string name)
  : name(name) {}
  /* 本の名前を返す */
  std::string getBookName () {
    return this->name;
  }
};

// 本棚（集合）
class BookShelf : public Aggregate {
private:
  std::vector<Book> books;
  int last = 0;

public:
  /* コンストラクタ */
  BookShelf (int maxSize) {
    books.resize(maxSize);
  }
  /* 本を取得 */
  Book* getBookAt (const int index) {
    return &(this->books[index]);
  }
  /* 本を追加 */
  void appendBook (Book book) {
    this->books[last] = book;
    last++;
  }
  /* 大きさを取得 */
  int getLength () {
    return last;
  }
  /* イテレータ */
  std::unique_ptr<Iterator> GetIterator() override;
};

// 本棚のイテレータ
class BookShelfIterator : public Iterator {
private:
  BookShelf bookShelf;
  int index;

public:
  /* コンストラクタ */
  BookShelfIterator(const BookShelf bookShelf)
  : bookShelf(bookShelf), index(0) {} 
  /* 次があるか？ */
  bool hasNext() override {
    if (index < bookShelf.getLength()) {
      return true;
    } else {
      return false;
    }
  }
  /* 次の本 */
  void* next() override {
    // 現在のindexのbookを取得
    Book *book = bookShelf.getBookAt(index);
    // 次にindexを進める
    index++;
    return book;
  }

};

std::unique_ptr<Iterator> BookShelf::GetIterator() {
  return std::unique_ptr<BookShelfIterator>(new BookShelfIterator(*this));
}

int main( int argc, char *argv[] )
{
    
}