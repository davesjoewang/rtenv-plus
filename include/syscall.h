#include <stddef.h>

#define PRIO_PROCESS    0
#define PRIO_PGRP       1
#define PRIO_USER       2


void *activate(void *stack);

int fork();
int getpid();

int write(int fd, const void *buf, size_t count);
int read(int fd, void *buf, size_t count);

void interrupt_wait(int intr);

int getpriority(int which, int who);
int setpriority(int which, int who, int prio);

int mknod(int fd, int mode, int dev);

void sleep(unsigned int);

void lseek(int fd, int offset, int whence);
