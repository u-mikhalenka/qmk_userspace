#!/bin/bash

set -eu

QMK_DIR="$HOME/sources/qmk/qmk_firmware"
UF2_FILE="keebio_bfo9000_boomy.uf2"
VOLUME="/Volumes/RPI-RP2"
OUTPUT_DIR="$PWD"

wait_for_volume() {
    printf 'Waiting for %s' "$1"
    while [ ! -d "$VOLUME" ]; do
        printf '.'
        sleep 1
    done
    printf '\n'
}

wait_for_unmount() {
    printf 'Waiting for current half to disconnect'
    while [ -d "$VOLUME" ]; do
        printf '.'
        sleep 1
    done
    printf '\n'
}

flash_half() {
    wait_for_volume "$1"
    cp "$OUTPUT_DIR/$UF2_FILE" "$VOLUME/"
    printf '%s flashed.\n' "$1"
}

(
    cd "$QMK_DIR"
    qmk compile -kb keebio/bfo9000 -km boomy
)

flash_half "First half"
wait_for_unmount

printf 'Put the second half into bootloader mode, then press any key to continue...'
read -r -n 1 _
printf '\n'

flash_half "Second half"
