# T2501_PicoConsol
TFT ILI9341 consol
- 4 keys
- SD-card
- PicoW


Setup Bodmer TFT_eSPI library
  Install TFT_eSPI Library in Arduino IDE
  Open console
  Change directory to the active libraries folder containing the TFT_eSPI librarie
  Clone https://github.com/infrapale/T2602_My_TFT_Setups.git
  The libraries folder should lookk like this
    libraries
      T2602_My_TFT_Setups
      TFT_eSPI


  Modify User_Setup_Select. at the root of the TFT_eSPI library:

    . . .
    ///////////////////////////////////////////////////////
    //   User configuration selection lines are below    //
    ///////////////////////////////////////////////////////

    // Only ONE line below should be uncommented to define your setup.  Add extra lines and files as needed.

    Copu the rows below from the T2602_My_TFT_Setups/User_Setup_Select.h file
    -	#ifdef BOARD_PICO_TFT_4KEYS
    -	#include "../T2602_My_TFT_Setups/Setup_PicoConsol_ILI9341.h"
    -	#elif BOARD_TFT_4_QUADCORE_PICO
    -	#include "../T2602_My_TFT_Setups/Setup_PicoQuadCore_ILI9488.h"
    -	#else
    -	#pragma message("Warning: No board was selected")
    -	#include <User_Setup.h>           // Default setup is root library folder
    -	#endif
 . . .

