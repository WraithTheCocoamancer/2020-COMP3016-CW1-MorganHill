ifeq ($(OS),Windows_NT)
	OSFLAG = -D WIN32
	CFLAG += -lwsock32
	ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
		OSFLAG = -D AMD64
	endif
	ifeq ($(PROCESSOR_ARCHITECTURE),x86)
		OSFLAG = -D IA32
	endif
else
	OSFLAG += -D Linux
	CFLAG = -L/usr/local/lib/ -lboost_system
endif

all: reader.out
	@echo $(OSFLAG)
	

reader.out:
	g++ -std=c++11 FileReader.cpp $(CFLAG) -o reader

test: reader.out
	./reader

clean:
	rm reader
