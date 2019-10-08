FROM gcc:latest
COPY main.c .
RUN gcc main.c
ENTRYPOINT ./a.out
