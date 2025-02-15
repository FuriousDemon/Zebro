/*
 *  @description: Compiler state machine.
 *  @author: Ian Marco Moffett.
 */

#ifndef STATE_H
#define STATE_H

#include <stdint.h>
#include <stdio.h>

/*
 *  @current_filename: Current file of file being compiled.
 *  @fp: File pointer.
 *  @line: Current line.
 *  @col: Current col.
 */

struct zebro_state
{
  const char *current_filename;
  FILE *fp;
  size_t line;
  size_t col;
};

#endif
