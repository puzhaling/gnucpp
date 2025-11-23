#if defined __has_attribute
#  if __has_attribute (nonnull)
#    define NONNULL_ATTR __attribute__ ((nonnull))
#  endif
#endif

NONNULL_ATTR
