void __EntryFunction__()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

