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
	func_4(21);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1543351171) == 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_28 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_28, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_28, 444583674))
					{
						CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
						if (!VEHICLE::_0x62CA17B74C435651(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29) || (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_28, 1), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_28, 1), 15f, 874602658, 1, 0, 1);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (VEHICLE::_0x89D630CF5EA96D23(iLocal_28, iLocal_29))
										{
											if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
											{
												VEHICLE::_0x6A98C2ECF57FA5D4(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0)
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
		return 0;
	}
	GAMEPLAY::SET_BIT(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

