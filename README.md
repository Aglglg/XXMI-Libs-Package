### Modified by Aglglg
- Only for very niche use case (used with [No Reload Mod Manager Custom Lib Version](https://github.com/Aglglg/No-Reload-Mod-Manager/tree/for-custom-xxmi-lib))
- Not intended for wide use and only for personal usage or if someone reached to me to try it
- Build using github actions (thanks to SpectrumQT)
#### What changed?
- Background/foreground check now using `target` and or `manager` if specified in `[Loader]`
---

![image](https://cloud.githubusercontent.com/assets/6544511/22624161/934dba64-eb27-11e6-8f78-46c902e96e1b.png)
========

**XXMI DLL** is a fork of [3dmigoto](https://github.com/bo3b/3Dmigoto/), a Direct3D modding tool. Developed as part of the **XXMI Project** by the [AGMG Community](https://discord.gg/agmg), it serves as a core component of the [XXMI Launcher](https://github.com/SpectrumQT/XXMI-Launcher). This fork focuses on streamlining the original, enhances compatibility and introduces performance and usability improvements.

## Key differences

* Legacy projects have been removed from the solution.
* All stereoscopic (3D) features have been stripped, making this fork effectively a "2Dmigoto".
* Codebase has been updated for compatibility with **Visual Studio 2022**.

## New features

* Micro-optimizations to reduce config reload times and main loop FPS impact.
* UTF-8 support for file paths and namespaces.
* Configurable buffers resizing support, also known as "vertex limit raise" (backward-compatible with GIMI `.dll` implementation).
* GPU-to-INI scope data transfer support via `store` command (backward-compatible with GIMI `.dll` implementation).
* Periodic auto-saving of mod settings (persistent vars are saved to `d3dx_user.ini` every 1 minute by default).
* Support for remote DLL loading (allows the loader `.exe` to reside in a separate directory).

## Special Thanks

- Chiri, [Bo3b](https://github.com/bo3b), [DarkStarSword](https://github.com/DarkStarSword) — for the monumental work behind the original 3dmigoto.
- [SilentNightSound](https://github.com/SilentNightSound) — for pioneering AGMG D3D modding and introducing foundational GIMI DLL features.
- [SinsOfSeven](https://github.com/SinsOfSeven) — for input on architecture decisions and original source analysis.
- [Nurarihyon](https://github.com/NurarihyonMaou), [Scyll](https://gamebanana.com/members/2644630) — for contributions and optimization insights.
- [Leotorrez](https://github.com/leotorrez) & [Gustav0](https://github.com/Seris0/Gustav0) — for extensive testing and tireless listening to community feedback.
