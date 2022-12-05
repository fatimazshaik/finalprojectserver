CC = g++ --std=c++17
CFLAGS = -I/opt/homebrew/include -g

LDFLAGS = -L/opt/homebrew/lib/ -ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -ljsonrpccpp-client -lcurl

INC_CL = carClient.h carServer.h motorcycleServer.h motorcycleClient.h
OBJ	= car.o motorcycle.o
all: 	car motorcycle motorcycleR

carserver.h carclient.h:		sendData.json
	jsonrpcstub sendData.json --cpp-server=carServer --cpp-client=carClient

motorcycleserver.h motorcycleclient.h:		alert.json
	jsonrpcstub alert.json --cpp-server=motorcycleServer --cpp-client=motorcycleClient

motorcycle.o: motorcycle.cpp carclient.h motorcycleserver.h $(INC)
	$(CC) -c $(CFLAGS) motorcycle.cpp carclient.h motorcycleserver.h

motorcycleR.o: motorcycleR.cpp carclient.h motorcycleserver.h $(INC)
	$(CC) -c $(CFLAGS) motorcycleR.cpp carclient.h motorcycleserver.h

car.o: car.cpp motorcycleclient.h carserver.h $(INC)
	$(CC) -c $(CFLAGS) car.cpp motorcycleclient.h carserver.h

car: car.o $(INC)
	$(CC) -o car car.o $(LDFLAGS)

motorcycle: motorcycle.o $(INC)
	$(CC) -o motorcycle motorcycle.o $(LDFLAGS)

motorcycleR: motorcycleR.o $(INC)
	$(CC) -o motorcycleR motorcycleR.o $(LDFLAGS)

clean:
	rm -f *.o *~ core carServer.h motorcycleServer.h