/**********************************************************\ 
 Original Author: Georg Fritzsche
 
 Created:    Oct 23, 2010
 License:    Dual license model; choose one of two:
 New BSD License
 http://www.opensource.org/licenses/bsd-license.php
 - or -
 GNU Lesser General Public License, version 2.1
 http://www.gnu.org/licenses/lgpl-2.1.html
 
 Copyright 2010 Georg Fritzsche, Firebreath development team
 \**********************************************************/


#pragma once
#ifndef H_FB_PLUGINWINDOWFORWARDDECL
#define H_FB_PLUGINWINDOWFORWARDDECL

#include <boost/shared_ptr.hpp>

namespace FB
{
#ifdef FB_WIN
    class PluginWindowWin;
    struct WindowContextWin;
#endif
    
#ifdef FB_X11
    class PluginWindowX11;
    struct WindowContextX11;
#endif
    
#ifdef FB_MACOSX
    class PluginWindowMacCarbonQD;
    class PluginWindowMacCarbonCG;
    class PluginWindowMacCocoaCG;
    class PluginWindowMacCocoaCA;
    class PluginWindowMacCocoaICA;
    
    struct WindowContextQuickDraw;
    struct WindowContextCoreGraphics;
#endif 
}

#endif