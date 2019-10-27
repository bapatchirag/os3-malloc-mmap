#define _MAP_MANAGEMENT_H 1

struct allocmem{
    void* ptr;
    size_t size;
    struct allocmem* next;
};

struct allocmem *newAllocMem();

void* smalloc(size_t size);

void sfree(void* ptr);

void spurge();