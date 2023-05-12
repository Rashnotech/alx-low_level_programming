#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
void print_error(char *message, char *file, int code);
void display_class(unsigned char *class);
void display_version(unsigned char *version);
void display_magic(unsigned char *magic);
void display_entry(unsigned long int entry, unsigned char *x_ident);
void is_elf_file(unsigned char *x_ident);
void display_data(unsigned char *x_ident);
void display_type(unsigned int type, unsigned char *x_ident);
void display_abi(unsigned char *x_ident);
void display_osabi(unsigned char *x_ident);
/**
 * main - display the information contained in elf file
 * @argc: argument counter
 * @argv: argument vector
 * 
 * Return: an integer value 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *elf_header;
	int fd, nread, retval;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't open file", argv[1], 98);
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (!elf_header)
	{
		close(fd);
		print_error("Error: Can't read file", argv[1], 98);
	}
	nread = read(fd, elf_header, sizeof(Elf64_Ehdr));
	if (nread == -1)
	{
		free(elf_header);
		close(fd);
		print_error("Error: `%s`: No such file\n", argv[1], 98);
	}
	is_elf_file(elf_header->e_ident);
	display_magic(elf_header->e_ident);
	display_class(elf_header->e_ident);
	display_data(elf_header->e_ident);
	display_version(elf_header->e_ident);
	display_osabi(elf_header->e_ident);
	display_abi(elf_header->e_ident);
	display_type(elf_header->e_type, elf_header->e_ident);
	display_entry(elf_header->e_entry, elf_header->e_ident);
	free(elf_header);
	retval = close(fd);
	if (retval == -1)
		print_error("Error: Can't close file", "", 98);
	return (0);
}

/**
 * is_elf_file - check if it's an elf file
 * @x_ident: magic numbers
 */
void is_elf_file(unsigned char *x_ident)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (x_ident[i] != 0x7F && x_ident[i] != 'E'
			&& x_ident[i] != 'L' && x_ident[i] != 'F')
				print_error("Error: Not an Elf file\n", " ", 98);
	}
}

/**
 * display_class - display ELF Header class
 * @class: ELF class pointer
 */
void display_class(unsigned char *class)
{
	printf(" Class:			");
	switch (class[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}

/**
 * print_error - print error message
 * @file: file name
 * @code: exit code
 */
void print_error(char *message, char *file, int code)
{
	(void)file;
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}

/**
 * display_version - display ELF Header version
 * @version: ELF version pointer
 */
void display_version(unsigned char *version)
{
	printf(" Version:		%d", version[EI_VERSION]);
	switch (version[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			putchar(10);
			break;
	}
}

/**
 * display_magic - display elf Header magic number
 * @magic: a pointer to ELF magic numbers
 */
void display_magic(unsigned char *magic)
{
	int i = 0;

	printf("ELF Header:\n");
	printf(" Magic:	");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", magic[i]);
		if (i == EI_NIDENT - 1)
			putchar(10);
		else
			printf(" ");
	}
}

/**
 * display_entry - ELF Header to print entry
 * @entry: ELF entry pointer
 * @x_ident: ELF class pointer
 */
void display_entry(unsigned long int entry, unsigned char *x_ident)
{
	printf(" Entry point address:		");
	if (x_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) | 0xFF00FF00) | ((entry >> 8)
				& 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (x_ident[EI_CLASS] == ELFCLASS32)
		printf("0x%08x\n", (unsigned int)entry);
	else if (x_ident[EI_CLASS] == ELFCLASS64)
		printf("0x%016lx\n", entry);
	else
		printf("Unknown ELF class\n");
}

/**
 * display_abi - display ABI VERSION of ELF Header
 * @x_ident: ELF ABI version pointer
 */
void display_abi(unsigned char *x_ident)
{
	printf(" ABI Version:		%d\n", x_ident[EI_ABIVERSION]);
}

/**
 * display_osabi - ELF Header of an OS/ABI
 * @x_ident: ELF version pointer
 */
void display_osabi(unsigned char *x_ident)
{
	printf(" OS/ABI:		");
	switch (x_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", x_ident[EI_OSABI]);
			break;
	}
}

/**
 * display_type - display ELF Header types
 * @type: ELF Header type
 * @x_ident: ELF class pointer
 */
void display_type(unsigned int type, unsigned char *x_ident)
{
	if (x_ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf(" Types:			");
	switch (type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
			break;
	}
}

/**
 * display_data - ELF Header data display
 * @x_ident: ELF class pointer
 */
void display_data(unsigned char *x_ident)
{
	printf(" Data:			");
	switch (x_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		default:
			printf("<unknown: %x>\n", x_ident[EI_CLASS]);
	}
}
