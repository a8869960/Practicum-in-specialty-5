#!/bin/bash
# 4 runs
for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/a1.txt; echo $'\n' ; ./a.out $p 11 tests/a1.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/a2.txt; echo $'\n' ; ./a.out $p 5 tests/a2.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/a3.txt; echo $'\n' ; ./a.out $p 7 tests/a3.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/empty.txt; echo $'\n' ; ./a.out $p 1 tests/empty.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/lit.txt; echo $'\n' ; ./a.out $p 4 tests/lit.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=5; p++)) ; do echo $'\n'; cat tests/small.txt; echo $'\n' ; ./a.out $p 1 tests/small.txt ; done
echo $'\n' "----------------------------------------------------------------------------"

for ((p=1; p<=7; p++)) ; do echo $'\n'; cat tests/fibonacci.txt; echo $'\n' ; ./a.out $p 11 tests/fibonacci.txt ; done
echo $'\n' "----------------------------------------------------------------------------"