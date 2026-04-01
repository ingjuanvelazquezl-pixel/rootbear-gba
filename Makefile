DEVKITPRO ?= /opt/devkitpro
DEVKITARM ?= $(DEVKITPRO)/devkitARM

include $(DEVKITPRO)/libgba/gba_rules

TARGET := rootbear
BUILD := build
SOURCES := source
INCLUDES := source

LIBS := -lgba
