// Geometric Tools, LLC
// Copyright (c) 1998-2013
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.1 (2010/10/01)

#ifndef WM5LIGHTPNTPERVEREFFECT_H
#define WM5LIGHTPNTPERVEREFFECT_H

#include "Wm5GraphicsLIB.h"
#include "Wm5VisualEffectInstance.h"
#include "Wm5Light.h"
#include "Wm5Material.h"

namespace Wm5
{

class WM5_GRAPHICS_ITEM LightPntPerVerEffect : public VisualEffect
{
    WM5_DECLARE_RTTI;
    WM5_DECLARE_NAMES;
    WM5_DECLARE_STREAM(LightPntPerVerEffect);

public:
    // Construction and destruction.
    LightPntPerVerEffect ();
    virtual ~LightPntPerVerEffect ();

    // Create an instance of the effect with unique parameters.
    VisualEffectInstance* CreateInstance (Light* light,
        Material* material) const;

    // Convenience for creating an instance.  The application does not have to
    // create the effect explicitly in order to create an instance from it.
    static VisualEffectInstance* CreateUniqueInstance (Light* light,
        Material* material);

private:
    static int msDx9VRegisters[12];
    static int msOglVRegisters[12];
    static int* msVRegisters[Shader::MAX_PROFILES];
    static std::string msVPrograms[Shader::MAX_PROFILES];
    static std::string msPPrograms[Shader::MAX_PROFILES];
};

WM5_REGISTER_STREAM(LightPntPerVerEffect);
typedef Pointer0<LightPntPerVerEffect> LightPntPerVerEffectPtr;

}

#endif
