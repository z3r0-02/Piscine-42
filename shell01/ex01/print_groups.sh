#!/bin/sh
id -nG $FT_USER | tr ' ' ',' | tr -d '\n'

# tr ' ' ','  changes spaces to comma
# tr -d '\n'  deletes neew line
