# Makefile for Earthworm Jim decompilation

## Makefile using SGDK build system
#
## Set SGDK_ROOT to your SGDK installation path, e.g., /opt/sgdk
SGDK_ROOT ?= /opt/sgdk

include $(SGDK_ROOT)/mk/genesis.mk

# List all C source files for compilation
C_SOURCES := earthworm_jim.c vdp.c objects.c subsystems.c audio.c data_tables.c

# Define ROM output name (without extension)
ROM_NAME := earthworm_jim

# Optional: specify build configuration (e.g., debug or release)
BUILD ?= release
