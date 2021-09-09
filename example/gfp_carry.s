    .text
    .balign 4
    .global gfp_carry
# size_t strlen(uint64_t *p2, uint64_t *a, uint64_t head)
# a0 holds *p2
# a1 holds *a
# a2 holds head


gfp_carry:
  mv a3, a0
