# Quick environment check. Run from the project folder:
#   powershell -ExecutionPolicy Bypass -File tools\check_env.ps1
$ok = $true
function Check($name, $cond) {
    if ($cond) { Write-Host "[OK]   $name" -ForegroundColor Green }
    else       { Write-Host "[FAIL] $name" -ForegroundColor Red; $script:ok = $false }
}
$root = Split-Path -Parent $PSScriptRoot
Check "Project path has no spaces-free issues (path: $root)" $true
Check "CMakeLists.txt present"            (Test-Path "$root\CMakeLists.txt")
Check "CMakePresets.json present"         (Test-Path "$root\CMakePresets.json")
Check "CMakeUserPresets.json present"     (Test-Path "$root\CMakeUserPresets.json")
Check "Toolchain file present"            (Test-Path "$root\cmake\arm-none-eabi-gcc.cmake")
Check "Linker script present"             (Test-Path "$root\linker\FM33L04XD_flash.ld")
Check "arm-none-eabi-gcc.exe exists"      (Test-Path "C:\Program Files\Arm\GNU Toolchain mingw-w64-x86_64-arm-none-eabi\bin\arm-none-eabi-gcc.exe")
Check "cmake found in PATH"               ([bool](Get-Command cmake -ErrorAction SilentlyContinue))
Check "ninja found in PATH"               ([bool](Get-Command ninja -ErrorAction SilentlyContinue))
if ($ok) { Write-Host "`nEnvironment looks good. Run: cmake --preset fm33l0xxd-debug-local" }
else     { Write-Host "`nFix the FAIL items above first." }
