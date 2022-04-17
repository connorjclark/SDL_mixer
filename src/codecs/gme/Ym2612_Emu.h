// YM2612 FM sound chip emulator interface

// local edit... how to remove? build fails without one of these enabled.
#define VGM_YM2612_GENS 1

#ifdef VGM_YM2612_GENS // LGPL v2.1+ license
#include "Ym2612_GENS.h"
typedef Ym2612_GENS_Emu Ym2612_Emu;
#endif

#ifdef VGM_YM2612_NUKED // LGPL v2.1+ license
#include "Ym2612_Nuked.h"
typedef Ym2612_Nuked_Emu Ym2612_Emu;
#endif

#ifdef VGM_YM2612_MAME // GPL v2+ license
#include "Ym2612_MAME.h"
typedef Ym2612_MAME_Emu Ym2612_Emu;
#endif

