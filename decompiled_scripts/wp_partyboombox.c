void __EntryFunction__()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1821484484) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (CLOCK::GET_CLOCK_HOURS() >= 22 || CLOCK::GET_CLOCK_HOURS() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!STREAMING::IS_IPL_ACTIVE("ID2_21_G_Night"))
				{
					STREAMING::REQUEST_IPL("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (STREAMING::IS_IPL_ACTIVE("ID2_21_G_Night"))
	{
		STREAMING::REMOVE_IPL("ID2_21_G_Night");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

