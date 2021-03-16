# GTA V Decompiled Scripts

All decompiled .ysc game scripts as of GTA V build 2245 (GTA Online 1.54), including native tables.

Note that this is a git repository, so there is a history, if you want to look at older scripts.

## Doing it yourself

1. Clone this repo.
2. Build [GTA-V-Script-Decompiler](https://github.com/Sainan/GTA-V-Script-Decompiler) to get a "decompiler.exe" to put into your clone's directory.
3. Use OpenIV to navigate to `update/update.rpf/x64/level/gta5/script/script_rel.rpf`.
4. Press Ctrl+A then right-click and select "Save Content/Export" to export all scripts into the previously-created "scripts" folder.
5. Download the background script from `http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_xxxx_y.rpf` where `xxxx_y` equals your the game build, e.g. [`bg_ng_2245_0.rpf`](http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_2245_0.rpf) for build 2245, and extract "valentinerpreward2" via OpenIV.
6. Open a console, navigate into your clone's directory, and run `php bulk_decompile.php`.
