/*
 * queue.c
 *
 *  Created on: 2 Mar 2022
 *      Author: abdo
 */
#include "queue.h"

int head;
int tail;
int queue[QUEUE_MAX_SIZE];

void queue_init() {
	head = 0;
	tail = 0;
}

int queue_put(int v) {
	if (tail + 1 == head) return 0;
	queue[tail++] = v;
	tail %= QUEUE_MAX_SIZE;
	return 1;
}

int queue_get(int *v) {
	if (head == tail) return 0;
	*v = queue[head++];
	head %= QUEUE_MAX_SIZE;
	return 1;
}

int queue_empty() { return head == tail; }