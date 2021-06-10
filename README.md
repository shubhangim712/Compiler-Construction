# Compiler-Construction
1. Run 'make clean' & then 'make'.
2. To run example test, give the name of the test file in place of 'input_file'.
	--ast is for AST tree
	--sym for Symbol table

	  ./obj/mcc –ast –sym input_file.mC
	  Example: ./obj/mcc –ast –sym  test/test.mC

3. Output is saved into output.asm. 
	Output file path - ./src/output.asm
4. Run the output.asm in QtSpim simulator
