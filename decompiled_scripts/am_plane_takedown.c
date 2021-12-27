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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<27> Local_81 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_108 = 0;
	struct<3> Local_109[32];
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_228(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_213(ScriptParam_0);
	}
	else
	{
		func_209();
	}
	while (true)
	{
		func_208();
		if (func_197() || func_193(15))
		{
			func_209();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_209();
		}
		switch (func_192(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_191() == 1)
				{
					if (func_190(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_81.f_2), false))
							{
								if (!func_188())
								{
									if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
									{
										func_187("PTD_HELP1", -1);
									}
									else
									{
										func_187("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_191() == 4)
				{
					Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_191() == 1)
				{
					func_22();
				}
				else if (func_191() == 4)
				{
					Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_21(&(Local_81.f_24));
				if (func_20(&(Local_81.f_24)))
				{
					Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_209();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_191())
			{
				case 0:
					if (func_11())
					{
						Local_81.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_81.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_81.f_2))
	{
		if (Local_81.f_22 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_81.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, false, true, 0))
				{
					if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
					{
						Var0.f_2 = 1821665681;
					}
					else
					{
						Var0.f_2 = 809515035;
					}
					func_5(Var0, func_6(1));
					MISC::SET_BIT(&(Local_81.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_81.f_23 == 0)
	{
		if (Local_81.f_0 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_81.f_2), false))
				{
					if (func_3(&(Local_81.f_26), 3000, 0))
					{
						if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
						{
							Var14.f_2 = 1849048398;
						}
						else
						{
							Var14.f_2 = -134517492;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_228(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_8(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	switch (Local_81.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	int iVar14;
	
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_81.f_2), false))
	{
		if (Local_81.f_0 != 4)
		{
			iLocal_207 = 0;
			while (iLocal_207 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_207)))
				{
					iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_207));
					if (MISC::IS_BIT_SET(Local_109[iLocal_207 /*3*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
						{
							Var0.f_2 = -209964813;
						}
						else
						{
							Var0.f_2 = 1523360013;
						}
						Var0.f_10 = iVar14;
						func_5(Var0, func_6(1));
						Local_81.f_0 = 4;
						return;
					}
					if (MISC::IS_BIT_SET(Local_109[iLocal_207 /*3*/].f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_81.f_1, 2))
						{
							MISC::SET_BIT(&(Local_81.f_1), 2);
						}
					}
				}
				iLocal_207++;
			}
		}
	}
}

int func_11()
{
	if (func_19(Local_81.f_4) && func_19(Local_81.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_81.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_81.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_3) && func_19(Local_81.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
	{
		if (func_7(Local_81.f_2))
		{
			if (func_13(&(Local_81.f_3), Local_81.f_2, 22, Local_81.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_3), Global_1837182);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_3), true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
	{
		if (func_19(Local_81.f_4))
		{
			if (func_15(&(Local_81.f_2), Local_81.f_4, Local_81.f_6, func_18(Local_81.f_6, Local_81.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_81.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_81.f_2), false);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_81.f_2), true);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_81.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_81.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_81.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_81.f_2), true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_81.f_2), false);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_81.f_2), false);
				if (Local_81.f_4 == joaat("cuban800"))
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_81.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_81.f_2), "MPBitset"))
					{
						iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_81.f_2), "MPBitset");
					}
					MISC::SET_BIT(&iVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_81.f_2), "MPBitset", iVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_16(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_17(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam5 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2667222.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = fParam3;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam4;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam5;
	}
}

int func_17(int iParam0, struct<3> Param1, int iParam4)
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
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

