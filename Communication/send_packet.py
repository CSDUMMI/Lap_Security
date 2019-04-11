import serial,glob,sys

def get_packet(id,type,payload):
	"""
	get_packet:
	Arguments:
		id: Byte with the ID of the sender, 1 bytes
		type: TYPE of the Packet, 1 bytes
		payload: PAYLOAD of the Packet, SIZE bytes
	
	Returns:
		A packet as bytes, with everything in the right place
	"""
	size = bytes(len(payload))[:-4] #Only 4B SIZE valid
	
