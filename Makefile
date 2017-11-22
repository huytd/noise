.DEFAULT_GOAL := convert
PROJECT=noise

build: clean
	gcc -o $(PROJECT) $(PROJECT).c

clean:
	rm -rf $(PROJECT)

convert: build
	./$(PROJECT) | convert -delay 1 ppm:- gif:- > $(PROJECT).gif
