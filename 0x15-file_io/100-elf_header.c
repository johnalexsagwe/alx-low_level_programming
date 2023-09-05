#include <elf.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define REVERSE_ENDIAN(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))

/**
* verify_elf - verify the file to check if it is an ELF
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void verify_elf(unsigned char *e_ident)
{
if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
*(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: This file is not a valid ELF\n");
exit(98);
}
}

/**
* print_magic - print the magic number
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_magic(unsigned char *e_ident)
{
int i; /* the index to count the magic bytes */
int limit;

limit = EI_NIDENT - 1;
printf("  Magic:   ");
for (i = 0; i < limit; i++)
printf("%02x ", *(e_ident + i));
printf("%02x\n", *(e_ident + i));
}

/**
* print_class - print the class of the ELF
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
if (e_ident[EI_CLASS] == ELFCLASSNONE)
printf("This class is invalid\n");
else if (e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
* print_data - print the type of data
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
if (e_ident[EI_DATA] == ELFDATANONE)
printf("Unknown data format\n");
else if (e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (e_ident[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
* print_version - print the version of the file
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_version(unsigned char *e_ident)
{
printf("  Version:                           ");
if (e_ident[EI_VERSION] == EV_CURRENT)
printf("%i (current)\n", EV_CURRENT);
else
printf("%i\n", e_ident[EI_VERSION]);
}

/**
* print_osabi - print the OS/ABI
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
printf("UNIX - System V\n");
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
* print_type - print the type
* @e_type: the ELF type
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_type(unsigned int e_type, unsigned char *e_ident)
{
e_ident[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

printf("  Type:                              ");
if (e_type == ET_NONE)
printf("NONE (Unknown type)\n");
else if (e_type == ET_REL)
printf("REL (Relocatable file)\n");
else if (e_type == ET_EXEC)
printf("EXEC (Executable file)\n");
else if (e_type == ET_DYN)
printf("DYN (Shared object file)\n");
else if (e_type == ET_CORE)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", e_type);
}

/**
* print_entry - print the entry point
* @e_entry: the ELF entry point
* @e_ident: the ELF identification bytes
* Returns: No return, it's a void function
*/
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_entry = REVERSE_ENDIAN(e_entry);

printf("  Entry point address:               ");
printf("%#x\n", (unsigned int)e_entry);
}

/**
* main - read an ELF file.
* @argc: the number of arguments
* @argv: the arguments
* Returns: 0 on success
*/
int main(int argc, char *argv[])
{
int fd, bytes_read, close_result;
Elf64_Ehdr *elf_header;

if (argc > 2 || argc < 2)
dprintf(STDERR_FILENO, "Usage: error in the number of arguments\n"), exit(98);
elf_header = malloc(sizeof(Elf64_Ehdr));
if (elf_header == NULL)
dprintf(STDERR_FILENO, "Error: Unable to allocate memory\n

