#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	int iScriptParam_0 = 0;
#endregion

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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_1391771, 1))
		{
			func_29();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
			func_26(0, -1, 0);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
			iLocal_22 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_29();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_22 == 1)
		{
			if (func_14())
			{
				func_29();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_0))
						{
							Local_19 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_0, 0) && ENTITY::IS_ENTITY_VISIBLE(iScriptParam_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_29();
			}
		}
		else
		{
			func_29();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	MISC::SET_BIT(&iVar2, 3);
	MISC::SET_BIT(&iVar2, 4);
	STREAMING::REQUEST_MODEL(iVar0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_2(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1.2f, 1.5f), iVar2, iVar3, false, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	struct<5> Var0;
	
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar5 = func_9(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_4(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::_CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_13 = NETWORK::_NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/] = { Var6 };
	Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1649982[iVar11 /*256*/].f_94.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2421635.f_2386[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1649982[iParam0 /*256*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2421635.f_2386[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30416;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	var uVar0;
	
	func_22(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_31345;
}

bool func_18()
{
	return Global_2453009.f_698;
}

int func_19(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2463497;
}

bool func_21()
{
	return Global_2453009.f_693;
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_23(iVar0);
					break;
				
				case -1320260596:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_25(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_24(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_24(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
		if (!func_27())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_28();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_28();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_27()
{
	return Global_1312878;
}

void func_28()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_29()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

