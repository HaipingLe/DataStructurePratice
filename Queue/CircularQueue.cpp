#include "CircularQueue.hpp"

// The declaration is very important!!!
// refer to https://zhuanlan.zhihu.com/p/147623943
// template class CircularQueue<int>;
// template class CircularQueue<double>;
// template class CircularQueue<float>;
// template class CircularQueue<std::string>;


template<typename T>
bool CircularQueue<T>::enqueue(const T& data)
{
    if (isFull())
    {
        std::cout << "Queue is full now." << std::endl;
        return false;
    }
    // save data
    data_array_[rear_] = data;
    // update rear_
    rear_ = (rear_ + 1) % capacity_;
    // update length_
    length_ ++;
    return true;
}

template<typename T>
bool CircularQueue<T>::dequeue(T& data)
{
    if (isEmpty())
    {
        std::cout << "Queue is empty!" << std::endl;
        return false;
    }
    // get the first item of the queue.
    data = data_array_[front_];
    //update the front
    front_ = (front_ + 1) % capacity_;
    //update length_
    length_ --;
    return true;
}

template<typename T>
bool CircularQueue<T>::front(T& data) const
{
    data = data_array_[front_];
    return true;
}

template<typename T>
int CircularQueue<T>::getLength() const
{
    return length_;
}

template<typename T>
bool CircularQueue<T>::isEmpty() const
{
    if (front_ == rear_)
    {
        return true;
    } else {
        return false;
    }
}

template<typename T>
bool CircularQueue<T>::isFull() const
{
    // return length_ == capacity_ - 1;
    // refer to https://zhuanlan.zhihu.com/p/266955673

    return (rear_ + 1) % capacity_ == front_;
}

template<typename T>
void CircularQueue<T>::printQueue()
{

}