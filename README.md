### Modified
- Only for very niche use case (used with No Reload Mod Manager Custom Lib Version)
- Will replace the need of `check_foreground_window=0` that will make the mod still can be toggled even if the game window is in background, with special mod manager line. So that the toggles will not accidentally pressed again if the game window is in background.

### Usage
- With original XXMI Launcher, go to Settings > Advanced > Turn ON Unsafe Mode
- Download this XXMI-Libs-Package from Release tab, extract the zip, get only d3d11.dll
- Put it and replace in your MI folder (WWMI, GIMI, etc)
- **YOU SHOULD NOT TRUST ANY d3d11.dll THAT YOU FOUND ONLINE BLINDLY**
- **MAKE SURE YOU TRUST THE ONE WHO CREATED IT AND EVEN BETTER UNDERSTAND THE CODES**

### Activation in No Reload Mod Manager
- Type `%appdata%\com.aglg\No Reload Mod Manager\shared_preferences.json` on File Explorer Path Bar
- On last part of the json file, before `}` add key `"flutter.customXXMILibGame":true`. Replace the `Game` with your games that you want to mod `Wuwa`, `Genshin`, `Hsr`, `Zzz`, `Endfield`. You can add for 1 game, or multiple games.
- example: `......,"flutter.customXXMILibWuwa":true}` or `......,"flutter.customXXMILibWuwa":true,"flutter.customXXMILibEndfield":true}`
- Save, restart No Reload Mod Manager.

#### What changed?
- Background/foreground check now using `target` and or `manager` if specified in `[Loader]`
- Added `manager_if-manager_endif` to avoid mod cannot be managed/overlapped because there's an error in default conditional syntax (not really used since default NRMM is already smart enough).
---
