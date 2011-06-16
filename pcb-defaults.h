//
// Default values for generating gcode from a PCB.
//
// These settings were last changed with pcb-gcode-setup: 6/15/11 8:00 PM
//
//
// Changes you make in this file will be overwritten if you use pcb-gcode-setup.
//

real DEFAULT_ISOLATE = 0.000100;
real ISO_MAX = 0.010000;
real ISO_STEP = 0.005000;

int GENERATE_TOP_OUTLINES = NO;
int GENERATE_TOP_DRILL = NO;
int GENERATE_TOP_FILL = NO;

int GENERATE_BOTTOM_OUTLINES = YES;
int GENERATE_BOTTOM_DRILL = YES;
int GENERATE_BOTTOM_FILL = NO;

int GENERATE_MILLING = YES;

int DO_TOOL_CHANGE_WITH_ZERO_STEP = NO;

int FLIP_BOARD_IN_Y = NO;

//int OUTPUT_UNITS = OUTPUT_MICRONS;
//int OUTPUT_UNITS = OUTPUT_MILLIMETERS;
//int OUTPUT_UNITS = OUTPUT_MILS;
int OUTPUT_UNITS = OUTPUT_INCHES;
