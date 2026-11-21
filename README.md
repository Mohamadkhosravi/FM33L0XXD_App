# FM33L0XXD_App (minimal project)

Contains only `main`. Built for FM33L04xD with 256 KB flash.

## Setup (once)
1. Put the folder in a short path, for example `C:\dev\FM33L0XXD_App`.
   Avoid Desktop/OneDrive paths and do not reuse an old `build` folder.
2. Install: Arm GNU Toolchain 15.x (arm-none-eabi), CMake 3.22+ and Ninja on PATH,
   J-Link Software, pyOCD (optional), and VS Code extensions: C/C++, CMake Tools, Cortex-Debug.
3. Check the toolchain path in `cmake/arm-none-eabi-gcc.cmake` (`ARM_TOOLCHAIN_ROOT`).
4. Run `tools\check_env.ps1` and fix any FAIL line.

## Build (PowerShell, inside the project folder)
```powershell
cmake --preset fm33l0xxd-debug-local
cmake --build --preset fm33l0xxd-debug-local
```
Output: `build\Debug\FM33L0XXD_App.elf`, `.hex`, `.bin`

## VS Code
Open the project folder, then:
- CMake: Select Configure Preset -> `fm33l0xxd-debug-local`
- CMake: Select Kit -> `[Unspecified]`
- CMake: Delete Cache and Reconfigure

## Flash / Debug
- J-Link: Run and Debug -> `Debug FM33L0XXD (J-Link)`.
- pyOCD: run `pyocd list --targets` and `pyocd --help` first. The `--pack` option and target name may differ by version.

## Open items
- RAM size and address are temporary (8 KB at 0x20000000). Take real values from the datasheet.
- Confirm the exact part number. The flash algorithm is for FM33L04xD, not FM33L0XXD.
- OpenOCD and the STM32 config were removed because they do not apply to FM33.
