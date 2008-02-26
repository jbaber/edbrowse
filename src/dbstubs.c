/* dbstubs.c
 * Stubs for the database functions.
 * After all, most people will compile this without database access.
 * Copyright (c) Karl Dahlke, 2008
 * This file is part of the edbrowse project, released under GPL.
 */

#include "eb.h"


bool
sqlReadRows(const char *filename, char **bufptr)
{
    setError(316);
    *bufptr = EMPTYSTRING;
    return false;
}				/* sqlReadRows */

void
dbClose(void)
{
}				/* dbClose */

void
showColumns(void)
{
}				/* showColumns */

bool
sqlDelRows(int start, int end)
{
}				/* sqlDelRows */

bool
sqlUpdateRow(pst source, int slen, pst dest, int dlen)
{
}				/* sqlUpdateRow */

bool
sqlAddRows(int ln)
{
}				/* sqlAddRows */