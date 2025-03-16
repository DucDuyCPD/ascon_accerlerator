#====================================
#variable define
LIST_FILE_NAME	:= list_file.txt
TOP				?= test_bench
#====================================

build:
	@verilator -Mdir build --binary -j $(nproc) --sv  +1800-2023ext+v  +1800-2023ext+sv --trace -f $(LIST_FILE_NAME) -Wno-WIDTHEXPAND --top-module $(TOP)
	
run:
	@./build/V$(TOP)

coverage:
	@rm -rf coverage_run coverage_report coverage.dat report.info
	@verilator --coverage --binary -Mdir coverage_run -f $(LIST_FILE_NAME) --top-module $(TOP)
	@./coverage_run/V$(TOP)
	@verilator_coverage coverage.dat --write-info report.info
	@genhtml report.info --output-directory coverage_report
	@firefox coverage_report/index.html &

wave:
	@gtkwave wave.vcd &

clean:
	@rm -rf build *.vcd coverage_run coverage_report coverage.dat report.info

all: clean build run

all_coverage: clean build run coverage

all_wave: clean build run wave

help:
	@echo "=========================================================="
	@echo "| make build: compile file in list_file.txt       	"
	@echo "| make run: run simulation                        	"
	@echo "| make wave: open wave.vcd in GTKwave             	"
	@echo "| make clean: delete generated file               	"
	@echo "| make all: make clean -> make build -> make run  	"
	@echo "| make all_wave: make all -> make wave             	"
	@echo "| make coverage: code coverage             	        "
	@echo "|========================================================"
	@echo "| To select top module, use option TOP=module_name, default is test_bench    	"
	@echo "| To select list of file need to compile, use LIST_FILE_NAME=list_file, default is list_file.txt"
	@echo "| This Makefile require:"
	@echo "| 	+ verilator     	"
	@echo "| 	+ gtkwave     	"
	@echo "| 	+ lcov     	"	
	@echo "========================================================="
