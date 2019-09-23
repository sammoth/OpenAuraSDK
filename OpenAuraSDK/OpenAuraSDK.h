#include <string>
#include <vector>
#include "AuraController.h"
#include "i2c_smbus.h"

#define MODE_AUTO   0
#define MODE_QUICK  1
#define MODE_READ   2
#define MODE_FUNC   3

std::string DetectI2C(i2c_smbus_interface * bus, int mode);
void DumpAuraRegisters(AuraController * controller);
void DetectI2CBusses(std::vector<i2c_smbus_interface *> *busses);
void DetectAuraControllers(std::vector<i2c_smbus_interface *> &busses, std::vector<AuraController *> *controllers);
