#### What changed from SpectrumQT's XXMI?
- Ini syntax added `manager = mod_manager_window_title` in `[Loader]` section. With this, input system keypress will still be received even if the game is not the active window and mod manager window is the active window.
- Added exported marker for mod manager fork detection, `DirectX11\manager_mark.cpp`.
