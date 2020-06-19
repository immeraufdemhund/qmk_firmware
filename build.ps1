param([String]$pathToKeyboard, [String]$keymap='debug')
$pathToKeyboard = ($pathToKeyboard | % {$_ -replace '\\', '/' }).Replace("./keyboards/", "")
cls
docker run --rm -it -e SKIP_GIT=true -w /qmk_firmware -v ${pwd}:/qmk_firmware qmkfm/base_container make ${pathToKeyboard}:${keymap}
# mv .\*.hex .\hex -Force -Verbose
Get-Date
