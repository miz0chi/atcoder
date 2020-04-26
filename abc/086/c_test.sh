#!/bin/bash

g++ c.cpp || exit 1
check() {
        local n=$1
        local want=$2

        result="$(echo "$n" | ./a.out)"
        got=NG
        if [ "$result" = "$want" ]; then
                got=OK
        fi
        echo "$n : $want : $result : $got"
}

check "2
3 1 2
6 1 1" Yes
check "1
2 100 100" No
check "2
5 1 1
100 1 1" No
