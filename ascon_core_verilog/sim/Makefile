#====================================
#variable define
LIST_FILE_NAME	:= list_file.txt
TOP				?= test_bench
#====================================

build:
	@verilator -Mdir build --binary -j $(nproc) --sv --trace -f $(LIST_FILE_NAME) -Wno-WIDTHEXPAND --top-module $(TOP)
	
run:
	@./build/V$(TOP)

wave:
	@gtkwave wave.vcd &

clean:
	@if [ -d build ]; then \
		rm build -r; \
	fi

	@if [ -f *.vcd ]; then \
		rm *.vcd; \
	fi

all: 
	@make clean
	@make build
	@make run

all_wave: 
	@make all
	@make wave

help:
	@echo "=========================================================="
	@echo "| make build: compile file in list_file.txt       	"
	@echo "| make run: run simulation                        	"
	@echo "| make wave: open wave.vcd in GTKwave             	"
	@echo "| make clean: delete generated file               	"
	@echo "| make all: make clean -> make build -> make run  	"
	@echo "| make all_wave: make all -> make wave             	"
	@echo "|========================================================"
	@echo "| To select top module, use option TOP=module_name     	"
	@echo "========================================================="
