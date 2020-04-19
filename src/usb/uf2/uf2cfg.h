#include "boards.h"

#define UF2_NUM_BLOCKS     10000   // at least 4,1 MB for FAT16

#ifndef UF2_VOLUME_LABEL
#define UF2_VOLUME_LABEL   "NRF52BOOT  "
#endif

#define FLASH_SIZE         (USER_FLASH_END-USER_FLASH_START) // Max flash size

#define USER_FLASH_START   0x1000

#define USER_FLASH_END     0xF4000

#define FLASH_PAGE_SIZE    4096

#define UF2_FAMILY_ID      0xADA52840
