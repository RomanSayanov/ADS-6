// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
    T arr[size] = {0};
    int a = 0, b = 0;
 public:
  void push(T value) {
      int c = b;
      while ((--c >= a) && (value.prior > arr[c % size].prior)) {
          arr[(c + 1) % size] = arr[c % size];
      }
      arr[(c+1) % size] = value;
      b++;
  }
  T pop() {
      return arr[(a++) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
