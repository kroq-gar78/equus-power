#!/bin/sh

name=$1
sponsor_name=$2
sponsor_email=$3
school_addr=$4

# do some stuff

# dump fields into YAML file
#pdftk isef_1a.pdf dump_data_fields | pdffdf -ln > isef_1a_fields.yml

# copy PDF to separate file for safe keeping
#cp -av "$1.pdf"

# TODO: edit the YAML file with the new parameters

# export the final PDF
pdftk isef_1a.pdf fill_form "$name.fdf" output "$name.pdf"
