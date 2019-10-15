OBJECTS       = OpenAuraCLI.o \
		i2c_smbus.o \
		AuraController.o \
		OpenAuraSDK.o \
		i2c_smbus_linux.o

CXX = g++
CFLAGS = -Wall

all: OpenAuraCLI

OpenAuraCLI: $(OBJECTS)
	$(CXX) $(CFLAGS) -o OpenAuraCLI $(OBJECTS)

OpenAuraCLI.o: OpenAuraCLI.cpp ../OpenAuraSDK/OpenAuraSDK.h
	$(CXX) -c $(CFLAGS) -o OpenAuraCLI.o OpenAuraCLI.cpp

OpenAuraSDK.o: ../OpenAuraSDK/OpenAuraSDK.cpp \
		../OpenAuraSDK/AuraController.cpp \
		../OpenAuraSDK/i2c_smbus.h \
		../OpenAuraSDK/i2c_smbus_piix4.h \
		../OpenAuraSDK/i2c_smbus_i801.h \
		../OpenAuraSDK/i2c_smbus_nuvoton_nct6793d.h \
		../OpenAuraSDK/wmi.h \
		../OpenAuraSDK/i2c_smbus_linux.h
	$(CXX) -c $(CFLAGS) -o OpenAuraSDK.o ../OpenAuraSDK/OpenAuraSDK.cpp

AuraController.o: ../OpenAuraSDK/AuraController.cpp \
		../OpenAuraSDK/AuraController.h \
		../OpenAuraSDK/i2c_smbus.h
	$(CXX) -c $(CFLAGS) -o AuraController.o ../OpenAuraSDK/AuraController.cpp

i2c_smbus.o: ../OpenAuraSDK/i2c_smbus.cpp \
		../OpenAuraSDK/i2c_smbus.h
	$(CXX) -c $(CFLAGS) -o i2c_smbus.o ../OpenAuraSDK/i2c_smbus.cpp

i2c_smbus_linux.o: ../OpenAuraSDK/i2c_smbus_linux.cpp \
		../OpenAuraSDK/i2c_smbus.h \
		../OpenAuraSDK/i2c_smbus_linux.h
	$(CXX) -c $(CFLAGS) -o i2c_smbus_linux.o ../OpenAuraSDK/i2c_smbus_linux.cpp

clean:
	rm -f *.o OpenAuraCLI
