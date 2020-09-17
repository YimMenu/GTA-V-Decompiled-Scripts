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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = -1622245081;
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0] };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1006508663) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(131838674) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &ScriptParam_0, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((((func_8(PLAYER::PLAYER_ID(), 1, 0) || func_7()) || !func_6(PLAYER::PLAYER_ID())) || func_5()) || func_4(PLAYER::PLAYER_ID())) || func_2(PLAYER::PLAYER_ID()))
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		SYSTEM::WAIT(0);
	}
	if (SYSTEM::VDIST2(Var3, func_1(157)) < SYSTEM::VDIST2(Var3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = MISC::GET_HASH_KEY(sVar2);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar1) == 0)
	{
		SCRIPT::REQUEST_SCRIPT(sVar2);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			SCRIPT::REQUEST_SCRIPT(sVar2);
			SYSTEM::WAIT(0);
			if (MISC::GET_GAME_TIMER() > iVar0 + 20000)
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			SYSTEM::START_NEW_SCRIPT(sVar2, 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar2);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

Vector3 func_1(int iParam0)
{
	iVar0 = iParam0;
	return Global_31146[iVar0][0];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_393.f_2, 16);
	}
	return 0;
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 29);
	}
	return 0;
}

var func_5()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

bool func_6(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_142, 6);
}

int func_7()
{
	iVar0 = Global_2439138;
	if (MISC::IS_BIT_SET(Global_1627020[iVar0].f_14, 0) && Global_1627020[iVar0].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_9(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)
{
	return func_10(iParam0);
}

var func_10(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_11(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

