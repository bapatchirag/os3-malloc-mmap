#define _MAP_MANAGEMENT_H 1

struct allocmem{
    void* ptr;
    size_t size;
    struct allocmem* next;
};

struct allocmem *newAllocMem();

void* mymalloc(size_t size);

void* mycalloc(size_t size,int nmemb);

void myfree(void* ptr);

void mypurge();
