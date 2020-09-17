<?php
foreach(scandir("scripts") as $script)
{
	if(substr($script, -4) == "_ysc")
	{
		$script = substr($script, 0, -4);
		$dest = "decompiled_scripts/{$script}.c";
		if(is_file($dest))
		{
			unlink($dest);
		}
		rename("scripts/{$script}_ysc/{$script}.ysc.full.c", $dest);
	}
}
