/* Copyright (C) 2007-2008 The Android Open Source Project
**
** This software is licensed under the terms of the GNU General Public
** License version 2, as published by the Free Software Foundation, and
** may be copied, distributed, and modified under those terms.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
*/
#ifndef NAND_DEVICE_REG_H
#define NAND_DEVICE_REG_H

enum nand_cmd {
	NAND_CMD_GET_DEV_NAME,  // Write device name for NAND_DEV to NAND_DATA (vaddr)
	NAND_CMD_READ,
	NAND_CMD_WRITE,
	NAND_CMD_ERASE,
	NAND_CMD_BLOCK_BAD_GET, // NAND_RESULT is 1 if block is bad, 0 if it is not
	NAND_CMD_BLOCK_BAD_SET
};

enum nand_dev_flags {
	NAND_DEV_FLAG_READ_ONLY = 0x00000001
};

#define NAND_VERSION_CURRENT (1)

enum nand_reg {
	// Global
	NAND_VERSION        = 0x000,
	NAND_NUM_DEV        = 0x004,
	NAND_DEV            = 0x008,

	// Dev info
	NAND_DEV_FLAGS      = 0x010,
	NAND_DEV_NAME_LEN   = 0x014,
	NAND_DEV_PAGE_SIZE  = 0x018,
	NAND_DEV_EXTRA_SIZE = 0x01c,
	NAND_DEV_ERASE_SIZE = 0x020,
	NAND_DEV_SIZE_LOW   = 0x028,
	NAND_DEV_SIZE_HIGH  = 0x02c,

	// Command
	NAND_RESULT         = 0x040,
	NAND_COMMAND        = 0x044,
	NAND_DATA           = 0x048,
	NAND_TRANSFER_SIZE  = 0x04c,
	NAND_ADDR_LOW       = 0x050,
	NAND_ADDR_HIGH      = 0x054,
};

#endif
