<?php
$proc_limit = 8;


$cls = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
$descriptorspec = array(
	0 => array("pipe", "r"),
	1 => array("pipe", "w"),
	2 => array("pipe", "w"),
);
$total_scripts = 0;
$scripts_to_decompile = [];
$procs = [];
$last_out = "";

foreach(scandir("scripts") as $script)
{
	if(substr($script, -4) == "_ysc")
	{
		$scripts_to_decompile[substr($script, 0, -4)] = true;
		$total_scripts++;
	}
}

function manageprocs()
{
	global $cls, $total_scripts, $scripts_to_decompile, $procs, $last_out;
	$script_names = [];
	foreach($procs as $script => $proc)
	{
		if (proc_get_status($proc)["running"])
		{
			array_push($script_names, $script);
		}
		else
		{
			proc_close($proc);
			unset($scripts_to_decompile[$script]);
			unset($procs[$script]);
		}
	}
	$out = "Decompiling: ".join(", ", $script_names)."\nRemaining: ".count($scripts_to_decompile)."/".$total_scripts;
	if ($out != $last_out)
	{
		$last_out = $out;
		echo $cls.$out;
	}
}

foreach($scripts_to_decompile as $script => $_)
{
	$proc = proc_open("decompiler.exe ".escapeshellarg("scripts\\{$script}_ysc\\$script.ysc.full"), $descriptorspec, $pipes);
	if (!is_resource($proc))
	{
		die("Failed to open process for $script.\n");
	}
	$procs[$script] = $proc;
	manageprocs();
	if(count($procs) > $proc_limit)
	{
		do
		{
			usleep(50000);
			manageprocs();
		}
		while(count($procs) > $proc_limit);
	}
}

while(count($procs) > 0)
{
	manageprocs();
	usleep(50000);
}

echo $cls."All done. :D\n";
