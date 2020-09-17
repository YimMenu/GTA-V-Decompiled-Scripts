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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_140();
		func_1();
	}
}

void func_1()
{
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 192:
					func_137();
					break;
				
				case 193:
					func_136();
					break;
				
				case 194:
					func_130(iVar2);
					break;
				
				case 195:
					func_129(iVar2);
					break;
				
				case 196:
					func_118(iVar2);
					break;
				
				case 214:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &uVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_53763.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_53763.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &uVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_53763.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_53763.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_53763 = iVar3;
	Global_53763.f_12 = iVar4;
	Global_53763.f_24 = iVar5;
	Global_53763.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar39 = NETWORK::_0x742B58F723233ED9(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::_0x3DBF2DF0AEB7D289(iVar39) || NETWORK::_0x8806CEBFABD3CE05(iVar39))
			{
				if (NETWORK::_0x8806CEBFABD3CE05(iVar39))
				{
					func_55(iVar39);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)
{
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46())
		{
			func_45(uParam22);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param23))
		{
			func_45(uParam22);
			return 0;
		}
		if (Global_19429)
		{
			func_45(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam22);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_41(PLAYER::PLAYER_ID()))
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Param6))
	{
		func_45(uParam22);
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_45(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_40(Var2);
	if (iVar18 != -1)
	{
		func_37(iVar18);
	}
	uVar19 = NETWORK::_0x742B58F723233ED9(uParam22);
	iVar20 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2395292[iVar21].f_3 && GAMEPLAY::GET_GAME_TIMER() < Global_2395292[iVar21].f_2)
		{
			Global_2395292[iVar21].f_2 = GAMEPLAY::GET_GAME_TIMER() + 30000;
			iVar21 = 12;
			func_45(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_36(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_35(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_33(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_32(iVar34, Var22.f_1);
		iVar33 = func_31(&Var22);
		Var36 = { func_30(&Var22, 0) };
		Var52 = { func_29(&Var22) };
		iVar69 = 1;
		iVar68 = func_28(&Var22, 0);
		iVar73 = func_27(&Var22);
		uVar74 = func_25(&Var22);
		uVar75 = func_24(&Var22);
		bVar76 = func_19(&Var22);
		if (!bVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar77 = false;
		if (func_17(PLAYER::PLAYER_ID(), Param23))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar77 = true;
			}
			else
			{
				func_45(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (!bVar77)
			{
				if (func_13(PLAYER::PLAYER_ID(), Param23))
				{
					func_45(uParam22);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam22);
			bVar78 = true;
			func_15(bVar78);
			return 0;
		}
		bVar79 = false;
		if (!bVar77)
		{
			if (func_7(Param23, &bVar79, 1))
			{
				func_45(uParam22);
				func_15(bVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1387739;
	if (iVar80 >= 12)
	{
		iVar80 = (iVar80 - 1);
	}
	iVar81 = (iVar80 - 1);
	while (iVar81 >= 0)
	{
		Global_2392991[iVar80] = { Global_2392991[iVar81] };
		iVar80 = (iVar80 - 1);
		iVar81 = (iVar81 - 1);
	}
	Global_1387739++;
	if (Global_1387739 > 12)
	{
		Global_1387739 = 12;
	}
	iVar82 = 0;
	Global_2392991[iVar82] = 0;
	Global_2392991[iVar82].f_1 = 0;
	Global_2392991[iVar82].f_5 = 0;
	Global_2392991[iVar82].f_2 = iVar70;
	Global_2392991[iVar82].f_3 = 0;
	Global_2392991[iVar82].f_4 = iVar71;
	Global_2392991[iVar82].f_6 = { Param0 };
	Global_2392991[iVar82].f_12 = uVar74;
	Global_2392991[iVar82].f_13 = uVar75;
	Global_2392991[iVar82].f_15 = { Param6 };
	StringCopy(&(Global_2392991[iVar82].f_31), "", 64);
	Global_2392991[iVar82].f_49 = iVar34;
	Global_2392991[iVar82].f_50 = iVar32;
	Global_2392991[iVar82].f_51 = iVar33;
	Global_2392991[iVar82].f_91 = uParam22;
	Global_2392991[iVar82].f_57 = { Var36 };
	Global_2392991[iVar82].f_73 = { Var52 };
	Global_2392991[iVar82].f_52 = iVar68;
	Global_2392991[iVar82].f_53 = 0;
	Global_2392991[iVar82].f_53.f_1 = 0;
	Global_2392991[iVar82].f_53.f_2 = 0;
	Global_2392991[iVar82].f_56 = iVar69;
	Global_2392991[iVar82].f_90 = uParam36;
	Global_2392991[iVar82].f_92 = -1;
	Global_2392991[iVar82].f_93 = iVar72;
	Global_2392991[iVar82].f_94 = Global_2395344;
	Global_2392991[iVar82].f_95 = iVar73;
	Global_2392991[iVar82].f_98 = NETWORK::NETWORK_IS_FRIEND(&Param23);
	if (Global_2392991[iVar82].f_50 == 0)
	{
		if (Global_2392991[iVar82].f_51 == 1)
		{
			Global_2392991[iVar82].f_56 = 0;
		}
	}
	Global_2392991[iVar82].f_96 = func_6(Param23, iVar82);
	Global_2392991[iVar82].f_97 = 0;
	Global_2392991[iVar82].f_89 = iParam37;
	Global_2395344++;
	Global_2392991[iVar82].f_47 = func_5(Param23);
	if (Global_2392991[iVar82].f_47 != -1)
	{
		Global_2392991[iVar82].f_48 = GAMEPLAY::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	if (!GAMEPLAY::IS_DURANGO_VERSION())
	{
		return -1;
	}
	Var0[0] = { Param0 };
	iVar14 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(PLAYER::PLAYER_ID()) };
	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &uParam0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (GAMEPLAY::IS_PS3_VERSION() || (GAMEPLAY::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(1) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (GAMEPLAY::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((GAMEPLAY::IS_ORBIS_VERSION() && NETWORK::_0x1353F87E89946207() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (GAMEPLAY::IS_PS3_VERSION() || (GAMEPLAY::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(0) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!GAMEPLAY::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			if (!NETWORK::_0x72D918C99BCACC54(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xB57A49545BA53CE7(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2395346.f_356[uParam0->f_9].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return GAMEPLAY::IS_BIT_SET(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar1].f_76, 14);
		
		case 62:
			return GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar1].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0])
	{
		return 0;
	}
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2395346.f_356[iVar0].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2395346.f_356[iVar0].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_20(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_26(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_20(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13];
		
		case 62:
			return Global_917806.f_9405[iVar13];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2395346.f_356[uParam0->f_9].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return GAMEPLAY::IS_BIT_SET(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar1].f_76, 17);
		
		case 62:
			return GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar1].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_54;
		
		case 62:
			return Global_917806.f_604[iVar1].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar1].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16].f_38;
		
		case 62:
			return Global_917806.f_604[iVar16].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar16].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9], 0))
			{
				return Global_2398237[uParam0->f_9];
			}
			return Global_2395346.f_356[uParam0->f_9].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar16].f_22;
		
		case 62:
			return Global_917806.f_604[iVar16].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar16].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iVar1].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 256;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1].f_65;
		
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_939452.f_5[iParam1].f_65;
	}
	else if (iParam0 < 32)
	{
		return 256;
	}
	return 256;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0]), sParam0))
			{
				iVar1 = Global_917806.f_604[iVar0].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0]), sParam0))
			{
				iVar1 = Global_939452.f_5[iVar0].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 148;
		
		case 14:
			return 149;
		
		case 122:
			return 153;
		
		case 11:
			return 150;
		
		case 13:
			return 151;
		
		case 12:
			return 152;
		
		case 8:
			return 155;
		
		case 1:
			return 156;
		
		case 5:
			return 154;
		
		case 6:
			return 157;
		
		case 3:
			return 160;
		
		case 0:
			return 158;
		
		case 2:
			return 159;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	iVar0 = UI::_0x43E4111189E54F0E(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, UI::_GET_TEXT_SUBSTRING_SLICE(sParam0, 0, 5), 8);
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, UI::_GET_TEXT_SUBSTRING_SLICE(sParam0, 5, 12), 16);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, UI::_GET_TEXT_SUBSTRING_SLICE(sParam0, 12, iVar0), 8);
	if (!GAMEPLAY::STRING_TO_INT(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)
{
	if (iParam0 >= Global_1387739)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (GAMEPLAY::GET_GAME_TIMER() > Global_2395292[iVar0].f_2 || Global_2395292[iVar0].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2392991[iParam0].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2395292[iVar0].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2392991[iParam0].f_91);
				Global_2395292[iVar0].f_2 = GAMEPLAY::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0].f_92 != -1)
	{
		UI::_REMOVE_NOTIFICATION(Global_2392991[iParam0].f_92);
	}
	if (!Global_2392991[iParam0].f_56)
	{
		if (Global_2392991[iParam0].f_52 != 0)
		{
			NETWORK::_0x5A34CD9C3C5BEC44(Global_2392991[iParam0].f_52);
		}
	}
	func_45(Global_2392991[iParam0].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1387739)
	{
		Global_2392991[iVar1] = { Global_2392991[iVar2] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1387739 = (Global_1387739 - 1);
	if (Global_1387712)
	{
		if (Global_1387710 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1387712 = 0;
}

void func_39(int iParam0)
{
	Global_2392991[iParam0] = 0;
	Global_2392991[iParam0].f_1 = 0;
	Global_2392991[iParam0].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0].f_31), "", 64);
	Global_2392991[iParam0].f_47 = -1;
	Global_2392991[iParam0].f_48 = GAMEPLAY::GET_GAME_TIMER();
	Global_2392991[iParam0].f_49 = -1;
	Global_2392991[iParam0].f_50 = -1;
	Global_2392991[iParam0].f_51 = -1;
	Global_2392991[iParam0].f_52 = 0;
	Global_2392991[iParam0].f_53 = 0;
	Global_2392991[iParam0].f_53.f_1 = 0;
	Global_2392991[iParam0].f_53.f_2 = 0;
	Global_2392991[iParam0].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0].f_73), "", 64);
	Global_2392991[iParam0].f_89 = 0;
	Global_2392991[iParam0].f_90 = 0;
	Global_2392991[iParam0].f_91 = -1;
	Global_2392991[iParam0].f_92 = -1;
	Global_2392991[iParam0].f_93 = 0;
	Global_2392991[iParam0].f_94 = -1;
	Global_2392991[iParam0].f_95 = 0;
	Global_2392991[iParam0].f_96 = 0;
	Global_2392991[iParam0].f_97 = 0;
	Global_2392991[iParam0].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1387739)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&uParam0, &(Global_2392991[iVar0].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_43()
{
	if (Global_111638.f_9080.f_330[0])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 2);
}

