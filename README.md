# GTA V Decompiled Scripts

All decompiled scripts as of 1.52.

## Doing it yourself

1. Clone this repo.
2. Build [GTA-V-Script-Decompiler](https://github.com/Sainan/GTA-V-Script-Decompiler) to get a "decompiler.exe" to put into your clone's directory.
3. Create a "scripts" folder in your clone's directory.
4. Use OpenIV to navigate to `update/update.rpf/x64/level/gta5/script/script_rel.rpf`.
5. Press Ctrl+A then right-click and select "Save Content/Export" to export all scripts into the previously-created "scripts" folder.
6. Download the background script from `http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_xxxx_y.rpf` where `xxxx_y` equals your the game patch, e.g. `bg_ng_2060_1.rpg` for 2060.1, and extract "valentinerpreward2" via OpenIV.
7. Open a console, navigate into your clone's directory, and run `php decompile_all.php`.
