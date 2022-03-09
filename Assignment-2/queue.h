/*
 * queue.c
 *
 *  Created on: 2 Mar 2022
 *      Author: abdo
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#define QUEUE_MAX_SIZE 16
void queue_init();
int queue_put(int v);
int queue_get(int *v);
int queue_empty();

#endif