/////////////////////////////////////////////////////////////////////////////////////////////////
/// @file IQueue.hpp
///
/// @author Haiping LE lehaiping@126.com
///
/// @brief Header file for IQueue.hpp
/// Iqueue is an abstract template class for queue.
///
/// Copyright (c) 2019 XXX
/// All rights reserved
////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef IQUEUE_H
#define IQUEUE_H

template<typename T>
class IQueue {
public:
    virtual ~IQueue() {std::cout << "~IQueue() is called." << std::endl;};

	/*!
	 * @brief the operation of enqueue
	 * @param data to be enqueued
	 * @return true if enqueue successfully
	 */
	virtual bool enqueue(const T& data) = 0;

	/*!
	 * @brief the operation of dequeue
	 * @param data to be used to save the front
	 * @return true if dequeue successfully
	 */
	virtual bool dequeue(T& data) = 0;

	/*!
	 * @brief visit the front of the queue
	 * @param data to be used to save the font data of the queue
	 * @return true if the operation is successful
	 */
	virtual bool front(T& data) const = 0;

	/*!
	 * @brief if the queue is empty
	 * @return true if the queue is empty and false othersiwe
	 */
	virtual bool isEmpty() const = 0;

	/*!
	 * @brief to get the length of the queue
	 * @return the length of the queue
	 */
	virtual int getLength() const = 0;
};

#endif