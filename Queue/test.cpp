#include <iostream>
#include "test.hpp"

struct A{
    int x;
    int y;
    int z;
};

void circularQueue_enqueue_test()
{
    CircularQueue<int> queue_1;
    CircularQueue<A> queue_2;
    A a1;
    a1.x = 1;
    a1.y = 1;
    a1.z = 1;
    A a2;
    a2.x = 2;
    a2.y = 2;
    a2.z = 2;
    queue_1.enqueue(1);
    queue_1.enqueue(2);
    queue_1.enqueue(3);
    queue_2.enqueue(a1);
    queue_2.enqueue(a2);
}