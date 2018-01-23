CC = cc
CFLAGS = -g -W
RM = rm -f
all: mongoose network traitement

appli:
	$(CC) -o appli appli.c $(CFLAGS)

mongoose:
	$(CC) -c ./thirdParty/mongoose/mongoose.c -o ./bin/mongoose.o

network:
	$(CC) -c storage.c -o ./bin/storage.o $(CFLAGS)
	$(CC) -o ./bin/lineModule lineModule.c $(CFLAGS) ./bin/*.o
	$(CC) --std=c99 -o ./bin/client client.c $(CFLAGS) ./bin/mongoose.o

traitement:
	$(CC) --std=c99 $(CFLAGS) ./src/traitement.c -o ./bin/traitement

clean:
	$(RM) ./bin/*
