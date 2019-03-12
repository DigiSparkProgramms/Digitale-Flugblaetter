Set WshShell = WScript.CreateObject("WScript.Shell")
WshShell.AppActivate "cmd.exe"
WScript.Sleep 200
WshShell.SendKeys "exit"
WshShell.SendKeys "{ENTER}"
WScript.Sleep 3600000
CreateObject("WScript.Shell").Run("www.youtube.com/embed/D1monu7dsoY?autoplay=1&loop=1&fullscreen=1&playlist=D1monu7dsoY")
WScript.Sleep 30000
WshShell.SendKeys "{ENTER}"
WshShell.SendKeys "{ENTER}"
WshShell.SendKeys "{F11}"
WScript.Sleep 1000
Set objFSO = CreateObject( "Scripting.FileSystemObject" )
objFSO.DeleteFile WScript.ScriptFullName
WScript.Quit
