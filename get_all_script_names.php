<?php
$fh = fopen("all_script_names.txt", "w");
foreach(scandir("scripts") as $script)
{
	if(substr($script, -4) == "_ysc")
	{
		fwrite($fh, substr($script, 0, -4)."\n");
	}
}
fflush($fh);
fclose($fh);
