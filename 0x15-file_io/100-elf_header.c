#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR_EXIT_CODE 98

/**
* print_elf_header - Display the ELF header information.
* @header: Pointer to the ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *header) {
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) {
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ELF%d\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "unknown");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
* main - Entry point for the ELF header analysis program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
* Return: 0 on success, non-zero on failure.
*/
int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return ERROR_EXIT_CODE;
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
perror("open");
return ERROR_EXIT_CODE;
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header)) {
perror("read");
close(fd);
return ERROR_EXIT_CODE;
}

if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return ERROR_EXIT_CODE;
}

print_elf_header(&header);

close(fd);
return 0;
}
