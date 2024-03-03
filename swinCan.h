#ifndef SWIN_CAN_H_
#define SWIN_CAN_H_
#include <mcp_can.h>
#include "Arduino.h"


enum NodeClass {
	cube = 0x000,
    power_supply = 0x100,
	motor_driver = 0x200,
	arm = 0x300
};

enum cmd_type {
	heart_beat = 0x01,
	drive_motor = 0x024,
	set_relay = 0x03,
	set_arm = 0x04
};

enum ArmClass {
    slew = 0x1,
    seg1Pitch = 0x2,
    seg2Pitch = 0x3,
    wristPitch = 0x4,
    wristRoll = 0x5,
    gripper = 0x6
};

void heartbeat(int id, MCP_CAN canObj);

#endif // SWINCAN_H_
