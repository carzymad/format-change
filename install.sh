#!/bin/bash

# 执行完本程序后，直接执行shell语句fltow + 文件名，或者fwtol + 文件名，
# 前种是将linux文件转为windows文件格式，后一种是将windows文本文件转为linux文本文件

su root

cd fltow
make
cp fltow /usr/bin

cd ../fwtol
make
cp fwtol /usr/bin


