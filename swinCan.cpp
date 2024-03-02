#include "swinCan.h"

void heartbeat(int id, MCP_CAN canObj) {
    unsigned char buf = 0x0;
    canObj.sendMsgBuffer(id, 0, 1, buf);
}
