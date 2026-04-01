#!/bin/bash

sudo apt update
sudo apt install -y build-essential wget

wget https://apt.devkitpro.org/install-devkitpro-pacman
chmod +x install-devkitpro-pacman
./install-devkitpro-pacman

sudo dkp-pacman -S --noconfirm gba-dev

echo "SETUP COMPLETO 🚀" 
