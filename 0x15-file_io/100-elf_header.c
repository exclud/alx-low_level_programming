#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

/**
 * read_elf_header - Read ELF header from a file descriptor
 * @fd: File descriptor
 * @ehdr: Pointer to ELF header struct
 * Return: 0 if success, 98 if error
 */
int read_elf_header(int fd, Elf64_Ehdr *ehdr)
{
    if (read(fd, ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        fprintf(stderr, "Error: Failed to read ELF header\n");
        return (98);
    }

    if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        return (98);
    }
    return (0);
}

/**
 * print_elf_header - Print the contents of the ELF header
 * @ehdr: Pointer to ELF header struct
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", ehdr->e_ident[i]);
    printf("\n");
    printf("Class: ");
    printf("%s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data: ");
    printf("%s\n", ehdr->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
    printf("Version: %d\n", ehdr->e_ident[EI_VERSION]);
    printf("OS/ABI: ");
    printf("UNIX - System V\n");
    printf("ABI Version: %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("Type: ");
    printf("%s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : "UNKNOWN (Unknown type)");
    printf("Entry point address: 0x%lx\n", ehdr->e_entry);
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 if success, 98 if error
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        fprintf(stderr, "Error: Failed to open file %s\n", argv[1]);
        return (98);
    }

    if (read_elf_header(fd, &ehdr) != 0)
    {
        close(fd);
        return (98);
    }

    print_elf_header(&ehdr);

    close(fd);
    return (0);
}

