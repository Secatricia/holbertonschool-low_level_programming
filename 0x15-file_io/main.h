#ifndef MAIN_H
#define MAIN_h
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*main_h*/