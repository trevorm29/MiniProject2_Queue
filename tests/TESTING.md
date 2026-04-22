# TESTING

## Test 1: Enqueue

Enqueue 10 values (capacity is 10). On the 11th enqueue error.

Enqueue 1 through 10 -> all succeed
Enqueue 11           -> Error: Queue is full

Expected: Queue accepts 10 items, rejects the 11th.

---

## Test 2: Dequeue

Start with 3 items. Dequeue them then do another dequeue.

Dequeue -> 5
Dequeue -> 10
Dequeue -> 15
Dequeue -> Error: Queue is empty

Expected: Items returned in FIFO order error on empty dequeue.

---

## Test 3: Wrap-Around (Circular Indexing)

Enqueue 10 items to fill the array. Dequeue 3 items (head moves forward). Enqueue 3 new items.
The tail wraps around to indices 0, 1, 2 in the underlying array.

Enqueue 1-10       -> queue full, tail at index 0
Dequeue x3         -> removes 1, 2, 3; head now at index 3
Enqueue 99, 88, 77 -> tail wraps: stored at indices 0, 1, 2
Print queue        -> [ 4, 5, 6, 7, 8, 9, 10, 99, 88, 77 ]

Expected: Circular indexing works no data corruption.

---

## Test 4: Mixed Operations Sequence

isEmpty()  -> true
Enqueue 7  -> size = 1
Enqueue 14 -> size = 2
front()    -> 7
Dequeue    -> returns 7, size = 1
front()    -> 14
clear()    -> size = 0
isEmpty()  -> true
Dequeue    -> Error: Queue is empty

Expected: No errors clear() fully resets the queue.