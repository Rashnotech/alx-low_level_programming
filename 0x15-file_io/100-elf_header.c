#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>
/**
 *
 */
void display_elf_header(Elf64_Ehdr *elf_header);
int main(int argc, char *argv[])
{
	FILE *file;
	size_t read_size;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_head elf_filenamen\n");
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
	display_elf_header(&elf_header);
	fclose(file);
	return (0);
}
void display_elf_header(Elf64_Ehdr *elf_header)
{
	printf("ELF Header:\n");
	printf("Magic: %x\n", elf_header->e_ident[EI_MAG2]);
	printf("Class: %d\n", elf_header->e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header->e_ident[EI_DATA]);
	printf("Version: %u\n", elf_header->e_version);
	printf("ABI Version");
	printf("Type: %u\n", elf_header->e_type);
	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}
