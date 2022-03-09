/*
 * queue.c
 *
 *  Created on: 2 Mar 2022
 *      Author: abdo
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stddef.h>
template<class T, size_t size = 16>
class Queue {
  private:
	size_t head;
	size_t tail;
	T buffer[size];
  public:
	Queue() : head(0), tail(0) {}
	bool put(const T &t) {
		if (tail + 1 == head) return false;
		buffer[tail++] = t;
		tail %= size;
		return true;
	}
	bool get(T &t) {
		if (head == tail) return false;
		t = buffer[head++];
		head %= size;
		return true;
	}
	bool empty() { return head == tail; }
};

#endif