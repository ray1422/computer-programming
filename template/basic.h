#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "color.h"

#ifdef DEBUG
#define debug(...)                                                             \
    do {                                                                       \
        fprintf(stderr, CLR_GRN __FILE__ CLR_YLW":%d " CLR_RST, __LINE__); \
        fprintf(stderr, __VA_ARGS__);                                          \
    } while (0)
#else
#define debug(...) (void)0
#endif

typedef uint8_t byte;
typedef int32_t i32;
typedef int64_t i64;
typedef uint64_t u64;
typedef uint32_t u32;
typedef double fp;

void err(const char *s);

size_t fgets_n(char *s, int size, FILE *stream);