void func_45(var uParam0)
{
	iVar0 = NETWORK::_0x742B58F723233ED9(uParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1312837 == 10;
}

int func_47()
{
	if (!Global_76622)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312745;
}

bool func_52()
{
	return Global_1312865;
}

bool func_53()
{
	return Global_1312867;
}

void func_54(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312857[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_111();
	if (func_110(1))
	{
		if (!func_99())
		{
			if (!func_88(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_87();
				}
				func_58(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1662155.f_7 = 1;
}

void func_57()
{
	Global_1662155.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_110(iParam0))
	{
		Global_1662155.f_16[iParam0].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1662155 = 1;
		}
	}
}

void func_59()
{
	Global_1662155.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_86();
			func_72(PLAYER::PLAYER_ID(), 0, 81920, 0);
			Global_1590535[PLAYER::PLAYER_ID()].f_98 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2450632.f_759), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return GAMEPLAY::IS_BIT_SET(Global_2451426.f_1.f_2809, 5);
}

void func_63(int iParam0)
{
	Global_1662155.f_16[iParam0].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1662155.f_16[iParam0].f_6;
}

void func_65()
{
	Global_2450632.f_7 = 100;
}

void func_66()
{
	GAMEPLAY::SET_BIT(&Global_2450632, 5);
	func_67();
}

void func_67()
{
	GAMEPLAY::SET_BIT(&Global_2450632, 8);
}

void func_68(var uParam0)
{
	Global_1662155.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1662155.f_9 = uParam0;
}

void func_70()
{
	Global_2458936.f_1 = 0;
}

void func_71()
{
	StringCopy(&(Global_2450632.f_759), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_85())
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
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
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
		if (!func_83())
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
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_81(PLAYER::PLAYER_ID(), 0) && !func_80()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_77(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_76(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_75();
					func_74();
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
				Global_2425662[iParam0].f_245 = 0;
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
				if (!func_76(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_73(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
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

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_75()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_76(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
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
			if (iParam0 == 1)
			{
				func_79();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_81(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_78(-2008016205, iParam0);
	}
}

void func_78(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_79()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_80()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_81(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_82(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
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

int func_82(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_83()
{
	if (func_84() == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return Global_1312467.f_18;
}

int func_85()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_86()
{
	GAMEPLAY::SET_BIT(&Global_2450632, 7);
}

void func_87()
{
	GAMEPLAY::SET_BIT(&(Global_2450632.f_2), 15);
}

int func_88(int iParam0)
{
	if (iParam0 || func_98())
	{
		if (!func_90(1))
		{
			return 1;
		}
		if (!func_89())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return Global_1662155.f_4;
}

int func_90(bool bParam0)
{
	if (!func_95())
	{
		return 0;
	}
	if ((func_93(func_94(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_92();
		return 1;
	}
	else if (bParam0)
	{
		func_91();
	}
	return 0;
}

void func_91()
{
	Global_1662155.f_5 = 1;
}

void func_92()
{
	Global_1662155.f_4 = 1;
}

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
{
	return Global_1388060[func_50(iParam0)];
}

int func_95()
{
	if (func_97() && func_96(0))
	{
		return 1;
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_97()
{
	return func_96(func_51() + 1);
}

var func_98()
{
	return Global_1662155.f_2;
}

int func_99()
{
	if (((((func_109() || !func_107(-1)) || !func_105()) || !func_102()) || !func_101()) || func_100())
	{
		return 1;
	}
	return 0;
}

var func_100()
{
	return Global_2460693;
}

int func_101()
{
	if (GAMEPLAY::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	if (func_103(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_103(var uParam0)
{
	if (func_104())
	{
		*uParam0 = 10;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(uParam0);
}

bool func_104()
{
	return Global_31044;
}

int func_105()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_106(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	uVar0 = func_108(iParam0);
	uVar1 = GAMEPLAY::GET_PROFILE_SETTING(uVar0);
	if (GAMEPLAY::IS_BIT_SET(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_51();
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

var func_109()
{
	return Global_2450632.f_643;
}

bool func_110(int iParam0)
{
	return Global_1662155.f_16[iParam0].f_4;
}

void func_111()
{
	func_117();
	if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_114())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_113(iVar0));
			if (iVar1 > 0)
			{
				Global_1662155.f_16[iVar0] = iVar1;
				func_112(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1662155.f_16[iVar0].f_4 = 0;
			iVar0++;
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	bVar0 = true;
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1662155.f_16[iParam0].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		Global_1662155.f_16[iParam0].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1662155.f_16[iParam0].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1662155.f_16[iParam0].f_1 = uVar17;
		}
		else
		{
			Global_1662155.f_16[iParam0].f_1 = 120000;
		}
		Global_1662155.f_16[iParam0].f_2 = 0;
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar17))
		{
			Global_1662155.f_16[iParam0].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1662155.f_1 = 1;
		}
		Global_1662155.f_16[iParam0].f_4 = 1;
	}
	else
	{
		Global_1662155.f_16[iParam0].f_4 = 0;
	}
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_114()
{
	if (!func_115())
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	if (func_116())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return Global_2461181;
}

void func_117()
{
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1662155 = { Var0 };
}

void func_118(int iParam0)
{
	if (Global_76622)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, 1);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_120();
	}
	Global_2543673.f_1 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	func_119(&(Global_2543673.f_20));
}

void func_119(var uParam0)
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

void func_120()
{
	Global_2543673.f_2 = 1;
	Global_2543673.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2543673 = 0;
			Global_2543673.f_2 = 0;
		}
		else if (func_128(Global_2543673.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2543673.f_20)))
			{
				if (!NETWORK::_0x87EB7A3FFCB314DB(&(Global_2543673.f_20)))
				{
					func_127();
				}
			}
		}
		else
		{
			func_127();
		}
	}
	else
	{
		func_127();
	}
	if (Global_2543673.f_37)
	{
		func_121(0);
	}
	Global_2543673.f_37 = 0;
	Global_2543673.f_3 = 0;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_125())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_122())
	{
		Global_19486.f_1 = 3;
	}
}

int func_122()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
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

int func_124(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_126()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_127()
{
	Global_2543673.f_1 = 0;
	Global_2543673 = 0;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	StringCopy(&(Global_2543673.f_39[0]), "", 64);
	Global_2543673.f_38 = 0;
	Global_2543673.f_56 = 0;
	Global_2543673.f_57 = 0;
	Global_2543673.f_58 = -2;
	Global_2543673.f_3 = 0;
	func_119(&(Global_2543673.f_20));
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_129(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2543673.f_33 = Var0.f_1;
		Global_2543673.f_34 = Var0;
	}
}

void func_130(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2543673.f_3 == 0)
		{
			if (!func_131(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
			}
			else
			{
				Global_2543673.f_3 = 1;
				MemCopy(&(Global_2543673.f_4), {Var0}, 16);
				Global_2543673.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2543673.f_39[0]), "", 64);
				Global_2543673.f_58 = -2;
				Global_2543673.f_56 = 0;
				Global_2543673.f_57 = 0;
			}
		}
		else if (!func_131(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SET_KEEP_FOCUSPOINT(0, 2);
		}
		else
		{
			Global_2543673.f_3 = 1;
			MemCopy(&(Global_2543673.f_4), {Var0}, 16);
			Global_2543673.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2543673.f_39[0]), "", 64);
			Global_2543673.f_58 = -2;
			Global_2543673.f_56 = 0;
			Global_2543673.f_57 = 0;
		}
	}
}

int func_131(var uParam0)
{
	if (Global_76622)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_135(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2543673.f_1)
	{
	}
	if (Global_19672 == 1)
	{
		return 0;
	}
	if (Global_1574432)
	{
		return 0;
	}
	if (Global_2543673.f_36)
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (((Global_41431 != 6 && Global_41431 != 8) && Global_41431 != 12) && Global_41431 != 15)
	{
		return 0;
	}
	if (func_134() && !func_133(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_132(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_76882)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::_0x2FC5650B0271CB57())
	{
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0xFD8B834A8BA05048())
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_ORBIS_VERSION())
		{
			return 0;
		}
	}
	return 1;
}

int func_132(int iParam0)
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::_0x83F28CE49FBBFFBA(0, -3, 1) || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) || (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_134()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
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

void func_136()
{
	func_127();
}

void func_137()
{
	Global_2543673.f_1 = 1;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467) == 1)
	{
		if (Global_19474)
		{
			func_138(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_19429)
			{
				func_138(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_138(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_138(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_139(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_139(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_139(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_139(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_139(iParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_139(var uParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_140()
{
	if (iLocal_64)
	{
		Global_53763 = 0;
		Global_53763.f_12 = 0;
		Global_53763.f_24 = 0;
		Global_53763.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_53763.f_1[iVar0] = 0;
			Global_53763.f_13[iVar0] = 0;
			Global_53763.f_25[iVar0] = 0;
			Global_53763.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

