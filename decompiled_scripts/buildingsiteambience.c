void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	while (!AUDIO::LOAD_STREAM("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::SPECIAL_FRONTEND_EQUAL(-147f, -1005f, 28f);
	while (func_1(70))
	{
		SYSTEM::WAIT(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_2(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	GAMEPLAY::SET_BIT(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_3()
{
	AUDIO::STOP_STREAM();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_4(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

