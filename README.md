### Modified
- Only for very niche use case (used with No Reload Mod Manager Custom Lib Version)

### Usage
- With original XXMI Launcher, go to Settings > Advanced > Turn ON Unsafe Mode
- Download this XXMI-Libs-Package from Release tab, extract the zip, get only d3d11.dll
- Put it and replace in your MI folder (WWMI, GIMI, etc)
- **YOU SHOULD NOT TRUST ANY d3d11.dll THAT YOU FOUND ONLINE BLINDLY**
- **MAKE SURE YOU TRUST THE ONE WHO CREATED IT AND EVEN BETTER UNDERSTAND THE CODES**

#### What changed?
- Background/foreground check now using `target` and or `manager` if specified in `[Loader]`
- Added `manager_if-manager_endif` to avoid mod cannot be managed/overlapped because there's an error in default conditional syntax.
---
