#include <assert.h>
#include "queue.h"

/**
 * main.c
 */
void main(void) {
	int v;
	queue_init();

	assert(queue_empty());
	assert(queue_put(1));
	assert(queue_put(2));
	assert(!queue_empty());
	assert(queue_get(&v) && v == 1);
	assert(queue_get(&v) && v == 2);
	assert(queue_empty());
}
