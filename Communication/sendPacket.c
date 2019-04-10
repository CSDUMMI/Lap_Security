#include <string.h>

typedef unsigned int uint;
typedef unsigned char byte;

/*
byte id:	ID of the sender
byte type:	TYPE of the Packet
uint size:	SIZE of the Packet
byte payload[]:	PAYLOAD of the Packet, payload[size]
byte packet:	Buffer to put the packet into,
		packet[size+6] because id+type+size+payload = 2*1B+4B+size*1B
*/
int getPacket(byte id,byte type,uint size,byte payload[],byte* packet) {
	packet[0] = id;
	packet[1] = type;
	memcpy(&packet[2],&size,4);
	memcpy(&packet[6],payload,size);
	return 0;
}
