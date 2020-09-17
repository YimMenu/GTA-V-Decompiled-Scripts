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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 4;
	iLocal_65 = 12;
	if (func_159() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	UI::_LOG_DEBUG_INFO(1);
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312436 = 1;
	iVar0 = 0;
	Global_1375642.f_281 = 1;
	Global_1373206.f_1 = 0;
	Global_1373206.f_3 = 0;
	Global_1373206.f_5 = 0;
	func_157(&Global_1375642);
	func_156(&Global_1375642);
	func_155(&Global_1375642);
	func_151();
	func_150(0, &Global_1375642);
	GRAPHICS::_SET_2D_LAYER(7);
	UI::_ADD_FRONTEND_MENU_CONTEXT(337714004);
	UI::_ADD_FRONTEND_MENU_CONTEXT(-1884422346);
	UI::ENABLE_DEATHBLOOD_SEETHROUGH(0);
	func_149();
	iVar5 = 1;
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (UI::_0x3BAB9A4E4F2FF5C7())
						{
							UI::_0xEC9264727EEC0F28();
							iVar6 = 1;
						}
					}
				}
				if (func_148(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						Global_1373206.f_1 = 0;
						Global_1373206.f_3 = 0;
						iVar5 = 1;
						func_150(0, &Global_1375642);
						func_156(&Global_1375642);
						func_155(&Global_1375642);
						func_147(&Global_1375642, &Global_1373206);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("MENU_SHIFT_DEPTH");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
				}
				if (iVar5 == 0)
				{
					if (func_148(189) || func_148(190))
					{
						iVar0 = 1;
					}
				}
				if (func_148(202))
				{
					func_145();
					if (iVar5 == 1)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("MENU_SHIFT_DEPTH");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						UI::OBJECT_DECAL_TOGGLE(337714004);
						UI::ENABLE_DEATHBLOOD_SEETHROUGH(0);
						func_156(&Global_1375642);
						func_155(&Global_1375642);
						func_150(-1, &Global_1375642);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar0 = 1;
						UI::_0x14621BB1DF14E2B2();
					}
				}
				if (UI::_0xF284AC67940C6812())
				{
					UI::_0x36C1451A88A09630(&iVar2, &uVar3);
				}
				if (UI::_0x2E22FEFA0100275E())
				{
					UI::_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1373206.f_1 = (iVar4 % 3);
						Global_1373206.f_3 = (iVar4 / 3);
						func_150(iVar4, &Global_1375642);
						func_155(&Global_1375642);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", 0);
				func_9(&Global_1375642, &Global_1373206);
				if (iVar5 == 1)
				{
					func_1(&Global_1375642, &Global_1373206, &uLocal_123);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	UI::_0x14621BB1DF14E2B2();
	UI::_LOG_DEBUG_INFO(0);
	Global_1312436 = 0;
	GRAPHICS::_SET_2D_LAYER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((CONTROLS::IS_CONTROL_PRESSED(2, 187) || func_6(187, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		GAMEPLAY::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((CONTROLS::IS_CONTROL_PRESSED(2, 188) || func_6(188, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		GAMEPLAY::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((CONTROLS::IS_CONTROL_PRESSED(2, 189) || CONTROLS::IS_CONTROL_PRESSED(2, 241)) || func_6(189, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		GAMEPLAY::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((CONTROLS::IS_CONTROL_PRESSED(2, 190) || CONTROLS::IS_CONTROL_PRESSED(2, 242)) || func_6(190, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_285, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_285, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_285, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 1) % 3);
					uParam1->f_3 = ((iLocal_65 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_285, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_65 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
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
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	iVar0 = (CONTROLS::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (CONTROLS::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < GAMEPLAY::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = GAMEPLAY::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (func_144(8, -1) == 0)
		{
			*uParam1 = func_143();
		}
		func_149();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_107(453432689, uParam0, *uParam1, 0);
					func_107(1593441988, uParam0, *uParam1, 0);
					func_107(584646201, uParam0, *uParam1, 0);
					func_107(324215364, uParam0, *uParam1, 0);
					func_107(736523883, uParam0, *uParam1, 0);
					func_107(-1074790547, uParam0, *uParam1, 0);
					func_107(-2084633992, uParam0, *uParam1, 0);
					func_107(-1357824103, uParam0, *uParam1, 0);
					func_107(-1660422300, uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_107(2144741730, uParam0, *uParam1, 0);
					func_107(-270015777, uParam0, *uParam1, 0);
					func_107(487013001, uParam0, *uParam1, 0);
					func_107(-494615257, uParam0, *uParam1, 0);
					func_107(100416529, uParam0, *uParam1, 0);
					func_107(205991906, uParam0, *uParam1, 0);
					func_107(-1568386805, uParam0, *uParam1, 0);
					func_107(1119849093, uParam0, *uParam1, 0);
					func_107(-1312131151, uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_107(-1716189206, uParam0, *uParam1, 0);
					func_107(1737195953, uParam0, *uParam1, 0);
					func_107(-1786099057, uParam0, *uParam1, 0);
					func_107(-2067956739, uParam0, *uParam1, 0);
					func_107(1141786504, uParam0, *uParam1, 0);
					func_107(615608432, uParam0, *uParam1, 0);
					func_107(-1813897027, uParam0, *uParam1, 0);
					func_107(-37975472, uParam0, *uParam1, 0);
					func_107(741814745, uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_87(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_85(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (GAMEPLAY::ARE_STRINGS_EQUAL(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == -1654528753 || uParam0->f_85[iVar0] == -1716589765) || uParam0->f_85[iVar0] == -1076751822)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == 453432689 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 453432689, 0))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_96(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || GAMEPLAY::ARE_STRINGS_EQUAL(func_26(uParam0->f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_DATA_SLOT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_85[iVar0]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar6);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			iVar0++;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("DISPLAY_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_277);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_DESCRIPTION");
			iVar4 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar4 < 0)
			{
				iVar4 = 0;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			func_20(&(uParam0->f_11[uParam0->f_277]));
			func_20(&(uParam0->f_48[uParam0->f_277]));
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar4);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(func_16(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(3);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20(&Var0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_ACCURACY");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_RANGE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(3);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_CLIPSIZE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_KD_RATIO");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(7);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_HEADSHOTS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_TITLE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				func_20("PM_MY_ACCURACY");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
		case 1737195953:
		case 1317494643:
		case -1786099057:
		case -2067956739:
		case 1141786504:
		case -1813897027:
		case -37975472:
		case 741814745:
		case 615608432:
		case -102323637:
		case -1834847097:
		case -1420407917:
		case -656458692:
		case -581044007:
		case -1951375401:
		case -538741184:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 0;
			break;
		
		case -1716189206:
			return 0;
			break;
		
		case 324215364:
			return 5;
			break;
		
		case -270015777:
			return 29;
			break;
		
		case 1737195953:
			return 3;
			break;
		
		case 1593441988:
			return 9;
			break;
		
		case 736523883:
			return 11;
			break;
		
		case -1074790547:
			return 24;
			break;
		
		case 100416529:
			return 21;
			break;
		
		case 741814745:
			return 19;
			break;
		
		case 883325847:
			return 20;
			break;
		
		case 487013001:
			return 17;
			break;
		
		case 584646201:
			return 33;
			break;
		
		case -37975472:
			return 13;
			break;
		
		case -1813897027:
			return 15;
			break;
		
		case -2084633992:
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case -494615257:
			return 37;
			break;
		
		case 615608432:
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case -1660422300:
			return 50;
			break;
		
		case -1357824103:
			return 70;
			break;
		
		case 2144741730:
			return 80;
			break;
		
		case -1568386805:
			return 60;
			break;
		
		case 205991906:
			return 90;
			break;
		
		case -1312131151:
			return 100;
			break;
		
		case 1119849093:
			return 120;
			break;
		
		case 2017895192:
			return 0;
			break;
		
		case 1141786504:
			return 0;
			break;
		
		case -2067956739:
			return 0;
			break;
		
		case -1786099057:
			return 0;
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
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

void func_20(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_21(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_275);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_282;
}

char* func_26(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case -1569615261:
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case 453432689:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case 1593441988:
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case 584646201:
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case 736523883:
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case 324215364:
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case -1074790547:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case -2084633992:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case -1357824103:
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case -1660422300:
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case 2144741730:
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case 487013001:
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case 2017895192:
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case -494615257:
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case 205991906:
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case 856002082:
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case 100416529:
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case -1568386805:
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case -1312131151:
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case 1119849093:
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case -1813897027:
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case -37975472:
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case 741814745:
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case 615608432:
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case 911657153:
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case 883325847:
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case -1833087301:
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case 1945616459:
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case -123497569:
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case -268631733:
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case 966099553:
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case -72657034:
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case -1716189206:
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case 1737195953:
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case 1317494643:
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case -1786099057:
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case -2067956739:
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case 1141786504:
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case 133987706:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -1553120962:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -270015777:
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case -1654528753:
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case -1716589765:
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case -102323637:
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case 1627465347:
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case -1076751822:
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case 137902532:
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case -1834847097:
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case 1198879012:
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case -771403250:
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case -1063057011:
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case -1466123874:
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case 2138347493:
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case -952879014:
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case 984333226:
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case -1420407917:
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case 1672152130:
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case -102973651:
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case 1834241177:
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case 171789620:
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case -656458692:
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case -598887786:
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case 2132975508:
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case -581044007:
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case -619010992:
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case -1951375401:
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case -275439685:
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case 1649403952:
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case -538741184:
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case -1045183535:
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case 148160082:
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case -1853920116:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 727643628:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_28(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, var uParam1)
{
	iVar1 = DLC1::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (DLC1::GET_DLC_WEAPON_DATA(iVar0, uParam1))
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

bool func_29(int iParam0, int iParam1)
{
	if (func_42() == 0)
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 414 && func_39(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	uVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return GAMEPLAY::IS_BIT_SET(uVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 32);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	iVar0 = func_34(func_36(iParam0), iParam1, 0);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_35(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_35(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

int func_36(int iParam0)
{
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2419;
				break;
		}
	}
	return 11511;
}

int func_37()
{
	return Global_30769;
}

int func_38(int iParam0)
{
	return (iParam0 / 32);
}

int func_39(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_35(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 17;
			break;
		
		case 1593441988:
			return 19;
			break;
		
		case 584646201:
			return 23;
			break;
		
		case -1716589765:
			return 21;
			break;
		
		case 736523883:
			return 27;
			break;
		
		case 324215364:
			return 25;
			break;
		
		case -1074790547:
			return 31;
			break;
		
		case -2084633992:
			return 33;
			break;
		
		case -1357824103:
			return 35;
			break;
		
		case -1660422300:
			return 37;
			break;
		
		case 2144741730:
			return 39;
			break;
		
		case 487013001:
			return 43;
			break;
		
		case 2017895192:
			return 45;
			break;
		
		case -494615257:
			return 49;
			break;
		
		case 205991906:
			return 55;
			break;
		
		case 100416529:
			return 53;
			break;
		
		case -1568386805:
			return 59;
			break;
		
		case -1312131151:
			return 61;
			break;
		
		case 1119849093:
			return 63;
			break;
		
		case -1813897027:
			return 65;
			break;
		
		case -37975472:
			return 67;
			break;
		
		case 741814745:
			return 69;
			break;
		
		case 615608432:
			return 71;
			break;
		
		case 883325847:
			return 74;
			break;
		
		case -72657034:
			return 73;
			break;
		
		case -1716189206:
			return 1;
			break;
		
		case 1737195953:
			return 3;
			break;
		
		case 1317494643:
			return 11;
			break;
		
		case -1786099057:
			return 13;
			break;
		
		case -2067956739:
			return 5;
			break;
		
		case 1141786504:
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case -270015777:
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case -1654528753:
			return 47;
			break;
		
		case -102323637:
			return 142;
			break;
		
		case -1063057011:
			return 282;
			break;
		
		case -1076751822:
			return 144;
			break;
		
		case -771403250:
			return 280;
			break;
		
		case 2132975508:
			return 284;
			break;
		
		case 1627465347:
			return 286;
			break;
		
		case 137902532:
			return 309;
			break;
		
		case -1834847097:
			return 307;
			break;
		
		case -1466123874:
			return 313;
			break;
		
		case 2138347493:
			return 311;
			break;
		
		case 1198879012:
			return 301;
			break;
		
		case 984333226:
			return 325;
			break;
		
		case -952879014:
			return 327;
			break;
		
		case -1420407917:
			return 331;
			break;
		
		case 1672152130:
			return 333;
			break;
		
		case -102973651:
			return 329;
			break;
		
		case 171789620:
			return 335;
			break;
		
		case -656458692:
			return 337;
			break;
		
		case -598887786:
			return 339;
			break;
		
		case -581044007:
			return 341;
			break;
		
		case -619010992:
			return 343;
			break;
		
		case -275439685:
			return 348;
			break;
		
		case 1649403952:
			return 346;
			break;
		
		case -1951375401:
			return 350;
			break;
		
		case -1045183535:
			return 353;
			break;
		
		case -538741184:
			return 355;
			break;
		
		case 317205821:
			return 360;
			break;
		
		case -1121678507:
			return 366;
			break;
		
		case 125959754:
			return 364;
			break;
		
		case -853065399:
			return 362;
			break;
		
		case -1169823560:
			return 368;
			break;
		
		case -1810795771:
			return 370;
			break;
		
		case 419712736:
			return 9;
			break;
		
		case 961495388:
			return 31;
			break;
		
		case -86904375:
			return 33;
			break;
		
		case -608341376:
			return 39;
			break;
		
		case 177293209:
			return 55;
			break;
		
		case -1075685676:
			return 17;
			break;
		
		case 2024373456:
			return 27;
			break;
		
		case -2066285827:
			return 47;
			break;
		
		case 1785463520:
			return 327;
			break;
		
		case 1432025498:
			return 43;
			break;
		
		case -879347409:
			return 353;
			break;
		
		case -2009644972:
			return 144;
			break;
		
		case -1768145561:
			return 282;
			break;
		
		case -1746263880:
			return 394;
			break;
		
		case -1355376991:
			return 402;
			break;
		
		case 1198256469:
			return 404;
			break;
		
		case -1238556825:
			return 406;
			break;
		
		case 940833800:
			return 400;
			break;
		
		case -1853920116:
			return 410;
			break;
		
		case 727643628:
			return 408;
			break;
	}
	return 414;
}

bool func_41()
{
	return Global_1312856;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_44()
{
	return func_43(func_143() + 1);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 615608432:
			bVar0 = true;
			iVar3 = 493;
			break;
		
		case 1141786504:
			bVar0 = true;
			iVar3 = 247;
			break;
		
		case -1786099057:
			bVar0 = true;
			iVar3 = 240;
			break;
		
		case -2067956739:
			bVar0 = true;
			iVar3 = 212;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(PLAYER::PLAYER_ID());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2024373456:
			switch (iParam0)
			{
				case -452809877:
					return 1;
					break;
				
				case 1038927834:
					return 2;
					break;
				
				case -653246751:
					return 4;
					break;
				
				case -1520117877:
					return 8;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -2101279869:
					return 2;
					break;
				
				case -1869205321:
					return 4;
					break;
				
				case 277524638:
					return 8;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1060929921:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case -1018236364:
					return 4;
					break;
				
				case -1243457701:
					return 8;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case 77277509:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case 1134861606:
					return 4;
					break;
				
				case 1447477866:
					return 8;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 77277509:
					return 1;
					break;
				
				case -966040254:
					return 2;
					break;
				
				case -2093598721:
					return 4;
					break;
				
				case -1958983669:
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2024373456:
		case 177293209:
		case -86904375:
		case 961495388:
		case -608341376:
			switch (iParam0)
			{
				case -1181482284:
					return 1;
					break;
				
				case -932732805:
					return 2;
					break;
				
				case -569259057:
					return 4;
					break;
				
				case -326080308:
					return 7;
					break;
				
				case 48731514:
					return 16;
					break;
				
				case 880736428:
					return 32;
					break;
				
				case 1303784126:
					return 64;
					break;
				
				case 1602080333:
					return 1;
					break;
				
				case 1764221345:
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 16;
				
				case -316253668:
					return 32;
				
				case 899381934:
					return 2;
				
				case 1709866683:
					return 1;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 16;
				
				case -640439150:
					return 32;
				
				case 899381934:
					return 2;
				
				case -1489156508:
					return 1;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 16;
				
				case -696561875:
					return 32;
				
				case 899381934:
					return 2;
				
				case -1023114086:
					return 1;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 16;
				
				case 614078421:
					return 32;
				
				case 899381934:
					return 2;
				
				case -1023114086:
					return 1;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 16;
				
				case 283556395:
					return 32;
				
				case 899381934:
					return 2;
				
				case -1657815255:
					return 64;
				
				case -1489156508:
					return 1;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 16;
				
				case -1152981993:
					return 32;
				
				case 2076495324:
					return 2;
				
				case -1489156508:
					return 1;
				
				case -1657815255:
					return 64;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 16;
				
				case 889808635:
					return 32;
				
				case 2076495324:
					return 2;
				
				case -1023114086:
					return 1;
				
				case 1019656791:
					return 64;
				
				case 2043113590:
					return 256;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 16;
				
				case -1323216997:
					return 32;
				
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1657815255:
					return 64;
				
				case -1489156508:
					return 1;
				
				case -604986051:
					return 256;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 16;
				
				case -1861183855:
					return 32;
				
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1596416958:
					return 64;
				
				case -2089531990:
					return 1;
				
				case -1167922891:
					return 256;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 16;
				
				case 2089537806:
					return 32;
				
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1596416958:
					return 64;
				
				case -1489156508:
					return 1;
				
				case 1801039530:
					return 256;
				
				default:
			}
			break;
		
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 16;
				
				case -1284994289:
					return 32;
				
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1439939148:
					return 64;
				
				case -2089531990:
					return 1;
				
				default:
			}
			break;
		
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 16;
				
				case 1694090795:
					return 32;
				
				case 899381934:
					return 2;
				
				case -1023114086:
					return 1;
				
				default:
			}
			break;
		
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 16;
				
				case 2063610803:
					return 32;
				
				default:
			}
			break;
		
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 16;
				
				case -1899902599:
					return 32;
				
				case 2076495324:
					return 2;
				
				case -1439939148:
					return 64;
				
				case -2089531990:
					return 1;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 16;
				
				case -2112517305:
					return 32;
				
				case 1006677997:
					return 64;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 16;
				
				case -691692330:
					return 32;
				
				case 202788691:
					return 128;
				
				case -1596416958:
					return 64;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 1;
				
				case 2076495324:
					return 2;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 16;
				
				case -2034401422:
					return 32;
				
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -2089531990:
					return 1;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1489156508:
					return 1;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam0)
			{
				case -1135289737:
					return 4;
				
				case -767279652:
					return 64;
				
				case -1489156508:
					return 1;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam0)
			{
				case -1135289737:
					return 4;
				
				case -767279652:
					return 64;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 128;
				
				case 2076495324:
					return 2;
				
				case -1439939148:
					return 64;
					break;
			}
			break;
		
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 16;
				
				case 867832552:
					return 32;
				
				case -1023114086:
					return 1;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 16;
				
				case -355941776:
					return 32;
					break;
			}
			break;
		
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 16;
				
				case -1759709443:
					return 32;
				
				case 2076495324:
					return 2;
				
				case -1489156508:
					return 1;
				
				case 202788691:
					return 128;
				
				case -2000168365:
					return 256;
					break;
			}
			break;
		
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 16;
				
				case -855823675:
					return 32;
				
				case 471997210:
					return 64;
				
				case 2076495324:
					return 2;
				
				case -2089531990:
					return 1;
				
				case 202788691:
					return 128;
					break;
			}
			break;
		
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 16;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 16;
				
				case 860508675:
					return 32;
				
				case -1439939148:
					return 64;
				
				case 2076495324:
					return 2;
				
				case 202788691:
					return 128;
				
				case 1857603803:
					return 256;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 16;
				
				case -1188271751:
					return 32;
				
				case -1023114086:
					return 1;
				
				case -1444295948:
					return 256;
					break;
			}
			break;
		
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 16;
				
				case 1509923832:
					return 32;
				
				case -972590066:
					return 256;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 16;
				
				case -1820405577:
					return 32;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 16;
					break;
				
				case 1591132456:
					return 32;
					break;
				
				case 1329061674:
					return 256;
					break;
				
				case -2046910199:
					return 256;
					break;
				
				case 733837882:
					return 256;
					break;
				
				case 634039983:
					return 256;
					break;
				
				case 1140676955:
					return 2;
					break;
				
				case -1898661008:
					return 128;
					break;
				
				case 1709866683:
					return 1;
					break;
				
				case 568543123:
					return 128;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 16;
					break;
				
				case -1182573778:
					return 32;
					break;
				
				case 190476639:
					return 256;
					break;
				
				case 974903034:
					return 256;
					break;
				
				case -644734235:
					return 256;
					break;
				
				case 2146055916:
					return 256;
					break;
				
				case 2076495324:
					return 2;
					break;
				
				case -1613015470:
					return 64;
					break;
				
				case -452809877:
					return 4;
					break;
				
				case 1038927834:
					return 64;
					break;
				
				case -1023114086:
					return 8;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 16;
					break;
				
				case 752418717:
					return 32;
					break;
				
				case -130689324:
					return 256;
					break;
				
				case -1981031769:
					return 256;
					break;
				
				case 1005144310:
					return 256;
					break;
				
				case 247526935:
					return 256;
					break;
				
				case -767279652:
					return 4;
					break;
				
				case -1135289737:
					return 64;
					break;
				
				case -1233121104:
					return 8;
					break;
				
				case 776198721:
					return 8;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 16;
					break;
				
				case 400507625:
					return 32;
					break;
				
				case 696788003:
					return 256;
					break;
				
				case 1475288264:
					return 256;
					break;
				
				case -1020871238:
					return 256;
					break;
				
				case -161179835:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case 1108334355:
					return 64;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 16;
					break;
				
				case -785724817:
					return 32;
					break;
				
				case -1478681000:
					return 256;
					break;
				
				case 1675665560:
					return 256;
					break;
				
				case -76490669:
					return 256;
					break;
				
				case -282298175:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case 2076495324:
					return 2;
					break;
				
				case 1108334355:
					return 64;
					break;
				
				case 77277509:
					return 4;
					break;
				
				case -966040254:
					return 8;
					break;
				
				case -1489156508:
					return 1;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 16;
					break;
				
				case 1574296533:
					return 32;
					break;
				
				case 626875735:
					return 256;
					break;
				
				case 1141059345:
					return 256;
					break;
				
				case 1025884839:
					return 256;
					break;
				
				case 391640422:
					return 256;
					break;
				
				case -1654288262:
					return 128;
					break;
				
				case 2076495324:
					return 2;
					break;
				
				case 1108334355:
					return 64;
					break;
				
				case 77277509:
					return 4;
					break;
				
				case -966040254:
					return 8;
					break;
				
				case -2089531990:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
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

var func_56(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 681;
				break;
			
			case 1:
				return 682;
				break;
			
			case 2:
				return 683;
				break;
			
			case 3:
				return 684;
				break;
			
			case 4:
				return 1750;
				break;
			
			case 5:
				return 2432;
				break;
			
			case 6:
				return 2824;
				break;
			
			case 7:
				return 5498;
				break;
			
			case 8:
				return 5502;
				break;
			
			case 9:
				return 5506;
			
			case 10:
				return 5619;
			
			case 11:
				return 5623;
				break;
			
			case 12:
				return 5627;
				break;
			
			case 13:
				return 5631;
				break;
			
			case 14:
				return 6370;
				break;
			
			case 15:
				return 6493;
				break;
			
			case 16:
				return 6513;
				break;
			
			case 17:
				return 6519;
				break;
		}
	}
	return 1750;
}

char* func_58(int iParam0, int iParam1)
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
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < DLC1::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (DLC1::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_6));
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

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	uVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			GAMEPLAY::SET_BIT(&uVar0, func_30(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&uVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), uVar0, -1, 1, 0);
	}
}

void func_61(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
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

var func_63(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_94(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	uVar0 = func_68(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			GAMEPLAY::SET_BIT(&uVar0, func_30(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&uVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), uVar0, -1, 1, 0);
	}
}

int func_67(int iParam0, int iParam1)
{
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 810;
				break;
			
			case 1:
				return 811;
				break;
			
			case 2:
				return 812;
				break;
			
			case 3:
				return 813;
				break;
			
			case 4:
				return 1751;
				break;
			
			case 5:
				return 2433;
				break;
			
			case 6:
				return 2825;
				break;
			
			case 7:
				return 5499;
				break;
			
			case 8:
				return 5503;
				break;
			
			case 9:
				return 5507;
				break;
			
			case 10:
				return 5620;
				break;
			
			case 11:
				return 5624;
				break;
			
			case 12:
				return 5628;
				break;
			
			case 13:
				return 5632;
				break;
			
			case 14:
				return 6371;
				break;
			
			case 15:
				return 6494;
				break;
			
			case 16:
				return 6514;
				break;
			
			case 17:
				return 6520;
				break;
			}
	}
	return 11511;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_84(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0)
			{
				func_77(16, func_58(iParam0, 0), func_81(iParam0, 0), func_80(iParam1), func_79(iParam1), -1, 0, 0, 0, -1, 0);
				func_75(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_84(iParam0, iParam1, 0);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, -1))
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_74(iParam0, iParam1, -1))
	{
		func_71(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	uVar0 = func_73(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			GAMEPLAY::SET_BIT(&uVar0, func_30(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&uVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), uVar0, -1, 1, 0);
	}
}

int func_72(int iParam0, int iParam1)
{
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 654;
				break;
			
			case 1:
				return 655;
				break;
			
			case 2:
				return 656;
				break;
			
			case 3:
				return 657;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2826;
				break;
			
			case 7:
				return 5500;
				break;
			
			case 8:
				return 5504;
				break;
			
			case 9:
				return 5508;
				break;
			
			case 10:
				return 5621;
				break;
			
			case 11:
				return 5625;
				break;
			
			case 12:
				return 5629;
				break;
			
			case 13:
				return 5633;
				break;
			
			case 14:
				return 6372;
				break;
			
			case 15:
				return 6495;
				break;
			
			case 16:
				return 6515;
				break;
			
			case 17:
				return 6521;
				break;
		}
	}
	return 11511;
}

var func_73(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			GAMEPLAY::SET_BIT(&(Global_2547060.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2547060.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
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
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	iVar0 = func_78(&Global_1385029);
	Global_1385029[iVar0] = iParam0;
	StringCopy(&(Global_1385029[iVar0].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0].f_49), sParam2, 64);
	Global_1385029[iVar0].f_97 = iParam5;
	Global_1385029[iVar0].f_104 = iParam9;
	Global_1385029[iVar0].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0].f_98), sParam8, 24);
	}
}

int func_78(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
			return "MPWeaponsUnusedForNow";
			break;
		
		case 911657153:
			return "MPWeaponsGang0_small";
			break;
		
		case 453432689:
			return "MPWeaponsGang1_small";
			break;
		
		case 584646201:
			return "MPWeaponsGang1_small";
			break;
		
		case -72657034:
			return "MPWeaponsGang1_small";
			break;
		
		case 736523883:
			return "MPWeaponsGang0_small";
			break;
		
		case 100416529:
			return "MPWeaponsGang0_small";
			break;
		
		case -2084633992:
			return "MPWeaponsGang0_small";
			break;
		
		case -1063057011:
			return "MPWeaponsCommon_small";
			break;
		
		case -1076751822:
			return "MPWeaponsCommon_small";
			break;
		
		case 487013001:
			return "MPWeaponsCommon_small";
			break;
		
		case -1813897027:
			return "MPWeaponsGang0_small";
			break;
		
		case 741814745:
			return "MPWeaponsCommon_small";
			break;
		
		case -1568386805:
			return "MPWeaponsCommon_small";
			break;
		
		case 2144741730:
			return "MPWeaponsGang0_small";
			break;
		
		case -494615257:
			return "MPWeaponsCommon_small";
			break;
		
		case -1312131151:
			return "MPWeaponsCommon_small";
			break;
		
		case 205991906:
			return "MPWeaponsGang0_small";
			break;
		
		case -1357824103:
			return "MPWeaponsGang0_small";
			break;
		
		case 324215364:
			return "MPWeaponsCommon_small";
			break;
		
		case -1074790547:
			return "MPWeaponsGang1_small";
			break;
		
		case -1660422300:
			return "MPWeaponsGang1_small";
			break;
		
		case 2017895192:
			return "MPWeaponsGang1_small";
			break;
		
		case 1119849093:
			return "MPWeaponsGang1_small";
			break;
		
		case 1593441988:
			return "MPWeaponsCommon_small";
			break;
		
		case -37975472:
			return "MPWeaponsCommon_small";
			break;
		
		case 527765612:
			return "MPWeaponsCommon_small";
			break;
		
		case -123497569:
			return "MPWeaponsCommon_small";
			break;
		
		case 615608432:
			return "MPWeaponsUnusedForNow";
			break;
		
		case 883325847:
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
			return "W_ME_KNIFE_01";
			break;
		
		case 911657153:
			return "W_PI_Stungun";
			break;
		
		case 453432689:
			return "W_PI_Pistol";
			break;
		
		case -72657034:
			return "Parachute_Main";
			break;
		
		case 736523883:
			return "W_SB_SMG";
			break;
		
		case 100416529:
			return "W_SR_SniperRifle";
			break;
		
		case -2084633992:
			return "W_AR_CarbineRifle";
			break;
		
		case -1063057011:
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case -1076751822:
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case 487013001:
			return "W_SG_PumpShotgun";
			break;
		
		case -1813897027:
			return "W_Ex_GrenadeFrag";
			break;
		
		case 741814745:
			return "W_Ex_PE";
			break;
		
		case -1568386805:
			return "W_R_GrenadeLauncher";
			break;
		
		case 2144741730:
			return "W_MG_CombatMG";
			break;
		
		case -494615257:
			return "W_SG_AssaultShotgun";
			break;
		
		case 584646201:
			return "W_PI_AppPistol";
			break;
		
		case -1312131151:
			return "W_LR_RPG";
			break;
		
		case 205991906:
			return "W_SR_HeavySniper";
			break;
		
		case -1357824103:
			return "W_AR_AdvancedRifle";
			break;
		
		case 324215364:
			return "W_SB_MicroSMG";
			break;
		
		case -1074790547:
			return "W_AR_AssaultRifle";
			break;
		
		case -1660422300:
			return "W_MG_MG";
			break;
		
		case 2017895192:
			return "W_SG_SAWNOFF";
			break;
		
		case 1119849093:
			return "W_MG_Minigun";
			break;
		
		case 1593441988:
			return "W_PI_CombatPistol";
			break;
		
		case -37975472:
			return "W_Ex_GrenadeSmoke";
			break;
		
		case 883325847:
			return "W_AM_Jerrycan";
			break;
		
		case 615608432:
			return "W_EX_Molotov";
			break;
		
		case 527765612:
			return "rocket";
			break;
		
		case -123497569:
			return "rocket";
			break;
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
			break;
		
		case 1967214384:
			return "WCD_AT_RAIL";
			break;
		
		case 202788691:
			return "WCD_GRIP";
			break;
		
		case 899381934:
			return "WCD_FLASH";
			break;
		
		case 2076495324:
			return "WCD_FLASH";
			break;
		
		case -1657815255:
			return "WCD_SCOPE_MAC";
			break;
		
		case 1019656791:
			return "WCD_SCOPE_MAC";
			break;
		
		case -1439939148:
			return "WCD_SCOPE_SML";
			break;
		
		case 1006677997:
			return "WCD_SCOPE_SML";
			break;
		
		case -1596416958:
			return "WCD_SCOPE_MED";
			break;
		
		case -767279652:
			return "WCD_SCOPE_LRG";
			break;
		
		case -1135289737:
			return "WCD_SCOPE_MAX";
			break;
		
		case -1023114086:
			return "WCD_PI_SUPP";
			break;
		
		case 1709866683:
			return "WCD_PI_SUPP";
			break;
		
		case -2089531990:
			return "WCD_AR_SUPP";
			break;
		
		case -1489156508:
			return "WCD_AR_SUPP2";
			break;
		
		case -435637410:
			return "WCD_SR_SUPP";
			break;
		
		case -19858063:
			return "WCD_P_CLIP1";
			break;
		
		case -316253668:
			return "WCD_P_CLIP2";
			break;
		
		case 119648377:
			return "WCD_CP_CLIP1";
			break;
		
		case -696561875:
			return "WCD_CP_CLIP2";
			break;
		
		case 834974250:
			return "WCD_AP_CLIP1";
			break;
		
		case 614078421:
			return "WCD_AP_CLIP2";
			break;
		
		case -884429072:
			return "WCDMSMG_CLIP1";
			break;
		
		case 283556395:
			return "WCDMSMG_CLIP2";
			break;
		
		case 643254679:
			return "WCD_SMG_CLIP1";
			break;
		
		case 889808635:
			return "WCD_SMG_CLIP2";
			break;
		
		case -1101075946:
			return "WCD_AR_CLIP1";
			break;
		
		case -1323216997:
			return "WCD_AR_CLIP2";
			break;
		
		case -1614924820:
			return "WCD_CR_CLIP1";
			break;
		
		case -1861183855:
			return "WCD_CR_CLIP2";
			break;
		
		case -91250417:
			return "WCD_ADR_CLIP1";
			break;
		
		case -1899902599:
			return "WCD_ADR_CLIP2";
			break;
		
		case -197857404:
			return "WCD_MG_CLIP1";
			break;
		
		case -2112517305:
			return "WCD_MG_CLIP2";
			break;
		
		case -503336118:
			return "WCDCMG_CLIP1";
			break;
		
		case -691692330:
			return "WCDCMG_CLIP2";
			break;
		
		case -1796727865:
			return "WCD_AS_CLIP1";
			break;
		
		case -2034401422:
			return "WCD_AS_CLIP2";
			break;
		
		case -1681506167:
			return "WCD_SR_CLIP1";
			break;
		
		case 1198478068:
			return "WCD_HS_CLIP1";
			break;
		
		case -924946682:
			return "WCD_MIG_CLIP2";
			break;
		
		case -1928132688:
			return "WCD_ASMG_CLIP1";
			break;
		
		case -1152981993:
			return "WCD_ASMG_CLIP2";
			break;
		
		case 580369945:
			return "WCD_P50_CLIP1";
			break;
		
		case -640439150:
			return "WCD_P50_CLIP2";
			break;
		
		case 1319990579:
			return "WCD_VAR_AR";
			break;
		
		case 930927479:
			return "WCD_VAR_ADR";
			break;
		
		case -660892072:
			return "WCD_VAR_CR";
			break;
		
		case -1686714580:
			return "WCD_VAR_AP";
			break;
		
		case -684126074:
			return "WCD_VAR_P";
			break;
		
		case 2008591151:
			return "WCD_VAR_P50";
			break;
		
		case 2053798779:
			return "WCD_VAR_HPST";
			break;
		
		case 663170192:
			return "WCD_VAR_SMG";
			break;
		
		case 1215999497:
			return "WCD_VAR_MSMG";
			break;
		
		case -2052698631:
			return "WCD_VAR_SOF";
			break;
		
		case 1077065191:
			return "WCD_VAR_SNP";
			break;
		
		case 371102273:
			return "WCD_VAR_MKRF";
			break;
		
		case -971770235:
			return "WCD_VAR_DESC";
			break;
		
		case -287703709:
			return "WCD_VAR_DESC";
			break;
		
		case 1351683121:
			return "WCD_VAR_DESC";
			break;
		
		case -1755194916:
			return "WCD_VAR_DESC";
			break;
		
		case 2112683568:
			return "WCD_VAR_DESC";
			break;
		
		case 1062111910:
			return "WCD_VAR_DESC";
			break;
		
		case 146278587:
			return "WCD_VAR_DESC";
			break;
		
		case -494162961:
			return "WCD_VAR_DESC";
			break;
		
		case 2062808965:
			return "WCD_VAR_DESC";
			break;
		
		case 663517359:
			return "WCD_VAR_ASMG";
			break;
		
		case -1470645128:
			return "WCD_VAR_BPR";
			break;
		
		case -1828795171:
			return "WCD_VAR_CBMG";
			break;
		
		case -966439566:
			return "WCD_VAR_CBP";
			break;
		
		case -690308418:
			return "WCD_VAR_MG";
			break;
		
		case -1562927653:
			return "WCD_VAR_PSHT";
			break;
		
		case -2144080721:
			return "WCD_VAR_SNS";
			break;
		
		case 1929467122:
			return "WCD_VAR_SCAR";
			break;
		
		case 1530822070:
			return "WCD_VAR_DESC";
			break;
		
		case -409758110:
			return "WCD_VAR_DESC";
			break;
		
		case -377062173:
			return "WCD_P_CLIP1";
			break;
		
		case 384708672:
			return "WCD_REV_VARB";
			break;
		
		case -1802258419:
			return "WCD_REV_VARG";
			break;
		
		case 2043113590:
			return "WCD_CLIP3";
			break;
		
		case -1167922891:
			return "WCD_CLIP3";
			break;
		
		case -604986051:
			return "WCD_CLIP3";
			break;
		
		case 1623028892:
			return "WCD_VAR_GUN";
			break;
		
		case -829683854:
			return "WCD_CLIP2";
			break;
		
		case -944910075:
			return "WCD_SCOPE_MAC";
			break;
		
		case 1060929921:
			return "WCD_SCOPE_SML";
			break;
		
		case -673450233:
			return "WCD_VAR_RAY18";
			break;
		
		case -2122814295:
			return "WCD_CLIP2";
			break;
		
		case -1828202758:
			return "WCD_PI_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < DLC1::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (DLC1::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_27(&(Var41.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	uVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	uVar0 = Global_2547060.f_991[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	uVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			GAMEPLAY::SET_BIT(&uVar0, func_30(iVar1));
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&uVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), uVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1)
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
				iVar1 = func_28(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < DLC1::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (DLC1::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_86(Var43.f_3))
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

int func_86(int iParam0)
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

bool func_87(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

var func_88(int iParam0, int iParam1)
{
	uVar0 = func_34(func_89(iParam0), iParam1, 0);
	return uVar0;
}

int func_89(int iParam0)
{
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2427;
				break;
		}
	}
	return 11511;
}

bool func_90(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	if (func_42() == 0)
	{
		return 0;
	}
	if (iParam0 != -72657034 && iParam0 != 1834241177)
	{
		if (func_39(func_93(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

var func_91(int iParam0, var uParam1)
{
	uVar0 = func_34(func_92(iParam0), uParam1, 0);
	return uVar0;
}

int func_92(int iParam0)
{
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0 || func_37() == 0) || (func_159() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2418;
				break;
			}
	}
	return 11511;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 18;
			break;
		
		case -1813897027:
			return 66;
			break;
		
		case -37975472:
			return 68;
			break;
		
		case 741814745:
			return 70;
			break;
		
		case 615608432:
			return 72;
			break;
		
		case 453432689:
			return 18;
			break;
		
		case 1593441988:
			return 40;
			break;
		
		case -1716589765:
			return 22;
			break;
		
		case 584646201:
			return 24;
			break;
		
		case 324215364:
			return 26;
			break;
		
		case 736523883:
			return 28;
			break;
		
		case -270015777:
			return 30;
			break;
		
		case -1074790547:
			return 32;
			break;
		
		case -2084633992:
			return 34;
			break;
		
		case -1357824103:
			return 36;
			break;
		
		case -1660422300:
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case 487013001:
			return 44;
			break;
		
		case 2017895192:
			return 46;
			break;
		
		case -1654528753:
			return 48;
			break;
		
		case -494615257:
			return 50;
			break;
		
		case 100416529:
			return 54;
			break;
		
		case 205991906:
			return 56;
			break;
		
		case -1568386805:
			return 60;
			break;
		
		case -1312131151:
			return 62;
			break;
		
		case 1119849093:
			return 64;
			break;
		
		case 911657153:
			return 52;
			break;
		
		case 883325847:
			return 75;
			break;
		
		case -1716189206:
			return 2;
			break;
		
		case 1737195953:
			return 4;
			break;
		
		case 1317494643:
			return 12;
			break;
		
		case -1786099057:
			return 14;
			break;
		
		case -2067956739:
			return 6;
			break;
		
		case 1141786504:
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case 2144741730:
			return 40;
			break;
		
		case -102323637:
			return 143;
			break;
		
		case -1063057011:
			return 283;
			break;
		
		case -1076751822:
			return 145;
			break;
		
		case -771403250:
			return 281;
			break;
		
		case 2132975508:
			return 285;
			break;
		
		case 1627465347:
			return 287;
			break;
		
		case -1834847097:
			return 308;
			break;
		
		case 137902532:
			return 310;
			break;
		
		case 2138347493:
			return 312;
			break;
		
		case -1466123874:
			return 314;
			break;
		
		case 984333226:
			return 326;
			break;
		
		case -952879014:
			return 328;
			break;
		
		case -1420407917:
			return 332;
			break;
		
		case 1672152130:
			return 334;
			break;
		
		case 171789620:
			return 336;
			break;
		
		case -656458692:
			return 338;
			break;
		
		case -598887786:
			return 340;
			break;
		
		case -102973651:
			return 330;
			break;
		
		case -581044007:
			return 342;
			break;
		
		case -619010992:
			return 344;
			break;
		
		case 1649403952:
			return 347;
			break;
		
		case -275439685:
			return 349;
			break;
		
		case -1951375401:
			return 351;
			break;
		
		case -1045183535:
			return 354;
			break;
		
		case -538741184:
			return 356;
			break;
		
		case 317205821:
			return 361;
			break;
		
		case -1121678507:
			return 367;
			break;
		
		case 125959754:
			return 365;
			break;
		
		case -853065399:
			return 363;
			break;
		
		case -1169823560:
			return 369;
			break;
		
		case -1810795771:
			return 371;
			break;
		
		case 419712736:
			return 10;
			break;
		
		case 961495388:
			return 32;
			break;
		
		case -86904375:
			return 34;
			break;
		
		case -608341376:
			return 40;
			break;
		
		case 177293209:
			return 56;
			break;
		
		case -1075685676:
			return 18;
			break;
		
		case 2024373456:
			return 28;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case 1785463520:
			return 328;
			break;
		
		case 1432025498:
			return 44;
			break;
		
		case -879347409:
			return 354;
			break;
		
		case -2009644972:
			return 145;
			break;
		
		case -1768145561:
			return 283;
			break;
		
		case -1746263880:
			return 395;
			break;
		
		case 940833800:
			return 401;
			break;
		
		case -1355376991:
			return 403;
			break;
		
		case 1198256469:
			return 403;
			break;
		
		case -1238556825:
			return 403;
			break;
		
		case -1853920116:
			return 411;
			break;
		
		case 727643628:
			return 409;
			break;
		
		case -1168940174:
			return 413;
			break;
	}
	return 2;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return GAMEPLAY::IS_BIT_SET(uVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
			return 453432689;
		
		case 2024373456:
			return 736523883;
		
		case 961495388:
			return -1074790547;
		
		case -86904375:
			return -2084633992;
		
		case -608341376:
			return 2144741730;
		
		case 177293209:
			return 205991906;
		
		case -2066285827:
			return 2132975508;
		
		case 1785463520:
			return -952879014;
		
		case 1432025498:
			return 487013001;
		
		case -879347409:
			return -1045183535;
		
		case -2009644972:
			return -1076751822;
		
		case -1768145561:
			return -1063057011;
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 177293209:
		case -608341376:
		case 961495388:
		case -86904375:
		case -2009644972:
		case -879347409:
		case -2066285827:
		case -1768145561:
		case 1432025498:
		case 1785463520:
			return 1;
			break;
	}
	return 0;
}

int func_97(var uParam0)
{
	return uParam0->f_281;
}

void func_98(var uParam0, var uParam1)
{
	if (WEAPON::IS_WEAPON_VALID(1317494643) && iLocal_66[10] == uParam1->f_5)
	{
		func_107(1317494643, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1716589765) && iLocal_66[0] == uParam1->f_5)
	{
		func_107(-1716589765, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1654528753) && iLocal_66[1] == uParam1->f_5)
	{
		func_107(-1654528753, uParam0, *uParam1, 0);
	}
	if (func_106(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(2017895192) && iLocal_66[2] == uParam1->f_5)
		{
			func_107(2017895192, uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(-102323637) && iLocal_66[3] == uParam1->f_5)
	{
		func_107(-102323637, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1076751822) && iLocal_66[4] == uParam1->f_5)
	{
		func_107(-1076751822, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1627465347) && iLocal_66[11] == uParam1->f_5)
	{
		func_107(1627465347, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-771403250) && iLocal_66[7] == uParam1->f_5)
	{
		func_107(-771403250, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1063057011) && iLocal_66[5] == uParam1->f_5)
	{
		func_107(-1063057011, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(2132975508) && iLocal_66[6] == uParam1->f_5)
	{
		func_107(2132975508, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1834847097) && iLocal_66[8] == uParam1->f_5)
	{
		func_107(-1834847097, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(137902532) && iLocal_66[9] == uParam1->f_5)
	{
		func_107(137902532, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(2138347493) && iLocal_66[14] == uParam1->f_5)
	{
		func_107(2138347493, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1466123874) && iLocal_66[13] == uParam1->f_5)
	{
		func_107(-1466123874, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1198879012) && iLocal_66[12] == uParam1->f_5)
	{
		func_107(1198879012, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(984333226) && iLocal_66[15] == uParam1->f_5)
	{
		func_107(984333226, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-952879014) && iLocal_66[16] == uParam1->f_5)
	{
		func_107(-952879014, uParam0, *uParam1, 0);
	}
	if (func_105() || Global_262145.f_19752)
	{
		if (WEAPON::IS_WEAPON_VALID(-102973651) && iLocal_66[22] == uParam1->f_5)
		{
			func_107(-102973651, uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(-1420407917) && iLocal_66[17] == uParam1->f_5)
	{
		func_107(-1420407917, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1672152130) && iLocal_66[18] == uParam1->f_5)
	{
		func_107(1672152130, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(171789620) && iLocal_66[19] == uParam1->f_5)
	{
		func_107(171789620, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-598887786) && iLocal_66[20] == uParam1->f_5)
	{
		func_107(-598887786, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-656458692) && iLocal_66[21] == uParam1->f_5)
	{
		func_107(-656458692, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-581044007) && iLocal_66[23] == uParam1->f_5)
	{
		func_107(-581044007, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-619010992) && iLocal_66[24] == uParam1->f_5)
	{
		func_107(-619010992, uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_11577 && WEAPON::IS_WEAPON_VALID(-1951375401)) && iLocal_66[25] == uParam1->f_5)
	{
		func_107(-1951375401, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1045183535) && iLocal_66[26] == uParam1->f_5)
	{
		func_107(-1045183535, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-538741184) && iLocal_66[27] == uParam1->f_5)
	{
		func_107(-538741184, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-275439685) && iLocal_66[28] == uParam1->f_5)
	{
		func_107(-275439685, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1649403952) && iLocal_66[29] == uParam1->f_5)
	{
		func_107(1649403952, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(317205821) && iLocal_66[30] == uParam1->f_5)
	{
		func_107(317205821, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-853065399) && iLocal_66[31] == uParam1->f_5)
	{
		func_107(-853065399, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(125959754) && iLocal_66[32] == uParam1->f_5)
	{
		func_107(125959754, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1121678507) && iLocal_66[33] == uParam1->f_5)
	{
		func_107(-1121678507, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1169823560) && iLocal_66[34] == uParam1->f_5)
	{
		func_107(-1169823560, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1810795771) && iLocal_66[35] == uParam1->f_5)
	{
		func_107(-1810795771, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(419712736) && iLocal_66[36] == uParam1->f_5)
	{
		func_107(419712736, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(961495388) && iLocal_66[37] == uParam1->f_5)
	{
		func_107(961495388, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-86904375) && iLocal_66[38] == uParam1->f_5)
	{
		func_107(-86904375, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-608341376) && iLocal_66[39] == uParam1->f_5)
	{
		func_107(-608341376, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(177293209) && iLocal_66[40] == uParam1->f_5)
	{
		func_107(177293209, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1075685676) && iLocal_66[41] == uParam1->f_5)
	{
		func_107(-1075685676, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(2024373456) && iLocal_66[42] == uParam1->f_5)
	{
		func_107(2024373456, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-2066285827) && iLocal_66[43] == uParam1->f_5)
	{
		func_107(-2066285827, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1785463520) && iLocal_66[44] == uParam1->f_5)
	{
		func_107(1785463520, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(1432025498) && iLocal_66[45] == uParam1->f_5)
	{
		func_107(1432025498, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-879347409) && iLocal_66[46] == uParam1->f_5)
	{
		func_107(-879347409, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-2009644972) && iLocal_66[47] == uParam1->f_5)
	{
		func_107(-2009644972, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1768145561) && iLocal_66[48] == uParam1->f_5)
	{
		func_107(-1768145561, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1746263880) && iLocal_66[49] == uParam1->f_5)
	{
		if (Global_262145.f_22936 && (func_104() || Global_1694124))
		{
			func_107(-1746263880, uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(940833800) && iLocal_66[50] == uParam1->f_5)
	{
		if (Global_262145.f_23635 && func_100())
		{
			func_107(940833800, uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(1198256469) && iLocal_66[51] == uParam1->f_5) && Global_262145.f_25970)
	{
		func_107(1198256469, uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(-1238556825) && iLocal_66[52] == uParam1->f_5) && Global_262145.f_25969)
	{
		func_107(-1238556825, uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(-1355376991) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(-1355376991, -1, 0)) || Global_262145.f_24978)) && iLocal_66[53] == uParam1->f_5)
	{
		func_107(-1355376991, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(727643628) && iLocal_66[54] == uParam1->f_5)
	{
		func_107(727643628, uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(-1853920116) && iLocal_66[55] == uParam1->f_5)
	{
		if (Global_262145.f_27592 && (func_99() || Global_1694130))
		{
			func_107(-1853920116, uParam0, *uParam1, 0);
		}
	}
}

int func_99()
{
	if (func_17(28158, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	if (func_101(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	iVar1 = func_103(iParam0, iParam1);
	uVar2 = func_102(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_102(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_104()
{
	if (func_101(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
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

int func_106(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_668.f_1312, 2))
		{
			return 1;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!GAMEPLAY::IS_PS3_VERSION() && !GAMEPLAY::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_0x1353F87E89946207())
		{
			return 0;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		return 1;
	}
	return 0;
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0), 16);
	if (((iParam0 == -1746263880 || iParam0 == 1649403952) || iParam0 == 125959754) || iParam0 == -952879014)
	{
		StringCopy(&cVar4, func_137(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar4, func_137(iParam0, 0), 16);
	}
	fVar8 = func_134(iParam0);
	uVar9 = func_133(iParam0, iParam2);
	uVar10 = func_132(iParam0, iParam2);
	iVar11 = func_131(iParam0, iParam2);
	uVar12 = func_130(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var13);
	Var13.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar31 = false;
	iVar30 = 0;
	while (iVar30 <= 8)
	{
		if (uParam1->f_1[iVar30] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(1623028892, func_95(iParam0), -1))
				{
					bVar31 = true;
				}
				else
				{
					bVar31 = false;
				}
			}
			else if (func_90(iParam0, iParam2, 0))
			{
				bVar31 = true;
				if (bVar31)
				{
				}
			}
			else
			{
				bVar31 = false;
			}
			iVar29 = 0;
			while (iVar29 <= 35)
			{
				iVar28 = func_85(iParam0, iVar29);
				if (iVar28 != 0)
				{
					if (func_53(iVar28, iParam0, iParam2) && bVar31)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar28, &Var18))
						{
							Var23 = (Var23 + Var18);
							Var23.f_1 = (Var23.f_1 + Var18.f_1);
							Var23.f_3 = (Var23.f_3 + Var18.f_3);
							Var23.f_4 = (Var23.f_4 + Var18.f_4);
						}
					}
					if (func_64(iVar28, iParam0, iParam2))
					{
						if (func_129(iVar28))
						{
							Var23.f_2 = func_128(iParam0);
						}
						else if (func_127(iVar28))
						{
							Var23.f_2 = func_126(iParam0);
						}
					}
					if (func_94(iVar28, iParam0, iParam2))
					{
					}
				}
				iVar29++;
			}
			if (Var23.f_2 == 0)
			{
				Var23.f_2 = Var13.f_2;
			}
			func_125(iVar30, &Var0, &cVar4, uParam1);
			func_124(iVar30, Var13, uParam1);
			func_123(iVar30, Var23, uParam1);
			if (func_15(iParam0))
			{
				func_122(iVar30, -1, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, -1, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, -1, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			else
			{
				func_122(iVar30, Var13.f_3, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, Var13.f_4, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, Var13.f_2, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			func_116(iVar30, uVar10, uParam1);
			func_115(iVar30, uVar9, uParam1);
			if (func_15(iParam0))
			{
				func_114(iVar30, -1f, uParam1);
				func_113(iVar30, -1, uParam1);
			}
			else
			{
				func_114(iVar30, fVar8, uParam1);
				func_113(iVar30, iVar11, uParam1);
			}
			func_112(iVar30, uVar12, uParam1);
			func_111(iVar30, Var13.f_1, uParam1);
			func_110(iVar30, Var23.f_1, uParam1);
			func_109(iVar30, iParam0, uParam1);
			func_108(iParam2, uParam1);
			uParam1->f_1[iVar30] = 1;
			iVar30 = 9;
		}
		iVar30++;
	}
}

void func_108(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_109(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_112(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_113(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_114(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_118(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_120(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_125(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0]), sParam2, 16);
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 16;
		
		case 1593441988:
			return 16;
		
		case 584646201:
			return 36;
		
		case -1075685676:
			return 16;
		
		case 324215364:
			return 30;
		
		case 736523883:
			return 60;
		
		case 2024373456:
			return 60;
		
		case -1074790547:
			return 60;
		
		case -2084633992:
			return 60;
		
		case -1357824103:
			return 60;
		
		case 961495388:
			return 60;
		
		case -86904375:
			return 60;
		
		case -1660422300:
			return 100;
		
		case 2144741730:
			return 200;
		
		case -608341376:
			return 200;
		
		case -494615257:
			return 32;
		
		case -1716589765:
			return 12;
		
		case -270015777:
			return 60;
		
		case -1076751822:
			return 12;
		
		case -1063057011:
			return 60;
		
		case 2132975508:
			return 60;
		
		case -771403250:
			return 36;
		
		case 137902532:
			return 14;
		
		case 1627465347:
			return 50;
		
		case -952879014:
			return 16;
		
		case 984333226:
			return 12;
		
		case 171789620:
			return 60;
		
		case 1649403952:
			return 60;
		
		case -619010992:
			return 20;
		
		case -1121678507:
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case -316253668:
			return 1;
			break;
		
		case -696561875:
			return 1;
			break;
		
		case 614078421:
			return 1;
			break;
		
		case 283556395:
			return 1;
			break;
		
		case 889808635:
			return 1;
			break;
		
		case -1323216997:
			return 1;
			break;
		
		case -1861183855:
			return 1;
			break;
		
		case -1899902599:
			return 1;
			break;
		
		case -2112517305:
			return 1;
			break;
		
		case -691692330:
			return 1;
			break;
		
		case -2034401422:
			return 1;
			break;
		
		case -1152981993:
			return 1;
			break;
		
		case -640439150:
			return 1;
			break;
		
		case -507117574:
			return 1;
			break;
		
		case 1048471894:
			return 1;
			break;
		
		case 1824470811:
			return 1;
			break;
		
		case 2089537806:
			return 1;
			break;
		
		case -1284994289:
			return 1;
			break;
		
		case 1694090795:
			return 1;
			break;
		
		case 2063610803:
			return 1;
			break;
		
		case 867832552:
			return 1;
			break;
		
		case -355941776:
			return 1;
			break;
		
		case -1759709443:
			return 1;
			break;
		
		case -855823675:
			return 1;
			break;
		
		case 860508675:
			return 1;
			break;
		
		case 1509923832:
			return 1;
			break;
		
		case -1188271751:
			return 1;
			break;
		
		case -785724817:
			return 1;
			break;
		
		case 1574296533:
			return 1;
			break;
		
		case 400507625:
			return 1;
			break;
		
		case 752418717:
			return 1;
			break;
		
		case 1591132456:
			return 1;
			break;
		
		case -1182573778:
			return 1;
			break;
		
		case -1820405577:
			return 1;
			break;
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 736523883:
			return 100;
		
		case -1074790547:
			return 100;
		
		case -2084633992:
			return 100;
		
		case 2024373456:
			return 100;
		
		case 961495388:
			return 100;
		
		case -86904375:
			return 100;
		
		case -1063057011:
			return 100;
		
		case 984333226:
			return 30;
		
		case 171789620:
			return 100;
		
		case 1649403952:
			return 100;
		
		case -619010992:
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case -604986051:
			return 1;
			break;
		
		case -1167922891:
			return 1;
			break;
		
		case 1857603803:
			return 1;
			break;
		
		case -972590066:
			return 1;
			break;
		
		case -2000168365:
			return 1;
			break;
		
		case -1444295948:
			return 1;
			break;
		
		case 2043113590:
			return 1;
			break;
		
		case 1801039530:
			return 1;
			break;
	}
	return 0;
}

float func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 453432689:
		case -1075685676:
			return (SYSTEM::TO_FLOAT(func_34(250, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(251, iParam1, 0)));
		
		case 1593441988:
			return (SYSTEM::TO_FLOAT(func_34(260, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(261, iParam1, 0)));
		
		case 584646201:
			return (SYSTEM::TO_FLOAT(func_34(280, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(281, iParam1, 0)));
		
		case 324215364:
			return (SYSTEM::TO_FLOAT(func_34(290, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(291, iParam1, 0)));
		
		case 736523883:
		case 2024373456:
			return (SYSTEM::TO_FLOAT(func_34(300, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(301, iParam1, 0)));
		
		case -1074790547:
		case 961495388:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case -2084633992:
		case -86904375:
			return (SYSTEM::TO_FLOAT(func_34(329, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(330, iParam1, 0)));
		
		case -1357824103:
			return (SYSTEM::TO_FLOAT(func_34(338, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(339, iParam1, 0)));
		
		case -1660422300:
			return (SYSTEM::TO_FLOAT(func_34(347, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(348, iParam1, 0)));
		
		case 2144741730:
		case -608341376:
			return (SYSTEM::TO_FLOAT(func_34(356, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(357, iParam1, 0)));
		
		case 487013001:
			return (SYSTEM::TO_FLOAT(func_34(374, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(375, iParam1, 0)));
		
		case 2017895192:
			return (SYSTEM::TO_FLOAT(func_34(383, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(384, iParam1, 0)));
		
		case -494615257:
			return (SYSTEM::TO_FLOAT(func_34(402, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(403, iParam1, 0)));
		
		case 100416529:
		case 177293209:
			return (SYSTEM::TO_FLOAT(func_34(421, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(422, iParam1, 0)));
		
		case 205991906:
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case -1568386805:
			return (SYSTEM::TO_FLOAT(func_34(441, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(442, iParam1, 0)));
		
		case -1312131151:
			return (SYSTEM::TO_FLOAT(func_34(448, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(449, iParam1, 0)));
		
		case 1119849093:
			return (SYSTEM::TO_FLOAT(func_34(455, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(456, iParam1, 0)));
		
		case -1813897027:
			return (SYSTEM::TO_FLOAT(func_34(464, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(465, iParam1, 0)));
		
		case -37975472:
			return (SYSTEM::TO_FLOAT(func_34(472, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(473, iParam1, 0)));
		
		case 741814745:
			return (SYSTEM::TO_FLOAT(func_34(481, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(482, iParam1, 0)));
		
		case 615608432:
			return (SYSTEM::TO_FLOAT(func_34(489, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(490, iParam1, 0)));
		
		case 911657153:
			return (SYSTEM::TO_FLOAT(func_34(411, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(412, iParam1, 0)));
		
		case -1716189206:
			return (SYSTEM::TO_FLOAT(func_34(193, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(195, iParam1, 0)));
		
		case 1737195953:
			return (SYSTEM::TO_FLOAT(func_34(201, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(203, iParam1, 0)));
		
		case 1317494643:
			return (SYSTEM::TO_FLOAT(func_34(229, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(231, iParam1, 0)));
		
		case -1786099057:
			return (SYSTEM::TO_FLOAT(func_34(236, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(238, iParam1, 0)));
		
		case -2067956739:
			return (SYSTEM::TO_FLOAT(func_34(208, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(210, iParam1, 0)));
		
		case 1141786504:
			return (SYSTEM::TO_FLOAT(func_34(243, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(245, iParam1, 0)));
		
		case -1716589765:
			return (SYSTEM::TO_FLOAT(func_34(270, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(271, iParam1, 0)));
		
		case -270015777:
			return (SYSTEM::TO_FLOAT(func_34(310, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(311, iParam1, 0)));
		
		case -1654528753:
			return (SYSTEM::TO_FLOAT(func_34(393, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(394, iParam1, 0)));
		
		case -572349828:
			return (SYSTEM::TO_FLOAT(func_34(365, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(366, iParam1, 0)));
		
		case 392730790:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case -947031628:
			return (SYSTEM::TO_FLOAT(func_34(430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(431, iParam1, 0)));
		
		case -1887867191:
			return (SYSTEM::TO_FLOAT(func_34(320, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(321, iParam1, 0)));
		
		case -102323637:
			return (SYSTEM::TO_FLOAT(func_34(1729, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1730, iParam1, 0)));
		
		case -1076751822:
			return (SYSTEM::TO_FLOAT(func_34(1739, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(1740, iParam1, 0)));
		
		case -1063057011:
			return (SYSTEM::TO_FLOAT(func_34(9487, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9488, iParam1, 0)));
		
		case 2132975508:
			return (SYSTEM::TO_FLOAT(func_34(9497, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9498, iParam1, 0)));
		
		case -771403250:
			return (SYSTEM::TO_FLOAT(func_34(9477, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9478, iParam1, 0)));
		
		case -1834847097:
			return (SYSTEM::TO_FLOAT(func_34(9780, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9781, iParam1, 0)));
		
		case 137902532:
			return (SYSTEM::TO_FLOAT(func_34(9790, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9791, iParam1, 0)));
		
		case 1627465347:
			return (SYSTEM::TO_FLOAT(func_34(9507, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9508, iParam1, 0)));
		
		case -1466123874:
			return (SYSTEM::TO_FLOAT(func_34(9810, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9811, iParam1, 0)));
		
		case 2138347493:
			return (SYSTEM::TO_FLOAT(func_34(9800, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9801, iParam1, 0)));
		
		case 984333226:
			return (SYSTEM::TO_FLOAT(func_34(9888, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9889, iParam1, 0)));
		
		case -952879014:
			return (SYSTEM::TO_FLOAT(func_34(9898, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9899, iParam1, 0)));
		
		case 1672152130:
			return (SYSTEM::TO_FLOAT(func_34(9924, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9925, iParam1, 0)));
		
		case -1420407917:
			return (SYSTEM::TO_FLOAT(func_34(9916, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9917, iParam1, 0)));
		
		case 171789620:
			return (SYSTEM::TO_FLOAT(func_34(9932, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9933, iParam1, 0)));
		
		case -598887786:
			return (SYSTEM::TO_FLOAT(func_34(9949, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9950, iParam1, 0)));
		
		case -656458692:
			return (SYSTEM::TO_FLOAT(func_34(9942, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9943, iParam1, 0)));
		
		case -581044007:
			return (SYSTEM::TO_FLOAT(func_34(9959, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9960, iParam1, 0)));
		
		case -619010992:
			return (SYSTEM::TO_FLOAT(func_34(9967, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9968, iParam1, 0)));
		
		case -1951375401:
			return (SYSTEM::TO_FLOAT(func_34(10005, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10006, iParam1, 0)));
		
		case -538741184:
			return (SYSTEM::TO_FLOAT(func_34(10033, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10034, iParam1, 0)));
		
		case -1045183535:
			return (SYSTEM::TO_FLOAT(func_34(10023, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10024, iParam1, 0)));
		
		case -275439685:
			return (SYSTEM::TO_FLOAT(func_34(9995, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9996, iParam1, 0)));
		
		case 1649403952:
			return (SYSTEM::TO_FLOAT(func_34(9985, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9986, iParam1, 0)));
		
		case -102973651:
			return (SYSTEM::TO_FLOAT(func_34(9908, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(9909, iParam1, 0)));
		
		case 317205821:
			return (SYSTEM::TO_FLOAT(func_34(10074, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10075, iParam1, 0)));
		
		case -853065399:
			return (SYSTEM::TO_FLOAT(func_34(10084, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10085, iParam1, 0)));
		
		case 125959754:
			return (SYSTEM::TO_FLOAT(func_34(10090, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10091, iParam1, 0)));
		
		case -1121678507:
			return (SYSTEM::TO_FLOAT(func_34(10100, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10101, iParam1, 0)));
		
		case -1169823560:
			return (SYSTEM::TO_FLOAT(func_34(10110, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10111, iParam1, 0)));
		
		case -1810795771:
			return (SYSTEM::TO_FLOAT(func_34(10118, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10119, iParam1, 0)));
		
		case 419712736:
			return (SYSTEM::TO_FLOAT(func_34(222, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(224, iParam1, 0)));
		
		case -2066285827:
			return (SYSTEM::TO_FLOAT(func_34(10582, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10583, iParam1, 0)));
		
		case 1785463520:
			return (SYSTEM::TO_FLOAT(func_34(10602, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10603, iParam1, 0)));
		
		case 1432025498:
			return (SYSTEM::TO_FLOAT(func_34(10592, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10593, iParam1, 0)));
		
		case -879347409:
			return (SYSTEM::TO_FLOAT(func_34(10612, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10613, iParam1, 0)));
		
		case -2009644972:
			return (SYSTEM::TO_FLOAT(func_34(10632, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10633, iParam1, 0)));
		
		case -1768145561:
			return (SYSTEM::TO_FLOAT(func_34(10642, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10643, iParam1, 0)));
		
		case -1746263880:
			return (SYSTEM::TO_FLOAT(func_34(10622, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10623, iParam1, 0)));
		
		case 940833800:
			return (SYSTEM::TO_FLOAT(func_34(10845, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(10846, iParam1, 0)));
		
		case -1355376991:
			return (SYSTEM::TO_FLOAT(func_34(11002, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11003, iParam1, 0)));
		
		case 1198256469:
			return (SYSTEM::TO_FLOAT(func_34(11012, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11013, iParam1, 0)));
		
		case -1238556825:
			return (SYSTEM::TO_FLOAT(func_34(11022, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11023, iParam1, 0)));
		
		case -1853920116:
			return (SYSTEM::TO_FLOAT(func_34(11453, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11454, iParam1, 0)));
		
		case 727643628:
			return (SYSTEM::TO_FLOAT(func_34(11443, iParam1, 0)) / SYSTEM::TO_FLOAT(func_34(11444, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 453432689:
			return func_34(254, iParam1, 0);
		
		case 1593441988:
			return func_34(264, iParam1, 0);
		
		case 584646201:
			return func_34(284, iParam1, 0);
		
		case 324215364:
			return func_34(294, iParam1, 0);
		
		case 736523883:
			return func_34(304, iParam1, 0);
		
		case -1074790547:
			return func_34(324, iParam1, 0);
		
		case -2084633992:
			return func_34(333, iParam1, 0);
		
		case -1357824103:
			return func_34(342, iParam1, 0);
		
		case -1660422300:
			return func_34(351, iParam1, 0);
		
		case 2144741730:
			return func_34(360, iParam1, 0);
		
		case 487013001:
			return func_34(378, iParam1, 0);
		
		case 2017895192:
			return func_34(387, iParam1, 0);
		
		case -494615257:
			return func_34(406, iParam1, 0);
		
		case 100416529:
			return func_34(425, iParam1, 0);
		
		case 205991906:
			return func_34(434, iParam1, 0);
		
		case 1119849093:
			return func_34(459, iParam1, 0);
		
		case -1716589765:
			return func_34(274, iParam1, 0);
		
		case -270015777:
			return func_34(314, iParam1, 0);
		
		case -947031628:
			return func_34(434, iParam1, 0);
		
		case -1654528753:
			return func_34(397, iParam1, 0);
		
		case -572349828:
			return func_34(369, iParam1, 0);
		
		case 392730790:
			return func_34(324, iParam1, 0);
		
		case -1887867191:
			return func_34(324, iParam1, 0);
		
		case -837150131:
			return func_34(324, iParam1, 0);
		
		case -1076751822:
			return func_34(1743, iParam1, 0);
		
		case -1063057011:
			return func_34(9491, iParam1, 0);
		
		case 2132975508:
			return func_34(9501, iParam1, 0);
		
		case -771403250:
			return func_34(9481, iParam1, 0);
		
		case 137902532:
			return func_34(9794, iParam1, 0);
		
		case 1627465347:
			return func_34(9511, iParam1, 0);
		
		case -1466123874:
			return func_34(9814, iParam1, 0);
		
		case 2138347493:
			return func_34(9804, iParam1, 0);
		
		case 984333226:
			return func_34(9892, iParam1, 0);
		
		case -952879014:
			return func_34(9902, iParam1, 0);
		
		case 171789620:
			return func_34(9936, iParam1, 0);
		
		case -598887786:
			return func_34(9953, iParam1, 0);
		
		case -619010992:
			return func_34(9971, iParam1, 0);
		
		case -1045183535:
			return func_34(10027, iParam1, 0);
		
		case -275439685:
			return func_34(9999, iParam1, 0);
		
		case 1649403952:
			return func_34(9989, iParam1, 0);
		
		case 317205821:
			return func_34(10078, iParam1, 0);
		
		case -1121678507:
			return func_34(10104, iParam1, 0);
		
		case -1075685676:
			return func_34(254, iParam1, 0);
		
		case 2024373456:
			return func_34(304, iParam1, 0);
		
		case 177293209:
			return func_34(434, iParam1, 0);
		
		case -608341376:
			return func_34(360, iParam1, 0);
		
		case 961495388:
			return func_34(324, iParam1, 0);
		
		case -86904375:
			return func_34(333, iParam1, 0);
		
		case -2066285827:
			return func_34(10586, iParam1, 0);
		
		case 1785463520:
			return func_34(10606, iParam1, 0);
		
		case 1432025498:
			return func_34(10596, iParam1, 0);
		
		case -879347409:
			return func_34(10616, iParam1, 0);
		
		case -2009644972:
			return func_34(10636, iParam1, 0);
		
		case -1768145561:
			return func_34(10646, iParam1, 0);
		
		case -1746263880:
			return func_34(10626, iParam1, 0);
		
		case -1355376991:
			return func_34(11006, iParam1, 0);
		
		case 1198256469:
			return func_34(11016, iParam1, 0);
		
		case -1238556825:
			return func_34(11026, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 453432689:
			return func_34(251, iParam1, 0);
		
		case 1593441988:
			return func_34(261, iParam1, 0);
		
		case 584646201:
			return func_34(281, iParam1, 0);
		
		case 324215364:
			return func_34(291, iParam1, 0);
		
		case 736523883:
			return func_34(301, iParam1, 0);
		
		case -1074790547:
			return func_34(321, iParam1, 0);
		
		case -2084633992:
			return func_34(330, iParam1, 0);
		
		case -1357824103:
			return func_34(339, iParam1, 0);
		
		case -1660422300:
			return func_34(348, iParam1, 0);
		
		case 2144741730:
			return func_34(357, iParam1, 0);
		
		case 487013001:
			return func_34(375, iParam1, 0);
		
		case 2017895192:
			return func_34(384, iParam1, 0);
		
		case -494615257:
			return func_34(403, iParam1, 0);
		
		case 100416529:
			return func_34(422, iParam1, 0);
		
		case 205991906:
			return func_34(431, iParam1, 0);
		
		case -1568386805:
			return func_34(442, iParam1, 0);
		
		case -1312131151:
			return func_34(449, iParam1, 0);
		
		case 1119849093:
			return func_34(456, iParam1, 0);
		
		case -1813897027:
			return func_34(465, iParam1, 0);
		
		case -37975472:
			return func_34(473, iParam1, 0);
		
		case 741814745:
			return func_34(482, iParam1, 0);
		
		case 615608432:
			return func_34(490, iParam1, 0);
		
		case 911657153:
			return func_34(412, iParam1, 0);
		
		case -1716189206:
			return func_34(195, iParam1, 0);
		
		case 1737195953:
			return func_34(203, iParam1, 0);
		
		case 1317494643:
			return func_34(231, iParam1, 0);
		
		case -1786099057:
			return func_34(238, iParam1, 0);
		
		case -2067956739:
			return func_34(210, iParam1, 0);
		
		case 1141786504:
			return func_34(245, iParam1, 0);
		
		case -1716589765:
			return func_34(271, iParam1, 0);
		
		case -270015777:
			return func_34(311, iParam1, 0);
		
		case -947031628:
			return func_34(431, iParam1, 0);
		
		case -1654528753:
			return func_34(394, iParam1, 0);
		
		case -572349828:
			return func_34(366, iParam1, 0);
		
		case 392730790:
			return func_34(321, iParam1, 0);
		
		case -1887867191:
			return func_34(321, iParam1, 0);
		
		case -837150131:
			return func_34(321, iParam1, 0);
		
		case -102323637:
			return func_34(1730, iParam1, 0);
		
		case -1076751822:
			return func_34(1740, iParam1, 0);
		
		case -1063057011:
			return func_34(9488, iParam1, 0);
		
		case 2132975508:
			return func_34(9498, iParam1, 0);
		
		case -771403250:
			return func_34(9478, iParam1, 0);
		
		case -1834847097:
			return func_34(9781, iParam1, 0);
		
		case 137902532:
			return func_34(9791, iParam1, 0);
		
		case 1627465347:
			return func_34(9508, iParam1, 0);
		
		case -1466123874:
			return func_34(9811, iParam1, 0);
		
		case 2138347493:
			return func_34(9801, iParam1, 0);
		
		case 984333226:
			return func_34(9889, iParam1, 0);
		
		case -952879014:
			return func_34(9899, iParam1, 0);
		
		case -1420407917:
			return func_34(9917, iParam1, 0);
		
		case 1672152130:
			return func_34(9925, iParam1, 0);
		
		case 171789620:
			return func_34(9933, iParam1, 0);
		
		case -598887786:
			return func_34(9950, iParam1, 0);
		
		case -656458692:
			return func_34(9943, iParam1, 0);
		
		case -581044007:
			return func_34(9960, iParam1, 0);
		
		case -619010992:
			return func_34(9968, iParam1, 0);
		
		case -1951375401:
			return func_34(10006, iParam1, 0);
		
		case -538741184:
			return func_34(10034, iParam1, 0);
		
		case -1045183535:
			return func_34(10024, iParam1, 0);
		
		case -275439685:
			return func_34(9996, iParam1, 0);
		
		case 1649403952:
			return func_34(9986, iParam1, 0);
		
		case -102973651:
			return func_34(9909, iParam1, 0);
		
		case 317205821:
			return func_34(10075, iParam1, 0);
		
		case -853065399:
			return func_34(10085, iParam1, 0);
		
		case 125959754:
			return func_34(10091, iParam1, 0);
		
		case -1121678507:
			return func_34(10101, iParam1, 0);
		
		case -1169823560:
			return func_34(10111, iParam1, 0);
		
		case -1810795771:
			return func_34(10119, iParam1, 0);
		
		case 419712736:
			return func_34(224, iParam1, 0);
		
		case -1075685676:
			return func_34(251, iParam1, 0);
		
		case 2024373456:
			return func_34(301, iParam1, 0);
		
		case 177293209:
			return func_34(431, iParam1, 0);
		
		case -608341376:
			return func_34(357, iParam1, 0);
		
		case 961495388:
			return func_34(321, iParam1, 0);
		
		case -86904375:
			return func_34(330, iParam1, 0);
		
		case -2066285827:
			return func_34(10583, iParam1, 0);
		
		case 1785463520:
			return func_34(10603, iParam1, 0);
		
		case 1432025498:
			return func_34(10593, iParam1, 0);
		
		case -879347409:
			return func_34(10613, iParam1, 0);
		
		case -2009644972:
			return func_34(10633, iParam1, 0);
		
		case -1768145561:
			return func_34(10643, iParam1, 0);
		
		case -1746263880:
			return func_34(10623, iParam1, 0);
		
		case 940833800:
			return func_34(10846, iParam1, 0);
		
		case -1355376991:
			return func_34(11003, iParam1, 0);
		
		case 1198256469:
			return func_34(11013, iParam1, 0);
		
		case -1238556825:
			return func_34(11023, iParam1, 0);
		
		case -1853920116:
			return func_34(11454, iParam1, 0);
		
		case 727643628:
			return func_34(11444, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 453432689:
			return func_34(250, iParam1, 0);
		
		case 1593441988:
			return func_34(260, iParam1, 0);
		
		case 584646201:
			return func_34(280, iParam1, 0);
		
		case 324215364:
			return func_34(290, iParam1, 0);
		
		case 736523883:
			return func_34(300, iParam1, 0);
		
		case -1074790547:
			return func_34(320, iParam1, 0);
		
		case -2084633992:
			return func_34(329, iParam1, 0);
		
		case -1357824103:
			return func_34(338, iParam1, 0);
		
		case -1660422300:
			return func_34(347, iParam1, 0);
		
		case 2144741730:
			return func_34(356, iParam1, 0);
		
		case 487013001:
			return func_34(374, iParam1, 0);
		
		case 2017895192:
			return func_34(383, iParam1, 0);
		
		case -494615257:
			return func_34(402, iParam1, 0);
		
		case 100416529:
			return func_34(421, iParam1, 0);
		
		case 205991906:
			return func_34(430, iParam1, 0);
		
		case -1568386805:
			return func_34(441, iParam1, 0);
		
		case -1312131151:
			return func_34(448, iParam1, 0);
		
		case 1119849093:
			return func_34(455, iParam1, 0);
		
		case -1813897027:
			return func_34(464, iParam1, 0);
		
		case -37975472:
			return func_34(472, iParam1, 0);
		
		case 741814745:
			return func_34(481, iParam1, 0);
		
		case 615608432:
			return func_34(489, iParam1, 0);
		
		case 911657153:
			return func_34(411, iParam1, 0);
		
		case -1716189206:
			return func_34(193, iParam1, 0);
		
		case 1737195953:
			return func_34(201, iParam1, 0);
		
		case 1317494643:
			return func_34(229, iParam1, 0);
		
		case -1786099057:
			return func_34(236, iParam1, 0);
		
		case -2067956739:
			return func_34(208, iParam1, 0);
		
		case 1141786504:
			return func_34(243, iParam1, 0);
		
		case -1716589765:
			return func_34(270, iParam1, 0);
		
		case -270015777:
			return func_34(310, iParam1, 0);
		
		case -947031628:
			return func_34(430, iParam1, 0);
		
		case -1654528753:
			return func_34(393, iParam1, 0);
		
		case -572349828:
			return func_34(365, iParam1, 0);
		
		case 392730790:
			return func_34(320, iParam1, 0);
		
		case -1887867191:
			return func_34(320, iParam1, 0);
		
		case -837150131:
			return func_34(320, iParam1, 0);
		
		case -102323637:
			return func_34(1729, iParam1, 0);
		
		case -1076751822:
			return func_34(1739, iParam1, 0);
		
		case -1063057011:
			return func_34(9487, iParam1, 0);
		
		case 2132975508:
			return func_34(9497, iParam1, 0);
		
		case -771403250:
			return func_34(9477, iParam1, 0);
		
		case -1834847097:
			return func_34(9780, iParam1, 0);
		
		case 137902532:
			return func_34(9790, iParam1, 0);
		
		case 1627465347:
			return func_34(9507, iParam1, 0);
		
		case -1466123874:
			return func_34(9810, iParam1, 0);
		
		case 2138347493:
			return func_34(9800, iParam1, 0);
		
		case 984333226:
			return func_34(9888, iParam1, 0);
		
		case -952879014:
			return func_34(9898, iParam1, 0);
		
		case -1420407917:
			return func_34(9916, iParam1, 0);
		
		case 1672152130:
			return func_34(9924, iParam1, 0);
		
		case 171789620:
			return func_34(9932, iParam1, 0);
		
		case -598887786:
			return func_34(9949, iParam1, 0);
		
		case -656458692:
			return func_34(9942, iParam1, 0);
		
		case -581044007:
			return func_34(9959, iParam1, 0);
		
		case -619010992:
			return func_34(9967, iParam1, 0);
		
		case -1951375401:
			return func_34(10005, iParam1, 0);
		
		case -538741184:
			return func_34(10033, iParam1, 0);
		
		case -1045183535:
			return func_34(10023, iParam1, 0);
		
		case -275439685:
			return func_34(9995, iParam1, 0);
		
		case 1649403952:
			return func_34(9985, iParam1, 0);
		
		case -102973651:
			return func_34(9908, iParam1, 0);
		
		case 317205821:
			return func_34(10074, iParam1, 0);
		
		case -853065399:
			return func_34(10084, iParam1, 0);
		
		case 125959754:
			return func_34(10090, iParam1, 0);
		
		case -1121678507:
			return func_34(10100, iParam1, 0);
		
		case -1169823560:
			return func_34(10110, iParam1, 0);
		
		case -1810795771:
			return func_34(10118, iParam1, 0);
		
		case 419712736:
			return func_34(222, iParam1, 0);
		
		case -1075685676:
			return func_34(250, iParam1, 0);
		
		case 2024373456:
			return func_34(300, iParam1, 0);
		
		case 177293209:
			return func_34(430, iParam1, 0);
		
		case -608341376:
			return func_34(356, iParam1, 0);
		
		case 961495388:
			return func_34(320, iParam1, 0);
		
		case -86904375:
			return func_34(329, iParam1, 0);
		
		case -2066285827:
			return func_34(10582, iParam1, 0);
		
		case 1785463520:
			return func_34(10602, iParam1, 0);
		
		case 1432025498:
			return func_34(10592, iParam1, 0);
		
		case -879347409:
			return func_34(10612, iParam1, 0);
		
		case -2009644972:
			return func_34(10632, iParam1, 0);
		
		case -1768145561:
			return func_34(10642, iParam1, 0);
		
		case -1746263880:
			return func_34(10622, iParam1, 0);
		
		case 940833800:
			return func_34(10845, iParam1, 0);
		
		case -1355376991:
			return func_34(11002, iParam1, 0);
		
		case 1198256469:
			return func_34(11012, iParam1, 0);
		
		case -1238556825:
			return func_34(11022, iParam1, 0);
		
		case -1853920116:
			return func_34(11453, iParam1, 0);
		
		case 727643628:
			return func_34(11443, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_134(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case -1075685676:
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case 1593441988:
			iVar0 = 262;
			iVar1 = 263;
			break;
		
		case 584646201:
			iVar0 = 282;
			iVar1 = 283;
			break;
		
		case 324215364:
			iVar0 = 292;
			iVar1 = 293;
			break;
		
		case 736523883:
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case 2024373456:
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case -1074790547:
		case 961495388:
			iVar0 = 322;
			iVar1 = 323;
			break;
		
		case -2084633992:
		case -86904375:
			iVar0 = 331;
			iVar1 = 332;
			break;
		
		case -1063057011:
			iVar0 = 9489;
			iVar1 = 9490;
			break;
		
		case -1076751822:
			iVar0 = 1741;
			iVar1 = 1742;
			break;
		
		case -1357824103:
			iVar0 = 340;
			iVar1 = 341;
			break;
		
		case -1660422300:
			iVar0 = 349;
			iVar1 = 350;
			break;
		
		case 2144741730:
		case -608341376:
			iVar0 = 358;
			iVar1 = 359;
			break;
		
		case 2017895192:
			iVar0 = 385;
			iVar1 = 386;
			break;
		
		case 487013001:
			iVar0 = 376;
			iVar1 = 377;
			break;
		
		case -494615257:
			iVar0 = 404;
			iVar1 = 405;
			break;
		
		case 100416529:
			iVar0 = 423;
			iVar1 = 424;
			break;
		
		case 205991906:
		case 177293209:
			iVar0 = 432;
			iVar1 = 433;
			break;
		
		case -1568386805:
			iVar0 = 443;
			iVar1 = 441;
			break;
		
		case 1119849093:
			iVar0 = 457;
			iVar1 = 458;
			break;
		
		case -1312131151:
			iVar0 = 450;
			iVar1 = 448;
			break;
		
		case -1654528753:
			iVar0 = 395;
			iVar1 = 396;
			break;
		
		case -270015777:
			iVar0 = 312;
			iVar1 = 313;
			break;
		
		case -1716589765:
			iVar0 = 272;
			iVar1 = 273;
			break;
		
		case -771403250:
			iVar0 = 9479;
			iVar1 = 9480;
			break;
		
		case 2132975508:
			iVar0 = 9499;
			iVar1 = 9500;
			break;
		
		case 1627465347:
			iVar0 = 9509;
			iVar1 = 9510;
			break;
		
		case 137902532:
			iVar0 = 9792;
			iVar1 = 9793;
			break;
		
		case -1466123874:
			iVar0 = 9812;
			iVar1 = 9813;
			break;
		
		case 2138347493:
			iVar0 = 9802;
			iVar1 = 9803;
			break;
		
		case 1198879012:
			iVar0 = 9545;
			iVar1 = 9546;
			break;
		
		case 984333226:
			iVar0 = 9890;
			iVar1 = 9891;
			break;
		
		case -952879014:
			iVar0 = 9900;
			iVar1 = 9901;
			break;
		
		case 1672152130:
			iVar0 = 9926;
			iVar1 = 9924;
			break;
		
		case -1420407917:
			iVar0 = 9918;
			iVar1 = 9916;
			break;
		
		case 171789620:
			iVar0 = 9934;
			iVar1 = 9935;
			break;
		
		case -598887786:
			iVar0 = 9951;
			iVar1 = 9952;
			break;
		
		case -619010992:
			iVar0 = 9969;
			iVar1 = 9970;
			break;
		
		case 1649403952:
			iVar0 = 9987;
			iVar1 = 9988;
			break;
		
		case -275439685:
			iVar0 = 9997;
			iVar1 = 9998;
			break;
		
		case -1045183535:
			iVar0 = 10025;
			iVar1 = 10026;
			break;
		
		case 317205821:
			iVar0 = 10076;
			iVar1 = 10077;
			break;
		
		case -1121678507:
			iVar0 = 10102;
			iVar1 = 10103;
			break;
		
		case 125959754:
			iVar0 = 10092;
			iVar1 = 10090;
			break;
		
		case -1746263880:
			iVar0 = 10624;
			iVar1 = 10625;
			break;
		
		case -2066285827:
			iVar1 = 10582;
			iVar0 = 10584;
			break;
		
		case 1785463520:
			iVar1 = 10602;
			iVar0 = 10604;
			break;
		
		case 1432025498:
			iVar1 = 10592;
			iVar0 = 10594;
			break;
		
		case -879347409:
			iVar1 = 10612;
			iVar0 = 10614;
			break;
		
		case -2009644972:
			iVar1 = 10632;
			iVar0 = 10634;
			break;
		
		case -1768145561:
			iVar1 = 10642;
			iVar0 = 10644;
			break;
		
		case 1198256469:
			iVar0 = 11014;
			iVar1 = 11015;
			break;
		
		case -1238556825:
			iVar0 = 11024;
			iVar1 = 11025;
			break;
		
		case -1355376991:
			iVar0 = 11004;
			iVar1 = 11005;
			break;
		
		case -1853920116:
			iVar0 = 11455;
			iVar1 = 11456;
			break;
		
		case 727643628:
			iVar0 = 11445;
			iVar1 = 11446;
			break;
	}
	if ((func_136(iParam0) || iParam0 == -1951375401) || func_135(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_34(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(func_34(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			uVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(uVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 615608432:
		case -37975472:
		case -1813897027:
		case 741814745:
		case -1420407917:
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
		case -1786099057:
		case 1737195953:
		case 1317494643:
		case 1141786504:
		case -2067956739:
		case -102323637:
		case -1834847097:
		case -656458692:
		case -102973651:
		case -581044007:
		case -538741184:
		case -853065399:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
		
		default:
	}
	return 0;
}

char* func_137(int iParam0, bool bParam1)
{
	if (func_139(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case -952879014:
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 1785463520, 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case 1649403952:
				return "WTDE2_CMPRIFLE";
				break;
			
			case 125959754:
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case -1569615261:
			return "";
			break;
		
		case 453432689:
			return "WT_PIST_DESC";
			break;
		
		case 1593441988:
			return "WTD_PIST_CBT";
			break;
		
		case 584646201:
			return "WTD_PIST_AP";
			break;
		
		case 736523883:
			return "WTD_SMG";
			break;
		
		case 324215364:
			return "WTD_SMG_MCR";
			break;
		
		case -1074790547:
			return "WTD_RIFLE_ASL";
			break;
		
		case -2084633992:
			return "WTD_RIFLE_CBN";
			break;
		
		case -1357824103:
			return "WTD_RIFLE_ADV";
			break;
		
		case -1660422300:
			return "WTD_MG";
			break;
		
		case 2144741730:
			return "WTD_MG_CBT";
			break;
		
		case 487013001:
			return "WTD_SG_PMP";
			break;
		
		case 2017895192:
			return "WTD_SG_SOF";
			break;
		
		case -494615257:
			return "WTD_SG_ASL";
			break;
		
		case 205991906:
			return "WTD_SNIP_HVY";
			break;
		
		case 856002082:
			return "WTD_SNIP_RMT";
			break;
		
		case 100416529:
			return "WTD_SNIP_RIF";
			break;
		
		case -1568386805:
			return "WTD_GL";
			break;
		
		case -1312131151:
			return "WTD_RPG";
			break;
		
		case 1119849093:
			return "WTD_MINIGUN";
			break;
		
		case -1813897027:
			return "WTD_GNADE";
			break;
		
		case -37975472:
			return "WTD_GNADE_SMK";
			break;
		
		case 741814745:
			return "WTD_GNADE_STK";
			break;
		
		case 615608432:
			return "WTD_MOLOTOV";
			break;
		
		case 911657153:
			return "WTD_STUN";
			break;
		
		case 883325847:
			return "WTD_PETROL";
			break;
		
		case -38085395:
			return "WTD_DIGI";
			break;
		
		case -1833087301:
			return "WTD_ELCFEN";
			break;
		
		case 1945616459:
			return "";
			break;
		
		case -123497569:
			return "";
			break;
		
		case -268631733:
			return "";
			break;
		
		case 966099553:
			return "";
			break;
		
		case -72657034:
			return "WTD_PARA";
			break;
		
		case 1742569970:
			return "";
			break;
		
		case -1474608608:
			return "";
			break;
		
		case 527765612:
			return "";
			break;
		
		case -165357558:
			return "";
			break;
		
		case -1372674932:
			return "";
			break;
		
		case -1716189206:
			return "WTD_KNIFE";
			break;
		
		case 1737195953:
			return "WTD_NGTSTK";
			break;
		
		case 1317494643:
			return "WTD_HAMMER";
			break;
		
		case -1786099057:
			return "WTD_BAT";
			break;
		
		case -2067956739:
			return "WTD_CROWBAR";
			break;
		
		case 1141786504:
			return "WTD_GOLFCLUB";
			break;
		
		case -102973651:
			return "WTD_DLC_HATCHET";
			break;
		
		case 133987706:
			return "";
			break;
		
		case -1553120962:
			return "";
			break;
		
		case -270015777:
			return "WTD_SMG_ASL";
			break;
		
		case -1654528753:
			return "WTD_SG_BLP";
			break;
		
		case -1716589765:
			return "WTD_PIST_50";
			break;
		
		case 137902532:
			return "WTD_VPISTOL";
			break;
		
		case -1834847097:
			return "WTD_DAGGER";
			break;
		
		case -1420407917:
			return "WTD_PRXMINE";
			break;
		
		case 1672152130:
			return "WTD_HOMLNCH";
			break;
		
		case -581044007:
			return "WTD_MACHETE";
			break;
		
		case -619010992:
			return "WTD_MCHPIST";
			break;
		
		case -1951375401:
			return "WTD_FLASHLIGHT";
			break;
		
		case -275439685:
			return "WTD_DBSHGN";
			break;
		
		case 1649403952:
			return "WTD_CMPRIFLE";
			break;
		
		case -538741184:
			return "WTD_SWBLADE";
			break;
		
		case -1045183535:
			return "WTD_REVOLVER";
			break;
		
		case -1746263880:
			if (func_138(2052114177) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (NETWORK::_0x67A5589628E0CFF6())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case -1063057011:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -1768145561, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
		
		case -952879014:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 1785463520, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var39) != -1)
			{
				return func_27(&(Var39.f_15));
			}
			break;
		
		case 2132975508:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -2066285827, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var78) != -1)
			{
				return func_27(&(Var78.f_15));
			}
			break;
		
		case -1355376991:
			return "WTD_RAYPISTOL";
			break;
		
		case 1198256469:
			return "WTD_RAYCARBINE";
			break;
		
		case -1238556825:
			return "WTD_RAYMINIGUN";
			break;
		
		case -1853920116:
			return "WTD_REV_NV";
			break;
		
		case 727643628:
			return "WTD_CERPST";
			break;
		
		default:
			if (func_28(iParam0, &Var117) != -1)
			{
				return func_27(&(Var117.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_138(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_140())
		{
			if ((iParam0 == -952879014 || iParam0 == 1649403952) || iParam0 == 125959754)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_140()
{
	return (func_142() || func_141());
}

int func_141()
{
	switch (unk_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_142()
{
	switch (unk_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_143()
{
	return Global_1312745;
}

bool func_144(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_145()
{
	func_146(0, -1, -1, 0, 0);
}

void func_146(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("SET_COLUMN_SCROLL");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam3);
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	else
	{
		func_20("");
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam4);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_147(var uParam0, var uParam1)
{
	func_149();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	uVar3 = iLocal_64 + 1;
	func_146(0, iVar2, uVar3, "HUD_PAGE", 0);
}

int func_148(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((CONTROLS::IS_CONTROL_JUST_RELEASED(2, iParam0) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_6(iParam0, &(Global_1377170.f_1060), 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
		{
			GAMEPLAY::SET_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1377170.f_1049[iVar1], iVar2))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1377170.f_1049[iVar1]), iVar2);
	}
	return 0;
}

void func_149()
{
	iLocal_65 = 0;
	iLocal_64 = 3;
	if (WEAPON::IS_WEAPON_VALID(1317494643))
	{
		iLocal_66[10] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1716589765))
	{
		iLocal_66[0] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1654528753))
	{
		iLocal_66[1] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[1] = -1;
	}
	if (func_106(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(2017895192))
		{
			iLocal_66[2] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(-102323637))
	{
		iLocal_66[3] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1076751822))
	{
		iLocal_66[4] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1627465347))
	{
		iLocal_66[11] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-771403250))
	{
		iLocal_66[7] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1063057011))
	{
		iLocal_66[5] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(2132975508))
	{
		iLocal_66[6] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1834847097))
	{
		iLocal_66[8] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(137902532))
	{
		iLocal_66[9] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(2138347493))
	{
		iLocal_66[14] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1466123874))
	{
		iLocal_66[13] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(984333226))
	{
		iLocal_66[15] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-952879014))
	{
		iLocal_66[16] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[16] = -1;
	}
	if (func_105() || Global_262145.f_19752)
	{
		if (WEAPON::IS_WEAPON_VALID(-102973651))
		{
			iLocal_66[22] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(1672152130))
	{
		iLocal_66[18] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1420407917))
	{
		iLocal_66[17] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1198879012))
	{
		iLocal_66[12] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(171789620))
	{
		iLocal_66[19] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-598887786))
	{
		iLocal_66[20] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-656458692))
	{
		iLocal_66[21] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-581044007))
	{
		iLocal_66[23] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-619010992))
	{
		iLocal_66[24] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[24] = -1;
	}
	if (Global_262145.f_11577 && WEAPON::IS_WEAPON_VALID(-1951375401))
	{
		iLocal_66[25] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1045183535))
	{
		iLocal_66[26] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-538741184))
	{
		iLocal_66[27] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-275439685))
	{
		iLocal_66[28] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1649403952))
	{
		iLocal_66[29] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(317205821))
	{
		iLocal_66[30] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-853065399))
	{
		iLocal_66[31] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(125959754))
	{
		iLocal_66[32] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1121678507))
	{
		iLocal_66[33] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1169823560))
	{
		iLocal_66[34] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1810795771))
	{
		iLocal_66[35] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(419712736))
	{
		iLocal_66[36] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(961495388))
	{
		iLocal_66[37] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-86904375))
	{
		iLocal_66[38] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-608341376))
	{
		iLocal_66[39] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(177293209))
	{
		iLocal_66[40] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1075685676))
	{
		iLocal_66[41] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(2024373456))
	{
		iLocal_66[42] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-2066285827))
	{
		iLocal_66[43] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1785463520))
	{
		iLocal_66[44] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1432025498))
	{
		iLocal_66[45] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-879347409))
	{
		iLocal_66[46] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-2009644972))
	{
		iLocal_66[47] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1768145561))
	{
		iLocal_66[48] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[48] = -1;
	}
	if ((Global_262145.f_22936 && WEAPON::IS_WEAPON_VALID(-1746263880)) && (func_104() || Global_1694124))
	{
		iLocal_66[49] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[49] = -1;
	}
	if ((Global_262145.f_23635 && WEAPON::IS_WEAPON_VALID(940833800)) && func_100())
	{
		iLocal_66[50] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(1198256469) && Global_262145.f_25970)
	{
		iLocal_66[51] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1238556825) && Global_262145.f_25969)
	{
		iLocal_66[52] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(-1355376991) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(-1355376991, -1, 0)) || Global_262145.f_24978))
	{
		iLocal_66[53] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[53] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(727643628))
	{
		iLocal_66[54] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[54] = -1;
	}
	if ((Global_262145.f_27592 && WEAPON::IS_WEAPON_VALID(-1853920116)) && (func_99() || Global_1694130))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (iLocal_65 == 0)
	{
		iLocal_64 = 2;
		iLocal_65 = 9;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 9));
		iLocal_65 = (iLocal_65 - (9 * (iLocal_65 / 9)));
		if (iLocal_65 == 0)
		{
			iLocal_64 = (iLocal_64 - 1);
			iLocal_65 = 9;
		}
	}
}

void func_150(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_151()
{
	func_149();
	func_152();
	func_146(0, 1, iLocal_64 + 1, "HUD_PAGE", 0);
}

void func_152()
{
	func_153(1);
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		func_154(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_154(0, 2, 0, 2, 1, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_N("INIT_COLUMN_SCROLL");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam5);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_155(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_156(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_157(var uParam0)
{
	func_158(uParam0);
	uParam0->f_281 = 1;
}

void func_158(var uParam0)
{
	*uParam0 = { Global_1375356 };
}

int func_159()
{
	return Global_30768;
}

