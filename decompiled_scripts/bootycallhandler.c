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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_201 = -1;
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (!bVar0)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		{
			func_83();
		}
	}
	func_82(-1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_81())
		{
			func_83();
		}
		if (bVar0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_83();
			}
		}
		func_79();
		func_68();
		func_1();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	switch (Global_110632)
	{
		case 0:
			if (!Global_110632.f_27)
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					iVar0 = iVar1;
					if (func_66(func_67(iVar0)) && (Global_110632.f_15[iVar1] + 120000) < MISC::GET_GAME_TIMER())
					{
						if (func_64(iVar0))
						{
							func_63(iVar0, 0);
							func_58(iVar0, 0);
						}
						if (func_57(iVar0))
						{
							Global_110632.f_26 = 0;
						}
						else
						{
							func_55(&uLocal_36, 3, 0, func_56(iVar0), 0, 1);
							Var18 = { func_54() };
							if (func_52(iVar0))
							{
								func_63(iVar0, 1);
								Global_110632.f_26 = 0;
								StringCopy(&cVar2, "BC_HATE_", 64);
							}
							else if (((MISC::GET_GAME_TIMER() >= Global_110632.f_4[iVar1] && func_51()) && func_50(iVar0)) && func_49(iVar0) >= func_48(iVar0))
							{
								Global_110632.f_26 = 1;
								StringCopy(&cVar2, "BC_STRY_", 64);
							}
							else
							{
								Global_110632.f_26 = 0;
								StringCopy(&cVar2, "BC_STRN_", 64);
							}
							if (func_47() == 2)
							{
								func_55(&uLocal_36, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							else if (func_47() == 0)
							{
								func_55(&uLocal_36, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else if (func_47() == 1)
							{
								func_55(&uLocal_36, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							StringIntConCat(&cVar2, iVar1, 64);
							func_33(&uLocal_36, func_67(iVar1), "BCAUD", &Var18, &Var18, &cVar2, &cVar2, 12, 1, 0, 0, 0);
						}
						Global_110632.f_1 = iVar1;
						Global_110632 = 1;
					}
					iVar1++;
				}
			}
			break;
		
		case 1:
			if (!func_32())
			{
				if (Global_110632.f_26)
				{
					if (func_31() && !func_30())
					{
						func_19(Global_110632.f_1);
					}
					if (func_18())
					{
						func_3();
						func_2(0);
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_2(bool bParam0)
{
	Global_110632 = 0;
	Global_110632.f_1 = -1;
	Global_110632.f_2 = -1;
	if (bParam0)
	{
		func_82(-1);
	}
}

void func_3()
{
	if (func_16())
	{
		return;
	}
	iVar0 = func_15(Global_110632.f_1);
	func_4(-384575792, iVar0, 7, 3, func_9(), func_67(Global_110632.f_1), 0, 10000, -1, 0, -1, 0, 1);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_8(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (MISC::IS_BIT_SET(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_7(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_5(0);
		func_5(1);
		func_5(2);
		return 1;
	}
	return 0;
}

void func_5(int iParam0)
{
	iVar1 = 0;
	if (!func_6(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_7683[iVar0].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_7683.f_651[iVar2].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_8(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_9()
{
	func_10();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_10()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_13(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_12(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_11(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_12(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_14(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_14(int iParam0)
{
	return Global_1798[iParam0];
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_16()
{
	if (func_17() == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	return Global_30768;
}

int func_18()
{
	if (Global_20855)
	{
		return 1;
	}
	return 0;
}

void func_19(int iParam0)
{
	SCRIPT::REQUEST_SCRIPT("stripperhome");
	while (!SCRIPT::HAS_SCRIPT_LOADED("stripperhome"))
	{
		SYSTEM::WAIT(0);
	}
	if (func_51())
	{
		if (func_16())
		{
			Var0 = 1;
			Var0[0] = iParam0;
			Var0.f_2 = 1;
			Var0.f_3 = -1;
			Var0.f_4 = 1;
			Var0.f_5 = 1;
			SYSTEM::START_NEW_SCRIPT_WITH_ARGS("stripperhome", &Var0, 6, 1424);
			func_29(Global_110632.f_1, -1);
			Global_110632 = 3;
		}
		else
		{
			iLocal_201 = -1;
			iVar6 = func_24(&iLocal_201, 6, 10, 0, 0);
			while (iVar6 == 2)
			{
				iVar6 = func_24(&iLocal_201, 6, 10, 0, 0);
				SYSTEM::WAIT(0);
			}
			if (iVar6 == 1)
			{
				func_20(iParam0, 0);
				Var7 = 1;
				Var7[0] = iParam0;
				Var7.f_2 = 1;
				Var7.f_3 = iLocal_201;
				Var7.f_4 = 1;
				Var7.f_5 = 0;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("stripperhome", &Var7, 6, 1424);
				func_29(Global_110632.f_1, -1);
				Global_110632 = 3;
			}
			else
			{
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
				Global_110632 = 0;
			}
		}
	}
	else
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
		Global_110632 = 0;
	}
	Global_110632.f_1 = -1;
	func_82(-1);
}

void func_20(int iParam0, int iParam1)
{
	Global_111638.f_243[func_21()].f_2[iParam0].f_1 = iParam1;
}

int func_21()
{
	iVar0 = func_47();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_22(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_22(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

var func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_28(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_26(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, Global_41431);
}

int func_27(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_29(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

int func_30()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_33(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, char[4] cParam5, char[4] cParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	func_46(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_45();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_43(2, &uVar0, &uVar11, uParam3, uParam4, cParam5, cParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_34(&uVar0, &uVar11, iParam7, bParam11);
}

int func_34(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_42();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_41(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_40();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0] = { Global_20985[0] };
			Global_20959[1] = { Global_20985[1] };
			Global_21011[0] = { Global_21037[0] };
			Global_21011[1] = { Global_21037[1] };
			Global_20972[0] = { Global_20998[0] };
			Global_20972[1] = { Global_20998[1] };
			Global_21024[0] = { Global_21050[0] };
			Global_21024[1] = { Global_21050[1] };
		}
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam3)
			{
				func_39();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_38())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_37())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_36();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_35();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_42();
	}
	return 0;
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_36()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_37()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_39()
{
	if (func_11(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
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
		Global_19486 = func_47();
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

void func_40()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_41(int iParam0, int iParam1)
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

void func_42()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_43(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_44(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_44(var uParam0)
{
	Global_20802 = uParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_45()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = uParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_47()
{
	func_10();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 1:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 2:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 3:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 4:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 5:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 6:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		
		case 7:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
	}
	return 0;
}

int func_49(int iParam0)
{
	return Global_111638.f_243[func_21()].f_2[iParam0];
}

int func_50(int iParam0)
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
			if (CLOCK::GET_CLOCK_HOURS() < 6 || CLOCK::GET_CLOCK_HOURS() > 14)
			{
				return 1;
			}
			break;
		
		case 8:
		case 9:
			return 1;
			break;
	}
	return 0;
}

int func_51()
{
	if (func_81() || Global_110660)
	{
		return 0;
	}
	return 1;
}

bool func_52(int iParam0)
{
	return func_53(Global_111638.f_243[func_21()].f_2[iParam0].f_3, 2);
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<16> func_54()
{
	StringCopy(&Var0, "BC_PLYRQ_", 64);
	if (func_47() == 0)
	{
		StringConCat(&Var0, "M", 64);
	}
	else if (func_47() == 2)
	{
		StringConCat(&Var0, "T", 64);
	}
	else if (func_47() == 1)
	{
		StringConCat(&Var0, "F", 64);
	}
	return Var0;
}

void func_55(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

bool func_57(int iParam0)
{
	return func_53(Global_111638.f_243[func_21()].f_2[iParam0].f_3, 4);
}

void func_58(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_61(&(Global_111638.f_243[func_21()].f_2[iParam0].f_3), 2);
	}
	else
	{
		func_59(&(Global_111638.f_243[func_21()].f_2[iParam0].f_3), 2);
	}
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_61(&(Global_111638.f_243[func_21()].f_2[iParam0].f_3), 4);
	}
	else
	{
		func_59(&(Global_111638.f_243[func_21()].f_2[iParam0].f_3), 4);
	}
}

bool func_64(int iParam0)
{
	if (func_52(iParam0))
	{
		return func_49(iParam0) >= func_65(iParam0);
	}
	return func_49(iParam0) >= func_48(iParam0);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 1:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 2:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 3:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 4:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 5:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 6:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		case 7:
			return SYSTEM::FLOOR((0.8f * 7500f));
			break;
		
		default:
			return 7500;
			break;
	}
	return 0;
}

int func_66(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

void func_68()
{
	if (func_16())
	{
		return;
	}
	switch (Global_110632)
	{
		case 0:
			if (!Global_110632.f_27 && func_77(0))
			{
				if (MISC::GET_GAME_TIMER() >= Global_110632.f_3)
				{
					Global_110632.f_1 = func_76();
					iVar0 = Global_110632.f_1;
					if ((((Global_110632.f_1 >= 0 && func_51()) && func_73(func_67(iVar0))) && func_50(iVar0)) && func_49(iVar0) >= func_48(iVar0))
					{
						iVar1 = func_15(Global_110632.f_1);
						iVar2 = func_72(0);
						func_4(-384575792, iVar1, iVar2, 3, func_9(), func_67(Global_110632.f_1), 0, 10000, -1, 0, -1, 0, 1);
						func_69(Global_110632.f_1);
					}
					if (!func_50(Global_110632.f_1))
					{
						func_82(300000);
					}
					else
					{
						func_82(-1);
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_69(int iParam0)
{
	if (func_71(iParam0) < 0)
	{
		func_70(iParam0, 0);
	}
	Global_111638.f_243[func_21()].f_2[iParam0].f_2++;
}

void func_70(int iParam0, int iParam1)
{
	Global_111638.f_243[func_21()].f_2[iParam0].f_2 = iParam1;
}

int func_71(int iParam0)
{
	return Global_111638.f_243[func_21()].f_2[iParam0].f_2;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

bool func_73(int iParam0)
{
	iVar0 = func_75();
	return func_74(iParam0, iVar0) == 1;
}

int func_74(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

int func_75()
{
	switch (func_12(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 4;
}

int func_76()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_111638.f_243[func_47()].f_2[iVar0].f_4 && MISC::GET_GAME_TIMER() >= Global_110632.f_4[iVar0])
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		return iVar2[iVar13];
	}
	return -1;
}

int func_77(bool bParam0)
{
	if ((((func_78(0) && !bParam0) || func_32()) || Global_110632.f_2 != -1) || !func_6(func_47()))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_79()
{
	if (!Global_110632.f_27)
	{
		if (!func_80())
		{
			func_2(0);
			Global_110632.f_27 = 1;
		}
	}
	else if (func_80())
	{
		if (Global_110632.f_3 < (MISC::GET_GAME_TIMER() + 120000))
		{
			func_82(1800000);
		}
		Global_110632.f_27 = 0;
	}
}

int func_80()
{
	if (!func_51() || Global_110661)
	{
		return 0;
	}
	return 1;
}

int func_81()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_83()
{
	if (iLocal_201 != -1)
	{
		func_84(&iLocal_201);
	}
	if (Global_110632 == 1)
	{
		func_3();
		func_2(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_84(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

