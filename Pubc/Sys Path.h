/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once

#include <experimental/filesystem>

#include "BlackRoot/Pubc/Files Types.h"

namespace BlackRoot {
namespace System {

    extern const char * DirSeperator;

    BlackRoot::IO::FilePath GetExecutablePath();
    BlackRoot::IO::FilePath GetUserDocumentsPath();

}
}
