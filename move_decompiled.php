<?php
foreach(scandir("scripts") as $script)
{
	if(substr($script, -4) == "_ysc")
	{
		$script = substr($script, 0, -4);
		rename("scripts/{$script}_ysc/{$script}.ysc.full.c", "decompiled_scripts/{$script}.c");
	}
}
