#include <vector>
#include "OpenAuraSDK.h"

#ifdef WIN32
#include "OpenAuraSDKDialog.h"
#else /* WIN32 */
#include "OpenAuraSDKQtDialog.h"
#endif /* WIN32 */

/******************************************************************************************\
*                                                                                          *
*   main                                                                                   *
*                                                                                          *
*       Main function.  Detects busses and Aura controllers, then opens the main window    *
*                                                                                          *
\******************************************************************************************/
int main(int argc, char *argv[])
{
    std::vector<AuraController *> controllers;
    std::vector<i2c_smbus_interface *> busses;

    DetectI2CBusses(&busses);

    DetectAuraControllers(busses, &controllers);

#if WIN32
    OpenAuraSDKDialog dlg(busses, controllers);
    dlg.DoModal();

    return 0;

#else
    QApplication a(argc, argv);

    Ui::OpenAuraSDKQtDialog dlg(busses, controllers);
    dlg.show();

    return a.exec();
#endif
}
