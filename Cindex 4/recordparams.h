#pragma once

typedef unsigned long RECN;

typedef struct {
	RECN num;		/* holds record number */
	RECN parent;		/* number of parent record */
	RECN lchild;		/* number of left child record */
	RECN rchild;		/* number of right child record */
	time_c time;		/* time of last change */
	char user[4];		/* up to four initials of user who last changed */
	unsigned short ismod : 1;	// unused
	unsigned short isdel : 1;	/* TRUE if record deleted */
	unsigned short ismark : 1;	/* TRUE if record marked */
	unsigned short islock : 1;	// unused
	unsigned short balance : 2;	/* holds balance of subtree on record */
	unsigned short isgen : 1;	/* TRUE if autogenerated */
	unsigned short isttag : 1;	/* TRUE if temporarily tagged */
	unsigned short label : 3;	/* holds tag ID  */
	short padding;			//  padding to align with mac
	char rtext[];				/* text of record */
} RECORD;

#define RECSIZE (sizeof(RECORD))

