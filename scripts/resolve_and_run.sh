#!/usr/bin/env bash
set -e

INPUT="$1"
if [[ -z "$INPUT" ]]; then
  echo "Usage: pixi run exec <number|padded_number|directory_name>"
  echo "Examples: pixi run exec 1, pixi run exec 001, pixi run exec 001_variables"
  exit 1
fi

# If input is purely numeric, pad to 3 digits and find directory by prefix
if [[ "$INPUT" =~ ^[0-9]+$ ]]; then
  PADDED=$(printf "%03d" "$INPUT")
  DIR=$(find src -maxdepth 1 -type d -name "${PADDED}_*" 2>/dev/null | head -1)
  if [[ -z "$DIR" ]]; then
    echo "No directory found matching: $INPUT (searched for ${PADDED}_*)"
    exit 1
  fi
  TARGET=$(basename "$DIR")
else
  # Use as-is (e.g. 001_variables, pointers, functions)
  TARGET="$INPUT"
  if [[ ! -d "src/$TARGET" ]]; then
    echo "Directory not found: src/$TARGET"
    exit 1
  fi
fi

# Build
mkdir -p build/"$TARGET"
gcc -Wall -Wextra -std=c11 -g -nodefaultrpaths src/"$TARGET"/main.c -o build/"$TARGET"/main

# Run
exec ./build/"$TARGET"/main
