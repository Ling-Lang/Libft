#!/bin/bash

# specify the directory
dir="src/printf"

# specify the new line
new_line='#include "../../include/ft_printf.h"'

# loop through each file in the directory
find "$dir" -type f -name '*.c' | while read -r file; do
    # replace the 13th line with the new line
    sed -i "13s|.*|$new_line|" "$file"
done