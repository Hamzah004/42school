#!/bin/sh
find /sys/class/net -mindepth 1 -maxdepth 1 ! -name lo -printf "" -execdir cat {}/address \;
