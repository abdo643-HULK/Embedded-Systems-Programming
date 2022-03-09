#include <assert.h>
#include "queue.hpp"

int main() {
	Queue<int, 3> q;
	int v;
	assert(q.empty());
	q.put(1);
	q.put(2);
	assert(!q.empty());
	assert(q.get(v) && v == 1);
	assert(!q.empty());
	assert(q.get(v) && v == 2);
	assert(q.empty());

	assert(q.put(5));
	assert(q.put(9));
	assert(!q.put(10));
	assert(!q.empty());
	assert(q.get(v) && v == 5);

	return 0;
}
