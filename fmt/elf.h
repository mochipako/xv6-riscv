0800 // Format of an ELF executable file
0801 
0802 #define ELF_MAGIC 0x464C457FU  // "\x7FELF" in little endian
0803 
0804 // File header
0805 struct elfhdr {
0806   uint magic;  // must equal ELF_MAGIC
0807   uchar elf[12];
0808   ushort type;
0809   ushort machine;
0810   uint version;
0811   uint entry;
0812   uint phoff;
0813   uint shoff;
0814   uint flags;
0815   ushort ehsize;
0816   ushort phentsize;
0817   ushort phnum;
0818   ushort shentsize;
0819   ushort shnum;
0820   ushort shstrndx;
0821 };
0822 
0823 // Program section header
0824 struct proghdr {
0825   uint type;
0826   uint off;
0827   uint vaddr;
0828   uint paddr;
0829   uint filesz;
0830   uint memsz;
0831   uint flags;
0832   uint align;
0833 };
0834 
0835 // Values for Proghdr type
0836 #define ELF_PROG_LOAD           1
0837 
0838 // Flag bits for Proghdr flags
0839 #define ELF_PROG_FLAG_EXEC      1
0840 #define ELF_PROG_FLAG_WRITE     2
0841 #define ELF_PROG_FLAG_READ      4
0842 
0843 
0844 
0845 
0846 
0847 
0848 
0849 
