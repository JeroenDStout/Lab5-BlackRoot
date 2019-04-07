/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "BlackRoot/Pubc/Sys Path.h"

const char * BlackRoot::System::DirSeperator =
#ifdef _WIN32
    "\\";
#else
    "/";
#endif