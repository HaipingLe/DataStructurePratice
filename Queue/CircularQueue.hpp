#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <iostream>
#include "IQueue.hpp"

const int DefaultCapacity = 20;

template<typename T>
class CircularQueue: public IQueue<T> {
public:
    /*!
     * @brief constructor
    */
    CircularQueue(int capacity = DefaultCapacity): capacity_(capacity), length_(0), front_(0), rear_(0)
    {
        data_array_ = new T[capacity_];
        if (!data_array_) {
            throw std::bad_alloc();
        }
    }

    /*!
     * @brief destructor
    */
    virtual ~CircularQueue() { delete[] data_array_; }
    
    virtual bool enqueue(const T& data);
    virtual bool dequeue(T& data);
    virtual bool front(T& data) const;
    virtual bool isEmpty() const;
    virtual int getLength() const;

    bool isFull() const;
    void printQueue();

private:
    T*  data_array_;
    int capacity_;
    int length_;
    int front_;
    int rear_;
};
#endif