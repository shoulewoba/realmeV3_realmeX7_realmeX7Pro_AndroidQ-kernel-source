/////////////////////////////////////////////////////////////////////////////
// File Name	: OIS_head.h
// Function		: Header file
// Rule         : Use TAB 4
// 
// Copyright(c)	Rohm Co.,Ltd. All rights reserved 
// 
/***** ROHM Confidential ***************************************************/
#ifndef OIS_MAIN_H
#define OIS_MAIN_H


#define		ADJ_OK				0
#define		ADJ_ERR				-1

#define		PROG_DL_ERR			-2
#define		COEF_DL_ERR			-3

#define		CURDAT_FIT_ERR		-4
#define		CURDAT_ADJ_ERR		-5
#define		HALOFS_X_ADJ_ERR	-6
#define		HALOFS_Y_ADJ_ERR	-7
#define		PSTXOF_FIT_ERR		-8
#define		PSTYOF_FIT_ERR		-9
#define		PSTXOF_ADJ_ERR		-10
#define		PSTYOF_ADJ_ERR		-11
#define		KGXG_ROUGH_ADJ_ERR	-12
#define		KGYG_ROUGH_ADJ_ERR	-13

#define		GX_OFS_ADJ_ERR		-14
#define		GY_OFS_ADJ_ERR		-15

#define		TAKE_PICTURE_ERR		-20
#define		KGXG_FINE_ADJ_ERR		-21
#define		KGYG_FINE_ADJ_ERR		-22
#define		KGXG_SENSITIVITY_ERR	-23
#define		KGYG_SENSITIVITY_ERR	-24
#define		KGXHG_ADJ_ERR			-25
#define		KGYHG_ADJ_ERR			-26

#define		ACGX_ADJ_OVER_P			-27
#define		ACGY_ADJ_OVER_P			-28
#define		ACGX_ADJ_OVER_N			-29
#define		ACGY_ADJ_OVER_N			-30
#define		ACGX_KGXG_ADJ_ERR		-31
#define		ACGY_KGYG_ADJ_ERR		-32

#define		TMP_X_ADJ_ERR			-33				// RHM_HT 2013/11/25	Added
#define		TMP_Y_ADJ_ERR			-34				// RHM_HT 2013/11/25	Added

#define		MALLOC1_ERR				-51
#define		MALLOC2_ERR				-52
#define		MALLOC3_ERR				-53
#define		MALLOC4_ERR				-54

			// Error for sub-routine
#define		OIS_NO_ERROR					ADJ_OK
#define		OIS_INVALID_PARAMETERS			-100
#define		OIS_FILE_RENAME_ERROR			-101
#define		OIS_FILE_NOT_FOUND				-102
#define		OIS_BITMAP_READ_ERROR			-103
#define		OIS_MATRIX_INV_ERROR			-104
#define		OIS_SC2_XLIMIT_OVER				-105
#define		OIS_CHART_ARRAY_OVER			-106
#define		OIS_DC_GAIN_SENS_OVER			-107

#define		OIS_MALLOC1_ERROR				-111
#define		OIS_MALLOC2_ERROR				-112
#define		OIS_MALLOC3_ERROR				-113
#define		OIS_MALLOC4_ERROR				-114
#define		OIS_MALLOC5_ERROR				-115
#define		OIS_MALLOC6_ERROR				-116
#define		OIS_MALLOC7_ERROR				-117
#define		OIS_MALLOC8_ERROR				-118
#define		OIS_MALLOC9_ERROR				-119
#define		OIS_MALLOC10_ERROR				-120
#define		OIS_MALLOC11_ERROR				-121
#define		OIS_MALLOC12_ERROR				-122
#define		OIS_MALLOC13_ERROR				-123
#define		OIS_MALLOC14_ERROR				-124	// RHM_HT 2013/11/25	add
	
typedef		short int					ADJ_STS;

typedef		char						OIS_BYTE;
typedef		short int					OIS_WORD;
typedef		long int					OIS_LONG;
typedef		unsigned char				OIS_UBYTE;
typedef		unsigned short int			OIS_UWORD;
typedef		unsigned long int			OIS_ULONG;

typedef		volatile char				OIS_vBYTE;
typedef		volatile short int			OIS_vWORD;
typedef		volatile long int			OIS_vLONG;
typedef		volatile unsigned char		OIS_vUBYTE;
typedef		volatile unsigned short int	OIS_vUWORD;
typedef		volatile unsigned long int	OIS_vULONG;

#include	"OIS_defi.h"

ADJ_STS		func_PROGRAM_DOWNLOAD( void );
void		func_COEF_DOWNLOAD( OIS_UWORD u16_coef_type );
void		download( OIS_UWORD u16_type, OIS_UWORD u16_coef_type );

ADJ_STS		func_SET_SCENE_PARAM_for_NewGYRO_Fil(OIS_UBYTE u16_scene, OIS_UBYTE u16_mode, const _FACT_ADJ *param );
void		SET_FADJ_PARAM( const _FACT_ADJ *param );
void 		SET_FADJ_PARAM_CLAF( const _FACT_ADJ_AF *param );

void		I2C_OIS_per_write( OIS_UBYTE u08_adr,  OIS_UWORD u16_dat );
void		I2C_OIS_mem_write( OIS_UBYTE u08_adr,  OIS_UWORD u16_dat);
OIS_UWORD	I2C_OIS_per__read( OIS_UBYTE u08_adr );
OIS_UWORD	I2C_OIS_mem__read( OIS_UBYTE u08_adr );
void		I2C_OIS_spcl_cmnd( OIS_UBYTE u08_on,   OIS_UBYTE u08_dat );
void		I2C_OIS_F0123_wr_( OIS_UBYTE u08_dat0, OIS_UBYTE u08_dat1, OIS_UWORD u16_dat2 );
/*OIS_UWORD	I2C_OIS_F0123__rd( void );*/

void		VCOSET0( void );
void		VCOSET1( void );
void		WR_I2C( OIS_UBYTE slvadr, OIS_UBYTE size, OIS_UBYTE *dat );
OIS_UWORD	RD_I2C( OIS_UBYTE slvadr, OIS_UBYTE size, OIS_UBYTE *dat );

_FACT_ADJ get_FADJ_MEM_from_non_volatile_memory(void);

extern int Main_OIS(void);

extern void OIS_Standby(void);

extern int setVCMPos(unsigned short DAC_Val);

extern void setOISMode(int Disable);


extern int s4EEPROM_ReadReg_BU63169AF(unsigned short addr,
				      unsigned short *data);

extern int s4AF_WriteReg_BU63169AF(unsigned short i2c_id,
				   unsigned char *a_pSendData,
				   unsigned short a_sizeSendData);

extern int s4AF_ReadReg_BU63169AF(unsigned short i2c_id,
				  unsigned char *a_pSendData,
				  unsigned short a_sizeSendData,
				  unsigned char *a_pRecvData,
				  unsigned short a_sizeRecvData);

#endif  // OIS_MAIN_H
