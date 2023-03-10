/* Automatically generated header (sfdc 1.11e)! Do not edit! */

#ifndef _INLINE_OPENPCI_H
#define _INLINE_OPENPCI_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef OPENPCI_BASE_NAME
#define OPENPCI_BASE_NAME OpenPciBase
#endif /* !OPENPCI_BASE_NAME */

#define pci_bus() \
      LP0(0x1e, unsigned short, pci_bus ,\
      , OPENPCI_BASE_NAME)

#define pci_inb(___address) \
      LP1(0x24, unsigned char, pci_inb , unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_outb(___value, ___address) \
      LP2NR(0x2a, pci_outb , unsigned char, ___value, d0, unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_inw(___address) \
      LP1(0x30, unsigned short, pci_inw , unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_outw(___value, ___address) \
      LP2NR(0x36, pci_outw , unsigned short, ___value, d0, unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_inl(___address) \
      LP1(0x3c, unsigned long, pci_inl , unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_outl(___value, ___address) \
      LP2NR(0x42, pci_outl , unsigned long, ___value, d0, unsigned long, ___address, a0,\
      , OPENPCI_BASE_NAME)

#define pci_to_hostcpy(___pcimemsrc, ___memdest, ___packetsize) \
      LP3NR(0x48, pci_to_hostcpy , void *, ___pcimemsrc, a0, void *, ___memdest, a1, unsigned long, ___packetsize, d0,\
      , OPENPCI_BASE_NAME)

#define host_to_pcicpy(___memsrc, ___pcimemdest, ___packetsize) \
      LP3NR(0x4e, host_to_pcicpy , void *, ___memsrc, a0, void *, ___pcimemdest, a1, unsigned long, ___packetsize, d0,\
      , OPENPCI_BASE_NAME)

#define pci_to_pcicpy(___pcimemsrc, ___pcimemdest, ___packetsize) \
      LP3NR(0x54, pci_to_pcicpy , void *, ___pcimemsrc, a0, void *, ___pcimemdest, a1, unsigned long, ___packetsize, d0,\
      , OPENPCI_BASE_NAME)

#define pci_find_device(___vendor, ___device, ___pcidev) \
      LP3(0x5a, struct pci_dev *, pci_find_device , unsigned short, ___vendor, d0, unsigned short, ___device, d1, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_find_class(___class, ___pcidev) \
      LP2(0x60, struct pci_dev *, pci_find_class , unsigned long, ___class, d0, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_find_slot(___bus, ___devfn) \
      LP2(0x66, struct pci_dev *, pci_find_slot , unsigned char, ___bus, d0, unsigned long, ___devfn, d1,\
      , OPENPCI_BASE_NAME)

#define pci_read_config_byte(___registernum, ___pcidev) \
      LP2(0x6c, unsigned char, pci_read_config_byte , unsigned char, ___registernum, d0, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_read_config_word(___registernum, ___pcidev) \
      LP2(0x72, unsigned short, pci_read_config_word , unsigned char, ___registernum, d0, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_read_config_long(___registernum, ___pcidev) \
      LP2(0x78, unsigned long, pci_read_config_long , unsigned char, ___registernum, d0, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_write_config_byte(___registernum, ___val, ___pcidev) \
      LP3NR(0x7e, pci_write_config_byte , unsigned char, ___registernum, d0, unsigned char, ___val, d1, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_write_config_word(___registernum, ___val, ___pcidev) \
      LP3NR(0x84, pci_write_config_word , unsigned char, ___registernum, d0, unsigned short, ___val, d1, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_write_config_long(___registernum, ___val, ___pcidev) \
      LP3NR(0x8a, pci_write_config_long , unsigned char, ___registernum, d0, unsigned long, ___val, d1, struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_set_master(___pcidev) \
      LP1(0x90, BOOL, pci_set_master , struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_add_intserver(___PciInterrupt, ___pcidev) \
      LP2(0x96, BOOL, pci_add_intserver , struct Interrupt *, ___PciInterrupt, a0, struct pci_dev *, ___pcidev, a1,\
      , OPENPCI_BASE_NAME)

#define pci_rem_intserver(___PciInterrupt, ___pcidev) \
      LP2NR(0x9c, pci_rem_intserver , struct Interrupt *, ___PciInterrupt, a0, struct pci_dev *, ___pcidev, a1,\
      , OPENPCI_BASE_NAME)

#define pci_allocdma_mem(___size, ___flags) \
      LP2(0xa2, APTR, pci_allocdma_mem , unsigned long, ___size, d0, unsigned long, ___flags, d1,\
      , OPENPCI_BASE_NAME)

#define pci_freedma_mem(___buffer, ___size) \
      LP2NR(0xa8, pci_freedma_mem , APTR, ___buffer, a0, unsigned long, ___size, d0,\
      , OPENPCI_BASE_NAME)

#define pci_logic_to_physic_addr(___PciLogicalAddr, ___pcidev) \
      LP2(0xae, APTR, pci_logic_to_physic_addr , APTR, ___PciLogicalAddr, a0, struct pci_dev *, ___pcidev, a1,\
      , OPENPCI_BASE_NAME)

#define pci_physic_to_logic_addr(___PciPhysicalAddr, ___pcidev) \
      LP2(0xb4, APTR, pci_physic_to_logic_addr , APTR, ___PciPhysicalAddr, a0, struct pci_dev *, ___pcidev, a1,\
      , OPENPCI_BASE_NAME)

#define pci_obtain_card(___pcidev) \
      LP1(0xba, BOOL, pci_obtain_card , struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#define pci_release_card(___pcidev) \
      LP1NR(0xc0, pci_release_card , struct pci_dev *, ___pcidev, a0,\
      , OPENPCI_BASE_NAME)

#endif /* !_INLINE_OPENPCI_H */
