#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Main.h"

int main(int argc, char *argv[])
{
	// Test to validate of file num from input command.
	if (argc != 14) {
		printf("Error: incorrect number of input files - 14 required\nExiting.");
		exit(1);
	}
	FILE *file_imemin = NULL, *file_dmemin = NULL, *file_diskin = NULL, *file_irq2in = NULL, *file_dmemout = NULL, *file_regout = NULL, 
		*file_trace = NULL,		*file_hwregtrace = NULL, *file_cycles = NULL, *file_leds = NULL, *file_display7seg = NULL, 
		*file_diskout = NULL, *file_monitor_txt = NULL, *file_monitor_yuv = NULL;
		read_file(file_hwregtrace, argv[HWREGTRACE], HWREGTRACEC);
		read_file(file_trace, argv[CYCLES], CYCLESC);
		read_file(file_leds, argv[LEDS], LEDSC);
		read_file(file_cycles, argv[CYCLESC], CYCLES);
		read_file(file_dmemout, argv[DMEMOUT], DMEMOUTC);
		read_file(file_regout, argv[REGOUTC], REGOUT);
		read_file(file_display7seg, argv[DISPLAY7SEG], DISPLAY7SEGC);
		read_file(file_diskout, argv[DISKOUTC], DISKOUT);
		read_file(file_monitor_txt, argv[MONITORC], MONITOR);
		read_file(file_monitor_yuv, argv[MONITOR_YUV], MONITOR_YUVC);
		read_file(file_irq2in, argv[IRQ2INC], IRQ2IN);
		read_file(file_diskin, argv[DISKIN], DISKINC);
		read_file(file_dmemin, argv[DMEMIN], DMEMINC);
		read_file(file_imemin, argv[IMEMIN], IMEMINC);
}	

int read_file(FILE *fpointer,  char chmod, char filename[])
{
	fpointer = fopen(filename, chmod);
	if (fpointer == NULL)
	{
		printf("Error: reading file %s was problematic.",filename);
		return 1;
	}
}
