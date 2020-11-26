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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int* iLocal_58 = NULL;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int* iLocal_67 = NULL;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_56 = MISC::GET_GAME_TIMER();
	iLocal_65 = 0;
	func_168(iLocal_66);
	func_167();
	func_165(&Global_4270065);
	func_164(&Global_4270065, 1);
	func_162(&iLocal_67);
	while (true)
	{
		if (Global_31017 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_31017 != 0)
			{
				if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
				{
					func_161("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_161("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_65 != 0 && Global_31017 == 0)
			{
			}
		}
		iLocal_65 = Global_31017;
		if (!func_160(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				func_151();
			}
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
			{
				func_149();
			}
			if (Global_30777)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					iVar0 = func_134(1);
					if (iVar0 > 0)
					{
						func_133(12, iVar0);
						STATS::STAT_SET_INT(joaat("NUM_GOLD_MEDALS_OBTAINED"), iVar0, true);
					}
					if (iVar0 >= 70)
					{
						func_127(12, 1);
					}
				}
				Global_30777 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_66++;
					if (MISC::GET_GAME_TIMER() > iLocal_56)
					{
						func_116(0);
						iLocal_56 = (MISC::GET_GAME_TIMER() + iLocal_61);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_64 == 1)
						{
							if (func_115(53))
							{
								func_114();
							}
						}
						iLocal_57 = (MISC::GET_GAME_TIMER() + iLocal_62);
					}
				}
			}
			func_106(&Global_4270065);
			func_1();
		}
		else
		{
			func_106(&Global_4270065);
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	
	if (!func_105(&Global_4270065))
	{
		return;
	}
	if (!Global_76622)
	{
		if (iLocal_72)
		{
			iLocal_72 = 0;
		}
		return;
	}
	if (!func_102())
	{
		return;
	}
	if (bLocal_70)
	{
		if (!func_100(3, -1))
		{
			return;
		}
		if (!func_100(5, -1))
		{
			return;
		}
	}
	if (iLocal_72)
	{
		return;
	}
	bVar0 = SOCIALCLUB::_0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_71 == 0)
	{
	}
	if (bVar0 && iVar1 == 0)
	{
		func_99();
		iLocal_72 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
	{
		if (func_96())
		{
			func_127(33, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_92(&iLocal_67) > 5f)
		{
			func_19(PLAYER::PLAYER_PED_ID());
			func_162(&iLocal_67);
		}
	}
	iVar0 = func_17(func_18(-1), 0);
	if (iVar0 >= 100)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
		{
			func_127(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
		{
			func_127(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
		{
			func_127(34, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		func_15(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
	{
		if (func_14(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
		{
			func_127(38, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
	{
		if (func_13(48, -1) >= 10)
		{
			func_127(39, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
	{
		if (func_13(52, -1) > 0)
		{
			func_127(40, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_2225.f_18, 1))
		{
			func_127(41, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
	{
		if (func_12(755, -1, 0) >= 30)
		{
			func_127(43, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
	{
		if (func_13(14, -1) >= 20)
		{
			func_127(44, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		func_10(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (func_7(11, -1, -1))
		{
			func_127(48, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)
{
	if (!func_102())
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_127(49, 1);
	return 1;
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2583656[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

bool func_7(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	iVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_8(int iParam0)
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

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
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

int func_10(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_102())
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	iVar2 = func_12(756, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_11(iVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_127(45, 1);
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = MISC::IS_BIT_SET(iParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0:
			return bVar0;
		
		case 1:
			return bVar0;
		
		case 2:
			return bVar0;
		
		case 3:
			return bVar0;
		
		case 4:
			return bVar0;
		
		case 5:
			return bVar0;
		
		case 6:
			return bVar0;
		
		case 7:
			return bVar0;
		
		case 8:
			return bVar0;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_5(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2585280[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)
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

int func_15(bool bParam0)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		return 0;
	}
	if (!func_102())
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = (iVar0 - func_13(58, -1));
		iVar0 = (iVar0 - func_13(57, -1));
	}
	if (func_16(8, -1))
	{
		func_127(37, 1);
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2585647[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
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
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
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

int func_18(int iParam0)
{
	return Global_1388060[func_5(iParam0)];
}

void func_19(int iParam0)
{
	int iVar0;
	struct<222> Var1;
	
	Var1 = 44;
	Var1.f_221 = 51;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		return;
	}
	func_88(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (func_20(iParam0, Var1[iVar0 /*5*/]))
		{
			func_127(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_221)
	{
		if (func_20(iParam0, Var1.f_221[iVar0 /*5*/]))
		{
			func_127(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1)
{
	int* iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		return 0;
	}
	iVar1 = func_87(iParam1, &iVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1) < 3))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	while (func_21(&Var7, iParam1, iVar6, 0))
	{
		if (Var7.f_4 == joaat("WAPClip"))
		{
			iVar3++;
		}
		if (Var7.f_4 == joaat("WAPScop"))
		{
			iVar2++;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, Var7))
		{
			if (Var7.f_4 == joaat("WAPClip"))
			{
				iVar5 = Var7.f_6;
			}
			else if (Var7.f_4 == joaat("WAPScop"))
			{
				iVar4 = Var7.f_6;
			}
		}
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == -31573710)
		{
		}
		else
		{
			return 0;
		}
		iVar6++;
	}
	if (iVar2 > iVar4)
	{
		return 0;
	}
	if (iVar3 > iVar5)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	int* iVar15;
	struct<4> Var16;
	
	func_86(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_86(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_86(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_86(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_86(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_86(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_86(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_86(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_86(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_86(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_86(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_86(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_86(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 1423184737, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -2122814295, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -1828202758, joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_87(iParam1, &iVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var16))
					{
						if (!func_74(Var16.f_3))
						{
							if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16 == -31573710)
							{
								iVar9++;
							}
							else if (Var16 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var16 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_86(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int* iVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	int* iVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_87(iParam0, &iVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (!func_74(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_69(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_73() && (func_72() || func_71()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2885));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_10572;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_262145.f_20607;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2886));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4339));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_20608;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4340));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11956;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2888));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_10571;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2889));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_10575;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2890));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_16127;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_10574;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2892));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_16122;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_10568;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2893));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_16121;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_10570;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4408));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_10569;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_11957;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11958;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4409));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_11953;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4383));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_10577;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2891));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11954;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_7180;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11955;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_7185;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_16124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7188;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_7184;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7182;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7187;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_11959;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_7186;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_7190;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7183;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_7193;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7196;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7191;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_7192;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7194;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_11960;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_7668;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_8392;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_16128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8393;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_8394;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_8398;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8399;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_8401;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8402;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8403;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14622));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2887));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_10573;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_10576;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_10893;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_10894;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_10895;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_10896;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_10897;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_10898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_10899;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_10901;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_10918;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_16126;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_10919;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_12801;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_12859;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_12800;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_14552;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_20603;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_16125;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20604;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_20606;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20724;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20725;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20726;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20727;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20728;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20729;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20730;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20731;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20732;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20733;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_20734;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20735;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20736;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20737;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20738;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20739;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20740;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20741;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20742;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_20743;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20744;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20745;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20746;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20747;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20748;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20749;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20750;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20751;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20752;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20753;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_20754;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20755;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20756;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20757;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20758;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20759;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20760;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20761;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20762;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_20763;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20764;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20765;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20766;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20767;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20768;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_20769;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_20770;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_20771;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_20772;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20773;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20774;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20775;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20776;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20777;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20778;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20779;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_20780;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_20781;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20782;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_20783;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20785;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20786;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_20784;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_20787;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_20788;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_20789;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_20790;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_20791;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_20792;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_20793;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20794;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20796;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20795;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20797;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20798;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_20799;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_20800;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_20801;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_20802;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_20803;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_20805;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_20804;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_20806;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_20807;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20808;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_20809;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_20810;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_20811;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_20812;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_20813;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_20814;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_20815;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_20816;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_20817;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_20818;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_20819;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_20820;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22461;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22462;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22460;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22459;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22488;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22489;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22490;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22491;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_22492;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_22493;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22463;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22467;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22465;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22466;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22464;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22494;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22495;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22496;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22497;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_22498;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22499;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22500;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22501;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22502;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22503;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22504;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22505;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22506;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_22507;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23374;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22483;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22485;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22484;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22482;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_22539;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_22540;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_22541;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_22542;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22468;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22472;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22470;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22471;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22469;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22508;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22509;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22510;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_22511;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22512;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22513;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22514;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22515;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22516;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22517;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22518;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22519;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_22520;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22473;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22474;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22476;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22475;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22521;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22522;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_22523;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_22524;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22477;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22481;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22479;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22480;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22478;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22525;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22526;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_22527;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22528;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_22538;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_22529;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22530;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22531;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22532;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22533;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22534;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22535;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22536;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22537;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_20852;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_20853;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_20854;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_20855;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_20856;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_20857;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_20858;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_20859;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_20860;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_20861;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case 1423184737:
						iVar0 = 0;
						break;
					
					case -2122814295:
						iVar0 = Global_262145.f_27905;
						break;
					
					case -1828202758:
						iVar0 = Global_262145.f_27906;
						break;
				}
				break;
			
			default:
				iVar6 = func_87(iParam0, &iVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (!func_74(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_67())
	{
		StringCopy(&Var11, func_65(iParam1, iParam0), 16);
		func_61(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_63(iParam0), func_62(iParam0), -1, 0, 0);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), 1671640801, true);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_23(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_67())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_76622)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_53 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_122) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_102())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_26()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_14(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_14(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

int func_27()
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_51(joaat("MPPLY_STARTED_MP")) };
	if (func_28(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_28(struct<7> Param0, struct<7> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param1);
	iVar1 = func_39(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_29(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return 1;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0)
{
	return iParam0 & 15;
}

var func_35(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_36(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_39(struct<7> Param0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_44(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_49(struct<6> Param0, var uParam1)
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_42(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_51(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_DATE(iVar0, &Var2, 7, -1))
	{
		return Var2;
	}
	return Var1;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56()
{
	func_57();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_57()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_58(PLAYER::PLAYER_PED_ID());
			if (func_55(iVar0) && (!func_160(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_55(Global_111638.f_2358.f_539.f_4321))
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

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_61(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
			break;
	}
	return -1;
}

int func_63(int iParam0)
{
	return func_64(iParam0);
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
	}
	return 0;
}

char* func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int* iVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
			break;
		
		case 1423184737:
			return "WCT_CLIP1";
			break;
		
		case -2122814295:
			return "WCT_CLIP2";
			break;
		
		case -1828202758:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_87(iParam1, &iVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_66(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_66(var uParam0)
{
	return uParam0;
}

int func_67()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_68())
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_69(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_70(iParam0))
	{
		return Global_262145.f_20713;
	}
	return 1;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_25, 6))
	{
		if (MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (MISC::IS_BIT_SET(iVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 2) || MISC::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_73()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_84())
	{
		return 0;
	}
	iVar0 = func_79(iParam0, iParam1, iParam2);
	iVar1 = func_77(iParam0, iParam1);
	return MISC::IS_BIT_SET(iVar0, func_76(iVar1));
}

int func_76(int iParam0)
{
	return (iParam0 % 32);
}

int func_77(int iParam0, int iParam1)
{
	return func_78(iParam0, iParam1);
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case 1423184737:
					return 555;
					break;
				
				case -2122814295:
					return 556;
					break;
				
				case -1828202758:
					return 557;
					break;
			}
			break;
	}
	return 0;
}

var func_79(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(func_80(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_77(iParam0, iParam1);
	iVar1 = func_83(iVar0);
	if ((func_82() == 0 || func_81() == 0) || (func_82() == 999 && func_81() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
		}
	}
	return 1753;
}

int func_81()
{
	return Global_30769;
}

int func_82()
{
	return Global_30768;
}

int func_83(int iParam0)
{
	return (iParam0 / 32);
}

bool func_84()
{
	return Global_1312856;
}

int func_85(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
		{
			return 1;
		}
	}
	return 0;
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_87(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_88(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_91(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_91(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_90(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_90(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_89(Var7.f_1)) && iVar9 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8))
						{
							if (!func_74(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, false))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_89(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int* iVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_87(iParam0, &iVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_74(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

float func_92(int* iParam0)
{
	if (func_95(iParam0))
	{
		if (func_94(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_93(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_93(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_94(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

bool func_95(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

int func_96()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	return func_4(124, -1);
}

bool func_97()
{
	return Global_1312865;
}

bool func_98()
{
	return Global_1312867;
}

void func_99()
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 70;
	while (iVar0 <= 77)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_127(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_101(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_102()
{
	if (func_104() && func_103(0))
	{
		return 1;
	}
	return 0;
}

var func_103(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_104()
{
	return func_103(func_6() + 1);
}

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

void func_106(var uParam0)
{
	float fVar0;
	
	fVar0 = Global_4270064;
	uParam0->f_80 = (uParam0->f_80 + MISC::GET_FRAME_TIME());
	if (!func_105(uParam0))
	{
		return;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
		return;
	}
	if (func_160(14))
	{
		fVar0 = 10f;
	}
	if (func_113(uParam0) < fVar0)
	{
		return;
	}
	if (func_111(uParam0, 0))
	{
		return;
	}
	if (func_109((*uParam0)[0]))
	{
		func_108(uParam0);
		func_107(uParam0);
		func_112(uParam0, 0);
	}
}

void func_107(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_111(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_109(int iParam0)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 0;
	}
	if (func_160(14) && !func_110(iParam0))
	{
		return 0;
	}
	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_113(var uParam0)
{
	return uParam0->f_80;
}

int func_114()
{
	float fVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_76622)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			fVar0 = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
			if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
			{
				func_133(14, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_127(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_116(bool bParam0)
{
	if (Global_76622)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	func_126(bParam0);
	func_119(bParam0);
	func_118();
	func_117();
	if (bParam0)
	{
		if (func_95(&iLocal_58))
		{
		}
	}
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("FIRST_PERSON_CAM_TIME")));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("MP_FIRST_PERSON_CAM_TIME")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_127(50, 1);
		return 1;
	}
	return 0;
}

int func_118()
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
	{
		return 0;
	}
	iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
	if (iVar0 > 0)
	{
		if (Global_31032 < iVar0)
		{
			if (Global_31032 >= 0)
			{
				func_133(22, iVar0);
			}
			Global_31032 = iVar0;
		}
	}
	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_127(22, 1);
		return 1;
	}
	return 0;
}

int func_119(bool bParam0)
{
	var uVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		return 0;
	}
	uVar0[0] = func_125();
	uVar0[1] = func_124();
	uVar0[2] = func_123();
	uVar0[3] = func_122();
	uVar0[4] = func_121();
	uVar0[5] = func_120();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (uVar0[iVar2])
		{
			iVar1++;
		}
		iVar2++;
	}
	STATS::STAT_GET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &iVar3, -1);
	if (iVar1 > iVar3 && iVar1 > 0)
	{
		STATS::STAT_SET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), iVar1, true);
		func_133(17, iVar1);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_127(17, 1);
	return 1;
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_111638.f_1983[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_111638.f_19142[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_24971.f_1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_24974.f_2, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_111638.f_19011.f_19[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_111638.f_20006[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_126(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_133(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_127(27, 1);
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_128(iParam0, iParam1);
}

int func_128(int iParam0, int iParam1)
{
	if (func_160(14) && !func_110(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_105(&Global_4270065))
	{
		if (func_131(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_129(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_129(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_160(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_131(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	func_165(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_130(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_160(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_131(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_131(var uParam0, int iParam1)
{
	return func_132(uParam0, iParam1) != -1;
}

int func_132(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_134(bool bParam0)
{
	int iVar0;
	
	iVar0 = (func_147(bParam0) + func_135(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_135(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_18569)
	{
		if (Global_111638.f_18569[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 7))
			{
				iVar7 = func_141(iVar0, 7, iVar5);
				if (!Global_61737[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0);
			iVar2 = func_136(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_111638.f_2347[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_136(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_137(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_138(int iParam0)
{
	if (func_139(iParam0, func_140(Global_61737[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_61737[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_111638.f_24899[4 /*4*/] == func_56())
	{
		Global_61737[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_61737[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_61737[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_61737[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			return Global_89532[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_142(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return Global_89532[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_144(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return !MISC::IS_BIT_SET(Global_89532[iParam0 /*34*/].f_15, 5);
			break;
		
		case 7:
			return func_146(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_147(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_9080.f_330)
	{
		if (Global_111638.f_9080.f_330[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 1))
			{
				iVar7 = func_141(iVar0, 1, iVar5);
				if (!Global_61737[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_148(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0);
			iVar2 = func_136(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = func_140(Global_61737[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	
	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_127(25, 1);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_150(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
				{
					func_127(25, 1);
					return;
				}
			}
		}
	}
}

bool func_150(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_151()
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_156() == 2)
				{
					func_162(&iLocal_58);
					iLocal_55++;
				}
			}
			break;
		
		case 1:
			if (func_155() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (func_156() < 2)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_154(&iLocal_58);
				iLocal_55 = 0;
				return;
			}
			fLocal_63 = func_153(&iLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_127(24, 1);
				func_152(&iLocal_58);
				iLocal_55++;
			}
			break;
		
		case 2:
			iLocal_55++;
			break;
	}
}

void func_152(int* iParam0)
{
	if (func_95(iParam0))
	{
		if (!func_94(iParam0))
		{
			iParam0->f_2 = (func_93(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

float func_153(int* iParam0)
{
	if (func_95(iParam0))
	{
		if (func_94(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_93(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_154(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_155()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_158(2);
	if (func_157(iVar1, 0) || MISC::IS_BIT_SET(Global_94595, 2))
	{
		iVar0++;
	}
	iVar1 = func_158(1);
	if (func_157(iVar1, 0) || MISC::IS_BIT_SET(Global_94595, 1))
	{
		iVar0++;
	}
	iVar1 = func_158(0);
	if (func_157(iVar1, 0) || MISC::IS_BIT_SET(Global_94595, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_58(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_158(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_94597, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_56())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_96222[func_159(iParam0)];
}

int func_159(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_160(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_161(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_162(int* iParam0)
{
	func_163(iParam0, 0f);
}

void func_163(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_93(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_79 = iParam1;
	if (uParam0->f_79)
	{
		func_112(uParam0, 0);
	}
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_166(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4270064 - 0.5f));
}

void func_166(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 78;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

