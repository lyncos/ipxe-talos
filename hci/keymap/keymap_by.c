/** @file
 *
 * "by" keyboard mapping
 *
 * This file is automatically generated; do not edit
 *
 */

FILE_LICENCE ( PUBLIC_DOMAIN );

#include <ipxe/keymap.h>

/** "by" basic remapping */
static struct keymap_key by_basic[] = {
	{ 0xdc, 0x3c },	/* Pseudo-'\\' => '<' */
	{ 0xfc, 0x3e },	/* Pseudo-'|' => '>' */
	{ 0, 0 }
};

/** "by" AltGr remapping */
static struct keymap_key by_altgr[] = {
	{ 0, 0 }
};

/** "by" keyboard map */
struct keymap by_keymap __keymap = {
	.name = "by",
	.basic = by_basic,
	.altgr = by_altgr,
};