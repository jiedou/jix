#!/bin/bash
#echo -e "guoyajie\n30\n" | sh read.sh 使用-e可以生成输入序列
#your name is guoyajie
#your age is 30

read -p "enter your name:" name
read -p "enter your age:" age 

echo "your name is $name"
echo "your age is $age"
