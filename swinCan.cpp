#include "swinCan.h"
#include <mcp_can.h>


void heartbeat(int id, MCP_CAN canObj) {
    unsigned char buf = 0x0;
    canObj.sendMsgBuf(id, 0, 1, buf);
}
