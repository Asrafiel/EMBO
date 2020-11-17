/*
 * CTU/PillScope project
 * Author: Jakub Parez <parez.jakub@gmail.com>
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>

#define ASSERT(expr) \
  do {                                          \
    if (!(expr)) {                              \
      assert2(__FILE__, __LINE__);            \
    }                                           \
  } while (0)

void assert2(const char *file, uint32_t line);

void get_avg_from_circ(int last_idx, int ch_num, int avg_num, uint16_t* buff, float* v1, float* v2, float* v3, float* v4, float* v5);
int get_vcc_from_circ(int from, int total, int ch_num, int daq_bits, void* buff);
int get_1ch_from_circ(int from, int total, int ch, int ch_num, int daq_bits, float vcc, float vref_cal, void* buff, uint8_t* out, int* idx);
int get_last_circ_idx(int pos, int len);

float get_freq(int* prescaler, int* reload, int max_reload, int freq_osc, int freq_want);

void busy_wait(int us);
void itoa_fast(char* s, int num, int radix);
void sprint_fast(char* s, const char* format, float fVal, int prec);

#endif /* UTILS_H */