#include <YoloMouse/Share/Constants.hpp>

namespace YoloMouse
{
    //------------------------------------------------------------------------
    const Char* APP_MENU_STRINGS[MENU_OPTION_COUNT] =
    {
        "Start with Windows",
        "Show Icon",
        "Small",
        "Medium",
        "Large",
    };

    const Char* PATH_CURSORS_SIZE[CURSOR_SIZE_COUNT] =
    {
        "Small",
        "Medium",
        "Large",
    };
    //------------------------------------------------------------------------
    static Settings::KeyValue _settings[] =
    {
        { "CursorKey1",         "CONTROL ALT SHIFT 1" },
        { "CursorKey2",         "CONTROL ALT SHIFT 2" },
        { "CursorKey3",         "CONTROL ALT SHIFT 3" },
        { "CursorKey4",         "CONTROL ALT SHIFT 4" },
        { "CursorKey5",         "CONTROL ALT SHIFT 5" },
        { "CursorKey6",         "CONTROL ALT SHIFT 6" },
        { "CursorKey7",         "CONTROL ALT SHIFT 7" },
        { "CursorKey8",         "CONTROL ALT SHIFT 8" },
        { "CursorKey9",         "CONTROL ALT SHIFT 9" },
        { "CursorKeyReset",     "CONTROL ALT SHIFT 0" },
        { "CursorKeySmall",     "CONTROL ALT SHIFT I" },
        { "CursorKeyMedium",    "CONTROL ALT SHIFT O" },
        { "CursorKeyLarge",     "CONTROL ALT SHIFT P" },
        { "CursorSize",         "1" },
        { "AutoStart",          "1" },
        { "AutoShowMenu",       "1" },
    };
    Settings::KeyValueCollection SETTINGS_ITEMS(_settings, COUNT(_settings));
}
