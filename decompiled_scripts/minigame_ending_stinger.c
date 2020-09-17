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
	iVar0 = -1;
	bVar1 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_5();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
				
				default:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = GAMEPLAY::GET_GAME_TIMER();
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iVar0 + 8000)
		{
			func_5();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_2(int iParam0)
{
	if (func_4(iParam0))
	{
		return func_3(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_3(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_4(int iParam0)
{
	return iParam0 < 3;
}

void func_5()
{
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
}

