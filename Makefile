all: build test

.PHONY: build
build: main.c
	docker build -t megabloat:latest .

.PHONY: test
test:
	docker run --rm -it --memory="1g" --memory-swap="1g" megabloat:latest .
