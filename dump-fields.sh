#!/bin/sh

###############
### WARNING ###
###############

# DO NOT RUN IF THE YML IS ALREADY GENERATED!!!!!

pdftk isef_1a.pdf dump_data_fields | pdffdf -ln > isef_1a_fields.yml
