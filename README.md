# os3-malloc-mmap

Implement malloc and calloc using mmap and munmap system calls

Yes, It tracks whatever has been allocated.
The search uses O(n) linear search, similar to insertion and deletion.

## Running

Include in project. Please add `-lrt`.
Included `main.c` is an example program demonstrating the functions

Compiling the example:

```c
gcc -g -I include src/mapmanagement.c main.c -o main.out -lrc
./main.out
```

## Functions

### mymalloc

`void* mymalloc(size_t size)`

### mycalloc

`void* mycalloc(size_t size, int nmemb)`

Sets the data values to zero, mandatorily

### myfree

`void myfree(void* ptr)`

Only mymalloc-ed or mycalloc-ed variables are freed.
This way, there is no:

1. Double frees
2. freeing null
3. freeing random locations

### mypurge

`void mypurge()`

Clean all allocated memory.
Implemented because it was possible.
