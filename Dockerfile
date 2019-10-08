FROM gcc:latest as build
COPY main.c .
RUN gcc -static main.c -o /megabloat

FROM alpine:latest
COPY --from=build /megabloat /megabloat
ENTRYPOINT /megabloat
CMD ["/megabloat"]
