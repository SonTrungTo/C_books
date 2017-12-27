#ifdef DEBON
#  define DEBUG(level,ftm,...) \
    if(Debug >= level) \
      fprintf(stderr, ftm, __VA_ARGS__ )
#else
#  define DEBUG(level,ftm,...)
#endif
