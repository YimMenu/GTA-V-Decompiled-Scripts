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
	iLocal_20 = -15;
	iLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_98();
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-914146553) > 1)
	{
		func_98();
	}
	Global_61496 = 1;
	iLocal_22 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_97();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0])
		{
			if (Global_57254[iVar0].f_2)
			{
				if (!Global_57254[iVar0].f_4)
				{
					STATS::STAT_GET_INT(Global_57254[iVar0].f_3, &(Global_57254[iVar0].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					STATS::STAT_GET_FLOAT(Global_57254[iVar0].f_3, &fVar1, -1);
					Global_57254[iVar0].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_95();
	func_94();
	func_91();
	Global_61496 = 0;
	func_90(1);
	func_87();
	func_84();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_111638.f_20559.f_233[iVar2].f_1 < 11)
			{
				Global_111638.f_20559.f_233[iVar2].f_1 = 0;
			}
			iVar2++;
		}
		func_80();
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_79(14))
		{
			func_68();
			iVar3 = 16;
			while (func_67() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_58690 = 1;
				func_41();
				Global_61498 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_58683 > 0)
			{
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_21, 0, 480, 0, 0, 0, 0);
				Global_58683 = (Global_58683 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	iVar1 = func_3(iVar0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
	{
		func_2(89, 1);
		if (ENTITY::GET_ENTITY_SPEED(iVar1) > 5f)
		{
			func_2(90, 1);
		}
	}
}

void func_2(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

int func_3(int iParam0)
{
	return iParam0;
}

void func_4()
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_58684)
		{
			Global_58684 = 0;
			Global_58685 = GAMEPLAY::GET_GAME_TIMER();
			Global_61497 = 1;
		}
		return;
	}
	if (Global_58684)
	{
		if (!STATS::_0xB1D2BB1E1631F5B1())
		{
			iVar0 = func_5();
			Global_58684 = 0;
			if (iVar0 < 5)
			{
				Global_61497 = 0;
			}
		}
	}
}

int func_5()
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_53811[iVar0].f_8)
		{
			if (Global_53811[iVar0].f_35 > -1)
			{
				uVar2 = Global_56692[Global_53811[iVar0].f_35];
				STATS::STAT_GET_FLOAT(uVar2, &(Global_53811[iVar0].f_9), -1);
				if (Global_53811[iVar0].f_9 > 0f)
				{
					fVar3 = 0f;
					STATS::_0xBED9F5693F34ED17(uVar2, 0, &(Global_53811[iVar0].f_33));
					Global_53811[iVar0].f_31 = Global_53811[iVar0].f_9;
					Global_53811[iVar0].f_32 = Global_53811[iVar0].f_9;
					fVar3 = (fVar3 + Global_53811[iVar0].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						STATS::_0xBED9F5693F34ED17(uVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_53811[iVar0].f_31)
						{
							Global_53811[iVar0].f_31 = fVar5;
						}
						if (fVar5 < Global_53811[iVar0].f_32)
						{
							Global_53811[iVar0].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_53811[iVar0].f_31)
					{
						Global_53811[iVar0].f_31 = fVar6;
					}
					if (fVar6 < Global_53811[iVar0].f_32)
					{
						Global_53811[iVar0].f_32 = fVar6;
					}
					Global_53811[iVar0].f_33 = (fVar6 - fVar3);
					Global_53811[iVar0].f_34 = ((Global_53811[iVar0].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)
{
	iVar0 = iParam0;
	fVar1 = (Global_53811[iParam0].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)
{
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_111638.f_9080.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_10(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(74) || func_10(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (func_10(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (func_10(93))
			{
				if (!func_10(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(38))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(84))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (func_10(90))
			{
				if (!func_10(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (func_10(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (func_10(93))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (func_10(61))
			{
				if (!func_10(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_111638.f_20559.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_111638.f_20559.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_111638.f_20559.f_452[iVar1], Global_111638.f_20559.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0, iVar4);
		iVar6 = func_8(1, iVar4);
		iVar7 = func_8(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_58686[0] + Global_58686[1]) + Global_58686[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_111638.f_20559.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_11[iVar2]));
				}
				if (Global_111638.f_20559.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_44[iVar2]));
				}
				if (Global_111638.f_20559.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_111638.f_20559.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_20559.f_22[iParam1];
			break;
		
		case 1:
			return Global_111638.f_20559.f_55[iParam1];
			break;
		
		case 2:
			return Global_111638.f_20559.f_88[iParam1];
			break;
	}
	return 0;
}

float func_9(int iParam0, int iParam1)
{
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = GAMEPLAY::IS_BIT_SET(uParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (GAMEPLAY::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (GAMEPLAY::IS_BIT_SET(iParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 1))
	{
		if (func_10(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (GAMEPLAY::IS_BIT_SET(iParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!GAMEPLAY::IS_BIT_SET(iParam1, 1))
	{
		if (GAMEPLAY::IS_BIT_SET(iParam1, 6))
		{
			fVar6 = 0f;
			if (GAMEPLAY::IS_BIT_SET(iParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (GAMEPLAY::IS_BIT_SET(iParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (GAMEPLAY::IS_BIT_SET(iParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (GAMEPLAY::IS_BIT_SET(iParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iParam1, 11))
		{
			fVar8 = 0f;
			if (GAMEPLAY::IS_BIT_SET(iParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (GAMEPLAY::IS_BIT_SET(iParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (GAMEPLAY::IS_BIT_SET(iParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (GAMEPLAY::IS_BIT_SET(iParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)
{
	return Global_111638.f_9080.f_330[iParam0];
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_18(iParam0, iParam1);
	func_17(iParam0, iParam2);
	func_16(iParam0, iParam3);
	func_15(iParam0, iParam5);
	func_14(iParam0, iParam4);
	func_13(iParam0, iParam6);
}

void func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_14(int iParam0, int iParam1)
{
	iVar0 = func_24(*iParam0);
	iVar1 = func_25(*iParam0);
	if (iParam1 < 1 || iParam1 > func_19(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_18(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0)
{
	return iParam0 & 15;
}

var func_25(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_26(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()
{
	if (Global_111638.f_20559.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_461[iVar0], 1))
		{
			if (Global_111638.f_20559.f_452[iVar0] > 0)
			{
				Global_111638.f_20559.f_452[iVar0] = (Global_111638.f_20559.f_452[iVar0] - 1);
				if (Global_111638.f_20559.f_452[iVar0] < 1)
				{
					Global_111638.f_20559.f_452[iVar0] = 0;
					Global_111638.f_20559.f_442 = (Global_111638.f_20559.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	if (Global_53811[iParam0].f_8)
	{
		return;
	}
	fVar0 = Global_53811[iParam0].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_53811[iParam0].f_14[Global_53811[iParam0].f_13] = fVar0;
	if (fVar0 > Global_53811[iParam0].f_31)
	{
		Global_53811[iParam0].f_31 = fVar0;
	}
	if (fVar0 < Global_53811[iParam0].f_32)
	{
		Global_53811[iParam0].f_32 = fVar0;
	}
	Global_53811[iParam0].f_13++;
	if (Global_53811[iParam0].f_13 >= 16)
	{
		Global_53811[iParam0].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_53811[iParam0].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_53811[iParam0].f_33 = (fVar0 - fVar1);
	Global_53811[iParam0].f_34 = ((Global_53811[iParam0].f_33 / fVar1) * 100f);
}

int func_30()
{
	if (iLocal_20 == -15)
	{
		iLocal_20 = func_37();
		iVar0 = func_22(iLocal_20);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (func_36(iVar0, 0, 8))
		{
			func_16(&iLocal_20, 8);
		}
		else if (func_36(iVar0, 8, 16))
		{
			func_16(&iLocal_20, 16);
		}
		else if (func_36(iVar0, 16, 24))
		{
			func_16(&iLocal_20, 0);
			func_35(&iLocal_20, 0, 0, 0, 1, 0, 0);
		}
		func_17(&iLocal_20, 0);
		func_18(&iLocal_20, 0);
		iLocal_21 = iLocal_20;
		return 0;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_20, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)
{
	if (func_33(Global_1312465))
	{
		if (bParam1)
		{
			iVar0 = func_37();
			iVar1 = func_22(Global_1312465);
			iVar2 = func_21(Global_1312465);
			func_16(&iVar0, iVar1);
			func_17(&iVar0, iVar2);
			func_18(&iVar0, 0);
			if (func_32(func_37(), iVar0))
			{
				func_35(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (func_32(iVar0, *iParam0) && iVar3 < 24)
			{
				func_35(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	if (!func_33(iParam1) || !func_33(iParam0))
	{
		return 1;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_21(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_22(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_25(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_24(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_23(iParam0);
	if (iVar5 < 1 || iVar5 > func_19(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_32(func_37(), iParam0);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
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
	iVar6 = func_19(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_19(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	func_18(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_17(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_16(&uVar0, TIME::GET_CLOCK_HOURS());
	func_14(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_15(&uVar0, TIME::GET_CLOCK_MONTH());
	func_13(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_38()
{
	SYSTEM::WAIT(0);
	func_68();
}

void func_39()
{
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 48)
		{
			switch (func_40(iLocal_26))
			{
				case 1:
					func_2(85, 1);
					break;
				
				case 2:
					func_2(84, 1);
					break;
				
				case 3:
					func_2(86, 1);
					break;
				
				case 4:
					func_2(87, 1);
					break;
				}
		}
		iLocal_25 = 0;
		iLocal_26 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			func_2(77, 1);
			break;
		
		case 2:
			func_2(76, 1);
			break;
		
		case 3:
			func_2(79, 1);
			break;
		
		case 4:
			func_2(80, 1);
			break;
		
		case 0:
			break;
	}
	func_2(78, 1);
	iLocal_25++;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_41()
{
	func_68();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0])
		{
			if (Global_57254[iVar0].f_2)
			{
				iVar1 = 0;
				if (!Global_57254[iVar0].f_4)
				{
					STATS::STAT_GET_INT(Global_57254[iVar0].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					STATS::STAT_GET_FLOAT(Global_57254[iVar0].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_57254[iVar0].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_57254[iVar0].f_5;
					}
				}
				Global_57254[iVar0].f_6 = (iVar1 - Global_57254[iVar0].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_53811[iVar0].f_8)
		{
			if (!Global_53811[iVar0].f_10 == 0f)
			{
				Global_53811[iVar0].f_11 = Global_53811[iVar0].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_53811[iVar0].f_8)
		{
			fVar5 = 0f;
			if (Global_53811[iVar0].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_53811[iVar0].f_9) * Global_53811[iVar0].f_10) - Global_53811[iVar0].f_9));
			}
			fVar5 = (fVar5 + ((GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-Global_56966[iVar4].f_6, Global_56966[iVar4].f_6) * 0.1f) * Global_53811[iVar0].f_9));
			Global_56966[iVar4] = (Global_56966[iVar4] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_56966[iVar4].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_56966[iVar4].f_1);
			}
			fVar5 = func_46(fVar5, -Global_56966[iVar4].f_5, Global_56966[iVar4].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && func_45(44)) && !func_45(64)) && fVar5 > 0f)
			{
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 + fVar5);
			}
			if (Global_53811[iVar0].f_9 > Global_56966[iVar4].f_3)
			{
				fVar8 = (Global_53811[iVar0].f_9 - Global_56966[iVar4].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 - fVar8);
			}
			else if (Global_53811[iVar0].f_9 < Global_56966[iVar4].f_4)
			{
				fVar9 = (Global_56966[iVar4].f_4 - Global_53811[iVar0].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 + fVar9);
			}
			Global_56966[iVar4] = (Global_56966[iVar4] - (((fVar5 * 0.66f) + (Global_56966[iVar4] * 0.33f)) * 0.02f));
			if (!Global_53811[iVar0].f_9 > 0f)
			{
				Global_53811[iVar0].f_9 = (-1f * Global_53811[iVar0].f_9);
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_57254[iVar0])
		{
			if (Global_57254[iVar0].f_2)
			{
				Global_57254[iVar0].f_5 = (Global_57254[iVar0].f_5 + Global_57254[iVar0].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_53811[iVar1].f_8)
		{
			if (iVar0 < 42)
			{
				Global_111638.f_20559.f_103[iVar0] = Global_53811[iVar1].f_9;
				if (Global_53811[iVar1].f_31 > Global_111638.f_20559.f_146[iVar0])
				{
					Global_111638.f_20559.f_146[iVar0] = Global_53811[iVar1].f_31;
				}
				if (Global_111638.f_20559.f_189[iVar0] == 0f)
				{
					Global_111638.f_20559.f_189[iVar0] = Global_53811[iVar1].f_32;
				}
				else if (Global_53811[iVar1].f_32 < Global_111638.f_20559.f_189[iVar0])
				{
					Global_111638.f_20559.f_189[iVar0] = Global_53811[iVar1].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)
{
	if (Global_53811[iParam0].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0, iParam0);
	iVar1 = func_8(1, iParam0);
	iVar2 = func_8(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_58686[0] + Global_58686[1]) + Global_58686[2]);
	if (Global_58686[0] > iVar3)
	{
		return 0f;
	}
	if (Global_58686[1] > iVar3)
	{
		return 0f;
	}
	if (Global_58686[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = func_8(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_20559[iParam1];
		
		case 1:
			return Global_111638.f_20559.f_33[iParam1];
		
		case 2:
			return Global_111638.f_20559.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_45(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

float func_46(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_47()
{
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		if (iVar0 == 0)
		{
			func_2(75, 1);
		}
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
			if (iVar2 != 0)
			{
				if (func_58(iVar2))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
					func_56(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			iVar4 = WEAPON::GET_SELECTED_PED_WEAPON(iVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case 615608432:
				case 883325847:
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
						
						case 1:
							func_2(148, 1);
							break;
						
						case 2:
							func_2(149, 1);
							break;
					}
					break;
				}
			}
	}
}

int func_48()
{
	func_49();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_49()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(PLAYER::PLAYER_PED_ID());
			if (func_50(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_50(Global_111638.f_2358.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1798[iParam0];
}

void func_54(int iParam0)
{
	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 0:
			func_2(51, 1);
			break;
		
		case 1:
			func_2(52, 1);
			break;
		
		case 2:
			func_2(53, 1);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 741814745:
		case 911657153:
		case -1568386805:
		case 205991906:
		case -2084633992:
		case -1063057011:
		case 736523883:
		case -494615257:
		case 584646201:
			return 0;
			break;
		
		case -37975472:
		case 856002082:
		case -1312131151:
		case -1660422300:
		case -1357824103:
		case 324215364:
		case 2017895192:
		case 453432689:
			return 1;
			break;
		
		case -1813897027:
		case 1119849093:
		case 100416529:
		case 2144741730:
		case -1074790547:
		case 487013001:
		case 1593441988:
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_56(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(39, 1);
			break;
		
		case 1:
			func_2(35, 1);
			break;
		
		case 2:
			func_2(32, 1);
			break;
		
		case 3:
			func_2(38, 1);
			break;
		
		case 4:
			func_2(31, 1);
			break;
		
		case 5:
			func_2(33, 1);
			break;
		
		case 6:
			func_2(36, 1);
			break;
		
		case 7:
			func_2(37, 1);
			break;
	}
	switch (iParam0)
	{
		case -2072933068:
		case -956048545:
		case 1131912276:
		case -186537451:
		case -1233807380:
		case -836512833:
		case 1127861609:
		case 448402357:
			func_2(34, 1);
			break;
	}
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 2053223216:
		case 1069929536:
		case -1696146015:
		case 80636076:
		case -310465116:
		case 1830407356:
		case -1651067813:
		case -599568815:
		case 734217681:
		case -1189015600:
		case 989381445:
		case -810318068:
		case 728614474:
		case -1477580979:
			return 3;
			break;
		
		case -1987130134:
		case 1876516712:
		case -119658072:
		case 943752001:
		case 1747439474:
		case -214455498:
		case 48339065:
			return 2;
			break;
		
		case 499169875:
			return 6;
			break;
		
		case 904750859:
		case -1050465301:
		case -377465520:
		case 788045382:
		case -1453280962:
			return 1;
			break;
		
		case 1126868326:
		case -1661854193:
		case 699456151:
		case -1311240698:
			return 4;
			break;
		
		case 1074326203:
		case 850991848:
		case 1886712733:
		case -1006919392:
		case -2130482718:
		case 1491375716:
		case -784816453:
		case 475220373:
			return 0;
			break;
		
		case 1348744438:
		case -511601230:
		case 1349725314:
		case 873639469:
		case -1122289213:
		case -1193103848:
			return 7;
			break;
	}
	return 8;
}

int func_58(int iParam0)
{
	if (Global_76622)
	{
		return VEHICLE::IS_VEHICLE_STOLEN(iParam0);
	}
	if (func_61(iParam0, &uVar0))
	{
		return 0;
	}
	if (func_60(iParam0))
	{
		return 0;
	}
	if (func_59(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_61(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_75441.f_484[iVar0] == iParam0)
		{
			if (func_62(&(Global_75441.f_555[0]), iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 10) && Global_75441.f_555[0].f_4 == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = -1008861746;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_64())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_64())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = -1269889662;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_63(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_63(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_63(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_63(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_64()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, iVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
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
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_66(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_67()
{
	if (iLocal_21 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_68()
{
	if (Global_58691)
	{
		Global_58691 = 0;
		switch (func_57(Global_58692))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar2 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar2)
		{
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &uVar1, 1);
				func_78(uVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							func_74(iVar1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1)))
							{
								func_2(3, 1);
							}
							func_72(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							switch (ENTITY::GET_ENTITY_MODEL(iVar1))
							{
								case -1186769817:
								case 1211559620:
								case -377891123:
								case 1375076930:
								case 720581693:
								case 917457845:
								case 261193082:
								case -756152956:
								case -1383056703:
								case -838860344:
								case -1389481633:
								case 1301918910:
								case 1287257122:
								case -1406224059:
									func_2(68, 1);
									break;
								
								case -959573699:
								case 1363150739:
								case 1147034058:
								case 1444740423:
								case -861422469:
									func_2(128, 1);
									break;
								}
							}
						}
				}
				break;
			
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (func_48() == 0 && iVar3 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::IS_ENTITY_DEAD(iVar1, 0) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) < (0.5f * IntToFloat(PED::GET_PED_MAX_HEALTH(iVar3))))
								{
									if (ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											func_70(3);
										}
									}
								}
							}
							func_2(111, 1);
							func_2(124, 1);
							if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								func_2(130, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(iVar1));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(47, 1);
			break;
		
		case 1:
			func_2(43, 1);
			break;
		
		case 2:
			func_2(41, 1);
			break;
		
		case 3:
			func_2(46, 1);
			break;
		
		case 4:
			func_2(40, 1);
			break;
		
		case 5:
			func_2(42, 1);
			break;
		
		case 6:
			func_2(44, 1);
			break;
		
		case 7:
			func_2(45, 1);
			break;
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_95212, 1);
			break;
		
		case 1:
			func_71(&Global_95214, 3);
			break;
		
		case 2:
			func_71(&Global_95218, 1);
			break;
		
		case 3:
			func_71(&Global_95220, 1);
			break;
		
		case 4:
			func_71(&Global_95222, 1);
			break;
		
		case 5:
			func_71(&Global_95224, 1);
			break;
		
		case 6:
			func_71(&Global_95226, 1);
			break;
		
		case 7:
			func_71(&Global_95228, 2);
			break;
		
		case 8:
			func_71(&Global_95231, 1);
			break;
		
		case 9:
			func_71(&Global_95233, 1);
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = GAMEPLAY::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(11, 1);
			break;
		
		case 1:
			func_2(6, 1);
			break;
		
		case 2:
			func_2(1, 1);
			break;
		
		case 3:
			func_2(10, 1);
			break;
		
		case 4:
			func_2(0, 1);
			break;
		
		case 5:
			func_2(2, 1);
			break;
		
		case 6:
			func_2(8, 1);
			break;
		
		case 7:
			func_2(9, 1);
			break;
	}
	if (iParam0 == -956048545)
	{
		func_2(100, 1);
	}
	func_2(111, 1);
}

int func_73(var uParam0)
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(uParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 0) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 3) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 4) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 5) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 6) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 7) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 10) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 11) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 12) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 13) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 14) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 15) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 16) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 23) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 24) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 1) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 2) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 8) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 9) != -1)
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(uParam0, 18))
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(uParam0, 22))
		{
			return 1;
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0)
{
	uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
	{
		uVar1 = PED::GET_PED_SOURCE_OF_DEATH(uVar0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			func_77(iVar2, PED::GET_PED_TYPE(uVar0));
		}
		else
		{
			iVar3 = PED::GET_PED_CAUSE_OF_DEATH(uVar0);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
			func_76(iVar3, PED::GET_PED_TYPE(uVar0), iVar4);
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		func_2(129, 1);
	}
	if (!func_75(iParam0))
	{
		return;
	}
	func_2(111, 1);
	iVar5 = GAMEPLAY::GET_GAME_TIMER();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 3)
		{
			func_2(127, 1);
		}
	}
}

int func_75(int iParam0)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		func_2(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					func_2(63, 1);
					break;
				
				case 1:
					func_2(64, 1);
					break;
				
				case 2:
					func_2(65, 1);
					break;
			}
			break;
		
		case 22:
			switch (iVar0)
			{
				case 0:
					func_2(57, 1);
					break;
				
				case 1:
					func_2(58, 1);
					break;
				
				case 2:
					func_2(59, 1);
					break;
			}
			break;
		
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					func_2(54, 1);
					break;
				
				case 1:
					func_2(55, 1);
					break;
				
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case 42647445:
			func_2(121, 1);
			break;
		
		case 1004114196:
		case 2021631368:
		case -920443780:
		case 623927022:
		case -178150202:
		case -1044093321:
		case -1342520604:
		case -1222037748:
		case -356333586:
		case -1425378987:
		case 189425762:
		case 1490458366:
			func_2(69, 1);
			break;
		
		case -459818001:
			func_2(125, 1);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	func_2(48, 1);
	switch (iParam0)
	{
		case -2072933068:
		case -956048545:
			func_2(4, 1);
			break;
		
		case -730904777:
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
		
		case 569305213:
			func_2(7, 1);
			break;
		
		case -2137348917:
			func_2(5, 1);
			break;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(109, 1);
			break;
		
		case 1:
			func_2(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
		
		case 2:
			func_2(102, 1);
			break;
		
		case 3:
			func_2(107, 1);
			break;
		
		case 4:
			func_2(101, 1);
			break;
		
		case 5:
			func_2(103, 1);
			break;
		
		case 6:
			func_2(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
		
		case 7:
			func_2(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}
}

void func_78(int iParam0)
{
	ENTITY::DOES_ENTITY_EXIST(uParam0);
	ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_80()
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_33 = 0;
		return;
	}
	if (func_82(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		iLocal_33 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0);
		if (iLocal_33 != iVar0)
		{
			Local_27 = { Local_30 };
			iLocal_33 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		Local_27 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		if (iLocal_33 == 0)
		{
			Local_30 = { Local_27 };
			iLocal_33 = iVar0;
			return;
		}
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_81(iVar1, GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_27, Local_30, 0)))
		{
			Local_30 = { Local_27 };
		}
	}
}

int func_81(int iParam0, float fParam1)
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 1:
			func_2(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 2:
			func_2(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 3:
			func_2(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 4:
			func_2(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 5:
			func_2(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 6:
			func_2(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 7:
			func_2(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case -2072933068:
		case -956048545:
			func_2(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 1131912276:
		case -186537451:
		case -1233807380:
		case -836512833:
		case 1127861609:
		case 448402357:
			switch (func_48())
			{
				case 0:
					func_2(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 1:
					func_2(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 2:
					func_2(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

int func_82(var uParam0, int iParam1)
{
	if (func_83(uParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(uParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(uParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_83(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

void func_84()
{
	func_85(0);
	func_85(1);
	func_85(2);
}

void func_85(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_53811[iVar0].f_8)
		{
			iVar1 = Global_53811[iVar0].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_86(iParam0, iVar0);
				if (Global_53811[iVar0].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_56692[iVar1].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_111638.f_20559[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_22[iVar0] > 0)
					{
						return Global_111638.f_20559.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_111638.f_20559.f_33[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_55[iVar0] > 0)
					{
						return Global_111638.f_20559.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_111638.f_20559.f_66[iVar0] == iParam1)
				{
					if (Global_111638.f_20559.f_88[iVar0] > 0)
					{
						return Global_111638.f_20559.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_87()
{
	iVar1 = Global_58973;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_58976[iVar0].f_13 > 0)
		{
			Global_58976[iVar0].f_13 = (Global_58976[iVar0].f_13 - 1);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_58976[iVar0]), -1);
			Global_58976[iVar0].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_68();
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61358[iVar0][iVar1].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_61358[iVar0][iVar1].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_61358[iVar0][iVar1].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_61358[iVar0][iVar3].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_61358[iVar0][iVar3].f_10 = uParam0->f_10;
		Global_61358[iVar0][iVar3].f_1 = { uParam0->f_1 };
		Global_61358[iVar0][iVar3].f_5 = { uParam0->f_5 };
		Global_61358[iVar0][iVar3].f_9 = uParam0->f_9;
		Global_61358[iVar0][iVar3] = *uParam0;
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	iVar0 = Global_58976[iParam0].f_12;
	fVar1 = Global_53811[iVar0].f_9;
	iVar2 = Global_53811[iVar0].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_53811[iVar0].f_14[iVar3];
	Global_53811[iVar0].f_14[Global_53811[iVar0].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_53811[iVar0].f_14[iVar10] < Global_53811[iVar0].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_53811[iVar0].f_14[iVar11] - Global_53811[iVar0].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_53811[iVar0].f_14[iVar10] - Global_53811[iVar0].f_14[iVar11]));
		}
		if (Global_53811[iVar0].f_14[iVar10] < Global_53811[iVar0].f_14[iVar11] && Global_53811[iVar0].f_14[iVar12] < Global_53811[iVar0].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_53811[iVar0].f_14[iVar10] > Global_53811[iVar0].f_14[iVar11] && Global_53811[iVar0].f_14[iVar12] > Global_53811[iVar0].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_58976[iParam0].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_90(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_91()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_53811[iVar1].f_8)
			{
				if (Global_111638.f_20559.f_103[iVar0] > 0f)
				{
					Global_53811[iVar1].f_9 = Global_111638.f_20559.f_103[iVar0];
				}
				if (Global_111638.f_20559.f_146[iVar0] > 0f)
				{
					Global_53811[iVar1].f_31 = Global_111638.f_20559.f_146[iVar0];
				}
				if (Global_111638.f_20559.f_189[iVar0] > 0f)
				{
					Global_53811[iVar1].f_32 = Global_111638.f_20559.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_53811[iVar1].f_32 > 0f && Global_53811[iVar1].f_31 > 0f) && Global_53811[iVar1].f_9 > 0f)
			{
				fVar2 = Global_53811[iVar1].f_9;
				if (fVar2 > Global_53811[iVar1].f_31)
				{
					Global_53811[iVar1].f_31 = fVar2;
				}
				if (fVar2 < Global_53811[iVar1].f_32)
				{
					Global_53811[iVar1].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_53811[iVar1].f_31 - Global_53811[iVar1].f_32);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_53811[iVar1].f_31 - Global_53811[iVar1].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_53811[iVar1].f_9 - Global_53811[iVar1].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_53811[iVar1].f_14[iVar3] = Global_53811[iVar1].f_9;
					}
					else
					{
						fVar14 = ((Global_53811[iVar1].f_31 - Global_53811[iVar1].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_53811[iVar1].f_14[iVar3 + 1] - Global_53811[iVar1].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_53811[iVar1].f_14[iVar3] = (Global_53811[iVar1].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = func_93(fVar10, Global_53811[iVar1].f_14[iVar3]);
					fVar11 = func_92(fVar11, Global_53811[iVar1].f_14[iVar3]);
					fVar5 = (fVar5 + Global_53811[iVar1].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_53811[iVar1].f_32 = fVar10;
				Global_53811[iVar1].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_53811[iVar1].f_33 = (Global_53811[iVar1].f_9 - fVar5);
				Global_53811[iVar1].f_34 = ((Global_53811[iVar1].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_53811[iVar1].f_14[iVar3] = (Global_53811[iVar1].f_14[iVar3] * (GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_53811[iVar1].f_14[iVar3] = (Global_53811[iVar1].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_53811[iVar1].f_14[iVar3]);
						Global_53811[iVar1].f_32 = func_93(Global_53811[iVar1].f_32, Global_53811[iVar1].f_14[iVar3]);
						Global_53811[iVar1].f_31 = func_92(Global_53811[iVar1].f_31, Global_53811[iVar1].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_53811[iVar1].f_33 = (Global_53811[iVar1].f_9 - fVar5);
					Global_53811[iVar1].f_34 = ((Global_53811[iVar1].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_92(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_94()
{
	if (!Global_111638.f_20559.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_53811[iVar0].f_8)
			{
				Global_53811[iVar0].f_9 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_53811[iVar0].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_53811[iVar0].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_53811[iVar0].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_53811[iVar0].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_53811[iVar0].f_9 = (Global_53811[iVar0].f_9 * GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(fVar2, fVar3));
				Global_53811[iVar0].f_9 = func_93(func_92(GAMEPLAY::ABSF(Global_53811[iVar0].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_111638.f_20559.f_101 = 1;
	}
}

void func_95()
{
	Global_58973 = 0;
	Global_58975 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_61358[iVar0][iVar1].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_61358[iVar0][iVar1].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(55, "ECL_P_SR_H", "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H", "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H", "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H", "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H", "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H", "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H", "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H", "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H", "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H", "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H", "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H", "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H", "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H", "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H", "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H", "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H", "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H", "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H", "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H", "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H", "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H", "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H", "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H", "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H", "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H", "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H", "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H", "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H", "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H", "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H", "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H", "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H", "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H", "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H", "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H", "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H", "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H", "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H", "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H", "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H", "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H", "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H", "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H", "PMP_P_RF_C", 2, 0);
	iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, (Global_58973 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_61358[iVar0][iVar1].f_10 = 5000f;
			while (!func_88(&(Global_58976[iVar2]), iVar0))
			{
				iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, (Global_58973 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_58976[iVar2].f_10 = 0f;
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, (Global_58973 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (Global_58973 == 150)
	{
		return;
	}
	Global_58976[Global_58973].f_11 = iParam3;
	Global_58976[Global_58973] = iParam4;
	StringCopy(&(Global_58976[Global_58973].f_1), sParam1, 16);
	StringCopy(&(Global_58976[Global_58973].f_5), sParam2, 16);
	Global_58976[Global_58973].f_9 = Global_58975;
	Global_58976[Global_58973].f_12 = iParam0;
	Global_58973++;
	Global_58975++;
}

void func_97()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_53811[iVar0].f_33 = 0f;
		Global_53811[iVar0].f_13 = 0;
		Global_53811[iVar0].f_12 = 0;
		Global_53811[iVar0].f_31 = 0f;
		Global_53811[iVar0].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_53811[iVar0].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_57254[iVar0].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_53811[0]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_53811[0].f_4), "BSS_BSTR_1", 16);
	Global_53811[0].f_8 = 1;
	Global_53811[0].f_35 = 0;
	StringCopy(&(Global_53811[1]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_53811[1].f_4), "BSS_BSTR_3", 16);
	Global_53811[1].f_8 = 1;
	Global_53811[1].f_35 = 1;
	StringCopy(&(Global_53811[2]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_53811[2].f_4), "BSS_BSTR_5", 16);
	Global_53811[2].f_8 = 0;
	Global_53811[2].f_35 = 0;
	StringCopy(&(Global_53811[3]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_53811[3].f_4), "BSS_BSTR_7", 16);
	Global_53811[3].f_8 = 1;
	Global_53811[3].f_35 = 2;
	StringCopy(&(Global_53811[4]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_53811[4].f_4), "BSS_BSTR_9", 16);
	Global_53811[4].f_8 = 1;
	Global_53811[4].f_35 = 3;
	StringCopy(&(Global_53811[5]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_53811[5].f_4), "BSS_BSTR_11", 16);
	Global_53811[5].f_8 = 1;
	Global_53811[5].f_35 = 4;
	StringCopy(&(Global_53811[6]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_53811[6].f_4), "BSS_BSTR_13", 16);
	Global_53811[6].f_8 = 1;
	Global_53811[6].f_35 = 5;
	StringCopy(&(Global_53811[7]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_53811[7].f_4), "BSS_BSTR_15", 16);
	Global_53811[7].f_8 = 1;
	Global_53811[7].f_35 = 6;
	StringCopy(&(Global_53811[8]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_53811[8].f_4), "BSS_BSTR_16", 16);
	Global_53811[8].f_8 = 1;
	Global_53811[8].f_35 = 7;
	StringCopy(&(Global_53811[9]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_53811[9].f_4), "BSS_BSTR_18", 16);
	Global_53811[9].f_8 = 1;
	Global_53811[9].f_35 = 8;
	StringCopy(&(Global_53811[10]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_53811[10].f_4), "BSS_BSTR_20", 16);
	Global_53811[10].f_8 = 1;
	Global_53811[10].f_35 = 9;
	StringCopy(&(Global_53811[11]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_53811[11].f_4), "BSS_BSTR_22", 16);
	Global_53811[11].f_8 = 1;
	Global_53811[11].f_35 = 10;
	StringCopy(&(Global_53811[12]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_53811[12].f_4), "BSS_BSTR_24", 16);
	Global_53811[12].f_8 = 1;
	Global_53811[12].f_35 = 11;
	StringCopy(&(Global_53811[13]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_53811[13].f_4), "BSS_BSTR_26", 16);
	Global_53811[13].f_8 = 0;
	Global_53811[13].f_35 = 1;
	StringCopy(&(Global_53811[14]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_53811[14].f_4), "BSS_BSTR_28", 16);
	Global_53811[14].f_8 = 0;
	Global_53811[14].f_35 = 2;
	StringCopy(&(Global_53811[15]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_53811[15].f_4), "BSS_BSTR_30", 16);
	Global_53811[15].f_8 = 1;
	Global_53811[15].f_35 = 12;
	StringCopy(&(Global_53811[16]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_53811[16].f_4), "BSS_BSTR_32", 16);
	Global_53811[16].f_8 = 0;
	Global_53811[16].f_35 = 3;
	StringCopy(&(Global_53811[17]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_53811[17].f_4), "BSS_BSTR_34", 16);
	Global_53811[17].f_8 = 0;
	Global_53811[17].f_35 = 4;
	StringCopy(&(Global_53811[18]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_53811[18].f_4), "BSS_BSTR_36", 16);
	Global_53811[18].f_8 = 0;
	Global_53811[18].f_35 = 5;
	StringCopy(&(Global_53811[19]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_53811[19].f_4), "BSS_BSTR_38", 16);
	Global_53811[19].f_8 = 0;
	Global_53811[19].f_35 = 6;
	StringCopy(&(Global_53811[20]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_53811[20].f_4), "BSS_BSTR_40", 16);
	Global_53811[20].f_8 = 1;
	Global_53811[20].f_35 = 13;
	StringCopy(&(Global_53811[21]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_53811[21].f_4), "BSS_BSTR_42", 16);
	Global_53811[21].f_8 = 1;
	Global_53811[21].f_35 = 14;
	StringCopy(&(Global_53811[22]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_53811[22].f_4), "BSS_BSTR_44", 16);
	Global_53811[22].f_8 = 1;
	Global_53811[22].f_35 = 15;
	StringCopy(&(Global_53811[23]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_53811[23].f_4), "BSS_BSTR_46", 16);
	Global_53811[23].f_8 = 1;
	Global_53811[23].f_35 = 16;
	StringCopy(&(Global_53811[24]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_53811[24].f_4), "BSS_BSTR_48", 16);
	Global_53811[24].f_8 = 0;
	Global_53811[24].f_35 = 7;
	StringCopy(&(Global_53811[25]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_53811[25].f_4), "BSS_BSTR_50", 16);
	Global_53811[25].f_8 = 1;
	Global_53811[25].f_35 = 17;
	StringCopy(&(Global_53811[26]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_53811[26].f_4), "BSS_BSTR_52", 16);
	Global_53811[26].f_8 = 0;
	Global_53811[26].f_35 = 8;
	StringCopy(&(Global_53811[27]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_53811[27].f_4), "BSS_BSTR_54", 16);
	Global_53811[27].f_8 = 1;
	Global_53811[27].f_35 = 18;
	StringCopy(&(Global_53811[28]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_53811[28].f_4), "BSS_BSTR_56", 16);
	Global_53811[28].f_8 = 1;
	Global_53811[28].f_35 = 19;
	StringCopy(&(Global_53811[29]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_53811[29].f_4), "BSS_BSTR_58", 16);
	Global_53811[29].f_8 = 0;
	Global_53811[29].f_35 = 9;
	StringCopy(&(Global_53811[30]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_53811[30].f_4), "BSS_BSTR_60", 16);
	Global_53811[30].f_8 = 1;
	Global_53811[30].f_35 = 20;
	StringCopy(&(Global_53811[31]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_53811[31].f_4), "BSS_BSTR_62", 16);
	Global_53811[31].f_8 = 1;
	Global_53811[31].f_35 = 21;
	StringCopy(&(Global_53811[32]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_53811[32].f_4), "BSS_BSTR_64", 16);
	Global_53811[32].f_8 = 1;
	Global_53811[32].f_35 = 22;
	StringCopy(&(Global_53811[33]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_53811[33].f_4), "BSS_BSTR_66", 16);
	Global_53811[33].f_8 = 1;
	Global_53811[33].f_35 = 23;
	StringCopy(&(Global_53811[34]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_53811[34].f_4), "BSS_BSTR_68", 16);
	Global_53811[34].f_8 = 1;
	Global_53811[34].f_35 = 24;
	StringCopy(&(Global_53811[35]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_53811[35].f_4), "BSS_BSTR_70", 16);
	Global_53811[35].f_8 = 1;
	Global_53811[35].f_35 = 25;
	StringCopy(&(Global_53811[36]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_53811[36].f_4), "BSS_BSTR_72", 16);
	Global_53811[36].f_8 = 1;
	Global_53811[36].f_35 = 26;
	StringCopy(&(Global_53811[37]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_53811[37].f_4), "BSS_BSTR_74", 16);
	Global_53811[37].f_8 = 1;
	Global_53811[37].f_35 = 27;
	StringCopy(&(Global_53811[38]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_53811[38].f_4), "BSS_BSTR_76", 16);
	Global_53811[38].f_8 = 1;
	Global_53811[38].f_35 = 28;
	StringCopy(&(Global_53811[39]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_53811[39].f_4), "BSS_BSTR_78", 16);
	Global_53811[39].f_8 = 1;
	Global_53811[39].f_35 = 29;
	StringCopy(&(Global_53811[40]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_53811[40].f_4), "BSS_BSTR_80", 16);
	Global_53811[40].f_8 = 0;
	Global_53811[40].f_35 = 10;
	StringCopy(&(Global_53811[41]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_53811[41].f_4), "BSS_BSTR_82", 16);
	Global_53811[41].f_8 = 1;
	Global_53811[41].f_35 = 30;
	StringCopy(&(Global_53811[42]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_53811[42].f_4), "BSS_BSTR_84", 16);
	Global_53811[42].f_8 = 1;
	Global_53811[42].f_35 = 31;
	StringCopy(&(Global_53811[43]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_53811[43].f_4), "BSS_BSTR_86", 16);
	Global_53811[43].f_8 = 1;
	Global_53811[43].f_35 = 32;
	StringCopy(&(Global_53811[44]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_53811[44].f_4), "BSS_BSTR_88", 16);
	Global_53811[44].f_8 = 1;
	Global_53811[44].f_35 = 33;
	StringCopy(&(Global_53811[45]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_53811[45].f_4), "BSS_BSTR_90", 16);
	Global_53811[45].f_8 = 1;
	Global_53811[45].f_35 = 34;
	StringCopy(&(Global_53811[46]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_53811[46].f_4), "BSS_BSTR_92", 16);
	Global_53811[46].f_8 = 1;
	Global_53811[46].f_35 = 35;
	StringCopy(&(Global_53811[47]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_53811[47].f_4), "BSS_BSTR_94", 16);
	Global_53811[47].f_8 = 0;
	Global_53811[47].f_35 = 11;
	StringCopy(&(Global_53811[48]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_53811[48].f_4), "BSS_BSTR_96", 16);
	Global_53811[48].f_8 = 0;
	Global_53811[48].f_35 = 12;
	StringCopy(&(Global_53811[49]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_53811[49].f_4), "BSS_BSTR_98", 16);
	Global_53811[49].f_8 = 0;
	Global_53811[49].f_35 = 13;
	StringCopy(&(Global_53811[50]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_53811[50].f_4), "BSS_BSTR_100", 16);
	Global_53811[50].f_8 = 0;
	Global_53811[50].f_35 = 14;
	StringCopy(&(Global_53811[51]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_53811[51].f_4), "BSS_BSTR_102", 16);
	Global_53811[51].f_8 = 0;
	Global_53811[51].f_35 = 15;
	StringCopy(&(Global_53811[52]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_53811[52].f_4), "BSS_BSTR_104", 16);
	Global_53811[52].f_8 = 0;
	Global_53811[52].f_35 = 16;
	StringCopy(&(Global_53811[53]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_53811[53].f_4), "BSS_BSTR_106", 16);
	Global_53811[53].f_8 = 0;
	Global_53811[53].f_35 = 17;
	StringCopy(&(Global_53811[54]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_53811[54].f_4), "BSS_BSTR_108", 16);
	Global_53811[54].f_8 = 0;
	Global_53811[54].f_35 = 18;
	StringCopy(&(Global_53811[55]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_53811[55].f_4), "BSS_BSTR_110", 16);
	Global_53811[55].f_8 = 0;
	Global_53811[55].f_35 = 19;
	StringCopy(&(Global_53811[56]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_53811[56].f_4), "BSS_BSTR_112", 16);
	Global_53811[56].f_8 = 0;
	Global_53811[56].f_35 = 20;
	StringCopy(&(Global_53811[57]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_53811[57].f_4), "BSS_BSTR_114", 16);
	Global_53811[57].f_8 = 0;
	Global_53811[57].f_35 = 21;
	StringCopy(&(Global_53811[58]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_53811[58].f_4), "BSS_BSTR_116", 16);
	Global_53811[58].f_8 = 0;
	Global_53811[58].f_35 = 22;
	StringCopy(&(Global_53811[59]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_53811[59].f_4), "BSS_BSTR_118", 16);
	Global_53811[59].f_8 = 0;
	Global_53811[59].f_35 = 23;
	StringCopy(&(Global_53811[60]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_53811[60].f_4), "BSS_BSTR_120", 16);
	Global_53811[60].f_8 = 0;
	Global_53811[60].f_35 = 24;
	StringCopy(&(Global_53811[61]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_53811[61].f_4), "BSS_BSTR_122", 16);
	Global_53811[61].f_8 = 0;
	Global_53811[61].f_35 = 25;
	StringCopy(&(Global_53811[62]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_53811[62].f_4), "BSS_BSTR_124", 16);
	Global_53811[62].f_8 = 0;
	Global_53811[62].f_35 = 26;
	StringCopy(&(Global_53811[63]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_53811[63].f_4), "BSS_BSTR_126", 16);
	Global_53811[63].f_8 = 0;
	Global_53811[63].f_35 = 27;
	StringCopy(&(Global_53811[64]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_53811[64].f_4), "BSS_BSTR_128", 16);
	Global_53811[64].f_8 = 0;
	Global_53811[64].f_35 = 28;
	StringCopy(&(Global_53811[65]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_53811[65].f_4), "BSS_BSTR_130", 16);
	Global_53811[65].f_8 = 0;
	Global_53811[65].f_35 = 29;
	StringCopy(&(Global_53811[66]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_53811[66].f_4), "BSS_BSTR_132", 16);
	Global_53811[66].f_8 = 0;
	Global_53811[66].f_35 = 30;
	StringCopy(&(Global_53811[67]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_53811[67].f_4), "BSS_BSTR_134", 16);
	Global_53811[67].f_8 = 0;
	Global_53811[67].f_35 = 31;
	StringCopy(&(Global_53811[68]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_53811[68].f_4), "BSS_BSTR_136", 16);
	Global_53811[68].f_8 = 0;
	Global_53811[68].f_35 = 32;
	StringCopy(&(Global_53811[69]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_53811[69].f_4), "BSS_BSTR_138", 16);
	Global_53811[69].f_8 = 0;
	Global_53811[69].f_35 = 33;
	StringCopy(&(Global_53811[70]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_53811[70].f_4), "BSS_BSTR_140", 16);
	Global_53811[70].f_8 = 0;
	Global_53811[70].f_35 = 34;
	StringCopy(&(Global_53811[71]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_53811[71].f_4), "BSS_BSTR_142", 16);
	Global_53811[71].f_8 = 1;
	Global_53811[71].f_35 = 36;
	StringCopy(&(Global_53811[72]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_53811[72].f_4), "BSS_BSTR_144", 16);
	Global_53811[72].f_8 = 0;
	Global_53811[72].f_35 = 35;
	StringCopy(&(Global_53811[73]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_53811[73].f_4), "BSS_BSTR_146", 16);
	Global_53811[73].f_8 = 0;
	Global_53811[73].f_35 = 36;
	StringCopy(&(Global_53811[74]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_53811[74].f_4), "BSS_BSTR_148", 16);
	Global_53811[74].f_8 = 0;
	Global_53811[74].f_35 = 37;
	StringCopy(&(Global_53811[75]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_53811[75].f_4), "BSS_BSTR_150", 16);
	Global_53811[75].f_8 = 0;
	Global_53811[75].f_35 = 38;
	StringCopy(&(Global_53811[76]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_53811[76].f_4), "BSS_BSTR_152", 16);
	Global_53811[76].f_8 = 1;
	Global_53811[76].f_35 = 37;
	StringCopy(&(Global_53811[77]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_53811[77].f_4), "BSS_BSTR_154", 16);
	Global_53811[77].f_8 = 1;
	Global_53811[77].f_35 = 38;
	StringCopy(&(Global_53811[78]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_53811[78].f_4), "BSS_BSTR_156", 16);
	Global_53811[78].f_8 = 0;
	Global_53811[78].f_35 = 39;
	StringCopy(&(Global_53811[79]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_53811[79].f_4), "BSS_BSTR_158", 16);
	Global_53811[79].f_8 = 0;
	Global_53811[79].f_35 = 40;
	Global_56966[0].f_2 = 1f;
	Global_56966[0].f_1 = 1f;
	Global_56966[0].f_3 = 1000f;
	Global_56966[0].f_4 = 3.5f;
	Global_56966[0].f_5 = 3.5f;
	Global_56966[0].f_6 = 0.1f;
	Global_56966[1].f_2 = 1f;
	Global_56966[1].f_1 = 1f;
	Global_56966[1].f_3 = 1000f;
	Global_56966[1].f_4 = 3.5f;
	Global_56966[1].f_5 = 3.5f;
	Global_56966[1].f_6 = 0.1f;
	Global_56966[2].f_2 = 1f;
	Global_56966[2].f_1 = 1f;
	Global_56966[2].f_3 = 1000f;
	Global_56966[2].f_4 = 3.5f;
	Global_56966[2].f_5 = 3.5f;
	Global_56966[2].f_6 = 0.1f;
	Global_56966[3].f_2 = 1f;
	Global_56966[3].f_1 = 1f;
	Global_56966[3].f_3 = 1000f;
	Global_56966[3].f_4 = 3.5f;
	Global_56966[3].f_5 = 3.5f;
	Global_56966[3].f_6 = 0.1f;
	Global_56966[4].f_2 = 1f;
	Global_56966[4].f_1 = 1f;
	Global_56966[4].f_3 = 1000f;
	Global_56966[4].f_4 = 3.5f;
	Global_56966[4].f_5 = 3.5f;
	Global_56966[4].f_6 = 0.1f;
	Global_56966[5].f_2 = 1f;
	Global_56966[5].f_1 = 1f;
	Global_56966[5].f_3 = 1000f;
	Global_56966[5].f_4 = 3.5f;
	Global_56966[5].f_5 = 3.5f;
	Global_56966[5].f_6 = 0.1f;
	Global_56966[6].f_2 = 1f;
	Global_56966[6].f_1 = 1f;
	Global_56966[6].f_3 = 1000f;
	Global_56966[6].f_4 = 3.5f;
	Global_56966[6].f_5 = 3.5f;
	Global_56966[6].f_6 = 0.1f;
	Global_56966[7].f_2 = 1f;
	Global_56966[7].f_1 = 1f;
	Global_56966[7].f_3 = 1000f;
	Global_56966[7].f_4 = 3.5f;
	Global_56966[7].f_5 = 3.5f;
	Global_56966[7].f_6 = 0.1f;
	Global_56966[8].f_2 = 1f;
	Global_56966[8].f_1 = 1f;
	Global_56966[8].f_3 = 1000f;
	Global_56966[8].f_4 = 3.5f;
	Global_56966[8].f_5 = 3.5f;
	Global_56966[8].f_6 = 0.1f;
	Global_56966[9].f_2 = 1f;
	Global_56966[9].f_1 = 1f;
	Global_56966[9].f_3 = 1000f;
	Global_56966[9].f_4 = 3.5f;
	Global_56966[9].f_5 = 3.5f;
	Global_56966[9].f_6 = 0.1f;
	Global_56966[10].f_2 = 1f;
	Global_56966[10].f_1 = 1f;
	Global_56966[10].f_3 = 1000f;
	Global_56966[10].f_4 = 3.5f;
	Global_56966[10].f_5 = 3.5f;
	Global_56966[10].f_6 = 0.1f;
	Global_56966[11].f_2 = 1f;
	Global_56966[11].f_1 = 1f;
	Global_56966[11].f_3 = 1000f;
	Global_56966[11].f_4 = 3.5f;
	Global_56966[11].f_5 = 3.5f;
	Global_56966[11].f_6 = 0.1f;
	Global_56966[12].f_2 = 1f;
	Global_56966[12].f_1 = 1f;
	Global_56966[12].f_3 = 1000f;
	Global_56966[12].f_4 = 3.5f;
	Global_56966[12].f_5 = 3.5f;
	Global_56966[12].f_6 = 0.1f;
	Global_56966[13].f_2 = 1f;
	Global_56966[13].f_1 = 1f;
	Global_56966[13].f_3 = 1000f;
	Global_56966[13].f_4 = 3.5f;
	Global_56966[13].f_5 = 3.5f;
	Global_56966[13].f_6 = 0.1f;
	Global_56966[14].f_2 = 1f;
	Global_56966[14].f_1 = 1f;
	Global_56966[14].f_3 = 1000f;
	Global_56966[14].f_4 = 3.5f;
	Global_56966[14].f_5 = 3.5f;
	Global_56966[14].f_6 = 0.1f;
	Global_56966[15].f_2 = 1f;
	Global_56966[15].f_1 = 1f;
	Global_56966[15].f_3 = 1000f;
	Global_56966[15].f_4 = 3.5f;
	Global_56966[15].f_5 = 3.5f;
	Global_56966[15].f_6 = 0.1f;
	Global_56966[16].f_2 = 1f;
	Global_56966[16].f_1 = 1f;
	Global_56966[16].f_3 = 1000f;
	Global_56966[16].f_4 = 3.5f;
	Global_56966[16].f_5 = 3.5f;
	Global_56966[16].f_6 = 0.1f;
	Global_56966[17].f_2 = 1f;
	Global_56966[17].f_1 = 1f;
	Global_56966[17].f_3 = 1000f;
	Global_56966[17].f_4 = 3.5f;
	Global_56966[17].f_5 = 3.5f;
	Global_56966[17].f_6 = 0.1f;
	Global_56966[18].f_2 = 1f;
	Global_56966[18].f_1 = 1f;
	Global_56966[18].f_3 = 1000f;
	Global_56966[18].f_4 = 3.5f;
	Global_56966[18].f_5 = 3.5f;
	Global_56966[18].f_6 = 0.1f;
	Global_56966[19].f_2 = 1f;
	Global_56966[19].f_1 = 1f;
	Global_56966[19].f_3 = 1000f;
	Global_56966[19].f_4 = 3.5f;
	Global_56966[19].f_5 = 3.5f;
	Global_56966[19].f_6 = 0.1f;
	Global_56966[20].f_2 = 1f;
	Global_56966[20].f_1 = 1f;
	Global_56966[20].f_3 = 1000f;
	Global_56966[20].f_4 = 3.5f;
	Global_56966[20].f_5 = 3.5f;
	Global_56966[20].f_6 = 0.1f;
	Global_56966[21].f_2 = 1f;
	Global_56966[21].f_1 = 1f;
	Global_56966[21].f_3 = 1000f;
	Global_56966[21].f_4 = 3.5f;
	Global_56966[21].f_5 = 3.5f;
	Global_56966[21].f_6 = 0.1f;
	Global_56966[22].f_2 = 1f;
	Global_56966[22].f_1 = 1f;
	Global_56966[22].f_3 = 1000f;
	Global_56966[22].f_4 = 3.5f;
	Global_56966[22].f_5 = 3.5f;
	Global_56966[22].f_6 = 0.1f;
	Global_56966[23].f_2 = 1f;
	Global_56966[23].f_1 = 1f;
	Global_56966[23].f_3 = 1000f;
	Global_56966[23].f_4 = 3.5f;
	Global_56966[23].f_5 = 3.5f;
	Global_56966[23].f_6 = 0.1f;
	Global_56966[24].f_2 = 1f;
	Global_56966[24].f_1 = 1f;
	Global_56966[24].f_3 = 1000f;
	Global_56966[24].f_4 = 3.5f;
	Global_56966[24].f_5 = 3.5f;
	Global_56966[24].f_6 = 0.1f;
	Global_56966[25].f_2 = 1f;
	Global_56966[25].f_1 = 1f;
	Global_56966[25].f_3 = 1000f;
	Global_56966[25].f_4 = 3.5f;
	Global_56966[25].f_5 = 3.5f;
	Global_56966[25].f_6 = 0.1f;
	Global_56966[26].f_2 = 1f;
	Global_56966[26].f_1 = 1f;
	Global_56966[26].f_3 = 1000f;
	Global_56966[26].f_4 = 3.5f;
	Global_56966[26].f_5 = 3.5f;
	Global_56966[26].f_6 = 0.1f;
	Global_56966[27].f_2 = 1f;
	Global_56966[27].f_1 = 1f;
	Global_56966[27].f_3 = 1000f;
	Global_56966[27].f_4 = 3.5f;
	Global_56966[27].f_5 = 3.5f;
	Global_56966[27].f_6 = 0.1f;
	Global_56966[28].f_2 = 1f;
	Global_56966[28].f_1 = 1f;
	Global_56966[28].f_3 = 1000f;
	Global_56966[28].f_4 = 3.5f;
	Global_56966[28].f_5 = 3.5f;
	Global_56966[28].f_6 = 0.1f;
	Global_56966[29].f_2 = 1f;
	Global_56966[29].f_1 = 1f;
	Global_56966[29].f_3 = 1000f;
	Global_56966[29].f_4 = 3.5f;
	Global_56966[29].f_5 = 3.5f;
	Global_56966[29].f_6 = 0.1f;
	Global_56966[30].f_2 = 1f;
	Global_56966[30].f_1 = 1f;
	Global_56966[30].f_3 = 1000f;
	Global_56966[30].f_4 = 3.5f;
	Global_56966[30].f_5 = 3.5f;
	Global_56966[30].f_6 = 0.1f;
	Global_56966[31].f_2 = 1f;
	Global_56966[31].f_1 = 1f;
	Global_56966[31].f_3 = 1000f;
	Global_56966[31].f_4 = 3.5f;
	Global_56966[31].f_5 = 3.5f;
	Global_56966[31].f_6 = 0.1f;
	Global_56966[32].f_2 = 1f;
	Global_56966[32].f_1 = 1f;
	Global_56966[32].f_3 = 1000f;
	Global_56966[32].f_4 = 3.5f;
	Global_56966[32].f_5 = 3.5f;
	Global_56966[32].f_6 = 0.1f;
	Global_56966[33].f_2 = 1f;
	Global_56966[33].f_1 = 1f;
	Global_56966[33].f_3 = 1000f;
	Global_56966[33].f_4 = 3.5f;
	Global_56966[33].f_5 = 3.5f;
	Global_56966[33].f_6 = 0.1f;
	Global_56966[34].f_2 = 1f;
	Global_56966[34].f_1 = 1f;
	Global_56966[34].f_3 = 1000f;
	Global_56966[34].f_4 = 3.5f;
	Global_56966[34].f_5 = 3.5f;
	Global_56966[34].f_6 = 0.1f;
	Global_56966[35].f_2 = 1f;
	Global_56966[35].f_1 = 1f;
	Global_56966[35].f_3 = 1000f;
	Global_56966[35].f_4 = 3.5f;
	Global_56966[35].f_5 = 3.5f;
	Global_56966[35].f_6 = 0.1f;
	Global_56966[36].f_2 = 1f;
	Global_56966[36].f_1 = 1f;
	Global_56966[36].f_3 = 1000f;
	Global_56966[36].f_4 = 3.5f;
	Global_56966[36].f_5 = 3.5f;
	Global_56966[36].f_6 = 0.1f;
	Global_56966[37].f_2 = 1f;
	Global_56966[37].f_1 = 1f;
	Global_56966[37].f_3 = 1000f;
	Global_56966[37].f_4 = 3.5f;
	Global_56966[37].f_5 = 3.5f;
	Global_56966[37].f_6 = 0.1f;
	Global_56966[38].f_2 = 1f;
	Global_56966[38].f_1 = 1f;
	Global_56966[38].f_3 = 1000f;
	Global_56966[38].f_4 = 3.5f;
	Global_56966[38].f_5 = 3.5f;
	Global_56966[38].f_6 = 0.1f;
	Global_56966[39].f_2 = 1f;
	Global_56966[39].f_1 = 1f;
	Global_56966[39].f_3 = 1000f;
	Global_56966[39].f_4 = 3.5f;
	Global_56966[39].f_5 = 3.5f;
	Global_56966[39].f_6 = 0.1f;
	Global_56966[40].f_2 = 1f;
	Global_56966[40].f_1 = 1f;
	Global_56966[40].f_3 = 1000f;
	Global_56966[40].f_4 = 3.5f;
	Global_56966[40].f_5 = 3.5f;
	Global_56966[40].f_6 = 0.1f;
	Global_57254[0].f_1 = 606440596;
	Global_57254[0] = 1;
	Global_57254[1].f_1 = 106782344;
	Global_57254[1] = 1;
	Global_57254[3].f_1 = -1002892608;
	Global_57254[3] = 1;
	Global_57254[4].f_1 = -694044787;
	Global_57254[4] = 1;
	Global_57254[5].f_1 = 411122775;
	Global_57254[5] = 1;
	Global_57254[6].f_1 = 1219721912;
	Global_57254[6] = 1;
	Global_57254[7].f_1 = -1661881678;
	Global_57254[7] = 1;
	Global_57254[8].f_1 = -872433298;
	Global_57254[8] = 1;
	Global_57254[9].f_1 = 2040111573;
	Global_57254[9] = 1;
	Global_57254[10].f_1 = 744259093;
	Global_57254[10] = 1;
	Global_57254[11].f_1 = 836028772;
	Global_57254[11] = 1;
	Global_57254[12].f_1 = -752961783;
	Global_57254[12] = 1;
	Global_57254[13].f_1 = -665207370;
	Global_57254[13] = 1;
	Global_57254[15].f_1 = 1272544044;
	Global_57254[15] = 1;
	Global_57254[16].f_1 = 1527558244;
	Global_57254[16] = 1;
	Global_57254[17].f_1 = 774108094;
	Global_57254[17] = 1;
	Global_57254[18].f_1 = -1359724281;
	Global_57254[18] = 1;
	Global_57254[19].f_1 = -71321689;
	Global_57254[19] = 1;
	Global_57254[20].f_1 = 1080426124;
	Global_57254[20] = 1;
	Global_57254[21].f_1 = -1203926607;
	Global_57254[21] = 1;
	Global_57254[23].f_1 = 768629570;
	Global_57254[23] = 1;
	Global_57254[24].f_1 = 917488557;
	Global_57254[24] = 1;
	Global_57254[25].f_1 = 1844981500;
	Global_57254[25] = 1;
	Global_57254[26].f_1 = -188917066;
	Global_57254[26] = 1;
	Global_57254[27].f_1 = 1485054696;
	Global_57254[27] = 1;
	Global_57254[28].f_1 = 1955597241;
	Global_57254[28] = 1;
	Global_57254[30].f_1 = 1996008709;
	Global_57254[30] = 1;
	Global_57254[31].f_1 = -2116387415;
	Global_57254[31] = 1;
	Global_57254[32].f_1 = 513120329;
	Global_57254[32] = 1;
	Global_57254[34].f_1 = -2059649064;
	Global_57254[34] = 1;
	Global_57254[35].f_1 = 1372701313;
	Global_57254[35] = 1;
	Global_57254[36].f_1 = 1007493885;
	Global_57254[36] = 1;
	Global_57254[37].f_1 = 1033864036;
	Global_57254[37] = 1;
	Global_57254[38].f_1 = 427396019;
	Global_57254[38] = 1;
	Global_57254[39].f_1 = -1023873804;
	Global_57254[39] = 1;
	Global_57254[40].f_1 = 597640657;
	Global_57254[40] = 1;
	Global_57254[41].f_1 = -901068301;
	Global_57254[41] = 1;
	Global_57254[43].f_1 = 53604281;
	Global_57254[43] = 1;
	Global_57254[44].f_1 = 555022497;
	Global_57254[44] = 1;
	Global_57254[45].f_1 = 1638934968;
	Global_57254[45] = 1;
	Global_57254[46].f_1 = 1259154991;
	Global_57254[46] = 1;
	Global_57254[47].f_1 = 1367995245;
	Global_57254[47] = 1;
	Global_57254[48].f_1 = 1631515131;
	Global_57254[48] = 1;
	Global_57254[49].f_1 = -1980620018;
	Global_57254[49] = 1;
	Global_57254[50].f_1 = -902313106;
	Global_57254[50] = 1;
	Global_57254[51].f_1 = 1817034683;
	Global_57254[51] = 1;
	Global_57254[52].f_1 = 868403379;
	Global_57254[52] = 1;
	Global_57254[53].f_1 = 1616748313;
	Global_57254[53] = 1;
	Global_57254[54].f_1 = -2113019255;
	Global_57254[54] = 1;
	Global_57254[55].f_1 = 319161436;
	Global_57254[55] = 1;
	Global_57254[56].f_1 = -1317779871;
	Global_57254[56] = 1;
	Global_57254[57].f_1 = 1555112930;
	Global_57254[57] = 1;
	Global_57254[58].f_1 = 1825608094;
	Global_57254[58] = 1;
	Global_57254[59].f_1 = 304516791;
	Global_57254[59] = 1;
	Global_57254[60].f_1 = -1480881261;
	Global_57254[60] = 1;
	Global_57254[61].f_1 = -1770717473;
	Global_57254[61] = 1;
	Global_57254[62].f_1 = 2111110172;
	Global_57254[62] = 1;
	Global_57254[63].f_1 = 617346268;
	Global_57254[63] = 1;
	Global_57254[64].f_1 = 1507198370;
	Global_57254[64] = 1;
	Global_57254[65].f_1 = -1362287265;
	Global_57254[65] = 1;
	Global_57254[67].f_1 = -290004244;
	Global_57254[67] = 1;
	Global_57254[68].f_1 = -291813232;
	Global_57254[68] = 1;
	Global_57254[69].f_1 = -523838272;
	Global_57254[69] = 1;
	Global_57254[70].f_1 = -1462191421;
	Global_57254[70] = 1;
	Global_57254[71].f_1 = -2069366141;
	Global_57254[71] = 1;
	Global_57254[72].f_1 = 652679263;
	Global_57254[72] = 1;
	Global_57254[73].f_1 = 1579314517;
	Global_57254[73] = 1;
	Global_57254[74].f_1 = -32723337;
	Global_57254[74] = 1;
	Global_57254[76].f_1 = 917207549;
	Global_57254[76] = 1;
	Global_57254[77].f_1 = 2070895849;
	Global_57254[77] = 1;
	Global_57254[78].f_1 = -833162823;
	Global_57254[78] = 1;
	Global_57254[81].f_1 = 1018972339;
	Global_57254[81] = 1;
	Global_57254[82].f_1 = -1003394547;
	Global_57254[82] = 1;
	Global_57254[83].f_1 = 978049497;
	Global_57254[83] = 1;
	Global_57254[84].f_1 = 1912534526;
	Global_57254[84] = 1;
	Global_57254[85].f_1 = -855346244;
	Global_57254[85] = 1;
	Global_57254[88].f_1 = -200931567;
	Global_57254[88] = 1;
	Global_57254[89].f_1 = 1062623213;
	Global_57254[89] = 1;
	Global_57254[90].f_1 = 1713148684;
	Global_57254[90] = 1;
	Global_57254[91].f_1 = 340829586;
	Global_57254[91] = 1;
	Global_57254[92].f_1 = -1322380648;
	Global_57254[92] = 1;
	Global_57254[93].f_1 = -103253285;
	Global_57254[93] = 1;
	Global_57254[94].f_1 = -1283728004;
	Global_57254[94] = 1;
	Global_57254[98].f_1 = -1859945568;
	Global_57254[98] = 1;
	Global_57254[100].f_1 = -1065304997;
	Global_57254[100] = 1;
	Global_57254[101].f_1 = -1684669969;
	Global_57254[101] = 1;
	Global_57254[102].f_1 = -1824919272;
	Global_57254[102] = 1;
	Global_57254[104].f_1 = -234563391;
	Global_57254[104] = 1;
	Global_57254[105].f_1 = -2069299222;
	Global_57254[105] = 1;
	Global_57254[106].f_1 = 2026866511;
	Global_57254[106] = 1;
	Global_57254[107].f_1 = 763586448;
	Global_57254[107] = 1;
	Global_57254[108].f_1 = 1249543262;
	Global_57254[108] = 1;
	Global_57254[109].f_1 = -2091786311;
	Global_57254[109] = 1;
	Global_57254[112].f_1 = 406522810;
	Global_57254[112] = 1;
	Global_57254[113].f_1 = 368670732;
	Global_57254[113] = 1;
	Global_57254[114].f_1 = -1789826786;
	Global_57254[114] = 1;
	Global_57254[117].f_1 = -1388119783;
	Global_57254[117] = 1;
	Global_57254[118].f_1 = -1220982964;
	Global_57254[118] = 1;
	Global_57254[119].f_1 = -1997428829;
	Global_57254[119] = 1;
	Global_57254[120].f_1 = -169332402;
	Global_57254[120] = 1;
	Global_57254[121].f_1 = 1739030845;
	Global_57254[121] = 1;
	Global_57254[122].f_1 = 264650219;
	Global_57254[122] = 1;
	Global_57254[123].f_1 = 1144736327;
	Global_57254[123] = 1;
	Global_57254[124].f_1 = -1416186389;
	Global_57254[124] = 1;
	Global_57254[125].f_1 = -2052542261;
	Global_57254[125] = 1;
	Global_57254[126].f_1 = -1469051821;
	Global_57254[126] = 1;
	Global_57254[127].f_1 = 492519324;
	Global_57254[127] = 1;
	Global_57254[129].f_1 = -360208476;
	Global_57254[129] = 1;
	Global_57254[130].f_1 = -1919653747;
	Global_57254[130] = 1;
	Global_57254[131].f_1 = 1841680388;
	Global_57254[131] = 1;
	Global_57254[132].f_1 = -1759911188;
	Global_57254[132] = 1;
	Global_57254[134].f_1 = -1911219713;
	Global_57254[134] = 1;
	Global_57254[135].f_1 = 1900950498;
	Global_57254[135] = 1;
	Global_57254[137].f_1 = 1218898823;
	Global_57254[137] = 1;
	Global_57254[162].f_1 = -937041362;
	Global_57254[162] = 1;
	Global_57254[163].f_1 = -1712529758;
	Global_57254[163] = 1;
	Global_57254[164].f_1 = 970029455;
	Global_57254[164] = 1;
	Global_57254[165].f_1 = -70457914;
	Global_57254[165] = 1;
	Global_57254[166].f_1 = -282208305;
	Global_57254[166] = 1;
	Global_57254[167].f_1 = 348471768;
	Global_57254[167] = 1;
	Global_57254[168].f_1 = -143586472;
	Global_57254[168] = 1;
	Global_57254[169].f_1 = -71432602;
	Global_57254[169] = 1;
	Global_57254[170].f_1 = -1251715235;
	Global_57254[170] = 1;
	Global_57254[171].f_1 = 257686614;
	Global_57254[171] = 1;
	Global_57254[172].f_1 = -887819208;
	Global_57254[172] = 1;
	Global_57254[173].f_1 = -2092039031;
	Global_57254[173] = 1;
	Global_57254[138].f_2 = 1;
	Global_57254[138].f_3 = -510371839;
	Global_57254[138].f_4 = 1;
	Global_57254[139].f_2 = 1;
	Global_57254[139].f_3 = 331020049;
	Global_57254[139].f_4 = 1;
	Global_57254[140].f_2 = 1;
	Global_57254[140].f_3 = 1462696766;
	Global_57254[140].f_4 = 1;
	Global_57254[141].f_2 = 1;
	Global_57254[141].f_3 = 1176783030;
	Global_57254[141].f_4 = 1;
	Global_57254[142].f_2 = 1;
	Global_57254[142].f_3 = 1515500869;
	Global_57254[142].f_4 = 1;
	Global_57254[143].f_2 = 1;
	Global_57254[143].f_3 = 621847938;
	Global_57254[143].f_4 = 1;
	Global_57254[144].f_2 = 1;
	Global_57254[144].f_3 = 809859140;
	Global_57254[144].f_4 = 0;
	Global_57254[145].f_2 = 1;
	Global_57254[145].f_3 = 61363048;
	Global_57254[145].f_4 = 0;
	Global_57254[146].f_2 = 1;
	Global_57254[146].f_3 = 561756181;
	Global_57254[146].f_4 = 0;
	Global_57254[150].f_2 = 1;
	Global_57254[150].f_3 = 690996724;
	Global_57254[150].f_4 = 0;
	Global_57254[151].f_2 = 1;
	Global_57254[151].f_3 = 992362735;
	Global_57254[151].f_4 = 0;
	Global_57254[152].f_2 = 1;
	Global_57254[152].f_3 = 1102841251;
	Global_57254[152].f_4 = 0;
	Global_57254[153].f_2 = 1;
	Global_57254[153].f_3 = 1906822341;
	Global_57254[153].f_4 = 0;
	Global_57254[154].f_2 = 1;
	Global_57254[154].f_3 = 310879809;
	Global_57254[154].f_4 = 0;
	Global_57254[155].f_2 = 1;
	Global_57254[155].f_3 = -1881342573;
	Global_57254[155].f_4 = 0;
	Global_57254[156].f_2 = 1;
	Global_57254[156].f_3 = 219506691;
	Global_57254[156].f_4 = 0;
	Global_57254[157].f_2 = 1;
	Global_57254[157].f_3 = 1871505786;
	Global_57254[157].f_4 = 0;
	Global_57254[158].f_2 = 1;
	Global_57254[158].f_3 = -2024399847;
	Global_57254[158].f_4 = 0;
	Global_57254[159].f_2 = 1;
	Global_57254[159].f_3 = -1693224312;
	Global_57254[159].f_4 = 0;
	Global_57254[160].f_2 = 1;
	Global_57254[160].f_3 = -1540543939;
	Global_57254[160].f_4 = 0;
	Global_57254[161].f_2 = 1;
	Global_57254[161].f_3 = 638406446;
	Global_57254[161].f_4 = 0;
	Global_57254[174].f_2 = 1;
	Global_57254[174].f_3 = -2136332526;
	Global_57254[174].f_4 = 0;
	Global_57254[175].f_2 = 1;
	Global_57254[175].f_3 = 1853808356;
	Global_57254[175].f_4 = 0;
	Global_57254[176].f_2 = 1;
	Global_57254[176].f_3 = 1145073668;
	Global_57254[176].f_4 = 0;
	Global_57254[177].f_2 = 1;
	Global_57254[177].f_3 = 1342605706;
	Global_57254[177].f_4 = 0;
	Global_57254[178].f_2 = 1;
	Global_57254[178].f_3 = -260821582;
	Global_57254[178].f_4 = 0;
	Global_57254[179].f_2 = 1;
	Global_57254[179].f_3 = 1864607942;
	Global_57254[179].f_4 = 0;
	Global_57254[180].f_2 = 1;
	Global_57254[180].f_3 = 1287676811;
	Global_57254[180].f_4 = 0;
	Global_57254[181].f_2 = 1;
	Global_57254[181].f_3 = 309812268;
	Global_57254[181].f_4 = 0;
	Global_57254[182].f_2 = 1;
	Global_57254[182].f_3 = 267345959;
	Global_57254[182].f_4 = 0;
	Global_57254[183].f_2 = 1;
	Global_57254[183].f_3 = 402670271;
	Global_57254[183].f_4 = 0;
	Global_57254[184].f_2 = 1;
	Global_57254[184].f_3 = -1221152009;
	Global_57254[184].f_4 = 0;
	Global_57254[185].f_2 = 1;
	Global_57254[185].f_3 = -282841538;
	Global_57254[185].f_4 = 0;
	Global_57254[186].f_2 = 1;
	Global_57254[186].f_3 = -1561446148;
	Global_57254[186].f_4 = 0;
	Global_57254[187].f_2 = 1;
	Global_57254[187].f_3 = -544273793;
	Global_57254[187].f_4 = 0;
	Global_57254[188].f_2 = 1;
	Global_57254[188].f_3 = 723975203;
	Global_57254[188].f_4 = 0;
	Global_57254[189].f_2 = 1;
	Global_57254[189].f_3 = 530634002;
	Global_57254[189].f_4 = 0;
	Global_57254[190].f_2 = 1;
	Global_57254[190].f_3 = -1992078238;
	Global_57254[190].f_4 = 0;
	Global_57254[191].f_2 = 1;
	Global_57254[191].f_3 = 1646615245;
	Global_57254[191].f_4 = 0;
	Global_57254[192].f_2 = 1;
	Global_57254[192].f_3 = 193582244;
	Global_57254[192].f_4 = 0;
	Global_57254[193].f_2 = 1;
	Global_57254[193].f_3 = -305406140;
	Global_57254[193].f_4 = 0;
	Global_57254[194].f_2 = 1;
	Global_57254[194].f_3 = -309797785;
	Global_57254[194].f_4 = 0;
	Global_57254[195].f_2 = 1;
	Global_57254[195].f_3 = 159074245;
	Global_57254[195].f_4 = 0;
	Global_57254[196].f_2 = 1;
	Global_57254[196].f_3 = 885539271;
	Global_57254[196].f_4 = 0;
	Global_57254[197].f_2 = 1;
	Global_57254[197].f_3 = 789575921;
	Global_57254[197].f_4 = 0;
	Global_57254[198].f_2 = 1;
	Global_57254[198].f_3 = 1342490533;
	Global_57254[198].f_4 = 0;
	Global_57254[199].f_2 = 1;
	Global_57254[199].f_3 = -1042537690;
	Global_57254[199].f_4 = 0;
	Global_57254[200].f_2 = 1;
	Global_57254[200].f_3 = 768147905;
	Global_57254[200].f_4 = 0;
	Global_56692[0] = -1357148995;
	Global_56692[0].f_3[0] = -2109190597;
	Global_56692[0].f_3[1] = 1896459198;
	Global_56692[0].f_3[2] = 513017556;
	Global_56692[1] = -1097501611;
	Global_56692[1].f_3[0] = 53252892;
	Global_56692[1].f_3[1] = 898922475;
	Global_56692[1].f_3[2] = 630314982;
	Global_56692[2] = 379954836;
	Global_56692[2].f_3[0] = 1023201977;
	Global_56692[2].f_3[1] = 1319728658;
	Global_56692[2].f_3[2] = 365069381;
	Global_56692[3] = -1687634316;
	Global_56692[3].f_3[0] = -1132445961;
	Global_56692[3].f_3[1] = -826842267;
	Global_56692[3].f_3[2] = -44023626;
	Global_56692[4] = 874957934;
	Global_56692[4].f_3[0] = 1172669389;
	Global_56692[4].f_3[1] = 517387696;
	Global_56692[4].f_3[2] = 814799140;
	Global_56692[5] = -1036942183;
	Global_56692[5].f_3[0] = -1827530764;
	Global_56692[5].f_3[1] = -1598180533;
	Global_56692[5].f_3[2] = 1988714207;
	Global_56692[6] = -1045794081;
	Global_56692[6].f_3[0] = 937226802;
	Global_56692[6].f_3[1] = 760470816;
	Global_56692[6].f_3[2] = 328149399;
	Global_56692[7] = 1749682403;
	Global_56692[7].f_3[0] = -600206663;
	Global_56692[7].f_3[1] = 300744223;
	Global_56692[7].f_3[2] = 9329506;
	Global_56692[8] = 1037053828;
	Global_56692[8].f_3[0] = 783621043;
	Global_56692[8].f_3[1] = 1545631369;
	Global_56692[8].f_3[2] = 1332108565;
	Global_56692[9] = 1250286437;
	Global_56692[9].f_3[0] = -1125414190;
	Global_56692[9].f_3[1] = -1608429250;
	Global_56692[9].f_3[2] = -1839221317;
	Global_56692[10] = 830818666;
	Global_56692[10].f_3[0] = -1450970664;
	Global_56692[10].f_3[1] = -1145924035;
	Global_56692[10].f_3[2] = 2118851431;
	Global_56692[11] = -1612759317;
	Global_56692[11].f_3[0] = -781546729;
	Global_56692[11].f_3[1] = -406931521;
	Global_56692[11].f_3[2] = 752599544;
	Global_56692[12] = -1079611023;
	Global_56692[12].f_3[0] = 1835682524;
	Global_56692[12].f_3[1] = 255987341;
	Global_56692[12].f_3[2] = 562443029;
	Global_56692[13] = -317908649;
	Global_56692[13].f_3[0] = 41246981;
	Global_56692[13].f_3[1] = -724859470;
	Global_56692[13].f_3[2] = 548871560;
	Global_56692[14] = -766843961;
	Global_56692[14].f_3[0] = 635373003;
	Global_56692[14].f_3[1] = 1461545023;
	Global_56692[14].f_3[2] = 1229311120;
	Global_56692[15] = 1339417691;
	Global_56692[15].f_3[0] = -1771727699;
	Global_56692[15].f_3[1] = -1443382319;
	Global_56692[15].f_3[2] = -212611448;
	Global_56692[16] = 1708517390;
	Global_56692[16].f_3[0] = -1156550321;
	Global_56692[16].f_3[1] = -1386621470;
	Global_56692[16].f_3[2] = 1604991620;
	Global_56692[17] = 802417997;
	Global_56692[17].f_3[0] = -2026017015;
	Global_56692[17].f_3[1] = 521346750;
	Global_56692[17].f_3[2] = 219445945;
	Global_56692[18] = -2126933357;
	Global_56692[18].f_3[0] = -1369484717;
	Global_56692[18].f_3[1] = -909932257;
	Global_56692[18].f_3[2] = -604164718;
	Global_56692[19] = -1549496236;
	Global_56692[19].f_3[0] = 1091570040;
	Global_56692[19].f_3[1] = 1351526517;
	Global_56692[19].f_3[2] = 1676365614;
	Global_56692[20] = 1873627898;
	Global_56692[20].f_3[0] = -182925026;
	Global_56692[20].f_3[1] = -504388916;
	Global_56692[20].f_3[2] = -1077911974;
	Global_56692[21] = 138531685;
	Global_56692[21].f_3[0] = 1637320774;
	Global_56692[21].f_3[1] = -1872894510;
	Global_56692[21].f_3[2] = 2115060025;
	Global_56692[22] = -697328643;
	Global_56692[22].f_3[0] = -2138984365;
	Global_56692[22].f_3[1] = 1995414831;
	Global_56692[22].f_3[2] = 1739980472;
	Global_56692[23] = 1661793399;
	Global_56692[23].f_3[0] = 1412120987;
	Global_56692[23].f_3[1] = 1173136670;
	Global_56692[23].f_3[2] = -1850393366;
	Global_56692[24] = 569385504;
	Global_56692[24].f_3[0] = -1190184946;
	Global_56692[24].f_3[1] = 130930058;
	Global_56692[24].f_3[2] = 369455609;
	Global_56692[25] = -973384559;
	Global_56692[25].f_3[0] = -581799862;
	Global_56692[25].f_3[1] = -1340893747;
	Global_56692[25].f_3[2] = 753504119;
	Global_56692[26] = 1386984338;
	Global_56692[26].f_3[0] = -2070096504;
	Global_56692[26].f_3[1] = -1782286377;
	Global_56692[26].f_3[2] = 1669436242;
	Global_56692[27] = -1639608739;
	Global_56692[27].f_3[0] = 838395558;
	Global_56692[27].f_3[1] = 8782785;
	Global_56692[27].f_3[2] = 1484600238;
	Global_56692[28] = -591182974;
	Global_56692[28].f_3[0] = -621965903;
	Global_56692[28].f_3[1] = 1215490234;
	Global_56692[28].f_3[2] = -12102044;
	Global_56692[29] = 1850391252;
	Global_56692[29].f_3[0] = 1432785999;
	Global_56692[29].f_3[1] = -958597318;
	Global_56692[29].f_3[2] = -1272163879;
	Global_56692[30] = -1012643838;
	Global_56692[30].f_3[0] = -1416064033;
	Global_56692[30].f_3[1] = -520159573;
	Global_56692[30].f_3[2] = -788832604;
	Global_56692[31] = 1757680748;
	Global_56692[31].f_3[0] = 564625845;
	Global_56692[31].f_3[1] = -78007014;
	Global_56692[31].f_3[2] = 98191899;
	Global_56692[32] = -444702651;
	Global_56692[32].f_3[0] = 1666339667;
	Global_56692[32].f_3[1] = -1843842844;
	Global_56692[32].f_3[2] = -2023548040;
	Global_56692[33] = -465071147;
	Global_56692[33].f_3[0] = -1883128444;
	Global_56692[33].f_3[1] = 1639407984;
	Global_56692[33].f_3[2] = -1367540998;
	Global_56692[34] = 1741232324;
	Global_56692[34].f_3[0] = 1106019594;
	Global_56692[34].f_3[1] = 807264621;
	Global_56692[34].f_3[2] = 780721731;
	Global_56692[35] = -579367423;
	Global_56692[35].f_3[0] = -1368580228;
	Global_56692[35].f_3[1] = -1896161128;
	Global_56692[35].f_3[2] = -2132196235;
	Global_56692[36] = 1049823659;
	Global_56692[36].f_3[0] = 99081423;
	Global_56692[36].f_3[1] = -360405495;
	Global_56692[36].f_3[2] = -582382701;
	Global_56692[37] = -312730214;
	Global_56692[37].f_3[0] = 21959694;
	Global_56692[37].f_3[1] = -602224222;
	Global_56692[37].f_3[2] = 634182921;
	Global_56692[38] = -1627860859;
	Global_56692[38].f_3[0] = -155646905;
	Global_56692[38].f_3[1] = 161163787;
	Global_56692[38].f_3[2] = 467783320;
}

void func_98()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

