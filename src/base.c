/*
 ============================================================================
 Name        : base.c
 Author      : Roger
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <os.h>

int main(void)
{
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	// Start OS
	os_setup();

	// find sensors
	i2c_scan();

	// Find motors

	// test motors

	// get location

	// get waypoints

	// start loop waypoints

	// set high
	// set dir
	// check status
    // check update

	// end loop

	// Check home

	return EXIT_SUCCESS;
}
