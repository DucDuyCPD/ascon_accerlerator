#====================================
#variable define
LIST_FILE_NAME	:= list_file.txt
TOP				?= test_ascon_permutation
#====================================

build:
	@verilator -Mdir build --binary -j $(nproc) --sv --trace -f $(LIST_FILE_NAME) -Wno-WIDTH -Wno-UNOPTFLAT --top-module $(TOP)
run:
	@./build/V$(TOP)

wave:
	@gtkwave wave.vcd

clean:
	@rm build -r
	@rm wave.vcd

all: 
	#@make clean
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
	@echo "| To select between test CarrySelectAdder and     	"
	@echo "| test RippleCarryAdder change variable TOP by           "
	@echo "| name of top module. The default top module is test_CSA "
	@echo "=========================================================="
