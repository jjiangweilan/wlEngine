#include "Global/Settings.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
namespace WeilanEngine
{
namespace Settings
{
#if SETTINGS_ENGINEMODE
EngineMode engineMode = EngineMode::Editor;
#else
EngineMode engineMode = EngineMode::Gameplay;
#endif
DebugRender debugRender = DebugRender::On;
GameDimension gameDimension = GameDimension::Three;
} // namespace Settings
} // namespace WeilanEngine
