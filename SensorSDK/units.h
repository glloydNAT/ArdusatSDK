#ifndef UNITS_H_
#define UNITS_H_


// Scientific Units
#define DATA_UNIT_NONE	0
#define DATA_UNIT_METERPERSECONDSQUARE	1	// accelerometer
#define DATA_UNIT_RADIANPERSECOND		2	// gyroscope
#define DATA_UNIT_MICROTESLA			3	// magnetometer
#define DATA_UNIT_DEGREESCELSIUS		4	// temperature
#define DATA_UNIT_DEGREESFAHRENHEIT		5	// temperature
#define DATA_UNIT_METERPERSECOND		6	// speed, somehow
#define DATA_UNIT_LUX					7	// luminosity
#define DATA_UNIT_RADIAN				8	// IMU


// schema for these constants is 			0000XXLL XX for type, LL for len-1
#define DATA_CELLTYPE_HEX	0x00
#define DATA_CELLTYPE_HEX8		0x00	//	00000000
#define DATA_CELLTYPE_HEX16		0x01	//	00000001
#define DATA_CELLTYPE_HEX24		0x02	//	00000010
#define DATA_CELLTYPE_HEX32		0x03	//	00000011

#define DATA_CELLTYPE_INT	0x04
#define DATA_CELLTYPE_INT8		0x04	//	00000100
#define DATA_CELLTYPE_INT16		0x05	//	00000101
#define DATA_CELLTYPE_INT24		0x06	//	00000110
#define DATA_CELLTYPE_INT32		0x07	//	00000111

#define DATA_CELLTYPE_UINT	0x08
#define DATA_CELLTYPE_UINT8		0x08	//	00001000
#define DATA_CELLTYPE_UINT16	0x09	//	00001001
#define DATA_CELLTYPE_UINT24	0x0A	//	00001010
#define DATA_CELLTYPE_UINT32	0x0B	//	00001011

//#define DATA_CELLTYPE_STR		0x0D	//	00001101 EXCEPTION TO THE SCHEMA
#define DATA_CELLTYPE_FLOAT		0x0F	//  00001111

// utility constants
#define DATA_CELLTYPE_LONGINT	0x07	// (INT4)
#define DATA_CELLTYPE_SHORTINT	0x05	// (INT2)
#define DATA_CELLTYPE_INTEGER	0x05	// (SHORTINT) (INT2)
#define DATA_CELLTYPE_ULONGINT	0x0B	// (UINT4)
#define DATA_CELLTYPE_USHORTINT	0x09	// (UINT2)
#define DATA_CELLTYPE_BYTE		0x00	// (HEX1)


#endif /* UNITS_H_ */
