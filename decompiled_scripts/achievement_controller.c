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
	func_162(&uLocal_67);
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
						STATS::STAT_SET_INT(2105240537, iVar0, 1);
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
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
	uVar0 = SOCIALCLUB::_0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_71 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
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
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
	{
		if (func_96())
		{
			func_127(33, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_92(&uLocal_67) > 5f)
		{
			func_19(PLAYER::PLAYER_PED_ID());
			func_162(&uLocal_67);
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
		if (func_14(-1302220678) >= 5)
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
	uVar0 = Global_2583656[iParam0][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)
{
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

int func_7(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	uVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)
{
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
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_10(bool bParam0)
{
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
	uVar2 = func_12(756, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_11(uVar2, iVar0, bParam0))
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
	bVar0 = MISC::IS_BIT_SET(uParam0, iParam1);
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
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_5(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	iVar0 = Global_2585280[iParam0][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)
{
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_15(bool bParam0)
{
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
	uVar0 = Global_2585647[iParam0][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
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
		if (func_20(iParam0, Var1[iVar0]))
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
		if (func_20(iParam0, Var1.f_221[iVar0]))
		{
			func_127(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_20(var uParam0, int iParam1)
{
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (iParam1 == -656458692)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, iParam1, 0))
	{
		return 0;
	}
	iVar39 = func_87(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != 453432689 && iParam1 != 584646201) && iParam1 != 1593441988) && iParam1 != 324215364) && iParam1 != 736523883) && iParam1 != 487013001) && iParam1 != -494615257) && iParam1 != 2017895192) && iParam1 != -1074790547) && iParam1 != -2084633992) && iParam1 != -1357824103) && iParam1 != 100416529) && iParam1 != 205991906) && iParam1 != -1660422300) && iParam1 != 2144741730) && iParam1 != -1568386805) && iParam1 != -572349828) && iParam1 != -270015777) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != -1654528753) && iParam1 != -1716589765) && (iVar39 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar39) < 3))
	{
		return 0;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, iParam1, iVar44, 0))
	{
		if (Var45.f_4 == -571619404)
		{
			iVar41++;
		}
		if (Var45.f_4 == 196630833)
		{
			iVar40++;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iParam1, Var45))
		{
			if (Var45.f_4 == -571619404)
			{
				iVar43 = Var45.f_6;
			}
			else if (Var45.f_4 == 196630833)
			{
				iVar42 = Var45.f_6;
			}
		}
		else if ((((Var45.f_4 == -571619404 || Var45.f_4 == 196630833) || Var45.f_4 == -1843287667) || Var45.f_4 == 962500902) || Var45.f_4 == -31573710)
		{
		}
		else
		{
			return 0;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return 0;
	}
	if (iVar41 > iVar43)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_86(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case 453432689:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 453432689, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 1709866683, 1863181664, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -684126074, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -19858063, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -316253668, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 899381934, 679107254, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, 1709866683, 1863181664, 1, 0);
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
						func_86(uParam0, -19858063, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -316253668, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 899381934, 679107254, 1, 0);
						break;
					
					case 3:
						func_86(uParam0, 1709866683, 1863181664, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, -684126074, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1593441988:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 119648377, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -696561875, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -966439566, 962500902, 1, 0);
					break;
			}
			break;
		
		case 584646201:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 834974250, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 614078421, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1023114086, 1863181664, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -1686714580, 962500902, 1, 0);
					break;
			}
			break;
		
		case 324215364:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -884429072, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 283556395, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_86(uParam0, 1215999497, 962500902, 1, 0);
					break;
			}
			break;
		
		case 736523883:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 736523883, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 4:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1023114086, 1863181664, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 663170192, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 643254679, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, 889808635, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 2043113590, -571619404, 3, 0);
							break;
						
						case 3:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 1019656791, 196630833, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1023114086, 1863181664, 1, 0);
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
						func_86(uParam0, 643254679, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, 889808635, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 2043113590, -571619404, 3, 0);
						break;
					
					case 3:
						func_86(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, 1019656791, 196630833, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, -1023114086, 1863181664, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, 663170192, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1074790547:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -1074790547, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 4:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 8:
							func_86(uParam0, 1319990579, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -1101075946, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -1323216997, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, -604986051, -571619404, 3, 0);
							break;
						
						case 3:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1657815255, 196630833, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1489156508, 1863181664, 1, 0);
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
						func_86(uParam0, -1101075946, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -1323216997, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, -604986051, -571619404, 3, 0);
						break;
					
					case 3:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, -1657815255, 196630833, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 7:
						func_86(uParam0, 1319990579, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -2084633992:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -2084633992, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 4:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 8:
							func_86(uParam0, -660892072, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -1614924820, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -1861183855, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, -1167922891, -571619404, 3, 0);
							break;
						
						case 3:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
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
						func_86(uParam0, -1614924820, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -1861183855, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, -1167922891, -571619404, 3, 0);
						break;
					
					case 3:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 7:
						func_86(uParam0, -660892072, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1357824103:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -91250417, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -1899902599, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1439939148, 196630833, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -2089531990, 1863181664, 1, 0);
					break;
				
				case 5:
					func_86(uParam0, 930927479, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -197857404, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -2112517305, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 1006677997, 196630833, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -690308418, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2144741730:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 2144741730, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1828795171, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -503336118, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -691692330, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
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
						func_86(uParam0, -503336118, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -691692330, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 3:
						func_86(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, -1828795171, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -494615257:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1796727865, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -2034401422, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			}
			break;
		
		case 100416529:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1681506167, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 2:
					func_86(uParam0, -767279652, 196630833, 1, 1);
					break;
				
				case 3:
					func_86(uParam0, -1135289737, 196630833, 2, 0);
					break;
				
				case 4:
					func_86(uParam0, 1077065191, 962500902, 1, 0);
					break;
			}
			break;
		
		case 205991906:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 205991906, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 3:
							func_86(uParam0, -1135289737, 196630833, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1198478068, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -767279652, 196630833, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -1135289737, 196630833, 2, 0);
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
						func_86(uParam0, 1198478068, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -767279652, 196630833, 1, 1);
						break;
					
					case 2:
						func_86(uParam0, -1135289737, 196630833, 2, 0);
						break;
					}
			}
			break;
		
		case -1568386805:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_86(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_86(uParam0, -1439939148, 196630833, 1, 0);
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -924946682, -571619404, 1, 1);
					break;
			}
			break;
		
		case -270015777:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1928132688, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -1152981993, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1657815255, 196630833, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 5:
					func_86(uParam0, 663517359, 962500902, 1, 0);
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 202788691, -1322016827, 1, 0);
					break;
				
				case 1:
					func_86(uParam0, 2076495324, 679107254, 1, 0);
					break;
				
				case 2:
					func_86(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 580369945, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -640439150, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 899381934, 679107254, 1, 0);
					break;
				
				case 3:
					func_86(uParam0, -1489156508, 1863181664, 1, 0);
					break;
				
				case 4:
					func_86(uParam0, 2008591151, 962500902, 1, 0);
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -2052698631, 962500902, 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -2045758401, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -785724817, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -282298175, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -76490669, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, -1478681000, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1675665560, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 13:
					func_86(uParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, -1489156508, 945598191, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_86(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_86(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_86(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_86(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_86(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_86(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_86(uParam0, 1134861606, -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, 1447477866, -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_86(uParam0, -1860492113, 962500902, 2, 0);
					break;
				
				case 27:
					func_86(uParam0, 937772107, 962500902, 3, 0);
					break;
				
				case 28:
					func_86(uParam0, 1401650071, 962500902, 4, 0);
					break;
				
				case 29:
					func_86(uParam0, 628662130, 962500902, 5, 0);
					break;
				
				case 30:
					func_86(uParam0, -985047251, 962500902, 6, 0);
					break;
				
				case 31:
					func_86(uParam0, -812944463, 962500902, 7, 0);
					break;
				
				case 32:
					func_86(uParam0, -1447352303, 962500902, 8, 0);
					break;
				
				case 33:
					func_86(uParam0, -60338860, 962500902, 9, 0);
					break;
				
				case 34:
					func_86(uParam0, 2088750491, 962500902, 10, 0);
					break;
				
				case 35:
					func_86(uParam0, -1513913454, 962500902, 11, 0);
					break;
				
				case 36:
					func_86(uParam0, -1179558480, 962500902, 12, 0);
					break;
			}
			break;
		
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 1283078430, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 1574296533, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 391640422, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, 1025884839, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 626875735, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1141059345, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 13:
					func_86(uParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 17:
					func_86(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 18:
					func_86(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 19:
					func_86(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 20:
					func_86(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 21:
					func_86(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 22:
					func_86(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 23:
					func_86(uParam0, -2093598721, -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, -1958983669, -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_86(uParam0, 1272803094, 962500902, 2, 0);
					break;
				
				case 27:
					func_86(uParam0, 1080719624, 962500902, 3, 0);
					break;
				
				case 28:
					func_86(uParam0, 792221348, 962500902, 4, 0);
					break;
				
				case 29:
					func_86(uParam0, -452181427, 962500902, 5, 0);
					break;
				
				case 30:
					func_86(uParam0, -746774737, 962500902, 6, 0);
					break;
				
				case 31:
					func_86(uParam0, -2044296061, 962500902, 7, 0);
					break;
				
				case 32:
					func_86(uParam0, -199171978, 962500902, 8, 0);
					break;
				
				case 33:
					func_86(uParam0, -1428075016, 962500902, 9, 0);
					break;
				
				case 34:
					func_86(uParam0, -1735153315, 962500902, 10, 0);
					break;
				
				case 35:
					func_86(uParam0, 1796459838, 962500902, 11, 0);
					break;
				
				case 36:
					func_86(uParam0, -631911105, 962500902, 12, 0);
					break;
			}
			break;
		
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 1227564412, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 400507625, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -161179835, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -1020871238, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 696788003, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1475288264, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 1060929921, 196630833, 3, 0);
					break;
				
				case 11:
					func_86(uParam0, -966040254, 196630833, 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, -1181482284, 1863181664, 2, 0);
					break;
				
				case 14:
					func_86(uParam0, -932732805, 1863181664, 3, 0);
					break;
				
				case 15:
					func_86(uParam0, -569259057, 1863181664, 4, 0);
					break;
				
				case 16:
					func_86(uParam0, -326080308, 1863181664, 5, 0);
					break;
				
				case 17:
					func_86(uParam0, 48731514, 1863181664, 6, 0);
					break;
				
				case 18:
					func_86(uParam0, 880736428, 1863181664, 7, 0);
					break;
				
				case 19:
					func_86(uParam0, 1303784126, 1863181664, 8, 0);
					break;
				
				case 20:
					func_86(uParam0, -1018236364, -1312077031, 1, 1);
					break;
				
				case 21:
					func_86(uParam0, -1243457701, -1312077031, 2, 0);
					break;
				
				case 22:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 23:
					func_86(uParam0, 1249283253, 962500902, 2, 0);
					break;
				
				case 24:
					func_86(uParam0, -857707587, 962500902, 3, 0);
					break;
				
				case 25:
					func_86(uParam0, -1097543898, 962500902, 4, 0);
					break;
				
				case 26:
					func_86(uParam0, 1980349969, 962500902, 5, 0);
					break;
				
				case 27:
					func_86(uParam0, 1219453777, 962500902, 6, 0);
					break;
				
				case 28:
					func_86(uParam0, -1853459190, 962500902, 7, 0);
					break;
				
				case 29:
					func_86(uParam0, -2074781016, 962500902, 8, 0);
					break;
				
				case 30:
					func_86(uParam0, 457967755, 962500902, 9, 0);
					break;
				
				case 31:
					func_86(uParam0, 235171324, 962500902, 10, 0);
					break;
				
				case 32:
					func_86(uParam0, 42685294, 962500902, 11, 0);
					break;
				
				case 33:
					func_86(uParam0, -687617715, 962500902, 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -98690520, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 752418717, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 247526935, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -130689324, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 1005144310, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, -1981031769, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, -2101279869, 196630833, 1, 0);
					break;
				
				case 7:
					func_86(uParam0, -1135289737, 196630833, 2, 1);
					break;
				
				case 8:
					func_86(uParam0, -1233121104, 196630833, 3, 0);
					break;
				
				case 9:
					func_86(uParam0, 776198721, 196630833, 4, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 13:
					func_86(uParam0, 1764221345, 1863181664, 4, 0);
					break;
				
				case 14:
					func_86(uParam0, -1869205321, -1312077031, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, 277524638, -1312077031, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 17:
					func_86(uParam0, -130843390, 962500902, 2, 0);
					break;
				
				case 18:
					func_86(uParam0, -977347227, 962500902, 3, 0);
					break;
				
				case 19:
					func_86(uParam0, -378461067, 962500902, 4, 0);
					break;
				
				case 20:
					func_86(uParam0, 329939175, 962500902, 5, 0);
					break;
				
				case 21:
					func_86(uParam0, 643374672, 962500902, 6, 0);
					break;
				
				case 22:
					func_86(uParam0, 807875052, 962500902, 7, 0);
					break;
				
				case 23:
					func_86(uParam0, -1401804168, 962500902, 8, 0);
					break;
				
				case 24:
					func_86(uParam0, -1096495395, 962500902, 9, 0);
					break;
				
				case 25:
					func_86(uParam0, -847811454, 962500902, 10, 0);
					break;
				
				case 26:
					func_86(uParam0, -1413108537, 962500902, 11, 0);
					break;
				
				case 27:
					func_86(uParam0, 1815270123, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1795936926, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, 1591132456, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 634039983, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, 733837882, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, -2046910199, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1329061674, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, -1898661008, 196630833, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 1140676955, 679107254, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, 1709866683, 1863181664, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 568543123, 1863181664, 3, 0);
					break;
				
				case 13:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_86(uParam0, 1550611612, 962500902, 2, 0);
					break;
				
				case 15:
					func_86(uParam0, 368550800, 962500902, 3, 0);
					break;
				
				case 16:
					func_86(uParam0, -1769069349, 962500902, 4, 0);
					break;
				
				case 17:
					func_86(uParam0, 24902297, 962500902, 5, 0);
					break;
				
				case 18:
					func_86(uParam0, -228041614, 962500902, 6, 0);
					break;
				
				case 19:
					func_86(uParam0, -584961562, 962500902, 7, 0);
					break;
				
				case 20:
					func_86(uParam0, -1153175946, 962500902, 8, 0);
					break;
				
				case 21:
					func_86(uParam0, 1301287696, 962500902, 9, 0);
					break;
				
				case 22:
					func_86(uParam0, 1597093459, 962500902, 10, 0);
					break;
				
				case 23:
					func_86(uParam0, 1769871776, 962500902, 11, 0);
					break;
				
				case 24:
					func_86(uParam0, -1827882671, 962500902, 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 1277460590, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -1182573778, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 2146055916, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -644734235, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 974903034, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 190476639, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, -1613015470, 196630833, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, -452809877, 196630833, 3, 0);
					break;
				
				case 11:
					func_86(uParam0, 1038927834, 196630833, 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, -1023114086, 945598191, 1, 0);
					break;
				
				case 14:
					func_86(uParam0, -1181482284, 945598191, 2, 0);
					break;
				
				case 15:
					func_86(uParam0, -932732805, 945598191, 3, 0);
					break;
				
				case 16:
					func_86(uParam0, -569259057, 945598191, 4, 0);
					break;
				
				case 17:
					func_86(uParam0, -326080308, 945598191, 5, 0);
					break;
				
				case 18:
					func_86(uParam0, 48731514, 945598191, 6, 0);
					break;
				
				case 19:
					func_86(uParam0, 880736428, 945598191, 7, 0);
					break;
				
				case 20:
					func_86(uParam0, 1303784126, 945598191, 8, 0);
					break;
				
				case 21:
					func_86(uParam0, -653246751, -1312077031, 1, 1);
					break;
				
				case 22:
					func_86(uParam0, -1520117877, -1312077031, 2, 0);
					break;
				
				case 23:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, -996700057, 962500902, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 940943685, 962500902, 3, 0);
					break;
				
				case 26:
					func_86(uParam0, 1263226800, 962500902, 4, 0);
					break;
				
				case 27:
					func_86(uParam0, -328035840, 962500902, 5, 0);
					break;
				
				case 28:
					func_86(uParam0, 1224100642, 962500902, 6, 0);
					break;
				
				case 29:
					func_86(uParam0, 899228776, 962500902, 7, 0);
					break;
				
				case 30:
					func_86(uParam0, 616006309, 962500902, 8, 0);
					break;
				
				case 31:
					func_86(uParam0, -1561952511, 962500902, 9, 0);
					break;
				
				case 32:
					func_86(uParam0, 572063080, 962500902, 10, 0);
					break;
				
				case 33:
					func_86(uParam0, 1170588613, 962500902, 11, 0);
					break;
				
				case 34:
					func_86(uParam0, 966612367, 962500902, 12, 0);
					break;
			}
			break;
		
		case 487013001:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 487013001, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 2:
							func_86(uParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, -1562927653, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 2076495324, 679107254, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -435637410, 1863181664, 1, 0);
							break;
						
						case 2:
							func_86(uParam0, -1562927653, 962500902, 1, 0);
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
						func_86(uParam0, 2076495324, 679107254, 1, 0);
						break;
					
					case 1:
						func_86(uParam0, -435637410, 1863181664, 1, 0);
						break;
					
					case 2:
						func_86(uParam0, -1562927653, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1063057011:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -1063057011, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 4:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 8:
							func_86(uParam0, 1929467122, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -959978111, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, 2089537806, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 1801039530, -571619404, 3, 0);
							break;
						
						case 3:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, -1596416958, 196630833, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -1489156508, 1863181664, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 1929467122, 962500902, 1, 0);
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
						func_86(uParam0, -959978111, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, 2089537806, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 1801039530, -571619404, 3, 0);
						break;
					
					case 3:
						func_86(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, -1596416958, 196630833, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, -1489156508, 1863181664, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 7:
						func_86(uParam0, 1929467122, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1076751822:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -1076751822, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, -2144080721, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -125817127, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, 2063610803, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, -2144080721, 962500902, 1, 0);
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
						func_86(uParam0, -125817127, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, 2063610803, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, -2144080721, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -952879014:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -952879014, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 4:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, 371102273, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -667205311, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -855823675, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 471997210, 196630833, 1, 1);
							break;
						
						case 3:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, 371102273, 962500902, 1, 0);
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
						func_86(uParam0, -667205311, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -855823675, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 471997210, 196630833, 1, 1);
						break;
					
					case 3:
						func_86(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, 371102273, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case -1045183535:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, -1045183535, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, -1802258419, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -377062173, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, 384708672, 962500902, 1, 0);
							break;
						
						case 2:
							func_86(uParam0, -1802258419, 962500902, 2, 0);
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
						func_86(uParam0, -377062173, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, 384708672, 962500902, 1, 0);
						break;
					
					case 2:
						func_86(uParam0, -1802258419, 962500902, 2, 0);
						break;
					}
			}
			break;
		
		case 2132975508:
			if (func_85(iLocal_54))
			{
				if (!func_75(1623028892, 2132975508, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_86(uParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 2:
							func_86(uParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 3:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 7:
							func_86(uParam0, -1470645128, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_86(uParam0, -979292288, -571619404, 1, 1);
							break;
						
						case 1:
							func_86(uParam0, -1284994289, -571619404, 2, 0);
							break;
						
						case 2:
							func_86(uParam0, 2076495324, 953267555, 1, 0);
							break;
						
						case 3:
							func_86(uParam0, -1439939148, 196630833, 1, 0);
							break;
						
						case 4:
							func_86(uParam0, -2089531990, 1863181664, 1, 0);
							break;
						
						case 5:
							func_86(uParam0, 202788691, -1322016827, 1, 0);
							break;
						
						case 6:
							func_86(uParam0, -1470645128, 962500902, 1, 0);
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
						func_86(uParam0, -979292288, -571619404, 1, 1);
						break;
					
					case 1:
						func_86(uParam0, -1284994289, -571619404, 2, 0);
						break;
					
					case 2:
						func_86(uParam0, 2076495324, 953267555, 1, 0);
						break;
					
					case 3:
						func_86(uParam0, -1439939148, 196630833, 1, 0);
						break;
					
					case 4:
						func_86(uParam0, -2089531990, 1863181664, 1, 0);
						break;
					
					case 5:
						func_86(uParam0, 202788691, -1322016827, 1, 0);
						break;
					
					case 6:
						func_86(uParam0, -1470645128, 962500902, 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -845938367, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -1618338827, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -380098265, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, 1315288101, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 1004815965, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 6:
					func_86(uParam0, 2076495324, -1572840598, 2, 0);
					break;
				
				case 7:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 8:
					func_86(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 9:
					func_86(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 10:
					func_86(uParam0, 1060929921, 196630833, 4, 0);
					break;
				
				case 11:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 12:
					func_86(uParam0, -1404903567, 1863181664, 2, 0);
					break;
				
				case 13:
					func_86(uParam0, 1602080333, 1863181664, 3, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, -474112444, 962500902, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, 387223451, 962500902, 3, 0);
					break;
				
				case 17:
					func_86(uParam0, 617753366, 962500902, 4, 0);
					break;
				
				case 18:
					func_86(uParam0, -222378256, 962500902, 5, 0);
					break;
				
				case 19:
					func_86(uParam0, 8741501, 962500902, 6, 0);
					break;
				
				case 20:
					func_86(uParam0, -601286203, 962500902, 7, 0);
					break;
				
				case 21:
					func_86(uParam0, -511433605, 962500902, 8, 0);
					break;
				
				case 22:
					func_86(uParam0, -655387818, 962500902, 9, 0);
					break;
				
				case 23:
					func_86(uParam0, -282476598, 962500902, 10, 0);
					break;
				
				case 24:
					func_86(uParam0, 1739501925, 962500902, 11, 0);
					break;
				
				case 25:
					func_86(uParam0, 1178671645, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 382112385, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -568352468, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -2023373174, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -570355066, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 1362433589, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1346235024, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 77277509, 1684637069, 3, 0);
					break;
				
				case 11:
					func_86(uParam0, -966040254, 1684637069, 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, -1489156508, 1863181664, 2, 0);
					break;
				
				case 14:
					func_86(uParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 15:
					func_86(uParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 16:
					func_86(uParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 17:
					func_86(uParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 18:
					func_86(uParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 19:
					func_86(uParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 20:
					func_86(uParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 21:
					func_86(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 22:
					func_86(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 23:
					func_86(uParam0, -415870039, -1312077031, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, -109086661, -1312077031, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_86(uParam0, -737430213, 962500902, 2, 0);
					break;
				
				case 27:
					func_86(uParam0, 1125852043, 962500902, 3, 0);
					break;
				
				case 28:
					func_86(uParam0, 886015732, 962500902, 4, 0);
					break;
				
				case 29:
					func_86(uParam0, -1262287139, 962500902, 5, 0);
					break;
				
				case 30:
					func_86(uParam0, -295208411, 962500902, 6, 0);
					break;
				
				case 31:
					func_86(uParam0, -544154504, 962500902, 7, 0);
					break;
				
				case 32:
					func_86(uParam0, 172765678, 962500902, 8, 0);
					break;
				
				case 33:
					func_86(uParam0, -1982877449, 962500902, 9, 0);
					break;
				
				case 34:
					func_86(uParam0, 2072122460, 962500902, 10, 0);
					break;
				
				case 35:
					func_86(uParam0, -1986220171, 962500902, 11, 0);
					break;
				
				case 36:
					func_86(uParam0, 1377355801, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 21392614, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -829683854, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -1876057490, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -424845447, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, -1928301566, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, -1055790298, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, -1572840598, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, 1246324211, -1572840598, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 1205768792, 196630833, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, 1709866683, 945598191, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, -1434287169, 945598191, 3, 0);
					break;
				
				case 13:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 14:
					func_86(uParam0, 259780317, 962500902, 2, 0);
					break;
				
				case 15:
					func_86(uParam0, -1973342474, 962500902, 3, 0);
					break;
				
				case 16:
					func_86(uParam0, 1996130345, 962500902, 4, 0);
					break;
				
				case 17:
					func_86(uParam0, -1455657812, 962500902, 5, 0);
					break;
				
				case 18:
					func_86(uParam0, -1668263084, 962500902, 6, 0);
					break;
				
				case 19:
					func_86(uParam0, 1308243489, 962500902, 7, 0);
					break;
				
				case 20:
					func_86(uParam0, 1122574335, 962500902, 8, 0);
					break;
				
				case 21:
					func_86(uParam0, 1420313469, 962500902, 9, 0);
					break;
				
				case 22:
					func_86(uParam0, 109848390, 962500902, 10, 0);
					break;
				
				case 23:
					func_86(uParam0, 593945703, 962500902, 11, 0);
					break;
				
				case 24:
					func_86(uParam0, 1142457062, 962500902, 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1797182002, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -422587990, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -679861550, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, 1842849902, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, -193998727, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, -515203373, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 9:
					func_86(uParam0, -966040254, 1684637069, 3, 0);
					break;
				
				case 10:
					func_86(uParam0, 1528590652, 1684637069, 4, 1);
					break;
				
				case 11:
					func_86(uParam0, 0, 945598191, 1, 1);
					break;
				
				case 12:
					func_86(uParam0, -2089531990, 945598191, 2, 0);
					break;
				
				case 13:
					func_86(uParam0, -1181482284, 945598191, 3, 0);
					break;
				
				case 14:
					func_86(uParam0, -932732805, 945598191, 4, 0);
					break;
				
				case 15:
					func_86(uParam0, -569259057, 945598191, 5, 0);
					break;
				
				case 16:
					func_86(uParam0, -326080308, 945598191, 6, 0);
					break;
				
				case 17:
					func_86(uParam0, 48731514, 945598191, 7, 0);
					break;
				
				case 18:
					func_86(uParam0, 880736428, 945598191, 8, 0);
					break;
				
				case 19:
					func_86(uParam0, 1303784126, 945598191, 9, 0);
					break;
				
				case 20:
					func_86(uParam0, 0, -546751811, 1, 1);
					break;
				
				case 21:
					func_86(uParam0, -1654288262, -546751811, 2, 0);
					break;
				
				case 22:
					func_86(uParam0, 941317513, -1312077031, 1, 1);
					break;
				
				case 23:
					func_86(uParam0, 1748450780, -1312077031, 2, 0);
					break;
				
				case 24:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 25:
					func_86(uParam0, -1869284448, 962500902, 2, 0);
					break;
				
				case 26:
					func_86(uParam0, 1931539634, 962500902, 3, 0);
					break;
				
				case 27:
					func_86(uParam0, 1624199183, 962500902, 4, 0);
					break;
				
				case 28:
					func_86(uParam0, -26834113, 962500902, 5, 0);
					break;
				
				case 29:
					func_86(uParam0, -210406055, 962500902, 6, 0);
					break;
				
				case 30:
					func_86(uParam0, 423313640, 962500902, 7, 0);
					break;
				
				case 31:
					func_86(uParam0, 276639596, 962500902, 8, 0);
					break;
				
				case 32:
					func_86(uParam0, -991356863, 962500902, 9, 0);
					break;
				
				case 33:
					func_86(uParam0, -1682848301, 962500902, 10, 0);
					break;
				
				case 34:
					func_86(uParam0, 996213771, 962500902, 11, 0);
					break;
				
				case 35:
					func_86(uParam0, -1214048550, 962500902, 12, 0);
					break;
			}
			break;
		
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -1172055874, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -958864266, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, 15712037, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, 284438159, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, 231258687, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 0, 196630833, 1, 1);
					break;
				
				case 6:
					func_86(uParam0, 1108334355, 196630833, 2, 0);
					break;
				
				case 7:
					func_86(uParam0, 77277509, 196630833, 3, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 899381934, 679107254, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 11:
					func_86(uParam0, 654802123, 1863181664, 2, 0);
					break;
				
				case 12:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, -1069552225, 962500902, 2, 0);
					break;
				
				case 14:
					func_86(uParam0, 11918884, 962500902, 3, 0);
					break;
				
				case 15:
					func_86(uParam0, 176157112, 962500902, 4, 0);
					break;
				
				case 16:
					func_86(uParam0, -220052855, 962500902, 5, 0);
					break;
				
				case 17:
					func_86(uParam0, 288456487, 962500902, 6, 0);
					break;
				
				case 18:
					func_86(uParam0, 398658626, 962500902, 7, 0);
					break;
				
				case 19:
					func_86(uParam0, 628697006, 962500902, 8, 0);
					break;
				
				case 20:
					func_86(uParam0, 925911836, 962500902, 9, 0);
					break;
				
				case 21:
					func_86(uParam0, 1222307441, 962500902, 10, 0);
					break;
				
				case 22:
					func_86(uParam0, 552442715, 962500902, 11, 0);
					break;
				
				case 23:
					func_86(uParam0, -648943513, 962500902, 12, 0);
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 25766362, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -273676760, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -2111807319, -571619404, 3, 0);
					break;
				
				case 3:
					func_86(uParam0, -1449330342, -571619404, 4, 0);
					break;
				
				case 4:
					func_86(uParam0, -89655827, -571619404, 5, 0);
					break;
				
				case 5:
					func_86(uParam0, 1130501904, -571619404, 6, 0);
					break;
				
				case 6:
					func_86(uParam0, 0, 679107254, 1, 1);
					break;
				
				case 7:
					func_86(uParam0, 2076495324, 679107254, 2, 0);
					break;
				
				case 8:
					func_86(uParam0, 0, 1684637069, 1, 1);
					break;
				
				case 9:
					func_86(uParam0, 1108334355, 1684637069, 2, 0);
					break;
				
				case 10:
					func_86(uParam0, -944910075, 1684637069, 3, 0);
					break;
				
				case 11:
					func_86(uParam0, 1060929921, 1684637069, 4, 0);
					break;
				
				case 12:
					func_86(uParam0, 1704640795, -1312077031, 1, 1);
					break;
				
				case 13:
					func_86(uParam0, 1005743559, -1312077031, 2, 0);
					break;
				
				case 14:
					func_86(uParam0, 0, 1863181664, 1, 1);
					break;
				
				case 15:
					func_86(uParam0, -2089531990, 1863181664, 2, 0);
					break;
				
				case 16:
					func_86(uParam0, -1181482284, 1863181664, 3, 0);
					break;
				
				case 17:
					func_86(uParam0, -932732805, 1863181664, 4, 0);
					break;
				
				case 18:
					func_86(uParam0, -569259057, 1863181664, 5, 0);
					break;
				
				case 19:
					func_86(uParam0, -326080308, 1863181664, 6, 0);
					break;
				
				case 20:
					func_86(uParam0, 48731514, 1863181664, 7, 0);
					break;
				
				case 21:
					func_86(uParam0, 880736428, 1863181664, 8, 0);
					break;
				
				case 22:
					func_86(uParam0, 1303784126, 1863181664, 9, 0);
					break;
				
				case 23:
					func_86(uParam0, 0, -1322016827, 1, 1);
					break;
				
				case 24:
					func_86(uParam0, -1654288262, -1322016827, 2, 0);
					break;
				
				case 25:
					func_86(uParam0, 0, 962500902, 1, 1);
					break;
				
				case 26:
					func_86(uParam0, -1371515465, 962500902, 2, 0);
					break;
				
				case 27:
					func_86(uParam0, -1190793877, 962500902, 3, 0);
					break;
				
				case 28:
					func_86(uParam0, -1497085720, 962500902, 4, 0);
					break;
				
				case 29:
					func_86(uParam0, -1803148180, 962500902, 5, 0);
					break;
				
				case 30:
					func_86(uParam0, -1975971886, 962500902, 6, 0);
					break;
				
				case 31:
					func_86(uParam0, 36929477, 962500902, 7, 0);
					break;
				
				case 32:
					func_86(uParam0, -268444834, 962500902, 8, 0);
					break;
				
				case 33:
					func_86(uParam0, -574769446, 962500902, 9, 0);
					break;
				
				case 34:
					func_86(uParam0, -882699739, 962500902, 10, 0);
					break;
				
				case 35:
					func_86(uParam0, -1468181474, 962500902, 11, 0);
					break;
				
				case 36:
					func_86(uParam0, -974541230, 962500902, 12, 0);
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, -673450233, 962500902, 1, 0);
					break;
			}
			break;
		
		case 727643628:
			switch (iParam2)
			{
				case 0:
					func_86(uParam0, 1423184737, -571619404, 1, 1);
					break;
				
				case 1:
					func_86(uParam0, -2122814295, -571619404, 2, 0);
					break;
				
				case 2:
					func_86(uParam0, -1828202758, 1863181664, 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_87(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var54))
					{
						if (!func_74(Var54.f_3))
						{
							if (Var54 == -571619404 || Var54 == 291640902)
							{
								iVar1++;
							}
							else if (Var54 == 679107254 || Var54 == -1572840598)
							{
								iVar2++;
							}
							else if (Var54 == 196630833 || Var54 == 1684637069)
							{
								iVar3++;
							}
							else if (Var54 == -1843287667 || Var54 == 497110245)
							{
								iVar4++;
							}
							else if (Var54 == -1322016827 || Var54 == -546751811)
							{
								iVar5++;
							}
							else if (Var54 == 1863181664 || Var54 == 945598191)
							{
								iVar6++;
							}
							else if (Var54 == 1731751835)
							{
								iVar7++;
							}
							else if (Var54 == 962500902)
							{
								iVar8++;
							}
							else if (Var54 == -31573710)
							{
								iVar9++;
							}
							else if (Var54 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var54 == -571619404 || Var54 == 291640902)
								{
									iVar0 = iVar1;
								}
								else if (Var54 == 679107254 || Var54 == -1572840598)
								{
									iVar0 = iVar2;
								}
								else if (Var54 == 196630833 || Var54 == 1684637069)
								{
									iVar0 = iVar3;
								}
								else if (Var54 == -1843287667 || Var54 == 497110245)
								{
									iVar0 = iVar4;
								}
								else if (Var54 == -1322016827 || Var54 == -546751811)
								{
									iVar0 = iVar5;
								}
								else if (Var54 == 1863181664 || Var54 == 945598191)
								{
									iVar0 = iVar6;
								}
								else if (Var54 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var54 == 962500902)
								{
									iVar0 = iVar8;
								}
								else if (Var54 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var54 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_86(uParam0, Var54.f_3, Var54, iVar0, Var54.f_1);
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
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 155;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case 1709866683:
						iVar0 = 729;
						break;
					
					case -684126074:
						iVar0 = 18600;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = 159;
						break;
					
					case 899381934:
						iVar0 = 189;
						break;
					
					case -1023114086:
						iVar0 = 735;
						break;
					
					case -966439566:
						iVar0 = 14500;
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 165;
						break;
					
					case 899381934:
						iVar0 = 185;
						break;
					
					case -1023114086:
						iVar0 = 730;
						break;
					
					case -1686714580:
						iVar0 = 15800;
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 137;
						break;
					
					case 899381934:
						iVar0 = 190;
						break;
					
					case -1657815255:
						iVar0 = 549;
						break;
					
					case -1489156508:
						iVar0 = 775;
						break;
					
					case 1215999497:
						iVar0 = 15100;
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 134;
						break;
					
					case 2043113590:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 210;
						break;
					
					case 1019656791:
						iVar0 = 549;
						break;
					
					case -1023114086:
						iVar0 = 815;
						break;
					
					case 663170192:
						iVar0 = 19300;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 129;
						break;
					
					case -604986051:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 159;
						break;
					
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -1657815255:
						iVar0 = 565;
						break;
					
					case -1489156508:
						iVar0 = 810;
						break;
					
					case 1319990579:
						iVar0 = 14400;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 105;
						break;
					
					case -1167922891:
						iVar0 = -1;
						break;
					
					case 202788691:
						iVar0 = 132;
						break;
					
					case 2076495324:
						iVar0 = 150;
						break;
					
					case -1596416958:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 815;
						break;
					
					case -660892072:
						iVar0 = 17900;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 124;
						break;
					
					case 2076495324:
						iVar0 = 159;
						break;
					
					case -1439939148:
						iVar0 = 450;
						break;
					
					case -2089531990:
						iVar0 = 812;
						break;
					
					case 930927479:
						iVar0 = 16500;
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 145;
						break;
					
					case 1006677997:
						iVar0 = 450;
						break;
					
					case -690308418:
						iVar0 = 15600;
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 126;
						break;
					
					case 202788691:
						iVar0 = 129;
						break;
					
					case -1596416958:
						iVar0 = 559;
						break;
					
					case -1828795171:
						iVar0 = 14000;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 189;
						break;
					
					case -435637410:
						iVar0 = 975;
						break;
					
					case -1562927653:
						iVar0 = 16900;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 139;
						break;
					
					case 202788691:
						iVar0 = 150;
						break;
					
					case 2076495324:
						iVar0 = 225;
						break;
					
					case -2089531990:
						iVar0 = 899;
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 559;
						break;
					
					case -1135289737:
						iVar0 = 975;
						break;
					
					case -1489156508:
						iVar0 = 920;
						break;
					
					case 1077065191:
						iVar0 = 13000;
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 575;
						break;
					
					case -1135289737:
						iVar0 = 999;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 128;
						break;
					
					case 2076495324:
						iVar0 = 185;
						break;
					
					case -1439939148:
						iVar0 = 525;
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						break;
					
					case 2076495324:
						iVar0 = 2275;
						break;
					
					case -1657815255:
						iVar0 = 10875;
						break;
					
					case -1489156508:
						iVar0 = 12400;
						break;
					
					case 663517359:
						iVar0 = 17600;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						break;
					
					case 2076495324:
						iVar0 = 2300;
						break;
					
					case -1489156508:
						iVar0 = 12450;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						break;
					
					case 899381934:
						iVar0 = 2000;
						break;
					
					case -1489156508:
						iVar0 = 12250;
						break;
					
					case 2008591151:
						iVar0 = 20000;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = 13700;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = 3612;
						break;
					
					case 471997210:
						iVar0 = 0;
						break;
					
					case 2076495324:
						iVar0 = 1020;
						break;
					
					case -2089531990:
						iVar0 = 5000;
						break;
					
					case 202788691:
						iVar0 = 1760;
						break;
					
					case 371102273:
						iVar0 = 17200;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = 3680;
						break;
					
					case 899381934:
						iVar0 = 710;
						break;
					
					case -1023114086:
						iVar0 = 4800;
						break;
					
					case 2053798779:
						iVar0 = 12000;
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = 4900;
						break;
					
					case -287703709:
						iVar0 = 5600;
						break;
					
					case 1351683121:
						iVar0 = 5500;
						break;
					
					case -1755194916:
						iVar0 = 5200;
						break;
					
					case 2112683568:
						iVar0 = 4600;
						break;
					
					case 1062111910:
						iVar0 = 4700;
						break;
					
					case 146278587:
						iVar0 = 4800;
						break;
					
					case -494162961:
						iVar0 = 4300;
						break;
					
					case 2062808965:
						iVar0 = 4000;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 108;
						break;
					
					case -1284994289:
						iVar0 = 9950;
						break;
					
					case 2076495324:
						iVar0 = 2575;
						break;
					
					case -1657815255:
						iVar0 = 11350;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 202788691:
						iVar0 = 4275;
						break;
					
					case -1470645128:
						iVar0 = 16600;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 29;
						break;
					
					case 2063610803:
						iVar0 = 9150;
						break;
					
					case -2144080721:
						iVar0 = 13900;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 108;
						break;
					
					case 2089537806:
						iVar0 = 9975;
						break;
					
					case 1801039530:
						iVar0 = -1;
						break;
					
					case 2076495324:
						iVar0 = 2525;
						break;
					
					case -1596416958:
						iVar0 = 11550;
						break;
					
					case -1489156508:
						iVar0 = 12500;
						break;
					
					case 1929467122:
						iVar0 = 18000;
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = 3680;
						break;
					
					case -1444295948:
						iVar0 = -1;
						break;
					
					case -1023114086:
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_87(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (!func_74(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_69(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (iParam0 == 1317494643)
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
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						iVar0 = 120;
						break;
					
					case -316253668:
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2885));
						break;
					
					case 899381934:
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case 1709866683:
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
					
					case -684126074:
						iVar0 = Global_262145.f_10572;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20718;
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						iVar0 = 136;
						break;
					
					case -696561875:
						iVar0 = Global_262145.f_20607;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2886));
						break;
					
					case 899381934:
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4339));
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20608;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4340));
						break;
					
					case -966439566:
						iVar0 = Global_262145.f_11956;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						iVar0 = 145;
						break;
					
					case 614078421:
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2888));
						break;
					
					case 899381934:
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case -1023114086:
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
					
					case -1686714580:
						iVar0 = Global_262145.f_10571;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						iVar0 = 120;
						break;
					
					case 283556395:
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2889));
						break;
					
					case 899381934:
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case -1657815255:
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					
					case -1489156508:
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case 1215999497:
						iVar0 = Global_262145.f_10575;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
				}
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						iVar0 = 119;
						break;
					
					case 889808635:
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2890));
						break;
					
					case 2043113590:
						iVar0 = Global_262145.f_16127;
						break;
					
					case 2076495324:
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case 1019656791:
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case -1023114086:
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case 663170192:
						iVar0 = Global_262145.f_10574;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20719;
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						iVar0 = 120;
						break;
					
					case -1323216997:
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2892));
						break;
					
					case -604986051:
						iVar0 = Global_262145.f_16122;
						break;
					
					case 202788691:
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					
					case 2076495324:
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					
					case -1657815255:
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case -1489156508:
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					
					case 1319990579:
						iVar0 = Global_262145.f_10568;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20721;
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						iVar0 = 99;
						break;
					
					case -1861183855:
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2893));
						break;
					
					case -1167922891:
						iVar0 = Global_262145.f_16121;
						break;
					
					case 202788691:
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					
					case 2076495324:
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					
					case -1596416958:
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					
					case -2089531990:
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					
					case -660892072:
						iVar0 = Global_262145.f_10570;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4408));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20722;
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						iVar0 = 110;
						break;
					
					case -1899902599:
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					
					case 2076495324:
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368));
						break;
					
					case -1439939148:
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
					
					case -2089531990:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
					
					case 930927479:
						iVar0 = Global_262145.f_10569;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						iVar0 = 135;
						break;
					
					case -2112517305:
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					
					case 1006677997:
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
					
					case -690308418:
						iVar0 = Global_262145.f_11957;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						iVar0 = 119;
						break;
					
					case -691692330:
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					
					case 202788691:
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					
					case -1596416958:
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					
					case -1828795171:
						iVar0 = Global_262145.f_11958;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4409));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20720;
						break;
				}
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					
					case -435637410:
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376));
						break;
					
					case -1562927653:
						iVar0 = Global_262145.f_11953;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22429;
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						iVar0 = 129;
						break;
					
					case -2034401422:
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					
					case 202788691:
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					
					case 2076495324:
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					
					case -2089531990:
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4383));
						break;
					
					case -1489156508:
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					
					case 1077065191:
						iVar0 = Global_262145.f_10577;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						iVar0 = -1;
						break;
					
					case -767279652:
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					
					case -1135289737:
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20723;
						break;
				}
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					
					case 2076495324:
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					
					case -1439939148:
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
				}
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						iVar0 = -1;
						break;
				}
				break;
			
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						iVar0 = 110;
						break;
					
					case -1152981993:
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2891));
						break;
					
					case 2076495324:
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case -1657815255:
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					
					case -1489156508:
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					
					case 663517359:
						iVar0 = Global_262145.f_11954;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
				}
				break;
			
			case 1627465347:
				switch (iParam1)
				{
					case 484812453:
						iVar0 = 0;
						break;
					
					case -355941776:
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						iVar0 = 0;
						break;
					
					case 2063610803:
						iVar0 = Global_262145.f_7180;
						break;
					
					case -2144080721:
						iVar0 = Global_262145.f_11955;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22434;
						break;
				}
				break;
			
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						iVar0 = 0;
						break;
					
					case 2089537806:
						iVar0 = Global_262145.f_7185;
						break;
					
					case 1801039530:
						iVar0 = Global_262145.f_16124;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7188;
						break;
					
					case -1596416958:
						iVar0 = Global_262145.f_7184;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_7182;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7187;
						break;
					
					case 1929467122:
						iVar0 = Global_262145.f_11959;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22430;
						break;
				}
				break;
			
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						iVar0 = 0;
						break;
					
					case 1694090795:
						iVar0 = Global_262145.f_7186;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_7190;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7183;
						break;
					
					case 2053798779:
						iVar0 = Global_262145.f_7210;
						break;
				}
				break;
			
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						iVar0 = 0;
						break;
					
					case -1284994289:
						iVar0 = Global_262145.f_7193;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_7196;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_7191;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_7192;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_7194;
						break;
					
					case -1470645128:
						iVar0 = Global_262145.f_11960;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22433;
						break;
				}
				break;
			
			case 137902532:
				switch (iParam1)
				{
					case 1168357051:
						iVar0 = 0;
						break;
					
					case 867832552:
						iVar0 = Global_262145.f_7668;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case 984333226:
				switch (iParam1)
				{
					case 844049759:
						iVar0 = 0;
						break;
					
					case -1759709443:
						iVar0 = Global_262145.f_8392;
						break;
					
					case -2000168365:
						iVar0 = Global_262145.f_16128;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8393;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_8394;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8395;
						break;
				}
				break;
			
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						iVar0 = 0;
						break;
					
					case -855823675:
						iVar0 = Global_262145.f_8398;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_8399;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_8401;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_8402;
						break;
					
					case 371102273:
						iVar0 = Global_262145.f_8403;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22431;
						break;
				}
				break;
			
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14622));
						break;
					
					case 2076495324:
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					
					case -1489156508:
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						iVar0 = 0;
						break;
					
					case -640439150:
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2887));
						break;
					
					case 899381934:
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case -1489156508:
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
					
					case 2008591151:
						iVar0 = Global_262145.f_10573;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4416));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0;
				}
				break;
			
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						iVar0 = Global_262145.f_10576;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
				}
				break;
			
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						iVar0 = Global_262145.f_10893;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					
					case -287703709:
						iVar0 = Global_262145.f_10894;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					
					case 1351683121:
						iVar0 = Global_262145.f_10895;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					
					case -1755194916:
						iVar0 = Global_262145.f_10896;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					
					case 2112683568:
						iVar0 = Global_262145.f_10897;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
					
					case 1062111910:
						iVar0 = Global_262145.f_10898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					
					case 146278587:
						iVar0 = Global_262145.f_10899;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
					
					case -494162961:
						iVar0 = Global_262145.f_10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430));
						break;
					
					case 2062808965:
						iVar0 = Global_262145.f_10901;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4431));
						break;
				}
				break;
			
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						iVar0 = 0;
						break;
					
					case -1188271751:
						iVar0 = Global_262145.f_10918;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					
					case -1444295948:
						iVar0 = Global_262145.f_16126;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_10919;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
				}
				break;
			
			case -538741184:
				switch (iParam1)
				{
					case -1858624256:
						iVar0 = 0;
						break;
					
					case 1530822070:
						iVar0 = Global_262145.f_12801;
						break;
					
					case -409758110:
						iVar0 = Global_262145.f_12802;
						break;
				}
				break;
			
			case -1045183535:
				switch (iParam1)
				{
					case -377062173:
						iVar0 = 0;
						break;
					
					case 384708672:
						iVar0 = Global_262145.f_12859;
						break;
					
					case -1802258419:
						iVar0 = Global_262145.f_12800;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_22432;
						break;
				}
				break;
			
			case 1649403952:
				switch (iParam1)
				{
					case 1363085923:
						iVar0 = 0;
						break;
					
					case 1509923832:
						iVar0 = Global_262145.f_14552;
						break;
					
					case -972590066:
						iVar0 = Global_262145.f_16123;
						break;
				}
				break;
			
			case -275439685:
				switch (iParam1)
				{
					case 703231006:
						iVar0 = 0;
						break;
				}
				break;
			
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						iVar0 = 0;
						break;
					
					case -1820405577:
						iVar0 = Global_262145.f_18570;
						break;
				}
				break;
			
			case 171789620:
				switch (iParam1)
				{
					case 1125642654:
						iVar0 = 0;
						break;
					
					case 860508675:
						iVar0 = Global_262145.f_20603;
						break;
					
					case 1857603803:
						iVar0 = Global_262145.f_16125;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20604;
						break;
					
					case -1439939148:
						iVar0 = Global_262145.f_20606;
						break;
					
					case 202788691:
						iVar0 = Global_262145.f_20605;
						break;
				}
				break;
			
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						iVar0 = 0;
						break;
					
					case -785724817:
						iVar0 = Global_262145.f_20724;
						break;
					
					case -1478681000:
						iVar0 = Global_262145.f_20725;
						break;
					
					case 1675665560:
						iVar0 = Global_262145.f_20726;
						break;
					
					case -76490669:
						iVar0 = Global_262145.f_20727;
						break;
					
					case -282298175:
						iVar0 = Global_262145.f_20728;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20729;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20730;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20731;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20732;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20733;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_20734;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20735;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20736;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20737;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20738;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20739;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20740;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20741;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20742;
						break;
					
					case 1134861606:
						iVar0 = 0;
						break;
					
					case 1447477866:
						iVar0 = Global_262145.f_20743;
						break;
					
					case -1860492113:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 937772107:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1401650071:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 628662130:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -985047251:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -812944463:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1447352303:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -60338860:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2088750491:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1513913454:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1179558480:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						iVar0 = 0;
						break;
					
					case 1574296533:
						iVar0 = Global_262145.f_20744;
						break;
					
					case 626875735:
						iVar0 = Global_262145.f_20745;
						break;
					
					case 1141059345:
						iVar0 = Global_262145.f_20746;
						break;
					
					case 1025884839:
						iVar0 = Global_262145.f_20747;
						break;
					
					case 391640422:
						iVar0 = Global_262145.f_20748;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20749;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20750;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20751;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20752;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20753;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_20754;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20755;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20756;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20757;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20758;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20759;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20760;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20761;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20762;
						break;
					
					case -2093598721:
						iVar0 = 0;
						break;
					
					case -1958983669:
						iVar0 = Global_262145.f_20763;
						break;
					
					case 1272803094:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1080719624:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 792221348:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -452181427:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -746774737:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -2044296061:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -199171978:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1428075016:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1735153315:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1796459838:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -631911105:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						iVar0 = 0;
						break;
					
					case 400507625:
						iVar0 = Global_262145.f_20764;
						break;
					
					case 696788003:
						iVar0 = Global_262145.f_20765;
						break;
					
					case 1475288264:
						iVar0 = Global_262145.f_20766;
						break;
					
					case -1020871238:
						iVar0 = Global_262145.f_20767;
						break;
					
					case -161179835:
						iVar0 = Global_262145.f_20768;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20769;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20770;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20771;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20772;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20773;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20774;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20775;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20776;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20777;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20778;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20779;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20780;
						break;
					
					case -1018236364:
						iVar0 = 0;
						break;
					
					case -1243457701:
						iVar0 = Global_262145.f_20781;
						break;
					
					case 1249283253:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -857707587:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1097543898:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 1980349969:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1219453777:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -1853459190:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -2074781016:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 457967755:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 235171324:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 42685294:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -687617715:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						iVar0 = 0;
						break;
					
					case 752418717:
						iVar0 = Global_262145.f_20782;
						break;
					
					case -130689324:
						iVar0 = Global_262145.f_20783;
						break;
					
					case 1005144310:
						iVar0 = Global_262145.f_20785;
						break;
					
					case 247526935:
						iVar0 = Global_262145.f_20786;
						break;
					
					case -1981031769:
						iVar0 = Global_262145.f_20784;
						break;
					
					case -2101279869:
						iVar0 = Global_262145.f_20787;
						break;
					
					case -1135289737:
						iVar0 = 0;
						break;
					
					case -1233121104:
						iVar0 = Global_262145.f_20788;
						break;
					
					case 776198721:
						iVar0 = Global_262145.f_20789;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_20790;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_20791;
						break;
					
					case 1764221345:
						iVar0 = Global_262145.f_20792;
						break;
					
					case -1869205321:
						iVar0 = 0;
						break;
					
					case 277524638:
						iVar0 = Global_262145.f_20793;
						break;
					
					case -130843390:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -977347227:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -378461067:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 329939175:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 643374672:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 807875052:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1401804168:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1096495395:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -847811454:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1413108537:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1815270123:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						iVar0 = 0;
						break;
					
					case 1591132456:
						iVar0 = Global_262145.f_20794;
						break;
					
					case -2046910199:
						iVar0 = Global_262145.f_20796;
						break;
					
					case 1329061674:
						iVar0 = Global_262145.f_20795;
						break;
					
					case 733837882:
						iVar0 = Global_262145.f_20797;
						break;
					
					case 634039983:
						iVar0 = Global_262145.f_20798;
						break;
					
					case 1140676955:
						iVar0 = Global_262145.f_20799;
						break;
					
					case -1898661008:
						iVar0 = Global_262145.f_20800;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_20801;
						break;
					
					case 568543123:
						iVar0 = Global_262145.f_20802;
						break;
					
					case 1550611612:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 368550800:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1769069349:
						iVar0 = Global_262145.f_20854;
						break;
					
					case 24902297:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -228041614:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -584961562:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -1153175946:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1301287696:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1597093459:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1769871776:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1827882671:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						iVar0 = 0;
						break;
					
					case -1182573778:
						iVar0 = Global_262145.f_20803;
						break;
					
					case 974903034:
						iVar0 = Global_262145.f_20805;
						break;
					
					case 190476639:
						iVar0 = Global_262145.f_20804;
						break;
					
					case -644734235:
						iVar0 = Global_262145.f_20806;
						break;
					
					case 2146055916:
						iVar0 = Global_262145.f_20807;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_20808;
						break;
					
					case -1613015470:
						iVar0 = Global_262145.f_20809;
						break;
					
					case -452809877:
						iVar0 = Global_262145.f_20810;
						break;
					
					case 1038927834:
						iVar0 = Global_262145.f_20811;
						break;
					
					case -1023114086:
						iVar0 = Global_262145.f_20812;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20813;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20814;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20815;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20816;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20817;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20818;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20819;
						break;
					
					case -653246751:
						iVar0 = 0;
						break;
					
					case -1520117877:
						iVar0 = Global_262145.f_20820;
						break;
					
					case -996700057:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 940943685:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1263226800:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -328035840:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 1224100642:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 899228776:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 616006309:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1561952511:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 572063080:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1170588613:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 966612367:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						iVar0 = 0;
						break;
					
					case 1315288101:
						iVar0 = Global_262145.f_22461;
						break;
					
					case 1004815965:
						iVar0 = Global_262145.f_22462;
						break;
					
					case -380098265:
						iVar0 = Global_262145.f_22460;
						break;
					
					case -1618338827:
						iVar0 = Global_262145.f_22459;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22488;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22489;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22490;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22491;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_22492;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_22493;
						break;
					
					case -474112444:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 387223451:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 617753366:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -222378256:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 8741501:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -601286203:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -511433605:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -655387818:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -282476598:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 1739501925:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1178671645:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						iVar0 = 0;
						break;
					
					case -568352468:
						iVar0 = Global_262145.f_22463;
						break;
					
					case 1362433589:
						iVar0 = Global_262145.f_22467;
						break;
					
					case 1346235024:
						iVar0 = Global_262145.f_22465;
						break;
					
					case -570355066:
						iVar0 = Global_262145.f_22466;
						break;
					
					case -2023373174:
						iVar0 = Global_262145.f_22464;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22494;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22495;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22496;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22497;
						break;
					
					case -1489156508:
						iVar0 = Global_262145.f_22498;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22499;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22500;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22501;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22502;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22503;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22504;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22505;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22506;
						break;
					
					case -415870039:
						iVar0 = 0;
						break;
					
					case -109086661:
						iVar0 = Global_262145.f_22507;
						break;
					
					case -737430213:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1125852043:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 886015732:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1262287139:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -295208411:
						iVar0 = Global_262145.f_20856;
						break;
					
					case -544154504:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 172765678:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -1982877449:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 2072122460:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1986220171:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1377355801:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						iVar0 = 0;
						break;
					
					case -829683854:
						iVar0 = Global_262145.f_23374;
						break;
					
					case -1055790298:
						iVar0 = Global_262145.f_22483;
						break;
					
					case -1928301566:
						iVar0 = Global_262145.f_22485;
						break;
					
					case -424845447:
						iVar0 = Global_262145.f_22484;
						break;
					
					case -1876057490:
						iVar0 = Global_262145.f_22482;
						break;
					
					case 1246324211:
						iVar0 = Global_262145.f_22539;
						break;
					
					case 1205768792:
						iVar0 = Global_262145.f_22540;
						break;
					
					case 1709866683:
						iVar0 = Global_262145.f_22541;
						break;
					
					case -1434287169:
						iVar0 = Global_262145.f_22542;
						break;
					
					case 259780317:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1973342474:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1996130345:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1455657812:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1668263084:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 1308243489:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 1122574335:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 1420313469:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 109848390:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 593945703:
						iVar0 = Global_262145.f_20861;
						break;
					
					case 1142457062:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						iVar0 = 0;
						break;
					
					case -422587990:
						iVar0 = Global_262145.f_22468;
						break;
					
					case -193998727:
						iVar0 = Global_262145.f_22472;
						break;
					
					case -515203373:
						iVar0 = Global_262145.f_22470;
						break;
					
					case 1842849902:
						iVar0 = Global_262145.f_22471;
						break;
					
					case -679861550:
						iVar0 = Global_262145.f_22469;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22508;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22509;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_22510;
						break;
					
					case 1528590652:
						iVar0 = 0;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22511;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22512;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22513;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22514;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22515;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22516;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22517;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22518;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22519;
						break;
					
					case 941317513:
						iVar0 = 0;
						break;
					
					case 1748450780:
						iVar0 = Global_262145.f_22520;
						break;
					
					case -1869284448:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 1931539634:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 1624199183:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -26834113:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -210406055:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 423313640:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 276639596:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -991356863:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -1682848301:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 996213771:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -1214048550:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						iVar0 = 0;
						break;
					
					case -958864266:
						iVar0 = Global_262145.f_22473;
						break;
					
					case 231258687:
						iVar0 = Global_262145.f_22474;
						break;
					
					case 284438159:
						iVar0 = Global_262145.f_22476;
						break;
					
					case 15712037:
						iVar0 = Global_262145.f_22475;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22521;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_22522;
						break;
					
					case 899381934:
						iVar0 = Global_262145.f_22523;
						break;
					
					case 654802123:
						iVar0 = Global_262145.f_22524;
						break;
					
					case -1069552225:
						iVar0 = Global_262145.f_20852;
						break;
					
					case 11918884:
						iVar0 = Global_262145.f_20853;
						break;
					
					case 176157112:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -220052855:
						iVar0 = Global_262145.f_20855;
						break;
					
					case 288456487:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 398658626:
						iVar0 = Global_262145.f_20857;
						break;
					
					case 628697006:
						iVar0 = Global_262145.f_20858;
						break;
					
					case 925911836:
						iVar0 = Global_262145.f_20859;
						break;
					
					case 1222307441:
						iVar0 = Global_262145.f_20860;
						break;
					
					case 552442715:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -648943513:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						iVar0 = 0;
						break;
					
					case -273676760:
						iVar0 = Global_262145.f_22477;
						break;
					
					case -89655827:
						iVar0 = Global_262145.f_22481;
						break;
					
					case 1130501904:
						iVar0 = Global_262145.f_22479;
						break;
					
					case -1449330342:
						iVar0 = Global_262145.f_22480;
						break;
					
					case -2111807319:
						iVar0 = Global_262145.f_22478;
						break;
					
					case 2076495324:
						iVar0 = Global_262145.f_22525;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_22526;
						break;
					
					case -944910075:
						iVar0 = Global_262145.f_22527;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_22528;
						break;
					
					case 1704640795:
						iVar0 = 0;
						break;
					
					case 1005743559:
						iVar0 = Global_262145.f_22538;
						break;
					
					case -2089531990:
						iVar0 = Global_262145.f_22529;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_22530;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_22531;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_22532;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_22533;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_22534;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_22535;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_22536;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_22537;
						break;
					
					case -1371515465:
						iVar0 = Global_262145.f_20852;
						break;
					
					case -1190793877:
						iVar0 = Global_262145.f_20853;
						break;
					
					case -1497085720:
						iVar0 = Global_262145.f_20854;
						break;
					
					case -1803148180:
						iVar0 = Global_262145.f_20855;
						break;
					
					case -1975971886:
						iVar0 = Global_262145.f_20856;
						break;
					
					case 36929477:
						iVar0 = Global_262145.f_20857;
						break;
					
					case -268444834:
						iVar0 = Global_262145.f_20858;
						break;
					
					case -574769446:
						iVar0 = Global_262145.f_20859;
						break;
					
					case -882699739:
						iVar0 = Global_262145.f_20860;
						break;
					
					case -1468181474:
						iVar0 = Global_262145.f_20861;
						break;
					
					case -974541230:
						iVar0 = Global_262145.f_20862;
						break;
				}
				break;
			
			case -1355376991:
				switch (iParam1)
				{
					case -673450233:
						iVar0 = 0;
						break;
				}
				break;
			
			case 727643628:
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
				iVar65 = func_87(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (!func_74(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_67())
	{
		StringCopy(&Var144, func_65(iParam1, iParam0), 16);
		func_61(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_63(iParam0), func_62(iParam0), -1, 0, 0);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_23(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)
{
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
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_26()
{
	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_14(-1619412469));
	iVar0 = (iVar0 + func_14(1659604058));
	iVar0 = (iVar0 + func_14(242250445));
	iVar0 = (iVar0 + func_14(-1440509968));
	iVar0 = (iVar0 + func_14(55646841));
	iVar0 = (iVar0 + func_14(995519836));
	iVar0 = (iVar0 + func_14(915369945));
	iVar0 = (iVar0 + func_14(-1029657896));
	iVar0 = (iVar0 + func_14(1938637151));
	return iVar0;
}

int func_27()
{
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_51(-77337635) };
	if (func_28(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_28(struct<7> Param0, struct<7> Param7, int iParam14)
{
	iVar0 = func_49(Param7);
	iVar1 = func_39(Param0, iParam14);
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

var func_39(struct<7> Param0, int iParam7)
{
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
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

var func_49(struct<6> Param0, var uParam6)
{
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
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_52(int iParam0)
{
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case -1569615261:
			break;
		
		case -72657034:
			break;
		
		case 324215364:
			iVar1 = 1;
			break;
		
		case 736523883:
			iVar1 = 1;
			break;
		
		case 2017895192:
			iVar1 = 3;
			break;
		
		case 487013001:
			iVar1 = 3;
			break;
		
		case -494615257:
			iVar1 = 3;
			break;
		
		case -1074790547:
			iVar1 = 2;
			break;
		
		case -2084633992:
			iVar1 = 2;
			break;
		
		case -1357824103:
			iVar1 = 2;
			break;
		
		case 100416529:
			break;
		
		case 205991906:
			break;
		
		case -1660422300:
			iVar1 = 4;
			break;
		
		case 2144741730:
			iVar1 = 4;
			break;
		
		case -1312131151:
			break;
		
		case -1568386805:
			break;
		
		case 1119849093:
			iVar1 = 5;
			break;
		
		case -1716189206:
			break;
		
		case 1737195953:
			break;
		
		case 883325847:
			break;
		
		case 911657153:
			break;
		
		case 584646201:
			iVar1 = 0;
			break;
		
		case 1593441988:
			iVar1 = 0;
			break;
		
		case 453432689:
			iVar1 = 0;
			break;
		
		case -37975472:
			break;
		
		case -1813897027:
			break;
		
		case 741814745:
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
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
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
	return Global_111638.f_19142[iParam1].f_3[iParam0].f_3;
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
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
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
	return Global_1798[iParam0];
}

void func_61(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case -757735410:
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case 1790834270:
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case -2022483795:
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
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
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

char* func_65(int iParam0, int iParam1)
{
	if (iParam1 == -656458692)
	{
		switch (iParam0)
		{
			case -213504205:
				return "WT_KNUCKLE";
				break;
			
			case -971770235:
				return "WCT_KNUCK_02";
				break;
			
			case -287703709:
				return "WCT_KNUCK_BG";
				break;
			
			case 1351683121:
				return "WCT_KNUCK_DLR";
				break;
			
			case -1755194916:
				return "WCT_KNUCK_DMD";
				break;
			
			case 2112683568:
				return "WCT_KNUCK_HT";
				break;
			
			case 1062111910:
				return "WCT_KNUCK_LV";
				break;
			
			case 146278587:
				return "WCT_KNUCK_PC";
				break;
			
			case -494162961:
				return "WCT_KNUCK_SLG";
				break;
			
			case 2062808965:
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case 1967214384:
			return "WCT_RAIL";
			break;
		
		case 202788691:
			return "WCT_GRIP";
			break;
		
		case 899381934:
			return "WCT_FLASH";
			break;
		
		case 2076495324:
			return "WCT_FLASH";
			break;
		
		case -1657815255:
			return "WCT_SCOPE_MAC";
			break;
		
		case 1019656791:
			return "WCT_SCOPE_MAC";
			break;
		
		case -1439939148:
			return "WCT_SCOPE_SML";
			break;
		
		case 1006677997:
			return "WCT_SCOPE_SML";
			break;
		
		case -1596416958:
			return "WCT_SCOPE_MED";
			break;
		
		case -767279652:
			return "WCT_SCOPE_LRG";
			break;
		
		case -1135289737:
			return "WCT_SCOPE_MAX";
			break;
		
		case -1023114086:
			return "WCT_SUPP";
			break;
		
		case -2089531990:
			return "WCT_SUPP";
			break;
		
		case -1489156508:
			return "WCT_SUPP";
			break;
		
		case -435637410:
			return "WCT_SUPP";
			break;
		
		case -19858063:
			return "WCT_CLIP1";
			break;
		
		case -316253668:
			return "WCT_CLIP2";
			break;
		
		case 119648377:
			return "WCT_CLIP1";
			break;
		
		case -696561875:
			return "WCT_CLIP2";
			break;
		
		case 834974250:
			return "WCT_CLIP1";
			break;
		
		case 614078421:
			return "WCT_CLIP2";
			break;
		
		case -884429072:
			return "WCT_CLIP1";
			break;
		
		case 283556395:
			return "WCT_CLIP2";
			break;
		
		case 643254679:
			return "WCT_CLIP1";
			break;
		
		case 889808635:
			return "WCT_CLIP2";
			break;
		
		case -1101075946:
			return "WCT_CLIP1";
			break;
		
		case -1323216997:
			return "WCT_CLIP2";
			break;
		
		case -1614924820:
			return "WCT_CLIP1";
			break;
		
		case -1861183855:
			return "WCT_CLIP2";
			break;
		
		case -91250417:
			return "WCT_CLIP1";
			break;
		
		case -1899902599:
			return "WCT_CLIP2";
			break;
		
		case -197857404:
			return "WCT_CLIP1";
			break;
		
		case -2112517305:
			return "WCT_CLIP2";
			break;
		
		case -503336118:
			return "WCT_CLIP1";
			break;
		
		case -691692330:
			return "WCT_CLIP2";
			break;
		
		case -1796727865:
			return "WCT_CLIP1";
			break;
		
		case -2034401422:
			return "WCT_CLIP2";
			break;
		
		case -1681506167:
			return "WCT_CLIP1";
			break;
		
		case 1198478068:
			return "WCT_CLIP1";
			break;
		
		case -924946682:
			return "WCT_CLIP2";
			break;
		
		case -1928132688:
			return "WCT_CLIP1";
			break;
		
		case -1152981993:
			return "WCT_CLIP2";
			break;
		
		case 580369945:
			return "WCT_CLIP1";
			break;
		
		case -640439150:
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
		
		case -125817127:
			return "WCT_CLIP1";
			break;
		
		case 2063610803:
			return "WCT_CLIP2";
			break;
		
		case 1168357051:
			return "WCT_CLIP1";
			break;
		
		case 867832552:
			return "WCT_CLIP2";
			break;
		
		case 844049759:
			return "WCT_CLIP1";
			break;
		
		case -667205311:
			return "WCT_CLIP1";
			break;
		
		case -1759709443:
			return "WCT_CLIP2";
			break;
		
		case -855823675:
			return "WCT_CLIP2";
			break;
		
		case 471997210:
			return "WCT_SCOPE_LRG";
			break;
		
		case 1709866683:
			return "WCT_SUPP";
			break;
		
		case 1125642654:
			return "WCT_CLIP1";
			break;
		
		case 860508675:
			return "WCT_CLIP2";
			break;
		
		case -878820883:
			return "WCT_CLIP1";
			break;
		
		case 1198425599:
			return "WCT_CLIP1";
			break;
		
		case -1188271751:
			return "WCT_CLIP2";
			break;
		
		case 1319990579:
			return "WCT_VAR_GOLD";
			break;
		
		case 930927479:
			return "WCT_VAR_METAL";
			break;
		
		case -660892072:
			return "WCT_VAR_GOLD";
			break;
		
		case -1686714580:
			return "WCT_VAR_METAL";
			break;
		
		case -684126074:
			return "WCT_VAR_GOLD";
			break;
		
		case 2008591151:
			return "WCT_VAR_SIL";
			break;
		
		case 2053798779:
			return "WCT_VAR_WOOD";
			break;
		
		case 663170192:
			return "WCT_VAR_GOLD";
			break;
		
		case 1215999497:
			return "WCT_VAR_GOLD";
			break;
		
		case -2052698631:
			return "WCT_VAR_METAL";
			break;
		
		case 1077065191:
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case 663517359:
			return "WCT_VAR_GOLD";
			break;
		
		case -1470645128:
			return "WCT_VAR_METAL";
			break;
		
		case -1828795171:
			return "WCT_VAR_ETCHM";
			break;
		
		case -966439566:
			return "WCT_VAR_GOLD";
			break;
		
		case -690308418:
			return "WCT_VAR_GOLD";
			break;
		
		case -1562927653:
			return "WCT_VAR_GOLD";
			break;
		
		case -2144080721:
			return "WCT_VAR_WOOD";
			break;
		
		case 1929467122:
			return "WCT_VAR_ETCHM";
			break;
		
		case -1858624256:
			return "WCT_SB_BASE";
			break;
		
		case 1530822070:
			return "WCT_SB_VAR1";
			break;
		
		case -409758110:
			return "WCT_SB_VAR2";
			break;
		
		case -377062173:
			return "WCT_CLIP1";
			break;
		
		case 384708672:
			return "WCT_REV_VARB";
			break;
		
		case -1802258419:
			return "WCT_REV_VARG";
			break;
		
		case 2043113590:
			return "WCT_CLIP_DRM";
			break;
		
		case -1167922891:
			return "WCT_CLIP_BOX";
			break;
		
		case -604986051:
			return "WCT_CLIP_DRM";
			break;
		
		case -2000168365:
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case -1214048550:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case -829683854:
			return "WCT_CLIP2";
			break;
		
		case -944910075:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		case -673450233:
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
				iVar0 = func_87(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_66(&(Var41.f_6));
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
			case -604986051:
			case -1167922891:
			case 1857603803:
			case -972590066:
			case -2000168365:
			case -1444295948:
			case 2043113590:
			case 1801039530:
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
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

int func_71()
{
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
	if (STATS::STAT_GET_INT(1571103992, &iVar0, -1))
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
			iVar2 = 1035124638;
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
	if (STATS::STAT_GET_INT(1571103992, &iVar0, -1))
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
			iVar2 = 1035124638;
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
				STATS::STAT_GET_INT(1571103992, &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(1571103992, iVar4, 1);
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
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(1571103992, &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, iVar0, 1);
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
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	if (func_84())
	{
		return 0;
	}
	uVar0 = func_79(iParam0, iParam1, iParam2);
	iVar1 = func_77(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, func_76(iVar1));
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
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
					break;
				
				case -316253668:
					return 2;
					break;
				
				case 899381934:
					return 3;
					break;
				
				case 1709866683:
					return 4;
					break;
				
				case -684126074:
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
					break;
				
				case -696561875:
					return 6;
					break;
				
				case 899381934:
					return 7;
					break;
				
				case -1023114086:
					return 8;
					break;
				
				case -966439566:
					return 186;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
					break;
				
				case 614078421:
					return 12;
					break;
				
				case 899381934:
					return 13;
					break;
				
				case -1023114086:
					return 14;
					break;
				
				case -1686714580:
					return 164;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
					break;
				
				case 283556395:
					return 16;
					break;
				
				case 899381934:
					return 17;
					break;
				
				case -1657815255:
					return 18;
					break;
				
				case -1489156508:
					return 19;
					break;
				
				case 1215999497:
					return 174;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
					break;
				
				case 889808635:
					return 23;
					break;
				
				case 2043113590:
					return 207;
					break;
				
				case 2076495324:
					return 24;
					break;
				
				case 1019656791:
					return 25;
					break;
				
				case -1023114086:
					return 26;
					break;
				
				case 663170192:
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
					break;
				
				case -1323216997:
					return 28;
					break;
				
				case -604986051:
					return 201;
					break;
				
				case 202788691:
					return 29;
					break;
				
				case 2076495324:
					return 30;
					break;
				
				case -1657815255:
					return 31;
					break;
				
				case -1489156508:
					return 32;
					break;
				
				case 1319990579:
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
					break;
				
				case -1861183855:
					return 34;
					break;
				
				case -1167922891:
					return 202;
					break;
				
				case 1967214384:
					return 35;
					break;
				
				case 202788691:
					return 36;
					break;
				
				case 2076495324:
					return 37;
					break;
				
				case -1596416958:
					return 38;
					break;
				
				case -2089531990:
					return 39;
					break;
				
				case -660892072:
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
					break;
				
				case -1899902599:
					return 45;
					break;
				
				case 2076495324:
					return 47;
					break;
				
				case -1439939148:
					return 48;
					break;
				
				case -2089531990:
					return 49;
					break;
				
				case 930927479:
					return 163;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
					break;
				
				case -2112517305:
					return 51;
					break;
				
				case 1006677997:
					return 52;
					break;
				
				case -690308418:
					return 187;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
					break;
				
				case -691692330:
					return 54;
					break;
				
				case 202788691:
					return 55;
					break;
				
				case -1596416958:
					return 56;
					break;
				
				case -1828795171:
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
					break;
				
				case 2076495324:
					return 60;
					break;
				
				case -1562927653:
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
					break;
				
				case -2034401422:
					return 65;
					break;
				
				case 202788691:
					return 66;
					break;
				
				case 2076495324:
					return 67;
					break;
				
				case -2089531990:
					return 68;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
					break;
				
				case -767279652:
					return 70;
					break;
				
				case -1135289737:
					return 71;
					break;
				
				case -1489156508:
					return 72;
					break;
				
				case 1077065191:
					return 180;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
					break;
				
				case -1135289737:
					return 77;
					break;
				
				case -767279652:
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
					break;
				
				case 2076495324:
					return 79;
					break;
				
				case -1439939148:
					return 80;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
					break;
				
				case -1152981993:
					return 84;
					break;
				
				case 2076495324:
					return 85;
					break;
				
				case -1657815255:
					return 86;
					break;
				
				case -1489156508:
					return 87;
					break;
				
				case 663517359:
					return 189;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
					break;
				
				case 2076495324:
					return 89;
					break;
				
				case -1489156508:
					return 90;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
					break;
				
				case -640439150:
					return 92;
					break;
				
				case 899381934:
					return 93;
					break;
				
				case -1489156508:
					return 94;
					break;
				
				case 2008591151:
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
				
				case -767279652:
					return 96;
					break;
				
				case -1135289737:
					return 97;
					break;
				
				case -2089531990:
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
				
				case 202788691:
					return 101;
					break;
				
				case 2076495324:
					return 102;
					break;
				
				case -1596416958:
					return 103;
					break;
				
				case -2089531990:
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
				
				case 202788691:
					return 107;
					break;
				
				case -1596416958:
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
		
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
					break;
				
				case 2089537806:
					return 112;
					break;
				
				case 1801039530:
					return 208;
					break;
				
				case 202788691:
					return 113;
					break;
				
				case 2076495324:
					return 114;
					break;
				
				case -1596416958:
					return 115;
					break;
				
				case -1489156508:
					return 116;
					break;
				
				case 1929467122:
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
					break;
				
				case 2063610803:
					return 118;
					break;
				
				case 899381934:
					return 119;
					break;
				
				case -1023114086:
					return 120;
					break;
				
				case -2144080721:
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
					break;
				
				case 1694090795:
					return 122;
					break;
				
				case 899381934:
					return 123;
					break;
				
				case -1023114086:
					return 124;
					break;
				
				case 2053798779:
					return 171;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
					break;
				
				case -1284994289:
					return 132;
					break;
				
				case 2076495324:
					return 127;
					break;
				
				case -2089531990:
					return 128;
					break;
				
				case -1439939148:
					return 129;
					break;
				
				case 202788691:
					return 130;
					break;
				
				case -1470645128:
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
					break;
				
				case -355941776:
					return 126;
					break;
			}
			break;
		
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
					break;
				
				case 867832552:
					return 134;
					break;
				
				case -1023114086:
					return 136;
					break;
			}
			break;
		
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
					break;
				
				case -1759709443:
					return 140;
					break;
				
				case -2000168365:
					return 205;
					break;
				
				case 2076495324:
					return 145;
					break;
				
				case -1489156508:
					return 146;
					break;
				
				case 202788691:
					return 147;
					break;
			}
			break;
		
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
					break;
				
				case -855823675:
					return 139;
					break;
				
				case 471997210:
					return 141;
					break;
				
				case 2076495324:
					return 142;
					break;
				
				case -2089531990:
					return 143;
					break;
				
				case 202788691:
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
					break;
				
				case 860508675:
					return 150;
					break;
				
				case 1857603803:
					return 203;
					break;
				
				case 2076495324:
					return 151;
					break;
				
				case -1439939148:
					return 152;
					break;
				
				case 202788691:
					return 153;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
					break;
			}
			break;
		
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
					break;
				
				case -287703709:
					return 155;
					break;
				
				case 1351683121:
					return 156;
					break;
				
				case -1755194916:
					return 157;
					break;
				
				case 2112683568:
					return 158;
					break;
				
				case 1062111910:
					return 159;
					break;
				
				case 146278587:
					return 160;
					break;
				
				case -494162961:
					return 161;
					break;
				
				case 2062808965:
					return 162;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
					break;
				
				case -1188271751:
					return 185;
					break;
				
				case -1444295948:
					return 206;
					break;
				
				case -1023114086:
					return 183;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
					break;
				
				case -409758110:
					return 195;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
					break;
				
				case 384708672:
					return 197;
					break;
				
				case -1802258419:
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
					break;
				
				case 1509923832:
					return 200;
					break;
				
				case -972590066:
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case 1709866683:
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case 2076495324:
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case -1023114086:
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case -1135289737:
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case 2076495324:
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case -1489156508:
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case 2076495324:
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case -2089531990:
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case 2076495324:
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case 2076495324:
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case -1489156508:
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case 1709866683:
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case 2076495324:
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case -2089531990:
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case 899381934:
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case 2076495324:
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case -2089531990:
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
					break;
			}
			break;
		
		case 727643628:
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
	uVar0 = func_12(func_80(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_80(int iParam0, int iParam1)
{
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

int func_87(int iParam0, var uParam1)
{
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_88(var uParam0, var uParam1)
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_91(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(uParam0, func_91(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, Var4);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(uParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(uParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_90(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_90(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_89(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(uParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, Var4);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(uParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(uParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_74(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, Var4, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
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
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
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
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_87(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_74(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
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

float func_92(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_94(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_93(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_93(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_94(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_95(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
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
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	uVar0 = func_101(iParam1);
	uVar1 = MISC::GET_PROFILE_SETTING(uVar0);
	return MISC::IS_BIT_SET(uVar1, iParam0);
}

int func_101(int iParam0)
{
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
	return Global_111638.f_9080.f_330[iParam0];
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
		if (func_95(&uLocal_58))
		{
		}
	}
}

int func_117()
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(-183734540) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(-183734540));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(1158126130) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(1158126130));
	if ((iVar0 + iVar1) >= 15)
	{
		func_127(50, 1);
		return 1;
	}
	return 0;
}

int func_118()
{
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
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (uVar0[iVar8])
		{
			iVar7++;
		}
		iVar8++;
	}
	STATS::STAT_GET_INT(-596685709, &iVar9, -1);
	if (iVar7 > iVar9 && iVar7 > 0)
	{
		STATS::STAT_SET_INT(-596685709, iVar7, 1);
		func_133(17, iVar7);
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
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_111638.f_1983[0][iVar0].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[1][iVar0].f_8 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_1983[2][iVar0].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_111638.f_19142[0].f_3[iVar0].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[1].f_3[iVar0].f_3 == 3)
		{
			return 1;
		}
		else if (Global_111638.f_19142[2].f_3[iVar0].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122()
{
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
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
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
	iVar0 = (func_147(bParam0) + func_135(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_135(bool bParam0)
{
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_18569)
	{
		if (Global_111638.f_18569[iVar0].f_3 != -1 && func_145(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 7))
			{
				iVar7 = func_141(iVar0, 7, iVar5);
				if (!Global_61737[iVar7].f_7)
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
				iVar2 = Global_111638.f_2347[(iVar0 - 52)];
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
	if (func_139(iParam0, func_140(Global_61737[iParam0].f_4)))
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
	switch (Global_61737[iParam0])
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
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_111638.f_24899[4] == func_56())
	{
		Global_61737[iParam0].f_2 = 0;
	}
	if (Global_61737[iParam0].f_3)
	{
		if (iParam1 < Global_61737[iParam0].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_61737[iParam0].f_2)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
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
			return Global_89532[iParam0].f_17[iParam2];
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
			return Global_89532[iParam0].f_16;
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
			return !MISC::IS_BIT_SET(Global_89532[iParam0].f_15, 5);
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
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_9080.f_330)
	{
		if (Global_111638.f_9080.f_330[iVar0].f_3 != -1 && func_145(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_143(iVar0, 1))
			{
				iVar7 = func_141(iVar0, 1, iVar5);
				if (!Global_61737[iVar7].f_7)
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
	iVar0 = func_140(Global_61737[iParam0].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_149()
{
	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0);
	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_127(25, 1);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
		if (ENTITY::IS_ENTITY_A_PED(uVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0);
			if (func_150(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == 113504370)
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
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
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
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_156() == 2)
				{
					func_162(&uLocal_58);
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
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (func_156() < 2)
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_154(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			fLocal_63 = func_153(&uLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_127(24, 1);
				func_152(&uLocal_58);
				iLocal_55++;
			}
			break;
		
		case 2:
			iLocal_55++;
			break;
	}
}

void func_152(var uParam0)
{
	if (func_95(uParam0))
	{
		if (!func_94(uParam0))
		{
			uParam0->f_2 = (func_93(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

float func_153(var uParam0)
{
	if (func_95(uParam0))
	{
		if (func_94(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_93(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_154(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
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
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_162(var uParam0)
{
	func_163(uParam0, 0f);
}

void func_163(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_93(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
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

