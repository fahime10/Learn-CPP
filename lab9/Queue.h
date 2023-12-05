#include <iostream>
using std::cout;
using std::endl;

const int DEFAULT_CAPACITY = 5;

template <class T>
class Queue {
public:
    Queue(T capacity = DEFAULT_CAPACITY) : data_(new T[capacity]), head_(0), tail_(0), capacity_(capacity) {
    }

    ~Queue() {
        delete [] this->data_;
    }

	void insert(const T item) {
        if ((tail_ + 1) % capacity_ == head_) {
            cout << "Queue full!" << endl;
            return;
        }
        data_[tail_] = item;
        tail_ = (tail_ + 1) % capacity_;
    }

	T remove() {
        if (head_ == tail_) {
            cout << "Underflow, do not use the returned value\n";
            return T();
        }
        T x = data_[head_];
        head_ = (head_ + 1) % capacity_;
        return x;
    }

	void printAll() {
        if (head_ <= tail_) {
            for(int i = 0; i < head_; i++) cout << "X ";
            for(int i = head_; i < tail_; i++) cout << data_[i] << " ";
            for(int i = tail_; i < capacity_; i++) cout << "X ";
        }
        else {
            for(int i = 0; i < tail_; i++) cout << data_[i] << " ";
            for(int i = tail_; i < head_; i++) cout << "X ";
            for(int i = head_; i < capacity_; i++) cout << data_[i] << " ";
        }
        cout << endl;
    }

private:
	T* data_;
	int head_; // index to first element
	int tail_; // index to just past the last element
	int capacity_;
};
