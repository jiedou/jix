ifneq "1" "2"
    a = "ifneq"
else
    a = "else"
endif
.PHONY:all
all:
	@echo "abspath="$(abspath .)
	@echo "dir ./="$(dir .)
	@echo "lastword first,second,third="$(lastword first second third)
	@echo "firstword first,second,third="$(firstword first second third)
	@echo "basename a.txt="$(basename a.txt)
	@echo "suffix a.txt.txt="$(suffix  a.txt.txt)
	@echo "MAKEFILE_LIST="$(MAKEFILE_LIST)
	@echo $a
