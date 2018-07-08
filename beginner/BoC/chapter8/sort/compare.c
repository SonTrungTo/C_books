#include "sort.h"

int compare_fractional_part(const void *vp, const void *vq) {
  const float *p = vp;
  const float *q = vq;
  float       diff = fractional_part(*p) - fractional_part(*q);

  return ((diff >= 0) ? (diff > 0 ? 1 : 0) : -1);
}

int lexico(const void *vp, const void *vq) {
  const char   *p = vp, *q = vq;
  return (*p - *q);
}
