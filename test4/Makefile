src = $(wildcard ./function/*.c) $(wildcard ./basic/*.c) Part4.c
obj = $(patsubst %.c,%.o, $(src))


Part4.out : $(obj)
	gcc  $^ -o $@

plus.o : ./function/plus.c 
	gcc -c $< -o $@

Part4.o : Part4.c
	gcc -c $< -o $@

compare.o : ./basic/compare.c
	gcc -c $< -o $@

max.o : ./basic/max.c
	gcc -c $< -o $@

deal_symbol.o : ./basic/deal_symbol.c
	gcc -c $< -o $@

minus.o : ./function/minus.c
	gcc -c $< -o $@ 	

multiply.o : ./function/multiply.c 
	gcc -c $< -o $@

division.o : ./function/division.c 
	gcc -c $< -o $@

clean :
	-rm -rf $(obj)