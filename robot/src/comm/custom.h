#ifndef CUSTOM_H
#define CUSTOM_H

typedef enum CUSTOM_MAV_TYPE
{
	MAV_TYPE_RBMT=0, /* | */
} CUSTOM_MAV_TYPE;

typedef enum CUSTOM_MAV_COMPONENT
{
	MAV_COMP_ID_ARDUINO_MASTER=110, /*  | */
	MAV_COMP_ID_ARDUINO_SLAVE1=111, /*  | */
	MAV_COMP_ID_ARDUINO_SLAVE2=112, /*  | */
	MAV_COMP_ID_ARDUINO_SLAVE3=113, /*  | */
} CUSTOM_MAV_COMPONENT;

#endif