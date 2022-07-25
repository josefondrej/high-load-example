FROM gcc:4.9

WORKDIR /project
COPY . .
RUN gcc -std=c99 -o Main main.c
ENTRYPOINT ["./Main"]