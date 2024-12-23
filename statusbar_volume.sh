#!/bin/bash

case $BUTTON in
  1) pavucontrol
esac

current_vol=$(awk -F"[][]" '/dB/ { print $2 }' <(amixer sget Master))

echo " $current_vol"
