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
      while ((--i >= a) && (value.prior > arr[i % size].prior)) {
          arr[(i + 1) % size] = arr[i % size];
      }
      arr[(i+1) % size] = value;
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