float func_18(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

bool func_19(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_22()
{
	switch (Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_185();
			func_23();
			if (Local_81.f_23 > 0)
			{
				Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_209();
			break;
	}
}

void func_23()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
	{
		if (!MISC::IS_BIT_SET(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_81.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_81.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_81.f_2), false))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_81.f_2, &uVar0))
				{
					func_184(2063, -1);
					iVar1 = func_183(2063, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8356)
					{
						iVar2 = Global_262145.f_8356;
					}
					iVar3 = (Global_262145.f_8354 * iVar2);
					func_129(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8355)
					{
						iVar1 = Global_262145.f_8355;
					}
					iVar4 = (Global_262145.f_8353 * iVar1);
					func_125(iVar4, 1, 1, 1092616192);
					Global_2727434 = iVar4;
					func_61(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_60())
						{
							func_48(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(65, 1, -1);
					if (func_42())
					{
						func_29(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_29(2, "PTD_PASS1", 0, 0, -99);
					}
					MISC::SET_BIT(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_81.f_22 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_81.f_2), Local_81.f_9[Local_81.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_81.f_22++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_81.f_2) && func_25(Local_81.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_81.f_2), true, true, -1);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_2))
							{
								func_24(&(Local_81.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_3), true);
								func_24(&(Local_81.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_25(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_26()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	struct<3> Var0;
	
	if (func_7(Local_81.f_2) && !func_28(Local_81.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_3), NETWORK::NET_TO_VEH(Local_81.f_2), false))
		{
			if (Local_81.f_22 < 4)
			{
				if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_81.f_3), NETWORK::NET_TO_VEH(Local_81.f_2), 0, 0, Local_81.f_9[Local_81.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 1.261169E-43f, 8.407791E-44f, 1);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_81.f_3), NETWORK::NET_TO_VEH(Local_81.f_2), 0, 0, Local_81.f_9[Local_81.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
				}
			}
			else if (!MISC::IS_BIT_SET(Local_81.f_1, 2) && !MISC::IS_BIT_SET(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_81.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_81.f_3), NETWORK::NET_TO_VEH(Local_81.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 1.401298E-43f, 1.401298E-43f, 1);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_81.f_3), NETWORK::NET_TO_VEH(Local_81.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
				}
				MISC::SET_BIT(&(Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
			}
		}
	}
}

int func_28(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_29(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_30(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_30(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_31(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_31(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == -1)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, uParam0);
	func_37(iVar0, uParam2, bParam3);
	func_36(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_35(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_33(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)
{
	Global_1637326.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1637326.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)
{
	MISC::SET_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 5);
}

void func_35(int iParam0)
{
	MISC::SET_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 4);
}

void func_36(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1637326.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_37(int iParam0, var uParam1, bool bParam2)
{
	Global_1637326.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 2);
	}
}

void func_38(int iParam0, var uParam1)
{
	Global_1637326.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_39(int iParam0)
{
	MISC::SET_BIT(&(Global_1637326.f_59[iParam0 /*16*/]), 0);
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1637326.f_59[iParam0 /*16*/], 0);
}

int func_42()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_45(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_44(iParam0, iVar0, iParam2);
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2862239[iParam0 /*3*/][func_46(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2862239[iParam0 /*3*/][func_46(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1574907;
}

void func_48(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_60())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_49(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_49(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_47()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_55(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_50(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_54(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_52(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_52(var uParam0)
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
	func_53(&(uParam0->f_14));
	func_53(&(uParam0->f_14.f_13));
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

void func_53(var uParam0)
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

int func_54(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	Global_2727573 = iParam1;
	Global_2727572 = iParam0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_60())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_57(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_57(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_59(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_58();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_58()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_59(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_60()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_124())
		{
			if (func_123(0))
			{
				if (!func_119(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_118()))
					{
						if (func_117() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_117());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_115(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_66("GB_BCUT_TICK1", func_118(), iVar0, 0, 0, 1);
						}
						func_65(20);
						func_62(func_118(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_228(iParam0, 0, 1))
	{
		Var0.f_0 = 657959395;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(iParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_59(iParam0));
	}
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = Global_1921036.f_9;
	*uParam1 = Global_1921036.f_10;
}

var func_64(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_511;
}

void func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810287.f_5193.f_7[iVar0]), iVar1);
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_75(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_67(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_72() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_70(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_68(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_69(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_70(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_71(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
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

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_72()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_73(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

var func_74(char[4] cParam0)
{
	return cParam0;
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_113(PLAYER::PLAYER_ID()) || (func_112() && func_111())) && !MISC::IS_BIT_SET(Global_2810287.f_4659, 31)) && !bParam4)
	{
		iVar1 = func_110();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_228(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_108(iParam1, iParam0, 0);
							}
							else
							{
								return func_88(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_88(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_108(iParam1, iParam0, 0);
				}
				else
				{
					return func_76(0, -1, 0);
				}
			}
			else
			{
				return func_76(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_108(iParam1, iParam0, 0);
		}
		else
		{
			return func_88(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_88(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	return func_77(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_87() || (func_86() && func_84())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_83(iParam2, iVar0);
		}
		else
		{
			return func_83(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_81(1);
				}
				else
				{
					return func_81(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4718592.f_4, 20))
			{
				return func_78(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_78(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_81(1);
	}
	return func_81(0);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_4718592.f_86750, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_82(int iParam0, int iParam1, int iParam2)
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
					return MISC::IS_BIT_SET(Global_4718592.f_543, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_80(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_84()
{
	if (func_85())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4718592.f_142301, 4);
}

bool func_85()
{
	return MISC::IS_BIT_SET(Global_4718592.f_131903, 12);
}

bool func_86()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4718592.f_142301, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4718592.f_142301, 0) || Global_1923663) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_87()
{
	if (func_85() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_98())
			{
				iVar3 = func_93(iParam0);
				if (!iVar3 == -1)
				{
					return func_91(iVar3);
				}
			}
			if ((func_90(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_82(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)))
			{
				return func_81(1);
			}
			else if (MISC::IS_BIT_SET(Global_4718592.f_15, 26))
			{
				return func_89(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_81(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_93(iParam0);
	if (!iVar4 == -1)
	{
		return func_91(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_89(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_92(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_92(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_93(int iParam0)
{
	if (!iParam0 == func_97())
	{
		if (func_95(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_94(iParam0)];
		}
	}
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_97();
}

bool func_95(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_97();
}

int func_96(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_97())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_97()
{
	return -1;
}

int func_98()
{
	if ((((((func_107() || func_106()) || func_105()) || func_104()) || func_103()) || func_101()) || func_99())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	return func_100(Global_4718592.f_86750);
}

int func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_101()
{
	return func_102(Global_4718592.f_86750);
}

int func_102(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_103()
{
	return Global_2714627.f_24;
}

var func_104()
{
	return Global_2714627.f_21;
}

var func_105()
{
	return Global_2714627.f_19;
}

var func_106()
{
	return Global_2714627.f_18;
}

var func_107()
{
	return Global_2714627.f_17;
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_98())
	{
		iVar2 = func_93(iParam1);
		if (!iVar2 == -1)
		{
			return func_91(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_97())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_77(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_21, 13))
		{
			iVar0 = func_109(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_82(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_89(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_110()
{
	return Global_2621446.f_2;
}

bool func_111()
{
	return MISC::IS_BIT_SET(Global_2621446, 4);
}

bool func_112()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

int func_113(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return 1;
	}
	if (func_114())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

void func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_116(1);
	}
	else
	{
		iVar1 = func_116(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_116(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12654;
}

int func_117()
{
	return Global_262145.f_12653;
}

int func_118()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
}

bool func_119(bool bParam0)
{
	return func_120(PLAYER::PLAYER_ID(), bParam0);
}

int func_120(int iParam0, bool bParam1)
{
	return func_121(iParam0, bParam1, 1);
}

int func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_122(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_97() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_97())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_123(bool bParam0)
{
	return func_95(PLAYER::PLAYER_ID(), bParam0);
}

bool func_124()
{
	return func_96(PLAYER::PLAYER_ID());
}

void func_125(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_126(iParam0, iParam1, iParam2, fParam3);
}

void func_126(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_127(iParam0, iParam1, iParam2, fParam3);
}

void func_127(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_4 = iVar1;
	Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_3 = (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_128(iVar1, 0);
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_129(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_130(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_130(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_136(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_131(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_131(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_134(iParam0, 1) };
	if (iParam0 == func_133(PLAYER::PLAYER_PED_ID()))
	{
		func_132(1);
	}
	func_136(Var0, iParam1, 0, sParam2, iParam3);
}

void func_132(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_133(int iParam0)
{
	return iParam0;
}

Vector3 func_134(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_135(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_135(int iParam0)
{
	return iParam0;
}

void func_136(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_139(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam3;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam4;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_138();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_137();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_137()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_138()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_139(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_140(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_141(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_141(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_182(PLAYER::PLAYER_ID()) || func_181(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_179() || func_175(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_174(sParam2))
	{
	}
	if (func_173())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_171(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_170(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_167(0, &iVar1);
					break;
				
				case 3:
					func_167(1, &iVar1);
					break;
				
				case 1:
					func_164(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_162(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_152((func_161(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_162(1166, iVar1, -1);
				}
				func_146(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_142((func_144(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_142((func_144(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_142(int iParam0)
{
	if (func_173())
	{
		Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_143(joaat("mpply_globalxp"), iParam0);
	}
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_144(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_228(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_145(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_145(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_145(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_146(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_151(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_149(func_150(&Var0));
			if (iVar13 == 0)
			{
				func_148(&Global_1655483, iParam0);
				func_147(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar13 == 1)
			{
				func_148(&Global_1655484, iParam0);
				func_147(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar13 == 2)
			{
				func_148(&Global_1655485, iParam0);
				func_147(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar13 == 3)
			{
				func_148(&Global_1655486, iParam0);
				func_147(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar13 == 4)
			{
				func_148(&Global_1655487, iParam0);
				func_147(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_149(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_150(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

struct<13> func_151(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	if (func_173())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_46(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_46(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_160(PLAYER::PLAYER_ID()))
		{
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_158(iParam0, 1);
		}
		func_157(640, iParam0, -1, 1);
		func_156(641, func_158(iParam0, 1), -1, 1, 0);
		Global_1655628[func_46(-1)] = iParam0;
		func_153(-1109644434, 7, 0);
	}
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_155(iParam1, iParam2))
	{
		iVar0 = func_154();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_155(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_156(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_157(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_46(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_46(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_46(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_46(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_46(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_46(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_46(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_46(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_46(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_46(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_46(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_46(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_46(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_46(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_46(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_46(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_46(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_46(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_46(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_46(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_46(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_46(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_46(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_46(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_46(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_46(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_46(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_46(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_46(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_46(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_46(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_46(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_46(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_46(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_46(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_46(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_46(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_46(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_46(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_46(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_46(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_46(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_46(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_46(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_46(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_46(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_46(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_46(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_46(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_46(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_46(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_46(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_158(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_159(iParam0, 0);
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_160(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_161(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655628[func_46(-1)];
			}
			else if (func_160(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_46(-1)];
	}
	return 0;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_183(iParam0, func_46(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_163(iParam0))
	{
		func_156(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_157(iParam0, iVar0, iParam2, 1);
	}
}

int func_163(int iParam0)
{
	if (Global_1655477)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10890:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

void func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_166(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_165(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_165(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_165(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_166(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783300 = { func_151(iParam0) };
		Global_2783313 = { func_151(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783300))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783313))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783230, 35, &Global_2783300);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_167(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_228(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_166(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_228(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_168(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_166(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_165(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_165(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_168(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_169(iParam0), func_169(iParam1));
	return 0f;
}

Vector3 func_169(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_165(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_171(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_161(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_161(PLAYER::PLAYER_ID());
		}
	}
	if (func_172(8000, 0, 0) > 0)
	{
		if (func_172(8000, 0, 0) < (iParam0 + func_161(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_172(8000, 0, 0) - func_161(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_172(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294328[iParam0];
}

int func_173()
{
	return 1;
}

int func_174(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)
{
	return func_176(func_177(iParam0));
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_177(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_178(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_180(Global_4718592.f_86750);
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_181(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_182(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_183(iParam0, func_46(iParam1), 0);
	iVar0++;
	if (!func_163(iParam0))
	{
		func_156(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_157(iParam0, iVar0, iParam1, 1);
	}
}

void func_185()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_81.f_2), false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_208))
		{
			iLocal_208 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_81.f_2));
			if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
			{
				HUD::SET_BLIP_SPRITE(iLocal_208, 307);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_208, "PTD_BLIPN");
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_208, 64);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_208, "PTD_BLIPH");
			}
			HUD::SET_BLIP_COLOUR(iLocal_208, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_208, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_208, 6);
			if (func_188())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_208, 0);
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_81.f_1, 0))
			{
				HUD::SET_BLIP_ROTATION(iLocal_208, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_81.f_2))));
			}
			if (func_188() || func_186())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_208, 0);
			}
			else
			{
				HUD::SET_BLIP_DISPLAY(iLocal_208, 4);
			}
		}
	}
}

var func_186()
{
	return Global_2678323.f_1865;
}

void func_187(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_188()
{
	if (func_189(19))
	{
		return 1;
	}
	if (func_189(0))
	{
		return 1;
	}
	return 0;
}

bool func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = func_183(2482, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

bool func_190(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2676139, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_191()
{
	return Local_81.f_0;
}

int func_192(int iParam0)
{
	return Local_109[iParam0 /*3*/];
}

bool func_193(int iParam0)
{
	return !func_194(iParam0);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6917)
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6918)
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6919)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6920)
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_195(4))
			{
				return 0;
			}
			if (func_196(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_228(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2689156[iVar0 /*453*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_196(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

int func_197()
{
	var uVar0;
	
	func_205(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_204())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_203())
	{
		return 1;
	}
	if (func_202(159))
	{
		if (!func_201())
		{
			return 1;
		}
	}
	if (func_202(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_198() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_198()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_198()
{
	switch (func_200())
	{
		case 0:
			return func_199();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_199()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_200()
{
	return Global_31505;
}

bool func_201()
{
	return Global_2714627.f_698;
}

int func_202(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return Global_2725224;
}

bool func_204()
{
	return Global_2714627.f_693;
}

void func_205(var uParam0)
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
				case -1537646326:
					func_206(iVar0);
					break;
				
				case 801199324:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_206(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_228(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_207(iVar4, &bVar5))
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

int func_207(int iParam0, var uParam1)
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

void func_208()
{
	SYSTEM::WAIT(0);
}

void func_209()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_208))
	{
		HUD::REMOVE_BLIP(&iLocal_208);
	}
	if (MISC::IS_BIT_SET(Local_81.f_1, 1))
	{
		func_29(2, "PTD_FAIL", 0, 0, -99);
	}
	func_212();
	if (func_191() == 4 && Local_81.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_81.f_4, false);
	}
	func_211(15, 0);
	func_210();
}

void func_210()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_217, iParam0))
		{
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_217), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_217, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_217), iParam0);
	}
}

void func_212()
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_206);
}

void func_213(struct<21> Param0)
{
	int iVar0;
	
	func_224(func_225(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_222(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_81, 28, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_109, 97, 0);
	if (!func_221())
	{
		func_209();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_81.f_4 = joaat("cuban800");
					Local_81.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_81.f_4 = joaat("stunt");
					Local_81.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_81.f_4 = joaat("duster");
					Local_81.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_81.f_4 = joaat("mammatus");
					Local_81.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_81.f_4 = joaat("maverick");
					Local_81.f_5 = joaat("a_m_m_eastsa_02");
					MISC::SET_BIT(&(Local_81.f_1), 0);
					break;
				
				case 5:
					Local_81.f_4 = joaat("swift");
					Local_81.f_5 = joaat("a_m_y_busicas_01");
					MISC::SET_BIT(&(Local_81.f_1), 0);
					break;
			}
			if (Local_81.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_81.f_4, true);
			}
			func_220();
			func_214();
		}
		func_211(15, 1);
		Local_109[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_209();
	}
}

void func_214()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_81.f_9[iVar0 /*3*/] = { func_216(iVar1) };
		if (iVar0 > 0)
		{
			if (func_215(Local_81.f_9[iVar0 /*3*/], Local_81.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_81.f_9[iVar0 /*3*/] = { func_216(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_215(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_216(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_219();
		
		case 1:
			return func_218();
		
		case 2:
			return func_217();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_217()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_218()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_219()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_220()
{
	Local_81.f_6 = { func_216(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_81.f_6 = { Local_81.f_6 + Vector(120f, 0f, 0f) };
}

int func_221()
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
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_204())
		{
			return 0;
		}
		if (func_202(157))
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

int func_222(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_210();
			}
			else
			{
				return 0;
			}
		}
		if (!func_223())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_210();
					}
					else
					{
						return 0;
					}
				}
				if (func_204())
				{
					if (!bParam2)
					{
						func_210();
					}
					else
					{
						return 0;
					}
				}
				if (func_202(157))
				{
					if (!bParam2)
					{
						func_210();
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
					func_210();
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
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_210();
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
			func_210();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_223()
{
	return Global_1575022;
}

void func_224(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_210();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_226(func_227(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_227(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

int func_228(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

