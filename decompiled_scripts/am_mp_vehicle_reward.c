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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<2> Local_63[32];
	struct<46> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<320> Local_65 = { 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_539();
	}
	else
	{
		func_537();
	}
	while (true)
	{
		func_536();
		if (func_527())
		{
			func_537();
		}
		if (func_526())
		{
			func_537();
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	switch (Local_64.f_45)
	{
		case 0:
			if (func_522() && !func_521())
			{
				func_519(&Local_64, 1);
			}
			break;
		
		case 1:
			func_373();
			break;
		
		case 2:
			func_360();
			break;
		
		case 3:
			func_358();
			break;
		
		case 4:
			func_43();
			break;
		
		case 5:
			func_17();
			break;
	}
	func_7();
	func_3();
}

void func_3()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false))
	{
		if (!func_6(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), 1))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1);
				}
			}
			else if (func_4(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
				{
					VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1);
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), true, true);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1);
				}
			}
		}
	}
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_5(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(int iParam0)
{
	return (((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("cargobob4"));
}

int func_6(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_7()
{
	func_16();
	func_8();
	if (Local_64.f_8 >= 32)
	{
		Local_64.f_8 = 0;
	}
}

void func_8()
{
	int iVar0;
	
	if (Local_64.f_8 != -1)
	{
		if (func_14())
		{
			if (((ENTITY::DOES_ENTITY_EXIST(Local_64.f_11[Local_64.f_8]) && (!ENTITY::IS_ENTITY_DEAD(Local_64.f_11[Local_64.f_8], false) || ENTITY::IS_ENTITY_IN_WATER(Local_64.f_11[Local_64.f_8]))) && func_10(Local_64.f_11[Local_64.f_8], 1, 0, 0, 0, 0, 1, 0, 1)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_64.f_11[Local_64.f_8], false))
			{
				iVar0 = Local_64.f_11[Local_64.f_8];
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (func_9(iVar0, &(Local_64.f_9)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::_0xCFD778E7904C255E(iVar0);
						}
						NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
		}
	}
}

int func_9(int iParam0, var uParam1)
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

int func_10(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_13(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_12()) && func_11(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	return -1;
}

int func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_14()
{
	if (!func_11(Local_64.f_8, 0, 1))
	{
		return 1;
	}
	if (func_15(Local_64.f_11[Local_64.f_8]) && ENTITY::IS_ENTITY_IN_WATER(Local_64.f_11[Local_64.f_8]))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_16()
{
	if (Local_64.f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[Local_64.f_8 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[Local_64.f_8 /*2*/].f_1), false))
		{
			Local_64.f_11[Local_64.f_8] = NETWORK::NET_TO_VEH(Local_63[Local_64.f_8 /*2*/].f_1);
		}
	}
}

void func_17()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_64, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_42(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_64.f_44))
					{
						HUD::REMOVE_BLIP(&(Local_64.f_44));
					}
					Local_64 = 0;
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
					func_25();
					func_519(&Local_64, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
				}
			}
		}
	}
	else
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false) || ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_64.f_44))
				{
					HUD::REMOVE_BLIP(&(Local_64.f_44));
				}
			}
		}
		Local_64 = 0;
		func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_25();
		func_519(&Local_64, 0);
	}
	if (func_24())
	{
		if (Local_64.f_4 != 0)
		{
			if (Local_64.f_4 == 1)
			{
				func_18(func_22());
			}
			Local_64.f_4 = 0;
		}
	}
	Local_64.f_5 = 0;
	Local_64.f_6 = 0;
	Local_64.f_7 = 0;
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_19(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_19(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_20(&(uParam0->f_14));
	func_20(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_20(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23(iVar0) != 2147483647)
		{
			if (func_21(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_23(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_24()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_25()
{
	int iVar0;
	
	Local_64.f_3 = 0;
	Local_64.f_2 = 0;
	Local_65.f_314 = 0;
	Local_65.f_317 = 0;
	Local_65.f_311 = 0;
	Local_65.f_312 = 0;
	Local_65.f_309 = 0;
	Local_65.f_319 = 0;
	Local_65.f_310 = 0;
	Local_65.f_313 = 0;
	iVar0 = 0;
	while (iVar0 <= 306)
	{
		Local_65.f_1[iVar0] = 0;
		iVar0++;
	}
	Local_65 = 0;
	func_26(&(Local_65.f_315));
}

void func_26(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_27(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_41())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_39())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_36(PLAYER::PLAYER_ID(), 0) && !func_35()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2425662[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_32(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_31(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_30();
					func_29();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_31(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
						}
					}
					if (func_28(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_28(int iParam0)
{
	return iParam0 == 17;
}

void func_29()
{
	struct<3> Var0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_30()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_34();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_36(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_33(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_33(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_34()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_35()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_38()
{
	return Global_1312745;
}

int func_39()
{
	if (func_40() == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	return Global_1312467.f_18;
}

int func_41()
{
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_43()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_519(&Local_64, 5);
		return;
	}
	if (iVar0 != NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		return;
	}
	if (func_15(iVar0) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_519(&Local_64, 5);
		return;
	}
	if (func_52(iVar0, &Local_65, &(Local_64.f_4), &(Local_64.f_5), &(Local_64.f_6), &(Local_64.f_7), 0, 1, 0, 0))
	{
		if (Local_64.f_7 == 3)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_519(&Local_64, 5);
		}
		else
		{
			func_50(1);
			MISC::SET_BIT(&Local_64, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
			func_47(229, 1, -1, 1);
			func_44(1849420593, 10, 0);
			func_519(&Local_64, 5);
		}
	}
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_46(iParam1, iParam2))
	{
		iVar0 = func_45();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_45()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_46(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_47(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_49())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_48(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return 1;
	return 0;
}

void func_50(int iParam0)
{
	Global_2439138.f_502.f_12 = iParam0;
	if (func_51(&(Global_2439138.f_502.f_38)))
	{
		Global_2439138.f_502.f_40 = 0;
		func_26(&(Global_2439138.f_502.f_38));
	}
}

bool func_51(var uParam0)
{
	return uParam0->f_1;
}

int func_52(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_357(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_349(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_348(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_340(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!MISC::IS_BIT_SET(uParam1->f_314, 7))
					{
						if (func_206(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !func_205())
						{
							if (PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::CLEAR_BIT(&(uParam1->f_314), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2, 202) || func_204())
							{
								MISC::CLEAR_BIT(&(uParam1->f_314), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_314), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_203(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (func_202())
				{
					iVar5 = 0;
					while (iVar5 < 307)
					{
						if (func_198(iVar5))
						{
							bVar2 = true;
							iVar5 = 308;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_204())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323615[0 /*141*/].f_102, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_204())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_15(iParam0))
			{
				if (func_24())
				{
					if (func_141(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_137(*uParam4, *iParam3, -1);
							}
							if (!func_357(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								func_132(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
							}
							func_93(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
							func_53(iParam0, *iParam3);
							func_44(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_137(*uParam4, *iParam3, -1);
					}
					if (!func_357(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						func_132(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
					}
					func_93(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
					func_53(iParam0, *iParam3);
					func_44(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_53(int iParam0, int iParam1)
{
	func_92(iParam0);
	func_54(iParam1);
}

void func_54(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 307)
	{
		MISC::SET_BIT(&(Global_1323615[iParam0 /*141*/].f_102), 2);
		func_47(101, 1, -1, 1);
		func_70(iParam0, &(Global_1323615[iParam0 /*141*/]), 1, -1, 0, 0);
		if (!Global_1315802)
		{
			func_55(91, 3, 1);
			Global_1315802 = 1;
		}
		else
		{
			func_55(91, 3, 0);
		}
	}
}

void func_55(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_62();
		if (iParam1 == 4)
		{
			func_61(iParam0, 0, 1);
			func_61(iParam0, 1, 1);
			func_61(iParam0, 2, 1);
			func_60(iParam0, 0, 1);
			func_60(iParam0, 1, 1);
			func_60(iParam0, 2, 1);
		}
		else
		{
			if (func_59(iParam0, iParam1) == 1 && func_58(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_61(iParam0, iVar0, 1);
			func_60(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_57(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_57(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_56();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_57(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_56();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_57(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_56();
			}
		}
	}
}

void func_56()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7356, 0);
}

struct<4> func_57(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_59(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_61(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_62()
{
	if (func_69(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_63();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_63()
{
	func_64();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_64()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_67(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_66(PLAYER::PLAYER_PED_ID());
			if (func_65(iVar0) && (!func_69(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_65(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_65(int iParam0)
{
	return iParam0 < 3;
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_67(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_67(int iParam0)
{
	if (func_65(iParam0))
	{
		return func_68(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_68(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_69(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_70(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_91() /*10930*/].f_6174.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_90(1411, iParam0);
	func_89(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_90(1412, iParam0);
	func_89(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_88(iParam0))
	{
	}
	else
	{
		iVar1 = func_90(1413, iParam0);
		func_89(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_90(1414, iParam0) + iVar0);
				func_89(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_87(iParam0) + (iVar0 - 25));
				func_89(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_90(1439, iParam0) + iVar0);
			func_89(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_90(1441, iParam0);
	func_89(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_90(1442, iParam0);
	func_89(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_90(1443, iParam0);
	func_89(iVar1, uParam1->f_64, iParam3, 1);
	if (func_88(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_90(1444, iParam0);
		func_89(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_90(1445, iParam0);
	func_89(iVar1, uParam1->f_67, iParam3, 1);
	if (func_88(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_90(1446, iParam0);
		func_89(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_90(1447, iParam0);
	func_89(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_90(1448, iParam0);
	func_89(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_90(1449, iParam0);
	func_89(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_90(1450, iParam0);
	func_89(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_90(1451, iParam0);
	func_89(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_90(1452, iParam0);
	func_89(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_90(1453, iParam0);
	func_89(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_90(1454, iParam0);
	func_89(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_90(1455, iParam0);
	func_89(iVar1, uParam1->f_8, iParam3, 1);
	if (func_88(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_90(3880, iParam0);
		func_89(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_90(3881, iParam0);
		func_89(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_90(3882, iParam0);
		func_89(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_86(iParam0);
		func_89(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_85(iParam0);
		func_89(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_74(iParam0);
		func_89(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_91() /*10930*/].f_6174.f_1274;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_73(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_73(func_72(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_73(func_72(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_73(func_72(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_73(func_72(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_73(func_72(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_73(func_72(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_88(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_71(func_72(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_71(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_48(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case joaat("MPSV_LP0_31"):
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("MPSV_LP0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("MPSV_LP0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("MPSV_LP0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("MPSV_LP0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("MPSV_LP0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("MPSV_LP0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_48(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_74(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_75(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_84(iParam0);
		return func_83(iVar0);
	}
	return (func_76(iParam0, -1) * iParam0 + 1);
}

int func_76(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_79(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_78(iParam1))
			{
				return 0;
			}
			else if (func_77(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_80(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_80(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_80(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_12())
	{
		if (!func_82(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (MISC::IS_BIT_SET(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_81(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 24);
}

int func_81(int iParam0)
{
	if (iParam0 != func_12())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_12())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return 0;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_84(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_85(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_75(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_75(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_75(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_38();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_75(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_75(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_75(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_75(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

int func_91()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_130();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 12);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 15);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 2);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 8);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 9);
			func_128();
			func_127(iParam1, 1);
			Global_1681926 = 1;
		}
		func_97(iParam0, &(Global_1323615[iParam1 /*141*/]), bParam5);
		Global_1323615[iParam1 /*141*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 1);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 6);
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 0);
		}
		if (bParam4)
		{
			func_96(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 15);
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 2);
		}
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 27);
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (MISC::IS_BIT_SET(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_95(&iParam0, &(Global_1323615[iParam1 /*141*/].f_9), &(Global_1323615[iParam1 /*141*/].f_59));
			if (func_94(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2097152[func_91() /*10930*/].f_6086.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 25);
				MISC::CLEAR_BIT(&(Global_1323615[iParam1 /*141*/].f_102), 26);
			}
		}
		Global_2097152[func_91() /*10930*/].f_6174.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_70(iParam1, &(Global_1323615[iParam1 /*141*/]), 0, iParam9, 0, 0);
	}
}

bool func_94(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_95(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_96(int iParam0)
{
	Global_2097152[func_91() /*10930*/].f_6174.f_2 = iParam0;
}

void func_97(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_126(uParam1);
	if (bParam2)
	{
		uParam1->f_102 = 0;
		uParam1->f_104 = 0;
		StringCopy(&(uParam1->f_105), "", 64);
		StringCopy(&(uParam1->f_121), "", 64);
		uParam1->f_139 = 0;
		uParam1->f_137 = -1;
		uParam1->f_138 = -1;
		uParam1->f_140 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_10616)
		{
			MISC::SET_BIT(&(uParam1->f_102), 22);
		}
	}
	if (func_125(iParam0, 0))
	{
		func_124();
		MISC::SET_BIT(&(uParam1->f_102), 3);
	}
	func_100(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_102), 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam1->f_102, 8))
	{
		if (!func_98(iParam0))
		{
		}
	}
	else if (func_98(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_102), 8);
		MISC::SET_BIT(&(uParam1->f_102), 9);
	}
}

int func_98(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_99(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return MISC::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_100(int iParam0, var uParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_120(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (MISC::IS_BIT_SET(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_98(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_118(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_108(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_12())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_107(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_101(func_104(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_103(iParam0);
	func_102(iVar1, &iVar0);
	return iVar0;
}

bool func_102(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_105()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

int func_105()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_106() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_106()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_107(int iParam0)
{
	if (Global_2537071.f_296 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_117(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_116(iParam0);
		}
		else if (func_115(iParam0, 1))
		{
			return func_114(iParam0, 1, 0);
		}
		else if (func_113(iParam0, 1))
		{
			return func_112(iParam0, 1, 0);
		}
		else if (func_111(iParam0, 1))
		{
			*uParam1 = 2;
			return func_109(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_110(iVar0, 0, 1, 0);
}

int func_110(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_11(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_11(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_12();
}

int func_111(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_112(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_113(iParam0, 1))
	{
		return func_12();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_110(iVar0, 0, bParam1, iParam2);
	}
	return func_12();
}

int func_113(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_115(iParam0, 1))
	{
		return func_12();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_110(iVar0, 0, bParam1, iParam2);
	}
	return func_12();
}

int func_115(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!func_117(iParam0, 1))
	{
		return func_12();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_110(iVar0, 0, 1, 0);
}

int func_117(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_119(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_119(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!MISC::IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_120(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_123(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_122(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_95(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_121(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_123(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (MISC::IS_BIT_SET(Global_1323615[iVar0 /*141*/].f_102, 3))
		{
			MISC::CLEAR_BIT(&(Global_1323615[iVar0 /*141*/].f_102), 3);
		}
		iVar0++;
	}
}

int func_125(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_126(var uParam0)
{
	func_123(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_127(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2537071.f_2244[iVar0 /*44*/].f_40 == iParam0)
			{
				func_127(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2537071.f_2244[iParam0 /*44*/]), "", 24);
		Global_2537071.f_2244[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2537071.f_2244[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2537071.f_2244[iParam0 /*44*/].f_23), "", 64);
		Global_2537071.f_2244[iParam0 /*44*/].f_39 = -1;
		Global_2537071.f_2244[iParam0 /*44*/].f_40 = -1;
		func_26(&(Global_2537071.f_2244[iParam0 /*44*/].f_41));
		Global_2537071.f_2244[iParam0 /*44*/].f_43 = 0;
	}
}

void func_128()
{
	func_129(10);
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1574577.f_3[iVar0]), iVar1);
}

void func_130()
{
	Global_2439138.f_502.f_50 = 0;
	func_131(25);
	func_131(24);
}

void func_131(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

void func_132(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_136() < 0 && Global_1687528)
	{
		return;
	}
	if (func_135(35))
	{
		bParam0 = true;
	}
	if (MISC::IS_BIT_SET(Global_2439138.f_502.f_44, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_134(2);
	}
	else
	{
		func_134(1);
	}
	if (bParam1)
	{
		func_134(11);
	}
	if (bParam2)
	{
		func_134(32);
		if (bParam3)
		{
			if (func_136() >= 0 && MISC::IS_BIT_SET(Global_1323615[func_136() /*141*/].f_102, 0))
			{
				func_134(33);
			}
		}
		else
		{
			func_131(33);
		}
		if (func_136() >= 0)
		{
			if (func_133(Global_1323615[func_136() /*141*/].f_66))
			{
				func_134(40);
			}
		}
	}
	else if (bParam5)
	{
		func_134(37);
	}
	if (bParam4)
	{
		func_134(36);
	}
	if (func_135(36))
	{
		if (func_135(2))
		{
			func_131(36);
		}
	}
	if (bParam6)
	{
		func_134(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2537071.f_389 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_133(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

bool func_135(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2439138.f_502.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2439138.f_502.f_2, (iParam0 - 32));
}

int func_136()
{
	if (Global_2097152[func_91() /*10930*/].f_6174.f_2 >= 307)
	{
		Global_2097152[func_91() /*10930*/].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_91() /*10930*/].f_6174.f_2;
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_138(iParam0, iParam1, iParam2);
	if (iParam0 >= 307)
	{
		return;
	}
	if (iParam2 == func_38() || iParam2 == -1)
	{
		Global_1671199[iParam0] = iParam1;
	}
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_89(func_140(iParam0), iParam1, iParam2, 1);
		func_89(func_139(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_89(func_140(iParam0), 255, iParam2, 1);
		func_89(func_139(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_139(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	return (24625 + iParam0);
}

int func_140(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	return (4036 + iParam0);
}

bool func_141(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_197() && Global_1694820)
			{
				return 0;
			}
			iVar0 = func_196(iParam1);
			iVar1 = func_194(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (func_190(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_190(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_149(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_144())
			{
			}
			else
			{
				*uParam2 = 3;
				func_18(func_22());
			}
			break;
		
		case 1:
			if (func_22() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_143(func_22()))
			{
				if (func_142(func_22()) == 2)
				{
					*uParam2 = 2;
					func_18(func_22());
				}
				else
				{
					*uParam2 = 3;
					func_18(func_22());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_144()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_22();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_148(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_23(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_145(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_145(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_147(Var0.f_1);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_146();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_146()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_147(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_189(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4268015 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_188(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_187(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_184(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_185(iVar0)))
			{
				return 0;
			}
			if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_184(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_185(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = func_182(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_181(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_177(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_176(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_175(iParam1);
		if (bVar11)
		{
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_173(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_173(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_172(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_170(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_171(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_169(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_169(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_167(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_174(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_174(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_174(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_174(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_174(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_187(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_166(iVar9);
		if (!func_174(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_165(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_184(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_185(iVar0)))
		{
			return 0;
		}
		if (!func_186(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_184(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_185(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_162(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_161(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_160(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_159(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_158(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_104(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_158(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_174(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_157(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_174(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar14, func_157(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_156(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_155(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_154(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_153(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_102(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_152(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_153(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_151(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_150(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_150(int iParam0, char* sParam1)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_151(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_153(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_155(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_156(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_158(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_164())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_163())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_163()
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_164()
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_165(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_167(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_168(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_168(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_170(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_171(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
		
		case -443787204:
			return 53;
			break;
		
		case -882105348:
			return 54;
			break;
		
		case -920707230:
			return 55;
			break;
		
		case 246182814:
			return 56;
			break;
		
		case 1804608241:
			return 57;
			break;
		
		case -1496922658:
			return 58;
			break;
	}
	return 0;
}

int func_173(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4268344[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_189(iParam0);
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_180(iParam0))
	{
		return 33;
	}
	else if (func_179(iParam0))
	{
		return 34;
	}
	if (func_178(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
			return 1;
			break;
	}
	return 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_178(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_180(iParam0))
	{
		return 33;
	}
	else if (func_179(iParam0))
	{
		return 34;
	}
	else if (func_178(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_183(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
			return 3;
			break;
	}
	return 0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
			return 1;
			break;
	}
	return 0;
}

int func_184(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_185(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_186(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_190(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_187(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_188(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 3;
			break;
	}
	if (func_178(iParam0))
	{
		return 3;
	}
	return func_182(iParam0);
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_22();
	if (iVar1 == -1)
	{
		if (!func_192(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_191(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4263954[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_24())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_193(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_193(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_24())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = uParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_145(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_194(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_182(iParam0);
	StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
	if (bParam1)
	{
		func_195(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_195(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return MISC::GET_HASH_KEY(&sVar2);
}

void func_195(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_196(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_197()
{
	if (((func_22() == -1 && Global_2513435 == -1) && Global_2513422 == -1) && Global_2513423 != 2)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	if (func_199(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 6);
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	func_201(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 307) && !func_200(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

void func_201(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 307)
		{
			if (iParam0 == (Global_1671199[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_202()
{
	return Global_2439138.f_502.f_41;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_204()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_205()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_206(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_11(PLAYER::PLAYER_ID(), 1, 1)) || func_339()) || Global_1312791) || Global_2451426.f_3473.f_32)
	{
		*iParam1 = -1;
		func_336(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_335();
	func_334();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, true);
		PAD::ENABLE_CONTROL_ACTION(2, 238, true);
		PAD::ENABLE_CONTROL_ACTION(2, 242, true);
		PAD::ENABLE_CONTROL_ACTION(2, 241, true);
		PAD::DISABLE_CONTROL_ACTION(2, 2, true);
		PAD::DISABLE_CONTROL_ACTION(2, 1, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_331(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_314), 1);
	if (func_329(0, iParam5, 0))
	{
		if (func_11(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_314, 0))
			{
				func_273(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_314), 0);
				func_262(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_222(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_221(8, -1)) && !Global_2450632.f_684.f_5)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (func_220())
					{
						if (uParam0->f_310 == 0)
						{
							if (Global_4268497 != uParam0->f_311)
							{
								uParam0->f_311 = Global_4268497;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4268497 != uParam0->f_312)
						{
							uParam0->f_312 = Global_4268497;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_219()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_310 == 0)
						{
							uParam0->f_319 = 0;
							if (uParam0->f_311 >= 0 && uParam0->f_1[uParam0->f_311] >= 0)
							{
								*uParam2 = func_340(1, 0, iParam3, func_215(uParam0->f_1[uParam0->f_311], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_214(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_348(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_314), 0);
									func_336(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_311 < 0)
							{
							}
							if (uParam0->f_311 < 0)
							{
								uParam0->f_319 = 0;
							}
							else
							{
								uParam0->f_319 = uParam0->f_1[uParam0->f_311];
							}
							uParam0->f_310 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							bVar1 = true;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && !MISC::IS_BIT_SET(uParam0->f_309, uParam0->f_312))
						{
							func_212(-1);
							func_211(176, "BB_YES", -1);
							func_211(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_317), 2);
						}
						else if (uParam0->f_312 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_312];
							func_214(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_348(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_314), 0);
								func_336(uParam0, iParam5, 0);
							}
							else
							{
								func_336(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_317), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 1))
				{
					if ((((func_210() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (func_204() && Global_4268497 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_310 == 0)
						{
							func_262(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_222(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_336(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_314), 7);
							return 1;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
						{
							uParam0->f_310 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
						}
						else
						{
							func_212(-1);
							func_211(176, "BB_SELECT", -1);
							func_211(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_317), 2);
						}
						MISC::SET_BIT(&(uParam0->f_317), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !func_210())
				{
					MISC::CLEAR_BIT(&(uParam0->f_317), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_317, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311 = (uParam0->f_311 - 1);
							}
							else
							{
								uParam0->f_312 = (uParam0->f_312 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_317), 4);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_26(&(uParam0->f_315));
						}
					}
					else if (func_207(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_317, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311++;
							}
							else
							{
								uParam0->f_312++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_317), 5);
							MISC::CLEAR_BIT(&(uParam0->f_314), 0);
							func_26(&(uParam0->f_315));
						}
					}
					else if (func_207(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_317), 5);
					}
				}
				if (uParam0->f_310 == 0)
				{
					if (uParam0->f_311 >= uParam0->f_313)
					{
						uParam0->f_311 = 0;
					}
					if (uParam0->f_311 < 0)
					{
						uParam0->f_311 = (uParam0->f_313 - 1);
					}
				}
				else
				{
					if (uParam0->f_312 >= uParam0->f_313)
					{
						uParam0->f_312 = 0;
					}
					if (uParam0->f_312 < 0)
					{
						uParam0->f_312 = (uParam0->f_313 - 1);
					}
				}
				func_262(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!MISC::IS_BIT_SET(uParam0->f_317, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_222(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_207(var uParam0, int iParam1)
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_208(&(uParam0->f_315), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_209(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_210()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_213(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_213(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22350.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22350.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22350.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_38();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_84(iParam0);
		if (iVar1 == 0 && func_218(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_217(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_216(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return 0;
}

bool func_217(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_218(7207, iParam0, 0) != 0;
}

int func_218(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_48(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_219()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4268497 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_221(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_222(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_213(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_260(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_258(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_22348;
	}
	else
	{
		fVar57 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar58, &iVar59);
		fVar61 = GRAPHICS::_GET_ASPECT_RATIO(false);
		if (func_257())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_257())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_253(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar63, func_252(29), 64);
					StringCopy(&cVar64, func_249(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_248(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_248(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_247();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_247();
					func_245((((Global_22347 + fParam5) - 0.00390625f) - func_246("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_247();
						func_245((((Global_22347 + fParam5) - 0.00390625f) - func_246("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22350.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, false);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_248(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_258(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_244(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_248(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_244(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_258(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_243(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4768), func_249(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_258(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_244(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_248(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_244(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_258(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_243(Global_4268421.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_252(Global_4268421.f_67), func_249(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_238(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar66 = (Global_22350.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22350.f_8409)
					{
						HUD::GET_HUD_COLOUR(Global_22350.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, false);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_258(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22350.f_5083[iVar69] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar69)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar69)] - Global_22350.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar42 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_258(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_258(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(26), func_249(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_258(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_258(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(27), func_249(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_235(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_258(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_258(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_243(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[(iVar22 + iVar28)]), func_249(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[(iVar22 + iVar28)]), func_249(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_234() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_236(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_258(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_258(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_243(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[(iVar22 + iVar14)]), func_249(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[(iVar22 + iVar14)]), func_249(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[(iVar22 + iVar14)]), func_249(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_235(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_258(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_258(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(26), func_249(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_258(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_258(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(27), func_249(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_233((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_235(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_258(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_258(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(26), func_249(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
										if (func_258(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_258(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_252(27), func_249(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
												}
											}
										}
									}
									func_236(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_232((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_258(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar42 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_258(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_258(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_243(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_252(26), func_249(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
													}
												}
											}
											if (func_258(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_258(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_243(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_252(27), func_249(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_258(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_243(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_252(Global_22350.f_4433[iVar22]), func_249(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_231(Global_22350.f_4433[iVar22])), (fVar37 * func_231(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_258(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar49;
	Global_22350.f_5878 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_224(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_223(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_223(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_224(int iParam0)
{
	if (func_230())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_229(0))
		{
			func_225(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_225(int iParam0)
{
	if (func_230())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_228())
		{
			func_227(1, 1);
		}
		else
		{
			func_227(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_226())
	{
		Global_19486.f_1 = 3;
	}
}

int func_226()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_227(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_229(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_228()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_229(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_230()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

float func_231(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_232(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_233(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_234()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_235(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_236(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_237(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_237(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_213(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_260(bParam4, bParam8))
	{
		return;
	}
	if (func_241())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_36(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_240(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_240(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_239(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_4769);
				func_240(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_239(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_239(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_240(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_241()
{
	struct<3> Var0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_242())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_242()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_244(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_245(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_246(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_247();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_247()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_248(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_249(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_251(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_250(&uVar1);
			}
		}
		else
		{
			return func_250(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_250(var uParam0)
{
	return uParam0;
}

struct<13> func_251(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_252(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_251(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_250(&uVar0);
		}
		else
		{
			return func_250(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_253(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_256(Global_22350.f_5218, 1);
	}
	else
	{
		func_256(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_255(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_258(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_254(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_254(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_255(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_236(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_257()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_252(iParam0), 64);
	StringCopy(&cVar1, func_249(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(false);
			if (func_257())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_257())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_259(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_259(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_259(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_260(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_221(8, -1) && func_261() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76882) || Global_22350.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_261()
{
	return Global_1312812;
}

void func_262(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2)
	{
		if (uParam0->f_310 == 0)
		{
			if (uParam0->f_1[uParam0->f_311] == 12)
			{
				if (!bParam4)
				{
					func_272("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_272("CAS_VEH_SELLV", 0, 0);
					func_271(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_272("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_272("CAS_VEH_SELLV", 0, 0);
				func_271(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_317, 2))
		{
			if (func_263(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_309, uParam0->f_312))
		{
			if (func_263(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				func_272("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_272("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_263(uParam0->f_1[uParam0->f_311], 0, -1, 0))
			{
				func_272("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_272("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_263(uParam0->f_1[uParam0->f_311], 0, -1, 1))
		{
			func_272("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_272("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_263(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (bParam1)
	{
		func_266(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_201(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_264(12) && iVar0 < func_75(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_84(iParam0);
		return func_265(iVar0);
	}
	return (func_76(iParam0, -1) * iParam0);
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

void func_266(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (iParam0 == (func_267(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_268(func_140(iParam0), iParam1, -1);
	iVar0 = (iVar0 + func_268(func_139(iParam0), iParam1, -1));
	return iVar0;
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	iVar1 = func_270(iParam0, iParam1);
	iVar2 = func_269(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

void func_271(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765 /*16*/]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_272(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = MISC::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_273(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	
	iVar0 = 0;
	func_328(0, 0);
	if (bParam2)
	{
		func_323(func_327(), 0);
	}
	func_322(1, 1, 0, 0, 0);
	func_321(1, 2, 1, 1, 1);
	func_320(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = func_188(iParam1);
	iVar11 = 1;
	switch (uParam0->f_310)
	{
		case 0:
			uParam0->f_319 = 0;
			func_319("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 25)
			{
				iVar3 = func_215(iVar1, -1);
				if ((iVar3 > 0 && func_318(iVar3)) && func_310(iVar1))
				{
					if (!func_308(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1049922[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, func_306(func_307(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, func_304(func_305(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, func_303(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, func_303(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, func_303(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, func_302(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, func_302(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, func_302(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME", 16);
						}
						if (!func_301())
						{
							if (!func_300() && !func_299(iVar3))
							{
								func_253(iVar0, &Var14, 0, 1, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								func_253(iVar0, &Var6, 0, 1, 0, 0);
							}
						}
						else
						{
							func_253(iVar0, "PIM_DNAME", 1, 1, 0, 0);
							func_298(HUD::_GET_LABEL_TEXT(&Var14), 0, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_218(5393, -1, 0) != 0 && func_268(15270, -1, -1) == 7) && !Global_262145.f_20609) && func_288(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_253(iVar0, func_287(0), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_286(0);
				iVar0++;
			}
			if (func_217(-1) && func_288(iParam1, 223))
			{
				func_253(iVar0, func_287(2), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_286(2);
				iVar0++;
			}
			uParam0->f_313 = iVar0;
			func_285(uParam0->f_311, 1, 1);
			break;
		
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_319("DEL_VEH_SEL3ac");
			}
			else
			{
				func_319("DEL_VEH_SEL3");
			}
			uParam0->f_309 = 0;
			iVar4 = func_264(uParam0->f_319);
			iVar5 = (10 + func_264(uParam0->f_319));
			if (uParam0->f_319 >= 25)
			{
				iVar10 = func_84(uParam0->f_319);
				iVar1 = 0;
				while (iVar1 < func_284(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (func_200(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!func_200(iVar8))
					{
						bVar2 = true;
					}
					if (!func_288(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_214(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1323615[iVar9 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323615[iVar9 /*141*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_283(&(Global_1323615[iVar9 /*141*/])))
							{
								iVar11++;
							}
							if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_279(-1, iVar8, 1) };
							if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_253(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_188(Global_1323615[iVar9 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_253(iVar0, &Var12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_275(&Var13, 0, 0, 1);
										}
										if (func_283(&(Global_1323615[iVar9 /*141*/])))
										{
											func_278("VEH_LIVERY", 0);
										}
										if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
										{
											func_278("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_253(iVar0, &Var12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_275(&Var13, 0, 0, 1);
										}
										if (func_283(&(Global_1323615[iVar9 /*141*/])))
										{
											func_278("VEH_LIVERY", 0);
										}
										if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
										{
											func_278("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_188(Global_1323615[iVar9 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_253(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_215(uParam0->f_319, -1);
				iVar1 = 0;
				while (iVar1 < func_76(uParam0->f_319, -1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1049922[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1049922[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && func_200(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_274(iVar8, iVar3, uParam0->f_319))
					{
						bVar2 = true;
					}
					if (!func_288(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_214(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1323615[iVar9 /*141*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1323615[iVar9 /*141*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_283(&(Global_1323615[iVar9 /*141*/])))
							{
								iVar11++;
							}
							if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_279(-1, iVar8, 1) };
							if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 1))
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_253(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_188(Global_1323615[iVar9 /*141*/].f_66))
								{
									if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_253(iVar0, &Var12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_275(&Var13, 0, 0, 1);
										}
										if (func_283(&(Global_1323615[iVar9 /*141*/])))
										{
											func_278("VEH_LIVERY", 0);
										}
										if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
										{
											func_278("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_253(iVar0, &Var12, iVar11, 1, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
										}
										else
										{
											func_275(&Var13, 0, 0, 1);
										}
										if (func_283(&(Global_1323615[iVar9 /*141*/])))
										{
											func_278("VEH_LIVERY", 0);
										}
										if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
										{
											func_278("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_188(Global_1323615[iVar9 /*141*/].f_66))
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar9 /*141*/].f_102, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_253(iVar0, &Var12, iVar11, 1, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_278(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1323615[iVar9 /*141*/].f_66), 0);
									}
									else
									{
										func_275(&Var13, 0, 0, 1);
									}
									if (func_283(&(Global_1323615[iVar9 /*141*/])))
									{
										func_278("VEH_LIVERY", 0);
									}
									if (func_282(Global_1323615[iVar9 /*141*/].f_66, Global_1323615[iVar9 /*141*/].f_77, Global_1323615[iVar9 /*141*/].f_9[10]) && func_281(Global_1323615[iVar9 /*141*/].f_66))
									{
										func_278("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_253(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_313 = iVar0;
			if (uParam0->f_312 >= uParam0->f_313)
			{
				uParam0->f_312 = 0;
			}
			func_285(uParam0->f_312, 1, 1);
			break;
	}
	func_212(-1);
	func_211(176, "BB_SELECT", -1);
	func_211(177, "BB_BACK", -1);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 126) && func_318(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_264(iParam2)) >= 0 && (iParam0 - func_264(iParam2)) < Global_1049922[iParam1 /*1951*/].f_33) && iParam0 < 307)
			{
				return 1;
			}
			if (Global_1049922[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_264(iParam2)))
			{
				return 1;
			}
			if ((Global_1049922[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_264(iParam2))) && iParam0 <= (11 + func_264(iParam2)))
			{
				return 1;
			}
			if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_77(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_264(iParam2)) && iParam0 <= (12 + func_264(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_264(iParam2)) && iParam0 < func_75(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_264(iParam2) && iParam0 < func_75(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_264(iParam2) && iParam0 < func_75(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_264(iParam2) && iParam0 < func_75(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_264(iParam2) && iParam0 < func_75(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_264(iParam2) && iParam0 < func_75(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_275(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221 /*16*/]), sParam0, 64);
	Global_22350.f_5221++;
	if (bParam3)
	{
		Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 9;
	}
	else
	{
		Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 7;
	}
	Global_22350.f_5743++;
	fVar0 = func_277();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_277();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_258(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_276();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_276()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_258(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_277()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_236(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_258(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_278(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam0, 24);
	Global_22350.f_5220++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 1;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_277();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_258(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_276();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

struct<16> func_279(int iParam0, int iParam1, bool bParam2)
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_280(iParam1) != -1)
		{
			Var0 = { Global_2097152[func_91() /*10930*/].f_5506.f_99[func_280(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2097152[func_91() /*10930*/].f_5506.f_99[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_280(int iParam0)
{
	int iVar0;
	
	func_201(Global_4010525, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_339())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!MISC::IS_BIT_SET(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!MISC::IS_BIT_SET(iParam1, 1) && !MISC::IS_BIT_SET(iParam1, 2)) && !MISC::IS_BIT_SET(iParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("coquette"):
			if (!MISC::IS_BIT_SET(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("mamba"):
			if (!MISC::IS_BIT_SET(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("pfister811"):
			if (!MISC::IS_BIT_SET(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("contender"):
		case joaat("kamacho"):
			if (!MISC::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("manana2"):
			if (MISC::IS_BIT_SET(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_283(var uParam0)
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_284(int iParam0)
{
	return (func_83(iParam0) - func_265(iParam0));
}

void func_285(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

int func_286(int iParam0)
{
	return (1000 + iParam0);
}

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		default:
	}
	return "";
}

int func_288(int iParam0, int iParam1)
{
	if (!func_297(iParam1) && !func_203(iParam0))
	{
		if (func_296(iParam0, 0))
		{
			if (iParam1 == func_295(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_294(iParam1))
		{
			return 0;
		}
	}
	if (func_188(iParam0))
	{
		if (!func_200(iParam1))
		{
			return 0;
		}
	}
	else if (func_200(iParam1))
	{
		return 0;
	}
	if (func_293(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_297(iParam1))
	{
		if (!func_203(iParam0))
		{
			return 0;
		}
		else if ((func_292(iParam0) + func_264(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_291(iParam1))
	{
		if (!func_161(iParam0))
		{
			return 0;
		}
	}
	else if (func_161(iParam0))
	{
		return 0;
	}
	if (!func_290(iParam1, 1))
	{
		if (func_289(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_290(int iParam0, bool bParam1)
{
	if (iParam0 >= func_264(18) && iParam0 < func_75(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	if (iParam0 >= func_264(12) && iParam0 < func_75(12))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_293(int iParam0)
{
	if (iParam0 >= func_264(6) && iParam0 < func_75(6))
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_264(11) && iParam0 < func_75(11))
	{
		return 1;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (func_203(iParam0))
	{
		return (func_292(iParam0) + func_264(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
		if (iParam0 == joaat("minitank"))
		{
			return 279;
		}
	}
	return -1;
}

int func_296(int iParam0, bool bParam1)
{
	if (func_203(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
			return 1;
			break;
	}
	if (((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	if (iParam0 == joaat("rcbandito"))
	{
		return 1;
	}
	if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (iParam0 >= func_264(11) && iParam0 < func_75(11))
	{
		return 1;
	}
	return 0;
}

void func_298(char* sParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221 /*16*/]), sParam0, 64);
	Global_22350.f_5221++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 5;
	Global_22350.f_5743++;
	fVar0 = func_277();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_277();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_258(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_276();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

int func_299(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_300()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_301()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_304(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_305(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271;
	}
	return 0;
}

char* func_306(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_307(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == joaat("minitank"))
	{
		return 0;
	}
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_203(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_161(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_309())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_292(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_309()
{
	return joaat("terbyte");
}

int func_310(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_311())
		{
			return 0;
		}
	}
	return 1;
}

bool func_311()
{
	return (func_314(0) && func_312(0));
}

bool func_312(bool bParam0)
{
	if (bParam0)
	{
		return MISC::IS_BIT_SET(func_218(8723, -1, 0), 4);
	}
	return func_313(PLAYER::PLAYER_ID());
}

int func_313(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1700796[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_314(bool bParam0)
{
	if (bParam0)
	{
		return func_315(27227, -1, -1);
	}
	if (PLAYER::PLAYER_ID() != func_12())
	{
		return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_393.f_1, 2);
	}
	return 0;
}

bool func_315(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar1 = func_317(iParam0, iParam1);
	iVar2 = func_316(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_316(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_319(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_323(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = func_326(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_324(1, sVar0, sVar0);
	}
}

void func_324(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_325(29, sParam1, sParam2);
}

void func_325(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

char* func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
			return "ShopUI_Title_GR_GunMod";
			break;
		
		case 47:
			return "ShopUI_Title_GR_GunMod";
		
		case 48:
			return "ShopUI_Title_GR_GunMod";
		
		case 49:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
			return "ShopUI_Title_Casino";
		
		case 51:
			return "ShopUI_Title_Casino";
		
		case 52:
			return "ShopUI_Title_GR_GunMod";
	}
	return "";
}

int func_327()
{
	return Global_98796.f_437;
}

void func_328(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_329(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_213(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_330(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_330(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_331(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4268497 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_333();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_332(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_332(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_248(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_332(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_248(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_248(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_333()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268492 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_334()
{
	Global_22211.f_6 = 1;
}

void func_335()
{
	Global_2537071.f_4532 = 0;
}

void func_336(var uParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_BIT_SET(uParam0->f_314, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_311 = 0;
	uParam0->f_313 = 0;
	uParam0->f_314 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_314), 7);
	}
	uParam0->f_317 = 0;
	func_337(1, iParam1);
}

void func_337(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_213(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_338(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_338(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_339()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

int func_340(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_10163)
	{
		if (bParam5)
		{
			return func_345(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_348(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_79(iParam3, 0, 0))
	{
		iParam3 = func_344(iParam3);
	}
	if (!func_203(iParam2) && func_296(iParam2, 0))
	{
		iVar6 = func_295(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_343(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_214(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (MISC::IS_BIT_SET(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1323615[iVar7 /*141*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_342(iVar1))
		{
		}
		else if (func_215(iVar1, iParam4) >= Global_1049922)
		{
			return -1;
		}
		else if (func_215(iVar1, iParam4) > 0 && func_215(iVar1, iParam4) <= 126)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_215(iVar1, iParam4))
			{
				iVar4 = Global_1049922[func_215(iVar1, iParam4) /*1951*/].f_33;
				if (func_215(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_215(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_215(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_215(iVar1, iParam4) == 119 || func_215(iVar1, iParam4) == 120) || func_215(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_215(iVar1, iParam4) == 122 || func_215(iVar1, iParam4) == 123) || func_215(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_215(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_215(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				if (func_188(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_264(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_274(iVar6, func_215(iVar1, iParam4), iVar1) && func_288(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_343(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_214(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1323615[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_274(iVar6, func_215(iVar1, iParam4), iVar1) && func_288(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_343(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_214(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1323615[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_274(iVar6, func_215(iVar1, iParam4), iVar1) && func_288(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_343(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_214(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
											if (MISC::IS_BIT_SET(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_274(iVar6, func_215(iVar1, iParam4), iVar1) && func_288(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_343(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_214(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
										if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_274(iVar6, func_215(iVar1, iParam4), iVar1) && func_288(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_343(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_214(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (MISC::IS_BIT_SET(iVar5, 0))
												{
													return iVar6;
												}
												else if (MISC::IS_BIT_SET(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (MISC::IS_BIT_SET(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1323615[iVar7 /*141*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 0))
										{
											return iVar6;
										}
										else if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 1))
										{
											return iVar6;
										}
									}
									else if (MISC::IS_BIT_SET(Global_1323615[iVar7 /*141*/].f_102, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if (((func_218(5393, iParam4, 0) != 0 && func_268(15270, iParam4, -1) == 7) && !Global_262145.f_20609) && func_288(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_341(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_217(iParam4) && func_288(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_341(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

int func_341(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_288(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_343(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_214(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_218(func_72(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_218(func_72(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1323615[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_288(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_343(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_214(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_218(func_72(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1323615[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_288(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_343(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_214(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_218(func_72(1, iVar1), iParam4, 0);
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_288(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_343(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_214(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_218(func_72(1, iVar1), iParam4, 0);
						if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_288(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_343(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_214(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_218(func_72(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_218(func_72(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (MISC::IS_BIT_SET(iVar0, 0))
								{
									return iParam0;
								}
								else if (MISC::IS_BIT_SET(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1323615[iVar1 /*141*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 0))
						{
							return iParam0;
						}
						else if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 1))
						{
							return iParam0;
						}
					}
					else if (MISC::IS_BIT_SET(Global_1323615[iVar1 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_311())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_343(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_267(iParam0, iParam2) - 1);
}

int func_344(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_345(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar6 = func_24();
	bVar6 = true;
	if (func_79(iParam3, 0, 0))
	{
		iParam3 = func_344(iParam3);
	}
	if (!func_203(iParam2) && func_296(iParam2, 0))
	{
		iVar7 = func_295(iParam2);
		return func_347(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if ((bVar6 || func_215(iVar1, iParam4) > 0) && !func_342(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_215(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_76(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049922[func_215(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_188(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_264(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_346(iParam2, iVar7))
							{
								if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_346(iParam2, iVar7))
							{
								if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_346(iParam2, iVar7))
								{
									iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
									if (MISC::IS_BIT_SET(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_346(iParam2, iVar7))
							{
								iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
								if (MISC::IS_BIT_SET(iVar5, 1) && !MISC::IS_BIT_SET(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_346(iParam2, iVar7))
							{
								if (func_218(func_72(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_218(func_72(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (MISC::IS_BIT_SET(iVar5, 0))
										{
											return iVar7;
										}
										else if (MISC::IS_BIT_SET(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (MISC::IS_BIT_SET(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_218(5393, iParam4, 0) != 0 && !Global_262145.f_20609) && func_288(iParam2, 156))
	{
		iVar7 = func_347(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_217(iParam4) && func_288(iParam2, 223))
	{
		iVar7 = func_347(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_346(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		if (func_296(iParam0, 0))
		{
			if (iParam1 == func_295(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_297(iParam1) && func_294(iParam1))
		{
			return 0;
		}
	}
	if (func_188(iParam0))
	{
		if (!func_88(iParam1))
		{
			return 0;
		}
	}
	else if (func_88(iParam1))
	{
		return 0;
	}
	if (func_291(iParam1))
	{
		if (!func_161(iParam0))
		{
			return 0;
		}
	}
	else if (func_161(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_347(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (iParam0 == 158 && iParam6)
	{
		if (func_346(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_218(func_72(4, iParam0), iParam5, 0) == joaat("hauler2") || func_218(func_72(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (func_218(func_72(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1323615[iParam0 /*141*/].f_66 == joaat("hauler2") || Global_1323615[iParam0 /*141*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1323615[iParam0 /*141*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_346(iParam3, iParam0))
				{
					if (func_218(func_72(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_218(func_72(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_346(iParam3, iParam0))
				{
					if (func_218(func_72(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_346(iParam3, iParam0))
					{
						iVar0 = func_218(func_72(1, iParam0), iParam5, 0);
						if (MISC::IS_BIT_SET(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_346(iParam3, iParam0))
				{
					iVar0 = func_218(func_72(1, iParam0), iParam5, 0);
					if (MISC::IS_BIT_SET(iVar0, 1) && !MISC::IS_BIT_SET(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_346(iParam3, iParam0))
				{
					if (func_218(func_72(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_218(func_72(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (MISC::IS_BIT_SET(iVar0, 0))
							{
								return iParam0;
							}
							else if (MISC::IS_BIT_SET(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (MISC::IS_BIT_SET(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_346(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_346(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_346(iParam3, iParam0))
					{
					}
					else if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
				}
				if (!func_346(iParam3, iParam0))
				{
				}
				else if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 2))
				{
					return iParam0;
				}
				else if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 1))
				{
				}
				break;
			
			case 2:
				if (!func_346(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0 /*141*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 0))
					{
						return iParam0;
					}
					else if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 1))
					{
						return iParam0;
					}
				}
				else if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_348(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = func_24();
	bVar5 = true;
	if (func_79(iParam3, 0, 0))
	{
		iParam3 = func_344(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_215(22, -1) > 0)
		{
			if (!func_311())
			{
				return -1;
			}
		}
	}
	if (!func_203(iParam2) && func_296(iParam2, 0))
	{
		iVar6 = func_295(iParam2);
		return func_347(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_342(iVar1))
		{
		}
		else if (!bVar5 && func_215(iVar1, iParam4) >= Global_1049922)
		{
			return -1;
		}
		else if (bVar5 || (func_215(iVar1, iParam4) > 0 && func_215(iVar1, iParam4) <= 126))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_215(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_76(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049922[func_215(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_188(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_264(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_346(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_346(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_346(iParam2, iVar6))
								{
								}
								else if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_346(iParam2, iVar6))
							{
							}
							else if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 2))
							{
								return iVar6;
							}
							else if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_346(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6 /*141*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 0))
								{
									return iVar6;
								}
								else if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 1))
								{
									return iVar6;
								}
							}
							else if (MISC::IS_BIT_SET(Global_1323615[iVar6 /*141*/].f_102, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_218(5393, iParam4, 0) != 0 && !Global_262145.f_20609) && func_288(iParam2, 156))
	{
		iVar6 = func_347(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_217(iParam4))
	{
		if (func_346(iParam2, 223))
		{
			iVar6 = func_347(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_349(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_215(0, -1) >= 1 && func_308(iParam0, 0))
	{
		if ((((((((((func_215(1, -1) >= 1 || (func_215(6, -1) >= 1 && func_308(iParam0, 6))) || func_215(8, -1) >= 1) || func_356()) || (func_354() && func_288(iParam0, 159))) || (func_352() && func_308(iParam0, 13))) || (func_350() && func_308(iParam0, 14))) || (func_217(-1) && iParam0 == joaat("oppressor2"))) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = func_215(0, -1);
		return;
	}
	else if (func_215(6, -1) >= 1 && func_308(iParam0, 6))
	{
		if ((((((((func_215(8, -1) >= 1 || func_356()) || (func_354() && func_288(iParam0, 159))) || (func_352() && func_308(iParam0, 13))) || (func_350() && func_308(iParam0, 14))) || (func_217(-1) && iParam0 == joaat("oppressor2"))) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = func_215(6, -1);
		return;
	}
	else if (func_215(8, -1) >= 1 && func_308(iParam0, 8))
	{
		if (((((((func_356() || (func_354() && func_288(iParam0, 159))) || (func_352() && func_308(iParam0, 13))) || (func_350() && func_308(iParam0, 14))) || (func_217(-1) && iParam0 == joaat("oppressor2"))) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = func_215(8, -1);
		return;
	}
	else if (func_356() && func_288(iParam0, 156))
	{
		if (((((((func_354() && func_288(iParam0, 159)) || (func_352() && func_308(iParam0, 13))) || (func_350() && func_308(iParam0, 14))) || (func_217(-1) && iParam0 == joaat("oppressor2"))) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_354() && func_288(iParam0, 159))
	{
		if ((((((func_352() && func_308(iParam0, 13)) || (func_350() && func_308(iParam0, 14))) || (func_217(-1) && iParam0 == joaat("oppressor2"))) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = func_215(12, -1);
		return;
	}
	else if (func_352() && func_308(iParam0, 13))
	{
		if ((((func_350() && func_308(iParam0, 14)) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		if (func_217(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_215(13, -1);
		return;
	}
	else if (func_350() && func_308(iParam0, 14))
	{
		if (((((func_350() && func_215(15, -1) >= 1) && func_308(iParam0, 15)) || (func_215(18, -1) >= 1 && func_308(iParam0, 18))) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		if (func_217(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_215(14, -1);
		return;
	}
	else if (func_217(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((func_215(18, -1) >= 1 && func_308(iParam0, 18)) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_215(18, -1) >= 1 && func_308(iParam0, 18))
	{
		if (((func_215(19, -1) >= 1 && func_308(iParam0, 18)) || (func_215(21, -1) >= 1 && func_308(iParam0, 21))) || ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311()))
		{
			return;
		}
		*iParam1 = func_215(18, -1);
		return;
	}
	else if (func_215(21, -1) >= 1 && func_308(iParam0, 21))
	{
		if ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311())
		{
			return;
		}
		*iParam1 = func_215(21, -1);
		return;
	}
	else if ((func_215(22, -1) >= 1 && func_308(iParam0, 22)) && func_311())
	{
		*iParam1 = func_215(22, -1);
		return;
	}
}

bool func_350()
{
	return func_351() != 0;
}

int func_351()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_322;
}

bool func_352()
{
	return func_353() != 0;
}

int func_353()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_271;
}

bool func_354()
{
	return func_355() != 0;
}

int func_355()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_264;
}

bool func_356()
{
	return func_218(5393, -1, 0) != 0;
}

int func_357(int iParam0, int iParam1)
{
	if (func_215(0, iParam1) != 0 && func_308(iParam0, 0))
	{
		return 1;
	}
	else if (func_215(6, iParam1) != 0 && func_308(iParam0, 6))
	{
		return 1;
	}
	else if (func_215(8, iParam1) != 0 && func_308(iParam0, 8))
	{
		return 1;
	}
	else if (func_215(11, iParam1) != 0 && func_308(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((func_218(5393, iParam1, 0) != 0 && func_268(15270, iParam1, -1) == 7) && !Global_262145.f_20609) && func_288(iParam0, 156))
	{
		return 1;
	}
	else if (func_215(12, iParam1) != 0 && func_308(iParam0, 12))
	{
		return 1;
	}
	else if (func_215(13, -1) != 0 && func_308(iParam0, 13))
	{
		return 1;
	}
	else if (func_215(15, iParam1) != 0 && func_308(iParam0, 15))
	{
		return 1;
	}
	else if (func_217(iParam1) && func_288(iParam0, 223))
	{
		return 1;
	}
	else if (func_215(14, -1) != 0 && func_308(iParam0, 14))
	{
		return 1;
	}
	else if (func_215(18, iParam1) != 0 && func_308(iParam0, 18))
	{
		return 1;
	}
	else if (func_215(21, iParam1) != 0 && func_308(iParam0, 21))
	{
		return 1;
	}
	else if ((func_215(22, iParam1) != 0 && func_308(iParam0, 22)) && func_311())
	{
		return 1;
	}
	return 0;
}

void func_358()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false) && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_ENT(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false) && !func_359(PLAYER::PLAYER_PED_ID(), 1)) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
			{
				func_27(PLAYER::PLAYER_ID(), 0, 256, 0);
				func_519(&Local_64, 4);
			}
		}
		else
		{
			if (func_15(NETWORK::NET_TO_ENT(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_ENT(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						func_27(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
			}
			func_519(&Local_64, 5);
		}
	}
}

int func_359(int iParam0, int iParam1)
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

void func_360()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_64.f_44))
		{
			if (func_366())
			{
				Local_64.f_44 = func_363(NETWORK::NET_TO_ENT(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), 0, 0);
				HUD::SET_BLIP_FLASH_TIMER(Local_64.f_44, 5000);
				HUD::SET_BLIP_SPRITE(Local_64.f_44, 306);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_64.f_44, "CAS_VEH_PN");
				HUD::SET_BLIP_DISPLAY(Local_64.f_44, 4);
				func_361("CAS_VEH_REW", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_362()), -1);
				func_519(&Local_64, 3);
			}
		}
		else
		{
			func_519(&Local_64, 3);
		}
	}
}

void func_361(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_362()
{
	return joaat("paragon2");
}

int func_363(int iParam0, bool bParam1, bool bParam2)
{
	return func_364(iParam0, !bParam1, bParam2);
}

int func_364(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_365(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_365(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_365(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_365(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_366()
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		return 0;
	}
	if (func_369(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_368())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	return 1;
}

bool func_367()
{
	return Global_73825;
}

bool func_368()
{
	return Global_1694135;
}

int func_369(int iParam0)
{
	if (func_372(iParam0))
	{
		return 1;
	}
	if (func_370(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_371(iParam0, 9);
	}
	return 0;
}

bool func_371(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_372(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_373()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (func_518(func_362()))
		{
			if (!MISC::IS_BIT_SET(Local_64, 0))
			{
				if (func_512(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1, 0, 1))
				{
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1);
					MISC::SET_BIT(&Local_64, 0);
				}
			}
			else if (!MISC::IS_BIT_SET(Local_64, 2))
			{
				Local_64.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
				MISC::SET_BIT(&Local_64, 2);
			}
			else if (func_377(&Var0, &fVar1))
			{
				if (func_374(&(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), func_362(), Var0, fVar1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), PLAYER::PLAYER_ID(), false);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), true);
					VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), true);
					if (VEHICLE::GET_NUM_MOD_KITS(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), 0);
					}
					VEHICLE::SET_VEHICLE_MOD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), 16, 4, false);
					func_519(&Local_64, 2);
					MISC::CLEAR_BIT(&Local_64, 2);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_362());
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false) || ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1)))
	{
		iVar2 = NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_9(iVar2, &(Local_64.f_9)))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(iVar2, false, true);
				VEHICLE::DELETE_VEHICLE(&iVar2);
			}
		}
	}
	else
	{
		func_519(&Local_64, 2);
	}
}

int func_374(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_375(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_375(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_376(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam3 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { Param0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam1;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam2;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam3;
	}
}

int func_376(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_377(var uParam0, var uParam1)
{
	struct<30> Var0;
	struct<3> Var1;
	var uVar2;
	
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_4 = 10f;
	Var0.f_1 = 1;
	Var0.f_12 = 1;
	Var0.f_13 = 0;
	Var0.f_14 = 1;
	Var0.f_27 = 1;
	Var0.f_3 = 1;
	func_511(&Var1, &uVar2, Local_64.f_1);
	if (func_378(Var1, 0f, 0f, uVar2, func_362(), 0, uParam0, uParam1, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_378(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<58> Var5;
	struct<58> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return 0;
	}
	if (!func_510(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_605) < func_509(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_508();
			func_507();
		}
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) < func_509(0))
			{
				return 0;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_673) > func_509(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_500(Param0))
		{
			if (func_499(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (SYSTEM::VDIST(Global_2405072.f_688, Param0) > 50f)
		{
			return 0;
		}
	}
	PATHFIND::_0x07FB139B592FA687((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405072.f_669 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_673 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405072.f_688 = { Param0 };
		Global_2405072.f_674 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405072.f_670 = 2;
		func_498();
		func_508();
		if (!uParam6->f_27 || (((((func_497(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_479(Param0, iParam2);
		}
		if (func_464(Param0))
		{
			func_479(Param0, iParam2);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405072.f_676 = { Param0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_458(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_456(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405072.f_676 = { Param0 };
					Global_2405072.f_679 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_405(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_402(Global_2405072.f_676, Global_2405072.f_679, iParam2, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405072.f_671 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405072.f_670 = 3;
			}
			break;
		
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_401(Global_2405072.f_676, Global_2405072.f_679, iParam2, 1, 1036831949))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_399(Global_2405072.f_676, 0);
						func_398(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_672) > 3000)
			{
				func_398(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_692) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405072.f_691))
					{
						if (NETWORK::_0x4DF7CFFF471A7FB1(Global_2405072.f_691))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2405072.f_691))
							{
								if (func_397(Global_2405072.f_676, Global_2405072.f_679, iParam2, PLAYER::PLAYER_ID(), 0) || func_380(Global_2405072.f_676, Global_2405072.f_679, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_399(Global_2405072.f_676, 0);
									func_398(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_399(Global_2405072.f_676, 0);
								func_398(-1);
							}
						}
					}
					else
					{
						func_398(-1);
					}
				}
				else
				{
					func_398(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405072.f_676 = { Param0 };
			Global_2405072.f_679 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_405(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var6);
			Global_2405072.f_670 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { Param0 };
	Global_2405072.f_673 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam4 = { Global_2405072.f_676 };
		*uParam5 = Global_2405072.f_679;
		func_379(1);
		return 1;
	}
	return 0;
}

void func_379(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_498();
	func_508();
	if (bParam0)
	{
		func_507();
	}
}

int func_380(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_11(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_396(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_392(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_391(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_381(func_390(iVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_381(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (SYSTEM::VDIST(Param0, Param1) < func_389(iParam3, 1008981770))
	{
		func_382(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_382(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_388(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_383(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = MISC::ABSF((Var2.x - Var1.x));
}

void func_383(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_386(iParam0);
		if (iVar0 != 0)
		{
			func_384(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_384(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_385(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315812[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_385(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_386(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_387(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_388(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_389(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_383(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (SYSTEM::SQRT(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_390(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_391(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (func_381(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_383(iParam2, &Var2, &Var3, 1086324736, 1080033280, 1077936128);
	Var4 = { 0f, Var3.f_1, 0f };
	func_388(&Var4, 0f, 0f, fParam1);
	Var5 = { 0f, Var2.f_1, 0f };
	func_388(&Var5, 0f, 0f, fParam1);
	Var6 = { (MISC::ABSF((Var3.x - Var2.x)) * 0.5f), 0f, 0f };
	func_388(&Var6, 0f, 0f, fParam1);
	Var1[0 /*3*/] = { Param0 + Var4 + Var6 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((Var3.f_2 - Var2.f_2))));
	Var1[1 /*3*/] = { Param0 + Var4 - Var6 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((Var3.f_2 - Var2.f_2))));
	Var1[2 /*3*/] = { Param0 + Var5 + Var6 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((Var3.f_2 - Var2.f_2))));
	Var1[3 /*3*/] = { Param0 + Var5 - Var6 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((Var3.f_2 - Var2.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_381(Var1[iVar0 /*3*/], Param3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_391(Param3, fParam4, iParam5, Param0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0)
{
	if (func_395(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_251(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_393(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_394(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_394(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_12();
}

int func_395(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_251(iParam0) };
		Global_2513231 = { func_251(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

int func_397(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_11(iVar1, 0, 1) && func_11(iParam3, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_381(Global_2417897.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_381(func_390(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_381(Global_2417897.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_11(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_381(func_390(iVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_398(int iParam0)
{
	if (Global_2405072.f_675 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_399(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_400(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405072.f_2728[iParam1 /*3*/] };
		Global_2405072.f_2728[iParam1 /*3*/] = { Param0 };
		func_399(Var0, iParam1 + 1);
	}
}

int func_400(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_401(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_508();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405072.f_680[iVar3] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_382(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = MISC::ABSF((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2405072.f_680[iVar3] = NETWORK::_0x2B1C623823DB0D9D(Var0, Var1, fParam4);
				Global_2405072.f_684[iVar3] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2405072.f_691 = Global_2405072.f_680[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_402(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_404(&Param0, &uParam1, &iParam2);
	Var0 = -1768581418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_403(1, 1));
}

var func_403(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_404(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	return iVar1;
}

void func_405(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_453(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_406(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_406(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_449(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_444(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412474[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_386(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2412474.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412474.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_437(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_434(Var1))
									{
										Var1 = { func_429(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_428(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_424(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_444(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_423(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_449(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_422(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_458(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_458(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_380(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_415(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { Var1 };
																										Global_2412474.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412474.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_414(Var1, fVar2, iVar14);
																													iVar14 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { Var1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar2;
																									Global_2412474.f_162++;
																									if (func_424(Var1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_412(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2412474[0 /*3*/] };
						uVar26 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar24 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar24];
						Global_2412474[iVar24 /*3*/] = { Var25 };
						Global_2412474.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_411(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_449(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_444(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_407(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar6;
	}
	return 0;
}

void func_407(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_408(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_408(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_410(Param0, fParam1, iParam2, iParam3, 0) || func_409(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_409(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_381(Param0, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_11(iVar2, 0, 1) && func_11(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_410(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_11(iVar1, 0, 1) && func_11(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_11(iVar1, 0, 1) && func_11(iParam2, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_390(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_11(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_390(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_411(int iParam0, struct<3> Param1, int iParam2, var* uParam3, float* fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_429(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, bParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_434(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_412(int iParam0, var uParam1)
{
	if (!func_424(Global_2412474[iParam0 /*3*/], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_413(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_412(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_412(iParam0 + 1, uParam1);
	}
}

void func_413(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_414(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412474[iParam2 /*3*/] };
	uVar1 = Global_2412474.f_121[iParam2];
	Global_2412474[iParam2 /*3*/] = { Param0 };
	Global_2412474.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412474.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_414(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_415(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_416(iVar3))
		{
			Var1 = { func_390(iVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_416(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		if (!func_421(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_418(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_417(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_418(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_392(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_417(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_418(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_419(int iParam0)
{
	return func_420(iParam0);
}

bool func_420(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_421(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_35())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

int func_422(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_391(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_391(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_423(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_397(Param0, fParam1, iParam2, iParam3, iParam4) || func_456(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_424(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_427(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_425(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_425(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_426(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_426(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_427(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

int func_428(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_418(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_381(Param0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_381(Param0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_381(Param0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_233[iVar0], false))
				{
					if (func_381(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969031.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_119[iVar0], false))
				{
					if (func_381(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969031.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_429(struct<3> Param0, float* fParam1, int iParam2, bool bParam3, struct<3> Param4, bool bParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(Param4) > 0f)
		{
			if (!func_432(Param0, *fParam1, Param4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, bParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_431(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_430(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_430(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param4) > 0f)
	{
		if (!func_432(Param0, *fParam1, Param4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(Param0, *fParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(SYSTEM::VMAG(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_430(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_430(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_430(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_383(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_431(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_432(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_388(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_433(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_433(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_434(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_436(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_435(Param0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_435(Param0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_435(struct<3> Param0, var uParam1)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
}

int func_436(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_437(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_443(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_442(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar2);
			if (func_438(Var1, &uVar0) || func_443(Var1))
			{
				Var1 = { *uParam0 };
				func_442(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_438(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_441())
	{
		return 0;
	}
	iVar1 = func_440();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_439(Param0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_439(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_427(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_425(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_441()
{
	return Global_1676377.f_474;
}

void func_442(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_388(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_388(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_443(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

bool func_444(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_427(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_425(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_445(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_445(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_442(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_448(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_446(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_427(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_425(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_446(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_447(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_433(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_433(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_447(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_447(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_433(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_433(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_447(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_448(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_449(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_500(Param0))
	{
		if (func_452(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_450(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_400(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_442(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_450(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_438(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_451(&Var2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_438(Var2, &uVar1) || func_443(Var2))
			{
				Var2 = { *uParam0 };
				func_451(&Var2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_451(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_445(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_445(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_445(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_442(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_448(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_446(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_452(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_439(*uParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_451(&Var1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_452(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_451(&Var1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_453(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_449(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_444(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412474[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_454(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				fVar3 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(Var2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var2.x, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_423(Var2, fVar3, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_449(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_422(Var2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_458(Var2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_458(Var2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_380(Var2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_415(Var2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412474.f_162)
															{
																Global_2412474[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { Var2 };
															Global_2412474.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412474.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(Var2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_414(Var2, fVar3, iVar4);
																		iVar4 = Global_2412474.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { Var2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar3;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_412(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
				Var13 = { Global_2412474[0 /*3*/] };
				uVar14 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar12 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar12];
				Global_2412474[iVar12 /*3*/] = { Var13 };
				Global_2412474.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_454(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_455(Param0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_455(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_456(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_457(Param0, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_391(Param0, fParam1, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_11(iVar2, 0, 1) && func_11(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_457(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_389(iParam1, 1008981770);
	fVar1 = func_389(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_458(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2405072.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam12 > 0f)
	{
		if (func_463(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_459(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_459(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_11(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_460(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_11(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_396(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_460(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_460(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_462() && Global_1590535[iVar0 /*876*/].f_847) && !func_461(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_390(iParam0);
}

int func_461(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_462()
{
	return Global_2450632.f_17;
}

int func_463(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_11(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_396(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_392(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_390(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_464(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2537071.f_883 && func_465(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_465(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_478(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_466(iVar1))
			{
				if (func_478(Global_1676377.f_488[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_477(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
	if (iVar1 != func_12())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_5 == iParam0)
	{
		return 1;
	}
	if (func_476(PLAYER::PLAYER_ID(), 0) || (func_473(PLAYER::PLAYER_ID()) && func_471(func_472(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_470(PLAYER::PLAYER_ID()) || (func_473(PLAYER::PLAYER_ID()) && func_471(func_472(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_469(PLAYER::PLAYER_ID()) || (func_473(PLAYER::PLAYER_ID()) && func_471(func_472(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_468(PLAYER::PLAYER_ID()) || (func_473(PLAYER::PLAYER_ID()) && func_471(func_472(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_467(PLAYER::PLAYER_ID()) || (func_473(PLAYER::PLAYER_ID()) && func_471(func_472(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_471(Global_2425662[iParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_471(Global_2425662[iParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_12())
			{
				return func_471(Global_2425662[iParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_12())
			{
				return func_471(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_472(int iParam0)
{
	if (iParam0 != func_12() && func_11(iParam0, 1, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

int func_473(int iParam0)
{
	if (iParam0 != func_12() && func_11(iParam0, 1, 1))
	{
		if (func_475(iParam0) && !func_474(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	if (iParam0 != func_12() && func_11(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 4);
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_12() && func_11(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_476(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_12())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_12())
			{
				return func_471(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_478(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_439(Param0, &(Global_2409984[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_479(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_496())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_495(Param0);
		if (iVar1 > -1)
		{
			func_507();
			switch (iVar1)
			{
				case 0:
					func_494(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_494(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_494(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_494(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_494(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_494(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_494(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_494(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_494(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_494(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_494(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_494(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_494(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_494(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_494(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_494(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_494(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_494(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_494(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_494(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_494(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_494(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_494(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_494(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_494(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_494(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_494(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_494(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_494(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_494(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_494(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_494(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_494(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_494(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_494(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_494(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_494(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_494(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_494(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_494(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_494(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_494(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_494(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_494(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_494(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_494(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_494(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_494(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_494(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_494(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_494(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_494(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_494(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_492(78);
					break;
				
				case 11:
					func_492(79);
					break;
				
				case 12:
					func_492(82);
					break;
				
				case 13:
					func_492(81);
					break;
				
				case 14:
					func_492(73);
					break;
				
				case 15:
					func_494(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_494(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_494(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_494(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_492(75);
					break;
				
				case 17:
					func_492(76);
					break;
				
				case 18:
					func_492(77);
					break;
				
				case 19:
					func_494(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_494(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_494(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_494(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_492(80);
					break;
				
				case 21:
				case 25:
					func_492(87);
					break;
				
				case 22:
				case 26:
					func_492(88);
					break;
				
				case 23:
				case 27:
					func_492(89);
					break;
				
				case 24:
				case 28:
					func_492(90);
					break;
				
				case 29:
				case 30:
					if (func_491(iParam1))
					{
						func_492(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_28);
					}
					break;
				
				case 31:
					func_494(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_494(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_494(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_494(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_494(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_494(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_494(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_494(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_494(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_494(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_494(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_494(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_494(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_494(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_494(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_494(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_494(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_494(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_494(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_494(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_494(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_494(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_494(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_494(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_494(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_494(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_494(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_494(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_494(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_494(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_494(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_494(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_494(-194.254f, -2018.756f, 26.62f, 75f);
					func_494(-186.956f, -2031.369f, 26.62f, 338f);
					func_494(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_494(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_494(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_494(-233.372f, -2089.601f, 26.62f, 304f);
					func_494(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_494(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_494(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_494(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_494(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_494(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_494(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_494(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_494(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_494(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_494(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_494(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_494(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_494(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_494(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_494(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_488(Param0, &iVar2, &iVar3) || (func_465(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))))
		{
			func_507();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar3[iVar0] && func_77(iVar2[iVar0], -1))
				{
					if (func_491(iParam1))
					{
						func_492(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_487(PLAYER::PLAYER_PED_ID()) || func_486(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
					{
						if (func_485(iParam1))
						{
							func_484(iVar2[iVar0]);
						}
						else if (func_483(iParam1))
						{
							func_482(iVar2[iVar0]);
							func_484(iVar2[iVar0]);
						}
						else
						{
							func_482(iVar2[iVar0]);
							func_484(iVar2[iVar0]);
						}
					}
					else
					{
						func_480(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_492(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_480(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_494(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_494(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_494(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_494(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_494(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_494(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_494(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_494(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_494(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_494(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_494(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_494(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_494(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_494(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_494(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_494(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_494(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_494(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_494(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_494(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_494(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_494(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_494(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_494(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_494(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_494(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_494(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_494(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_494(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_494(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_494(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_494(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_494(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_494(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_494(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_494(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_494(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_494(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_494(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_494(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_494(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_494(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_494(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_494(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_494(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_494(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_494(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_494(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_494(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_494(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_494(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_494(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_494(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_494(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_494(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_494(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_494(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_494(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_494(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_494(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_494(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_494(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_494(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_494(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_494(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_494(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_494(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_494(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_494(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_494(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_494(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_494(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_494(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_494(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_494(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_494(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_494(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_494(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_494(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_494(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_494(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_494(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_494(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_494(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_494(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_494(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_494(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_494(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_494(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_494(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_494(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_494(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_494(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_494(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_494(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_494(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_494(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_494(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_494(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_494(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_494(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_494(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_494(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_494(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_494(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_494(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_494(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_494(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_494(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_494(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_494(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_494(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_494(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_494(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_494(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_494(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_494(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_494(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_494(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_494(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_494(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_494(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_494(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_494(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_494(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_494(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_494(142.7427f, -2536.147f, 5f, 205.0002f);
			func_494(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_494(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_494(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_494(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_494(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_494(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_494(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_494(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_494(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_494(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_494(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_494(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_494(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_494(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_494(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_494(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_494(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_494(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_494(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_494(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_494(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_494(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_494(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_494(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_494(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_494(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_494(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_494(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_494(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_494(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_494(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_494(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_494(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_494(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_494(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_494(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_494(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_494(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_494(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_494(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_494(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_494(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_494(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_494(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_494(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_494(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_494(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_494(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_494(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_494(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_494(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_494(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_494(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_494(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_494(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_494(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_494(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_494(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_494(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_494(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_494(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_494(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_494(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_494(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_494(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_494(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_494(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_494(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_494(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_494(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_494(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_494(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_494(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_494(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_494(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_494(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_494(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_494(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_494(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_494(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_494(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_494(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_494(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_494(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_494(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_494(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_494(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_494(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_494(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_494(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_494(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_494(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_494(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_494(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_494(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_494(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_494(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_494(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_494(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_494(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_494(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_494(-1823.414f, 3092.762f, 31.843f, 330f);
			func_494(-1819.045f, 3100.435f, 31.845f, 330f);
			func_494(-1833.313f, 3075.722f, 31.838f, 330f);
			func_494(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_494(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_494(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_494(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_494(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_494(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_494(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_494(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_494(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_494(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_494(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_494(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_494(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_494(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_494(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_494(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_494(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_494(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_494(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_494(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_494(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_494(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_494(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_494(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_494(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_494(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_494(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_494(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_494(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_494(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_494(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_494(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_494(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_494(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_494(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_494(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_494(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_494(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_494(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_494(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_494(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_494(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_494(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_494(1231.279f, 2910.881f, 43.3085f, 12f);
				func_494(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_494(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_494(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_494(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_494(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_494(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_494(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_494(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_494(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_494(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_494(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_494(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_494(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_494(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_494(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_494(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_494(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_494(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_494(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_494(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_494(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_494(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_494(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_494(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_494(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_494(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_494(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_494(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_494(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_494(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_494(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_494(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_494(3.855f, 2672.388f, 78.437f, 319.2f);
				func_494(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_494(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_494(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_494(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_494(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_494(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_494(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_494(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_494(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_494(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_494(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_494(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_494(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_494(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_494(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_494(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_494(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_494(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_494(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_494(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_494(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_494(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_494(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_494(102.851f, 2688.009f, 51.732f, 224f);
				func_494(109.815f, 2681.012f, 51.112f, 224f);
				func_494(116.355f, 2674.26f, 50.529f, 224f);
				func_494(125.138f, 2665.98f, 49.8f, 224f);
				func_494(132.228f, 2659.865f, 49.26f, 228.4f);
				func_494(139.354f, 2653.536f, 48.737f, 228.4f);
				func_494(88.512f, 2702.995f, 53.042f, 224.199f);
				func_494(81.565f, 2710.357f, 53.67f, 224.199f);
				func_494(75.156f, 2716.981f, 54.223f, 224.199f);
				func_494(68.442f, 2723.806f, 54.775f, 226.199f);
				func_494(61.449f, 2730.606f, 55.308f, 226.199f);
				func_494(53.702f, 2738.167f, 55.855f, 226.199f);
				func_494(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_494(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_494(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_494(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_494(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_494(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_494(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_494(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_494(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_494(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_494(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_494(2714.633f, 3918.283f, 42.938f, 16f);
				func_494(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_494(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_494(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_494(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_494(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_494(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_494(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_494(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_494(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_494(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_494(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_494(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_494(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_494(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_494(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_494(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_494(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_494(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_494(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_494(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_494(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_494(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_494(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_494(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_494(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_494(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_494(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_494(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_494(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_494(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_494(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_494(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_494(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_494(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_494(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_494(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_494(3374.923f, 5520.177f, 20.3207f, 86f);
				func_494(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_494(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_494(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_494(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_494(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_494(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_494(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_494(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_494(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_494(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_494(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_494(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_494(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_494(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_494(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_494(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_494(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_494(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_494(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_494(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_494(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_494(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_494(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_494(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_494(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_494(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(43.848f, 6845.657f, 13.379f, 247.2f);
				func_494(50.379f, 6861.146f, 15.105f, 247.2f);
				func_494(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_494(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_494(55.806f, 6875.081f, 14.824f, 247.2f);
				func_494(11.616f, 6877.079f, 11.466f, 247.2f);
				func_494(18.954f, 6891.633f, 11.37f, 247.2f);
				func_494(26.68f, 6907.587f, 11.869f, 247.2f);
				func_494(7.479f, 6907.895f, 12.024f, 247.2f);
				func_494(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_494(35.591f, 6836.608f, 13.288f, 274.4f);
				func_494(36.028f, 6830.135f, 13.801f, 270.8f);
				func_494(35.114f, 6823.884f, 14.527f, 260.8f);
				func_494(48.779f, 6838.693f, 14.337f, 273.6f);
				func_494(56.738f, 6821.8f, 15.244f, 244.8f);
				func_494(48.377f, 6825.895f, 14.656f, 249.8f);
				func_494(49.11f, 6831.439f, 13.991f, 274.8f);
				func_494(53.544f, 6818.275f, 16.342f, 243f);
				func_494(46.162f, 6821.945f, 15.483f, 249.8f);
				func_494(60.129f, 6836.8f, 15.605f, 269.6f);
				func_494(40.88f, 6802.952f, 20.113f, 242.6f);
				func_494(48.203f, 6799.134f, 20.897f, 244.4f);
				func_494(70.449f, 6809.271f, 16.846f, 243f);
				func_494(61.436f, 6814.266f, 16.71f, 244.2f);
				func_494(56.142f, 6793.458f, 19.806f, 242.6f);
				func_494(65.759f, 6791.12f, 18.433f, 276.4f);
				func_494(77.305f, 6805.391f, 18.558f, 245.6f);
				func_494(85.893f, 6800.243f, 18.535f, 249.8f);
				func_494(56.85f, 6780.582f, 18.822f, 297.999f);
				func_494(65.636f, 6784.669f, 18.789f, 293.799f);
				func_494(74.121f, 6788.498f, 18.739f, 293.799f);
				func_494(97.779f, 6796.32f, 19.02f, 276.799f);
				func_494(106.76f, 6796.983f, 18.914f, 272.599f);
				func_494(112.387f, 6802.858f, 18.994f, 210.599f);
				func_494(117.58f, 6802.644f, 18.663f, 209.399f);
				func_494(122.481f, 6802.693f, 18.468f, 209.399f);
				func_494(127.182f, 6802.686f, 18.218f, 209.399f);
				func_494(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_494(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_494(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_494(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_494(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_494(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_494(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_494(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_494(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_494(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_494(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_494(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_494(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_494(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_494(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_494(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_494(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_494(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_494(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_494(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_494(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_494(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_494(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_494(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_494(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_494(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_494(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_494(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_494(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_494(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_494(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_494(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_494(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_494(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_494(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_494(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_494(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_494(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_494(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_494(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_494(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_494(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_494(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_494(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_494(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_494(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_494(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_494(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_494(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_494(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_494(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_494(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_494(30.027f, 3292.351f, 38.604f, 140.199f);
				func_494(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_494(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_494(23.897f, 3283.152f, 39.381f, 145.399f);
				func_494(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_494(18.723f, 3274.025f, 40.054f, 155.799f);
				func_494(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_494(36.958f, 3298.847f, 38.001f, 127.799f);
				func_494(54.165f, 3311.582f, 36.517f, 303.799f);
				func_494(61.607f, 3317.105f, 35.916f, 306.999f);
				func_494(68.994f, 3323.129f, 35.364f, 308.199f);
				func_494(76.266f, 3329.467f, 34.805f, 311.399f);
				func_494(82.757f, 3335.915f, 34.344f, 316.598f);
				func_494(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_494(14.664f, 3263.688f, 40.931f, 160.398f);
				func_494(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_494(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_494(89.575f, 3343.311f, 33.932f, 318.398f);
				func_494(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_494(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_494(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_494(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_494(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_494(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_494(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_494(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_494(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_494(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_494(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_494(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_494(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_494(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_494(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_494(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_494(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_494(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_494(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_494(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_494(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_494(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_494(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_494(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_494(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_494(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_494(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_494(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_494(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_494(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_494(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_494(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_494(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_494(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_494(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_494(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_494(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_494(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_494(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_494(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_494(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_494(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_494(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_494(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_494(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_494(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_494(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_494(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_494(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_494(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_494(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_494(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_494(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_494(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_494(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_494(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_494(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_494(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_494(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_494(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_494(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_494(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_494(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_494(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_494(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_494(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_494(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_494(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_494(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_494(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_494(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_494(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_494(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_494(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_494(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_494(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_494(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_494(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_494(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_494(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_481(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_481(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_481(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_481(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_481(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_481(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_481(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_481(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_481(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_481(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_481(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_481(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_481(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_481(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_481(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_481(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_481(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_481(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_481(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_481(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_481(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_481(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_481(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_481(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_481(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_481(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_481(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_481(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_383(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var3) };
		func_494(Var4, fParam1);
	}
	else
	{
		func_494(Param0, fParam1);
	}
}

void func_482(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_494(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_494(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_494(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_494(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_494(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_494(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_494(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_494(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_494(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_494(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_494(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_494(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_494(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_494(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_494(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_494(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_494(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_494(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_494(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_494(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_494(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_494(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_494(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_494(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_494(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_494(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_494(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_494(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_494(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_494(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_494(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_494(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_494(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_494(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_494(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_494(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_494(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_494(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_494(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_494(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_494(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_494(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_494(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_494(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_494(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_494(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_494(-1356.991f, -3242.228f, 12.945f, 330f);
			func_494(-1369.313f, -3234.758f, 12.945f, 330f);
			func_494(-1381.751f, -3227.408f, 12.945f, 330f);
			func_494(-1394.302f, -3220.021f, 12.945f, 330f);
			func_494(-1354.339f, -3223.129f, 12.945f, 330f);
			func_494(-1366.302f, -3215.809f, 12.945f, 330f);
			func_494(-1378.492f, -3208.645f, 12.945f, 330f);
			func_494(-1350.322f, -3203.405f, 12.945f, 330f);
			func_494(-1362.684f, -3196.451f, 12.945f, 330f);
			func_494(-1347.089f, -3182.69f, 12.945f, 330f);
			func_494(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_494(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_494(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_494(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_494(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_494(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_494(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_494(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_494(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_494(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_494(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_494(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_494(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_494(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_494(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_494(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_494(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_494(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_494(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_494(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_494(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_494(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_494(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_494(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_494(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_494(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_494(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_494(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_494(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_494(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_494(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_494(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_494(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_494(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_494(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_494(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_494(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_494(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_494(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_494(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_494(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_494(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_494(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_494(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_494(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_494(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_494(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_494(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_494(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_494(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_494(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_494(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_494(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_494(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_494(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_494(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_494(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_494(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_494(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_494(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_494(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_494(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_494(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_494(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_494(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_494(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_494(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_494(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_494(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_494(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_494(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_494(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_494(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_494(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_494(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_494(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_494(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_494(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_494(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_494(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_494(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_494(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_494(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_494(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_494(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_494(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_494(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_494(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_494(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_494(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_494(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_494(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_494(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_494(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_494(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_494(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_494(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_494(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_494(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_494(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_494(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_494(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_494(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_494(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_494(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_494(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_494(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_494(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_494(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_494(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_494(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_494(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_494(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_494(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_494(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_494(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_494(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_494(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_494(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_494(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_494(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_494(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_494(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_494(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_494(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_494(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_494(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_494(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_494(-2484.323f, 3249.294f, 31.828f, 151f);
			func_494(-2495.313f, 3255.746f, 31.828f, 151f);
			func_494(-2472.644f, 3242.684f, 31.828f, 151f);
			func_494(-2506.313f, 3262.27f, 31.823f, 151f);
			func_494(-2461.494f, 3235.93f, 31.828f, 151f);
			func_494(-2505.602f, 3238.049f, 31.828f, 151f);
			func_494(-2481.937f, 3224.8f, 31.828f, 151f);
			func_494(-2516.813f, 3244.266f, 31.823f, 151f);
			func_494(-2470.03f, 3217.899f, 31.828f, 151f);
			func_494(-2493.933f, 3231.308f, 31.828f, 151f);
			func_494(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_494(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_494(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_494(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_494(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_494(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_494(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_494(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_494(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_494(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_494(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_494(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_494(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_494(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_494(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_494(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_494(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_494(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_494(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_494(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_494(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_494(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_494(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_494(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_494(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_494(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_494(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_494(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_494(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_494(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_494(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_494(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_494(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_494(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_494(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_494(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_484(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_494(-947.712f, -3367.704f, 12.944f, 60f);
			func_494(-904.692f, -3293.072f, 12.944f, 60f);
			func_494(-863.71f, -3221.978f, 12.944f, 60f);
			func_494(-966.418f, -3162.773f, 12.944f, 60f);
			func_494(-1007.435f, -3233.93f, 12.944f, 60f);
			func_494(-1050.455f, -3308.559f, 12.944f, 60f);
			func_494(-1145.673f, -3253.456f, 12.944f, 60f);
			func_494(-1098.386f, -3181.428f, 12.944f, 60f);
			func_494(-1060.474f, -3108.903f, 12.944f, 60f);
			func_494(-1155.391f, -3053.632f, 12.944f, 60f);
			func_494(-1196.114f, -3125.146f, 12.948f, 60f);
			func_494(-1235.552f, -3201.86f, 12.944f, 60f);
			func_494(-1344.446f, -3139.177f, 12.944f, 60f);
			func_494(-1301.308f, -3064.341f, 12.944f, 60f);
			func_494(-1260.135f, -2992.912f, 12.944f, 60f);
			func_494(-1364.244f, -2932.9f, 12.98f, 60f);
			func_494(-1405.284f, -3004.108f, 12.96f, 60f);
			func_494(-1448.29f, -3078.72f, 12.95f, 60f);
			func_494(-1535.732f, -3028.318f, 12.945f, 60f);
			func_494(-1492.639f, -2953.558f, 12.945f, 60f);
			func_494(-1451.506f, -2882.2f, 12.944f, 60f);
			func_494(-1553.927f, -2823.12f, 13.002f, 60f);
			func_494(-1595.097f, -2894.571f, 12.944f, 60f);
			func_494(-1637.836f, -2968.714f, 12.945f, 60f);
			func_494(-1740.971f, -2911.484f, 12.944f, 330f);
			func_494(-1696.293f, -2833.978f, 12.944f, 330f);
			func_494(-1651.502f, -2756.273f, 12.945f, 330f);
			func_494(-1588.258f, -2647.575f, 12.944f, 330f);
			func_494(-1536.862f, -2681.378f, 12.945f, 330f);
			func_494(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_494(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_494(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_494(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_494(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_494(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_494(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_494(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_494(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_494(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_494(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_494(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_494(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_494(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_494(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_494(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_494(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_494(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_494(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_494(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_494(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_494(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_494(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_494(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_494(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_494(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_494(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_494(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_494(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_494(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_494(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_486(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_488(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_466(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_489(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_490(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
	if (iVar1 != func_12())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_492(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_494(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_494(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_494(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_494(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("MPSV_LP0_31"):
			func_494(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_494(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_494(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_494(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_494(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_494(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_494(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_494(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_494(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_494(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_494(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_494(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_494(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_494(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_494(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_494(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_494(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_494(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_494(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_494(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_494(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_494(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_494(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_494(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_494(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_494(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_494(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_494(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_494(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_494(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_494(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_494(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_493())
			{
				func_494(-1608.297f, -556.875f, 33.406f, 310f);
				func_494(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_494(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_494(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_494(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_494(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_494(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_494(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_494(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_494(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_494(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_494(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_493())
			{
				func_494(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_494(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_494(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_494(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_494(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_494(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_494(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_494(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_494(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_494(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_494(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_494(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_493())
			{
				func_494(-102.737f, -597.379f, 35.053f, 160.999f);
				func_494(-97.793f, -589.568f, 35.082f, 134.799f);
				func_494(-110.357f, -619.402f, 35.055f, 160.599f);
				func_494(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_494(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_494(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_494(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_494(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_494(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_494(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_494(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_494(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_493())
			{
				func_494(-59.349f, -779.238f, 43.134f, 228.398f);
				func_494(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_494(-65.212f, -772.66f, 43.151f, 219.398f);
				func_494(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_494(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_494(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_494(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_494(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_494(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_494(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_494(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_494(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_494(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_494(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_494(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_494(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_494(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_494(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_494(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_494(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_494(-1464.5f, -927.9f, 9f, 296.7991f);
			func_494(-1466f, -926.1f, 9f, 296.7991f);
			func_494(-1467.9f, -924.7f, 9f, 296.7991f);
			func_494(-1469.7f, -923.7f, 9f, 296.7991f);
			func_494(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_494(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_494(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_494(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_494(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_494(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_494(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_494(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_494(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_494(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_494(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_494(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_494(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_494(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_494(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_494(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_494(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_494(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_494(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_494(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_494(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_494(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_494(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_494(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_494(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_494(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_494(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_494(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_494(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_494(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_494(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_494(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_494(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_494(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_494(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_494(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_494(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_494(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_494(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_494(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_494(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_494(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_494(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_494(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_494(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_494(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_494(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_494(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_494(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_494(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_494(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_494(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_494(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_494(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_494(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_494(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_494(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_494(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_494(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_494(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_494(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_494(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_494(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_494(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_494(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_494(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_494(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_494(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_494(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_494(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_494(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_494(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_494(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_494(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_494(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_494(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_494(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_494(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_494(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_494(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_494(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_494(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_494(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_494(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_493()
{
	return Global_2450632.f_15;
}

void func_494(struct<3> Param0, float fParam1)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/] = { Param0 };
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/].f_3 = fParam1;
		Global_2405072.f_1746++;
	}
}

int func_495(struct<3> Param0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2405072.f_2895, Param0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412235[iVar0 /*7*/].f_2 + Global_2412235[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_435(Param0, &(Global_2412235[iVar0 /*7*/])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_496()
{
	if (MISC::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_497(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_466(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_498()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_499(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412191[iVar0 /*7*/].f_2 + Global_2412191[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_435(Var1, &(Global_2412191[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_446(&Var1, Global_2412191[iVar0 /*7*/], Global_2412191[iVar0 /*7*/].f_3, Global_2412191[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_500(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_504(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_503(Param0, 1008981770))
			{
				if (!func_452(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_452(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_502(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_501(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_452(&Var1, 0, 0, 0, 1))
					{
						if (!func_452(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_501(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_502(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_439(Param0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_503(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_439(Param0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_504(int iParam0, bool bParam1)
{
	if (func_506() != 0)
	{
		return func_505(iParam0) != 0;
	}
	return func_418(iParam0, bParam1, 0);
}

int func_505(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_506()
{
	return Global_30768;
}

void func_507()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_508()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_684[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405072.f_680[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_509(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_510(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

void func_511(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			*uParam0 = { 866.0536f, -2988.445f, 4.9008f };
			*uParam1 = 270.7996f;
			break;
		
		case 1:
			*uParam0 = { 811.0694f, -3021.563f, 4.8178f };
			*uParam1 = 160.1995f;
			break;
		
		case 2:
			*uParam0 = { 1216.372f, -2947.297f, 4.8661f };
			*uParam1 = 178.1987f;
			break;
		
		case 3:
			*uParam0 = { 1216.627f, -3040.242f, 4.8684f };
			*uParam1 = 178.1987f;
			break;
		
		case 4:
			*uParam0 = { 1169.268f, -2969.481f, 4.9021f };
			*uParam1 = 269.7983f;
			break;
		
		case 5:
			*uParam0 = { 1090.679f, -2969.823f, 4.9012f };
			*uParam1 = 359.1981f;
			break;
		
		case 6:
			*uParam0 = { 1055.605f, -3039.275f, 4.9011f };
			*uParam1 = 284.1977f;
			break;
		
		case 7:
			*uParam0 = { 951.2667f, -3240.293f, 4.8951f };
			*uParam1 = 0.9969f;
			break;
		
		case 8:
			*uParam0 = { 1013.844f, -3241.337f, 4.8949f };
			*uParam1 = 9.1969f;
			break;
		
		case 9:
			*uParam0 = { 1067.405f, -3243.458f, 4.8946f };
			*uParam1 = 84.1968f;
			break;
		
		case 10:
			*uParam0 = { 1096.48f, -3193.932f, 4.9008f };
			*uParam1 = 88.7966f;
			break;
		
		case 11:
			*uParam0 = { 1111.106f, -3097.289f, 4.8677f };
			*uParam1 = 182.3965f;
			break;
		
		case 12:
			*uParam0 = { 1089.528f, -3022.824f, 4.901f };
			*uParam1 = 359.5967f;
			break;
		
		case 13:
			*uParam0 = { 1182.72f, -3034.218f, 4.9021f };
			*uParam1 = 271.3965f;
			break;
		
		case 14:
			*uParam0 = { 988.5466f, -3029.077f, 4.9008f };
			*uParam1 = 359.7962f;
			break;
		
		case 15:
			*uParam0 = { 988.7137f, -3082.373f, 4.901f };
			*uParam1 = 359.7962f;
			break;
		
		case 16:
			*uParam0 = { 892.3446f, -3076.711f, 4.9008f };
			*uParam1 = 359.7962f;
			break;
		
		case 17:
			*uParam0 = { 861.8322f, -3129.824f, 4.9008f };
			*uParam1 = 270.796f;
			break;
		
		case 18:
			*uParam0 = { 852.6052f, -2943.117f, 4.9008f };
			*uParam1 = 270.796f;
			break;
		
		case 19:
			*uParam0 = { 988.0678f, -2971.613f, 4.9008f };
			*uParam1 = 0.1957f;
			break;
		
		case 20:
			*uParam0 = { 892.4056f, -3019.585f, 4.902f };
			*uParam1 = 0.1957f;
			break;
		
		case 21:
			*uParam0 = { 1191.755f, -3073.683f, 4.8238f };
			*uParam1 = 90.1956f;
			break;
		
		case 22:
			*uParam0 = { 809.9f, -3134.49f, 4.9009f };
			*uParam1 = 4.3955f;
			break;
		
		case 23:
			*uParam0 = { 891.2492f, -3241.015f, 4.8959f };
			*uParam1 = 0.1955f;
			break;
		
		case 24:
			*uParam0 = { 1094.769f, -3100.678f, 4.8943f };
			*uParam1 = 90.1954f;
			break;
		
		case 25:
			*uParam0 = { 1194.57f, -2942.816f, 4.9021f };
			*uParam1 = 90.1954f;
			break;
		
		case 26:
			*uParam0 = { 852.6579f, -2927.324f, 4.9008f };
			*uParam1 = 270.7951f;
			break;
		
		case 27:
			*uParam0 = { 1066.745f, -3073.23f, 4.901f };
			*uParam1 = -0.005f;
			break;
		
		case 28:
			*uParam0 = { 844.2502f, -3050.154f, 4.7422f };
			*uParam1 = 91.7947f;
			break;
		
		case 29:
			*uParam0 = { 1115.411f, -3184.967f, 4.9008f };
			*uParam1 = 360.7945f;
			break;
		
		case 30:
			*uParam0 = { 1139.718f, -3185.602f, 4.9008f };
			*uParam1 = 360.7945f;
			break;
		
		case 31:
			*uParam0 = { 1117.839f, -3201.79f, 4.9008f };
			*uParam1 = 179.7964f;
			break;
	}
}

bool func_512(int iParam0, bool bParam1, bool bParam2)
{
	return func_513(1, iParam0, 1, bParam1, bParam2);
}

int func_513(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_517(iParam0) - func_516(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_516(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_517(iParam0) - func_515(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_516(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_517(iParam0) - func_516(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_514(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_516(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

bool func_518(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_519(int iParam0, int iParam1)
{
	if (func_520(iParam0) != iParam1)
	{
		iParam0->f_45 = iParam1;
	}
}

int func_520(var uParam0)
{
	return uParam0->f_45;
}

int func_521()
{
	if (Global_2439138.f_502.f_12)
	{
		return 1;
	}
	if (Global_1696070)
	{
		return 1;
	}
	if (!func_39())
	{
		return 1;
	}
	if (!func_11(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (func_369(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_522()
{
	int iVar0;
	
	if (func_506() != 0)
	{
		return 0;
	}
	if (func_525(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_369(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_368())
	{
		return 0;
	}
	if (!func_524(229, -1))
	{
		iVar0 = func_218(8264, -1, 0);
		if (func_523(61, -1) && MISC::IS_BIT_SET(iVar0, 4))
		{
			return 1;
		}
		else
		{
			if (!func_523(61, -1))
			{
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
			}
			if (!MISC::IS_BIT_SET(iVar0, 4))
			{
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
			}
		}
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2585647[iParam0 /*3*/][func_48(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_524(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2583656[iParam0 /*3*/][func_48(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_525(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_526()
{
	if (!func_39())
	{
		return 1;
	}
	if (Global_1696069)
	{
		return 1;
	}
	return 0;
}

int func_527()
{
	var uVar0;
	
	func_534(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_533())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_532())
	{
		return 1;
	}
	if (func_531(159))
	{
		if (!func_530())
		{
			return 1;
		}
	}
	if (func_531(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_528() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_528()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_528()
{
	switch (func_506())
	{
		case 0:
			return func_529();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_529()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_530()
{
	return Global_2450632.f_598;
}

int func_531(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_532()
{
	return Global_2460680;
}

bool func_533()
{
	return Global_2450632.f_593;
}

void func_534(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_535(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_535(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_11(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_9(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

void func_536()
{
	SYSTEM::WAIT(0);
}

void func_537()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63[PLAYER::PLAYER_ID() /*2*/].f_1), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	Global_1696069 = 0;
	func_538();
}

void func_538()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_539()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_541(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_63, 65);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_62, 1);
	if (!func_540())
	{
		func_537();
	}
}

int func_540()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_533())
		{
			return 0;
		}
		if (func_531(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_541(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_538();
			}
			else
			{
				return 0;
			}
		}
		if (!func_542())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_538();
					}
					else
					{
						return 0;
					}
				}
				if (func_533())
				{
					if (!bParam2)
					{
						func_538();
					}
					else
					{
						return 0;
					}
				}
				if (func_531(157))
				{
					if (!bParam2)
					{
						func_538();
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
					func_538();
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
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_538();
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
			func_538();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_542()
{
	return Global_1312854;
}

