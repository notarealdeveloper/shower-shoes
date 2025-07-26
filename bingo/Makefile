OUTFILE 	:= bingo
INFILES     := $(OUTFILE).c
CC          := gcc -fno-stack-protector
WARNINGS    := -Wall

default:
	$(CC) $(WARNINGS) -o $(OUTFILE) $(INFILES)

clean:
	rm -f *.o 

clean-all:
	rm -f *.o *.so $(OUTFILE)
