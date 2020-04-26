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

check dream YES
check dreamer YES
check erase YES
check eraser YES

check erasedream YES
check dreameraser YES
check dreamerer NO
