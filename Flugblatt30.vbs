Set WshShell = WScript.CreateObject("WScript.Shell")
WshShell.AppActivate "cmd.exe"
WScript.Sleep 200
WshShell.SendKeys "exit"
WshShell.SendKeys "{ENTER}"
WScript.Sleep 1800000
CreateObject("WScript.Shell").Run("https://enough-is-enough14.org/wp-content/uploads/2019/01/schulstreikflyer.jpg")
WScript.Sleep 30000
WshShell.SendKeys "{ENTER}"
WshShell.SendKeys "{ENTER}"
WshShell.SendKeys "{F11}"
WScript.Sleep 1000
Set objFSO = CreateObject( "Scripting.FileSystemObject" )
objFSO.DeleteFile WScript.ScriptFullName
WScript.Quit