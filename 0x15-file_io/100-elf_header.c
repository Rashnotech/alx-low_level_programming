#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>
/**
 * main - display elf header
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: an integer value of 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	FILE *file;
	size_t read_size;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_head elf_filename\n");
		exit(97);
	}
	file = fopen(argv[1], "rb");
	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Failed to open file: %s\n", argv[1]);
		exit(97);
	}
	read_size = fread(&elf_header, sizeof(Elf64_Ehdr), 1, file);
	if (read_size != 1)
	{
		printf("Failed to read ELF header\n");
		fclose(file);
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		printf("Not a valid ELF file\n");
		fclose(file);
		exit(98);
	}
	fclose(file);
	return (0);
}

/**
 * display_elf_header - display elf header
 * @elf_header: an elf pointer
 */
void display_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x\n", elf_header->e_ident[i]);
	printf("  Class:		%s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("  Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI Version:		%d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:			%d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:				");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
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
			printf("<unknown>\n");
			break;
	}
	printf("  Entry point address:		0x%lx\n", elf_header->e_entry);
}
