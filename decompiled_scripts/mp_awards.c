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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(995898030);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1433313072);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1096198329);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(696733436);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(831272562);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1655527845);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-2086579765);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1770673475);
		HUD::_0xC78E239AC5B2DDB9(0, -1, 0);
		Global_1312435 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312435 = 1;
	iVar0 = 0;
	iVar1 = 1;
	Global_1373206.f_1 = 0;
	Global_1373206.f_3 = 0;
	Global_1373206.f_5 = 0;
	Global_1373206.f_7 = 0;
	Global_1373206.f_6 = 0;
	func_143(&Global_1376783);
	func_142(0, &Global_1376783);
	func_141(&Global_1376783);
	func_139(&Global_1375928);
	func_138(-1, &Global_1375928);
	func_137(&Global_1375928);
	func_136(&Global_1375928);
	func_132();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar1 == 1)
				{
					if (iVar2 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::_0xEC9264727EEC0F28();
							Global_1373206.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iVar2 = 1;
						}
					}
				}
				if (Global_1375928.f_469 == 0 && Global_1375928.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						if (iVar1 == 0)
						{
							iVar1 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1884422346);
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::_0x4895BDEA16E7C080(0);
							func_142(Global_1373206.f_6, &Global_1376783);
							func_141(&Global_1376783);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_131();
						}
						else
						{
							switch (Global_1373206.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::_0x4895BDEA16E7C080(0);
									Global_1373206.f_7 = 1;
									func_130(&Global_1375928, &Global_1373206);
									func_138(func_129(&(Global_1373206.f_1), &(Global_1373206.f_3), Global_1373206.f_5, 188), &Global_1375928);
									func_137(&Global_1375928);
									func_136(&Global_1375928);
									func_127(&Global_1375928, &Global_1373206);
									break;
								}
							}
						}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					if (iVar1 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						HUD::_0x14621BB1DF14E2B2();
						iVar0 = 1;
					}
					else
					{
						switch (Global_1373206.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::_0x4895BDEA16E7C080(0);
								Global_1373206.f_1 = 0;
								Global_1373206.f_3 = 0;
								func_142(-1, &Global_1376783);
								func_141(&Global_1376783);
								func_131();
								iVar1 = 0;
								break;
							
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::_0x4895BDEA16E7C080(0);
								func_138(-1, &Global_1375928);
								func_137(&Global_1375928);
								func_136(&Global_1375928);
								func_131();
								Global_1373206.f_7 = 0;
								break;
							}
						}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", 0);
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
				{
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
				}
				func_15(&Global_1373206);
				if (iVar1 == 1)
				{
					func_2(&Global_1375928, &Global_1373206, &uLocal_179);
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
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar3);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar4);
	HUD::_0x14621BB1DF14E2B2();
	Global_1312435 = 0;
	HUD::_0xC78E239AC5B2DDB9(0, -1, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_2(var uParam0, var uParam1, var uParam2)
{
	if (!func_14(uParam2) || (func_14(uParam2) && func_13(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || func_12(187, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || func_12(188, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || func_12(189, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || func_12(190, &(Global_1377170.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}
	if (MISC::IS_BIT_SET(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_6 = (uParam1->f_6 - 1);
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				if (func_9() == 0 || func_8() == 0)
				{
				}
				else if (uParam1->f_6 > 13)
				{
					uParam1->f_6 = 0;
				}
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 < 0)
						{
							uParam1->f_6 = 13;
						}
						break;
				}
				func_142(uParam1->f_6, &Global_1376783);
				func_141(&Global_1376783);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_3 = (uParam1->f_3 - 1);
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_3 < 0)
						{
							uParam1->f_3 = 2;
						}
						break;
				}
				func_138(func_129(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_137(uParam0);
				func_136(uParam0);
				func_127(uParam0, uParam1);
				break;
			}
	}
	if (MISC::IS_BIT_SET(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_6++;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 > 13)
						{
							uParam1->f_6 = 0;
						}
						break;
				}
				func_142(uParam1->f_6, &Global_1376783);
				func_141(&Global_1376783);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_3++;
				if (uParam1->f_3 > 2)
				{
					uParam1->f_3 = 0;
				}
				func_138(func_129(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_137(uParam0);
				func_136(uParam0);
				func_127(uParam0, uParam1);
				break;
			}
	}
	if (MISC::IS_BIT_SET(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = (uParam1->f_1 - 1);
				if (uParam1->f_1 < 0)
				{
					if (iLocal_177 >= 1)
					{
						func_139(uParam0);
						func_1();
					}
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = (uParam1->f_5 - 1);
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_177;
						uParam1->f_1 = 3;
						iVar1 = (uParam1->f_1 + uParam1->f_3 * 4);
						if (iVar1 >= iLocal_178)
						{
							uParam1->f_1 = ((iLocal_178 - 1) % 4);
							uParam1->f_3 = ((iLocal_178 - 1) / 4);
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_138(func_129(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_137(uParam0);
				func_136(uParam0);
				func_127(uParam0, uParam1);
				break;
			}
	}
	if (MISC::IS_BIT_SET(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1++;
				iVar2 = (uParam1->f_1 + uParam1->f_3 * 4);
				if (uParam1->f_1 >= 4 || (uParam1->f_5 == iLocal_177 && iVar2 >= iLocal_178))
				{
					if (iLocal_177 >= 1)
					{
						func_139(uParam0);
						func_1();
					}
					uParam1->f_1 = 0;
					uParam1->f_5++;
					if (uParam1->f_5 > iLocal_177)
					{
						uParam1->f_5 = 0;
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_138(func_129(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_137(uParam0);
				func_136(uParam0);
				func_127(uParam0, uParam1);
				break;
			}
	}
	if (HUD::_0xF284AC67940C6812())
	{
		HUD::_0x36C1451A88A09630(&uVar3, &iVar4);
		switch (uParam1->f_7)
		{
			case 0:
				if (iVar4 == 0 || iVar4 == 1)
				{
					uParam1->f_7 = 1;
					if (HUD::_0xC8E1071177A23BE5(&iVar5, &uVar6, &uVar7))
					{
						Global_1373206.f_1 = (iVar5 % 4);
						Global_1373206.f_3 = (iVar5 / 4);
					}
				}
				break;
			}
	}
	if (HUD::_0x2E22FEFA0100275E())
	{
		HUD::_0x7E17BE53E1AAABAF(&uVar8, &iVar9, &iVar10);
		iVar11 = iVar9 + 1000;
		if (iVar11 >= 0)
		{
			if (iVar10 == 0)
			{
				uParam1->f_7 = 0;
				if (uParam1->f_6 != iVar11)
				{
					uParam1->f_6 = iVar11;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (iVar10 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = (iVar11 % 4);
				uParam1->f_3 = (iVar11 / 4);
			}
			else if (iVar10 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}
	if (uParam0->f_469 == 1)
	{
		if (func_4(&(uParam0->f_465), 500, 0))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_139(uParam0);
					func_130(uParam0, uParam1);
					func_138(-1, uParam0);
					func_137(uParam0);
					func_136(uParam0);
					func_3(0);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(1);
						func_131();
						uParam0->f_470 = 1;
					}
					break;
				}
			}
	}
}

void func_3(int iParam0)
{
	HUD::_0xC78E239AC5B2DDB9(iParam0, 6, 0);
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_11(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_11(uParam0);
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
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

int func_6(var uParam0, bool bParam1)
{
	iVar1 = uParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()
{
	return Global_1312745;
}

int func_8()
{
	return Global_30769;
}

int func_9()
{
	return Global_30768;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_12(int iParam0, var uParam1, int iParam2)
{
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_13(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0)
{
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
	{
		iVar0 = 1;
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
	{
		iVar1 = 1;
	}
	if (iVar2 == 1)
	{
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6")) && iVar0) && iVar1)
		{
			iVar3 = 9;
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_8571)
					{
						iLocal_177 = 19;
						iLocal_178 = 6;
					}
					else
					{
						iLocal_177 = 19;
						iLocal_178 = 3;
					}
					if (Global_262145.f_23723 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23724 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23725 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23726 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (((Global_262145.f_23723 == 0 || Global_262145.f_23725 == 0) || Global_262145.f_23724 == 0) || Global_262145.f_23726 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (!Global_262145.f_28472)
					{
						iLocal_178 = 12;
						iLocal_177 = (iLocal_177 - 1);
					}
					break;
				
				case 1:
					iLocal_177 = 2;
					iLocal_178 = 7;
					iLocal_177 = 2;
					iLocal_178 = 9;
					break;
				
				case 2:
					iLocal_177 = 2;
					iLocal_178 = 4;
					break;
				
				case 3:
					iLocal_177 = 0;
					iLocal_178 = 8;
					break;
				
				case 4:
					iLocal_177 = 0;
					iLocal_178 = 12;
					break;
				
				case 5:
					iLocal_177 = 1;
					iLocal_178 = 11;
					iLocal_177 = 2;
					iLocal_178 = 2;
					break;
				
				case 6:
					if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
					{
						iLocal_177 = 1;
						iLocal_178 = 8;
					}
					else
					{
						iLocal_177 = 1;
						iLocal_178 = 7;
					}
					break;
				
				case 8:
					iLocal_177 = 0;
					iLocal_178 = 8;
					if (Global_262145.f_23723 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23724 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23725 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (Global_262145.f_23726 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					if (((Global_262145.f_23723 == 0 || Global_262145.f_23725 == 0) || Global_262145.f_23724 == 0) || Global_262145.f_23726 == 0)
					{
						iLocal_178 = (iLocal_178 - 1);
					}
					break;
				
				case 7:
					iLocal_177 = 0;
					iLocal_178 = 11;
					break;
				
				case 9:
					iLocal_177 = 3;
					iLocal_178 = 4;
					break;
				
				case 10:
					iLocal_177 = 0;
					iLocal_178 = 11;
					break;
				
				case 11:
					iLocal_177 = 2;
					iLocal_178 = 12;
					break;
				
				case 12:
					iLocal_177 = 0;
					iLocal_178 = 6;
					break;
				
				case 13:
					iLocal_177 = 4;
					iLocal_178 = 1;
					break;
			}
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_120(9, 8, iVar3, &Global_1375928);
							func_120(1, 8, iVar3, &Global_1375928);
							func_120(4, 8, iVar3, &Global_1375928);
							func_120(5, 8, iVar3, &Global_1375928);
							func_120(2, 8, iVar3, &Global_1375928);
							func_120(8, 8, iVar3, &Global_1375928);
							func_120(7, 8, iVar3, &Global_1375928);
							func_120(3, 8, iVar3, &Global_1375928);
							func_120(6, 8, iVar3, &Global_1375928);
							func_120(10, 8, iVar3, &Global_1375928);
							func_120(19, 8, iVar3, &Global_1375928);
							func_120(24, 8, iVar3, &Global_1375928);
							break;
						
						case 1:
							func_120(40, 8, iVar3, &Global_1375928);
							func_120(41, 8, iVar3, &Global_1375928);
							func_120(42, 8, iVar3, &Global_1375928);
							func_120(21, 8, iVar3, &Global_1375928);
							func_120(58, 8, iVar3, &Global_1375928);
							func_120(57, 8, iVar3, &Global_1375928);
							func_120(37, 8, iVar3, &Global_1375928);
							func_107(20, 8, iVar3, &Global_1375928);
							func_120(51, 8, iVar3, &Global_1375928);
							func_120(52, 8, iVar3, &Global_1375928);
							func_120(54, 8, iVar3, &Global_1375928);
							func_107(14, 8, iVar3, &Global_1375928);
							break;
						
						case 2:
							func_107(15, 8, iVar3, &Global_1375928);
							func_107(16, 8, iVar3, &Global_1375928);
							func_120(29, 8, iVar3, &Global_1375928);
							func_120(28, 8, iVar3, &Global_1375928);
							func_120(47, 8, iVar3, &Global_1375928);
							func_107(6, 8, iVar3, &Global_1375928);
							func_107(7, 8, iVar3, &Global_1375928);
							func_120(30, 8, iVar3, &Global_1375928);
							func_107(2, 8, iVar3, &Global_1375928);
							func_120(36, 8, iVar3, &Global_1375928);
							func_120(49, 8, iVar3, &Global_1375928);
							func_120(15, 8, iVar3, &Global_1375928);
							break;
						
						case 3:
							func_120(60, 8, iVar3, &Global_1375928);
							func_120(19, 8, iVar3, &Global_1375928);
							func_120(53, 8, iVar3, &Global_1375928);
							func_120(12, 8, iVar3, &Global_1375928);
							func_120(11, 8, iVar3, &Global_1375928);
							func_120(14, 8, iVar3, &Global_1375928);
							break;
						
						case 4:
							func_120(10, 8, iVar3, &Global_1375928);
							func_120(17, 8, iVar3, &Global_1375928);
							func_120(61, 8, iVar3, &Global_1375928);
							func_120(0, 8, iVar3, &Global_1375928);
							func_120(16, 8, iVar3, &Global_1375928);
							func_107(13, 8, iVar3, &Global_1375928);
							func_120(20, 8, iVar3, &Global_1375928);
							func_120(62, 8, iVar3, &Global_1375928);
							func_120(63, 8, iVar3, &Global_1375928);
							func_107(23, 8, iVar3, &Global_1375928);
							break;
						
						case 5:
							func_120(9, 8, iVar3, &Global_1375928);
							func_120(56, 8, iVar3, &Global_1375928);
							func_120(55, 8, iVar3, &Global_1375928);
							func_120(45, 8, iVar3, &Global_1375928);
							func_120(43, 8, iVar3, &Global_1375928);
							func_120(46, 8, iVar3, &Global_1375928);
							func_120(44, 8, iVar3, &Global_1375928);
							func_107(22, 8, iVar3, &Global_1375928);
							func_107(17, 8, iVar3, &Global_1375928);
							func_107(18, 8, iVar3, &Global_1375928);
							func_120(59, 8, iVar3, &Global_1375928);
							func_120(1, 8, iVar3, &Global_1375928);
							break;
						
						case 6:
							func_120(98, 8, iVar3, &Global_1375928);
							func_91(12, 8, iVar3, &Global_1375928);
							func_91(13, 8, iVar3, &Global_1375928);
							func_91(14, 8, iVar3, &Global_1375928);
							func_91(15, 8, iVar3, &Global_1375928);
							func_91(16, 8, iVar3, &Global_1375928);
							func_120(99, 8, iVar3, &Global_1375928);
							func_91(17, 8, iVar3, &Global_1375928);
							func_91(18, 8, iVar3, &Global_1375928);
							func_91(19, 8, iVar3, &Global_1375928);
							func_120(103, 8, iVar3, &Global_1375928);
							func_107(96, 8, iVar3, &Global_1375928);
							break;
						
						case 7:
							if (!Global_1375928.f_1[0])
							{
								func_91(1, 8, iVar3, &Global_1375928);
								func_91(2, 8, iVar3, &Global_1375928);
								func_91(6, 8, iVar3, &Global_1375928);
								func_91(3, 8, iVar3, &Global_1375928);
								func_91(7, 8, iVar3, &Global_1375928);
								func_91(8, 8, iVar3, &Global_1375928);
								func_91(4, 8, iVar3, &Global_1375928);
								func_91(9, 8, iVar3, &Global_1375928);
								func_91(10, 8, iVar3, &Global_1375928);
								func_91(5, 8, iVar3, &Global_1375928);
								func_91(11, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 8:
							if (!Global_1375928.f_1[0])
							{
								func_120(121, 8, iVar3, &Global_1375928);
								func_107(101, 8, iVar3, &Global_1375928);
								func_107(102, 8, iVar3, &Global_1375928);
								if (Global_262145.f_23723 == 1)
								{
									func_120(117, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23725 == 1)
								{
									func_120(118, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23724 == 1)
								{
									func_120(119, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23726 == 1)
								{
									func_120(120, 8, iVar3, &Global_1375928);
								}
								if (((Global_262145.f_23723 == 1 && Global_262145.f_23725 == 1) && Global_262145.f_23724 == 1) && Global_262145.f_23726 == 1)
								{
									func_107(103, 8, iVar3, &Global_1375928);
								}
							}
							break;
						
						case 9:
							if (!Global_1375928.f_1[0])
							{
								func_120(86, 8, iVar3, &Global_1375928);
								func_120(85, 8, iVar3, &Global_1375928);
								func_120(84, 8, iVar3, &Global_1375928);
								func_120(83, 8, iVar3, &Global_1375928);
								func_120(82, 8, iVar3, &Global_1375928);
								func_120(81, 8, iVar3, &Global_1375928);
								func_120(80, 8, iVar3, &Global_1375928);
								func_120(79, 8, iVar3, &Global_1375928);
								func_120(78, 8, iVar3, &Global_1375928);
								func_120(77, 8, iVar3, &Global_1375928);
								func_120(76, 8, iVar3, &Global_1375928);
								func_120(75, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 10:
							if (!Global_1375928.f_1[0])
							{
								func_107(53, 8, iVar3, &Global_1375928);
								func_107(54, 8, iVar3, &Global_1375928);
								func_107(55, 8, iVar3, &Global_1375928);
								func_107(56, 8, iVar3, &Global_1375928);
								func_107(57, 8, iVar3, &Global_1375928);
								func_107(58, 8, iVar3, &Global_1375928);
								func_107(59, 8, iVar3, &Global_1375928);
								func_107(62, 8, iVar3, &Global_1375928);
								func_107(60, 8, iVar3, &Global_1375928);
								func_107(61, 8, iVar3, &Global_1375928);
								func_120(87, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 11:
							if (!Global_1375928.f_1[0])
							{
								func_107(63, 8, iVar3, &Global_1375928);
								func_120(88, 8, iVar3, &Global_1375928);
								func_107(64, 8, iVar3, &Global_1375928);
								func_107(65, 8, iVar3, &Global_1375928);
								func_107(66, 8, iVar3, &Global_1375928);
								func_107(67, 8, iVar3, &Global_1375928);
								func_107(68, 8, iVar3, &Global_1375928);
								func_107(69, 8, iVar3, &Global_1375928);
								func_107(70, 8, iVar3, &Global_1375928);
								func_107(71, 8, iVar3, &Global_1375928);
								func_107(72, 8, iVar3, &Global_1375928);
								func_107(73, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 12:
							if (!Global_1375928.f_1[0])
							{
								if (Global_262145.f_28472)
								{
									func_107(89, 8, iVar3, &Global_1375928);
									func_107(90, 8, iVar3, &Global_1375928);
									func_107(92, 8, iVar3, &Global_1375928);
									func_107(91, 8, iVar3, &Global_1375928);
									func_107(94, 8, iVar3, &Global_1375928);
									func_107(93, 8, iVar3, &Global_1375928);
								}
							}
							break;
						
						case 13:
							func_85(4, 8, iVar3, &Global_1375928);
							func_85(2, 8, iVar3, &Global_1375928);
							func_85(7, 8, iVar3, &Global_1375928);
							func_85(0, 8, iVar3, &Global_1375928);
							func_85(6, 8, iVar3, &Global_1375928);
							func_85(8, 8, iVar3, &Global_1375928);
							func_85(5, 8, iVar3, &Global_1375928);
							func_85(1, 8, iVar3, &Global_1375928);
							func_85(54, 8, iVar3, &Global_1375928);
							func_85(57, 8, iVar3, &Global_1375928);
							func_85(58, 8, iVar3, &Global_1375928);
							func_85(59, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_120(17, 8, iVar3, &Global_1375928);
							func_120(12, 8, iVar3, &Global_1375928);
							func_120(40, 8, iVar3, &Global_1375928);
							func_120(31, 8, iVar3, &Global_1375928);
							func_120(37, 8, iVar3, &Global_1375928);
							func_120(34, 8, iVar3, &Global_1375928);
							func_120(33, 8, iVar3, &Global_1375928);
							func_120(32, 8, iVar3, &Global_1375928);
							func_120(41, 8, iVar3, &Global_1375928);
							func_120(35, 8, iVar3, &Global_1375928);
							func_120(63, 8, iVar3, &Global_1375928);
							func_73(1, 8, iVar3, &Global_1375928);
							break;
						
						case 1:
							func_120(39, 8, iVar3, &Global_1375928);
							func_107(11, 8, iVar3, &Global_1375928);
							func_120(38, 8, iVar3, &Global_1375928);
							func_107(10, 8, iVar3, &Global_1375928);
							func_120(48, 8, iVar3, &Global_1375928);
							func_120(22, 8, iVar3, &Global_1375928);
							func_120(23, 8, iVar3, &Global_1375928);
							func_120(31, 8, iVar3, &Global_1375928);
							func_120(35, 8, iVar3, &Global_1375928);
							func_107(4, 8, iVar3, &Global_1375928);
							func_107(5, 8, iVar3, &Global_1375928);
							func_120(32, 8, iVar3, &Global_1375928);
							break;
						
						case 2:
							if (!Global_1375928.f_1[0])
							{
								func_107(12, 8, iVar3, &Global_1375928);
								func_120(27, 8, iVar3, &Global_1375928);
								func_107(0, 8, iVar3, &Global_1375928);
								func_107(21, 8, iVar3, &Global_1375928);
								func_73(1, 8, iVar3, &Global_1375928);
								func_73(0, 8, iVar3, &Global_1375928);
								func_73(3, 8, iVar3, &Global_1375928);
								func_73(2, 8, iVar3, &Global_1375928);
								func_120(105, 8, iVar3, &Global_1375928);
								func_120(106, 8, iVar3, &Global_1375928);
								func_120(112, 8, iVar3, &Global_1375928);
								func_107(100, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 5:
							if (!Global_1375928.f_1[0])
							{
								func_120(5, 8, iVar3, &Global_1375928);
								func_120(4, 8, iVar3, &Global_1375928);
								func_120(25, 8, iVar3, &Global_1375928);
								func_120(2, 8, iVar3, &Global_1375928);
								func_120(26, 8, iVar3, &Global_1375928);
								func_120(7, 8, iVar3, &Global_1375928);
								func_120(3, 8, iVar3, &Global_1375928);
								func_120(6, 8, iVar3, &Global_1375928);
								func_120(8, 8, iVar3, &Global_1375928);
								func_120(24, 8, iVar3, &Global_1375928);
								func_120(107, 8, iVar3, &Global_1375928);
								func_120(109, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 6:
							if (!Global_1375928.f_1[0])
							{
								func_120(101, 8, iVar3, &Global_1375928);
								func_120(100, 8, iVar3, &Global_1375928);
								func_107(98, 8, iVar3, &Global_1375928);
								func_107(95, 8, iVar3, &Global_1375928);
								func_107(99, 8, iVar3, &Global_1375928);
								func_120(110, 8, iVar3, &Global_1375928);
								func_91(21, 8, iVar3, &Global_1375928);
								if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
								{
									func_91(20, 8, iVar3, &Global_1375928);
								}
							}
							break;
						
						case 9:
							if (!Global_1375928.f_1[0])
							{
								func_120(74, 8, iVar3, &Global_1375928);
								func_120(73, 8, iVar3, &Global_1375928);
								func_120(72, 8, iVar3, &Global_1375928);
								func_107(52, 8, iVar3, &Global_1375928);
								func_107(51, 8, iVar3, &Global_1375928);
								func_120(71, 8, iVar3, &Global_1375928);
								func_120(70, 8, iVar3, &Global_1375928);
								func_107(50, 8, iVar3, &Global_1375928);
								func_107(30, 8, iVar3, &Global_1375928);
								func_107(31, 8, iVar3, &Global_1375928);
								func_107(32, 8, iVar3, &Global_1375928);
								func_107(33, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 11:
							if (!Global_1375928.f_1[0])
							{
								func_107(74, 8, iVar3, &Global_1375928);
								func_107(75, 8, iVar3, &Global_1375928);
								func_120(89, 8, iVar3, &Global_1375928);
								func_120(90, 8, iVar3, &Global_1375928);
								func_120(91, 8, iVar3, &Global_1375928);
								func_107(76, 8, iVar3, &Global_1375928);
								func_107(77, 8, iVar3, &Global_1375928);
								func_107(78, 8, iVar3, &Global_1375928);
								func_120(92, 8, iVar3, &Global_1375928);
								func_120(93, 8, iVar3, &Global_1375928);
								func_107(79, 8, iVar3, &Global_1375928);
								func_107(80, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 13:
							func_85(60, 8, iVar3, &Global_1375928);
							func_85(12, 8, iVar3, &Global_1375928);
							func_85(56, 8, iVar3, &Global_1375928);
							func_85(55, 8, iVar3, &Global_1375928);
							func_85(25, 8, iVar3, &Global_1375928);
							func_85(34, 8, iVar3, &Global_1375928);
							func_85(45, 8, iVar3, &Global_1375928);
							func_85(48, 8, iVar3, &Global_1375928);
							func_85(49, 8, iVar3, &Global_1375928);
							func_85(65, 8, iVar3, &Global_1375928);
							func_85(46, 8, iVar3, &Global_1375928);
							func_85(9, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_120(48, 8, iVar3, &Global_1375928);
							func_120(14, 8, iVar3, &Global_1375928);
							func_120(25, 8, iVar3, &Global_1375928);
							func_120(26, 8, iVar3, &Global_1375928);
							func_120(15, 8, iVar3, &Global_1375928);
							func_120(22, 8, iVar3, &Global_1375928);
							func_120(27, 8, iVar3, &Global_1375928);
							func_120(21, 8, iVar3, &Global_1375928);
							func_120(11, 8, iVar3, &Global_1375928);
							func_120(62, 8, iVar3, &Global_1375928);
							func_120(23, 8, iVar3, &Global_1375928);
							func_120(0, 8, iVar3, &Global_1375928);
							break;
						
						case 1:
							if (!Global_1375928.f_1[0])
							{
								func_120(34, 8, iVar3, &Global_1375928);
								func_107(3, 8, iVar3, &Global_1375928);
								func_120(33, 8, iVar3, &Global_1375928);
								func_107(8, 8, iVar3, &Global_1375928);
								func_120(113, 8, iVar3, &Global_1375928);
								func_120(114, 8, iVar3, &Global_1375928);
								func_120(115, 8, iVar3, &Global_1375928);
								func_120(104, 8, iVar3, &Global_1375928);
								func_120(108, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 2:
							if (!Global_1375928.f_1[0])
							{
								func_120(116, 8, iVar3, &Global_1375928);
								func_120(67, 8, iVar3, &Global_1375928);
								func_107(25, 8, iVar3, &Global_1375928);
								func_107(26, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 5:
							if (!Global_1375928.f_1[0])
							{
								func_120(111, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 9:
							if (!Global_1375928.f_1[0])
							{
								func_107(34, 8, iVar3, &Global_1375928);
								func_107(35, 8, iVar3, &Global_1375928);
								func_107(36, 8, iVar3, &Global_1375928);
								func_107(37, 8, iVar3, &Global_1375928);
								func_107(38, 8, iVar3, &Global_1375928);
								func_107(39, 8, iVar3, &Global_1375928);
								func_107(40, 8, iVar3, &Global_1375928);
								func_107(41, 8, iVar3, &Global_1375928);
								func_107(42, 8, iVar3, &Global_1375928);
								func_107(43, 8, iVar3, &Global_1375928);
								func_107(44, 8, iVar3, &Global_1375928);
								func_107(45, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 11:
							if (!Global_1375928.f_1[0])
							{
								func_107(81, 8, iVar3, &Global_1375928);
								func_120(94, 8, iVar3, &Global_1375928);
								func_120(95, 8, iVar3, &Global_1375928);
								func_107(82, 8, iVar3, &Global_1375928);
								func_107(83, 8, iVar3, &Global_1375928);
								func_120(96, 8, iVar3, &Global_1375928);
								func_107(84, 8, iVar3, &Global_1375928);
								func_107(85, 8, iVar3, &Global_1375928);
								func_120(97, 8, iVar3, &Global_1375928);
								func_107(86, 8, iVar3, &Global_1375928);
								func_107(87, 8, iVar3, &Global_1375928);
								func_107(88, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 13:
							if (!Global_1375928.f_1[0])
							{
								func_85(10, 8, iVar3, &Global_1375928);
								func_85(11, 8, iVar3, &Global_1375928);
								func_85(87, 8, iVar3, &Global_1375928);
								func_85(89, 8, iVar3, &Global_1375928);
								iVar2 = 0;
								if (func_70(3608, -1, -1))
								{
									iVar2 = 1;
								}
								func_66("CLO_LTS_T_0", "CLO_LTS_TD_0", "Elitas_Tshirt", "MPTshirtAwardLTS", 1, iVar2, -1, 1, &Global_1375928);
								func_63(0);
								func_63(1);
								func_63(2);
								iVar2 = 0;
								if (func_50(4))
								{
									iVar2 = 1;
								}
								func_66("CLO_HST_A_4", "CLO_HST_AD_5", "CantTouchThis", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1375928);
								func_63(5);
								func_63(7);
								func_63(6);
							}
							break;
					}
					break;
				
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_120(16, 8, iVar3, &Global_1375928);
							func_120(45, 8, iVar3, &Global_1375928);
							func_120(43, 8, iVar3, &Global_1375928);
							func_120(46, 8, iVar3, &Global_1375928);
							func_120(44, 8, iVar3, &Global_1375928);
							func_120(30, 8, iVar3, &Global_1375928);
							func_107(2, 8, iVar3, &Global_1375928);
							func_120(39, 8, iVar3, &Global_1375928);
							func_120(38, 8, iVar3, &Global_1375928);
							func_107(3, 8, iVar3, &Global_1375928);
							func_120(42, 8, iVar3, &Global_1375928);
							func_120(36, 8, iVar3, &Global_1375928);
							break;
						
						case 1:
							if (!Global_1375928.f_1[0])
							{
							}
							break;
						
						case 9:
							if (!Global_1375928.f_1[0])
							{
								func_107(46, 8, iVar3, &Global_1375928);
								func_107(47, 8, iVar3, &Global_1375928);
								func_107(48, 8, iVar3, &Global_1375928);
								func_107(49, 8, iVar3, &Global_1375928);
							}
							break;
						
						case 13:
							func_63(8);
							iVar2 = 0;
							if (func_50(9))
							{
								iVar2 = 1;
							}
							func_66("CLO_HST_A_9", "CLO_HST_AD_9", "Showroom", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1375928);
							func_66("CHR_HST_A_0", "CHR_HST_AD_0", "SportMod", "MPAwardMods", func_49(104, 5, 0), func_48(104, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_1", "CHR_HST_AD_1", "LowriderMod", "MPAwardMods", func_49(105, 5, 0), func_48(105, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_2", "CHR_HST_AD_2", "OffroadMod", "MPAwardMods", func_49(107, 5, 0), func_48(107, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_3", "CHR_HST_AD_3", "HighendMod", "MPAwardMods", func_49(98, 5, 0), func_48(98, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_4", "CHR_HST_AD_4", "TunerMod", "MPAwardMods", func_49(99, 5, 0), func_48(99, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_5", "CHR_HST_AD_5", "BikeMod", "MPAwardMods", func_49(109, 5, 0), func_48(109, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_6", "CHR_HST_AD_6", "SUVMod", "MPAwardMods", func_49(113, 5, 0), func_48(113, -1), -1, 1, &Global_1375928);
							func_66("CHR_HST_A_7", "CHR_HST_AD_7", "MuscleMod", "MPAwardMods", func_49(114, 5, 0), func_48(114, -1), -1, 1, &Global_1375928);
							func_63(34);
							func_66("CLO_S1M_DEC_25", "CLO_S1M_D_24_25", "BennyTshirt01", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1375928);
							break;
					}
					break;
				
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_107(15, 8, iVar3, &Global_1375928);
							func_107(4, 8, iVar3, &Global_1375928);
							func_107(5, 8, iVar3, &Global_1375928);
							func_107(7, 8, iVar3, &Global_1375928);
							func_107(6, 8, iVar3, &Global_1375928);
							func_120(29, 8, iVar3, &Global_1375928);
							func_120(28, 8, iVar3, &Global_1375928);
							func_120(20, 8, iVar3, &Global_1375928);
							func_107(0, 8, iVar3, &Global_1375928);
							func_107(8, 8, iVar3, &Global_1375928);
							func_120(61, 8, iVar3, &Global_1375928);
							func_73(3, 8, iVar3, &Global_1375928);
							break;
						
						case 13:
							if (!Global_1375928.f_1[0])
							{
								if (func_47(2931, -1, 0) == 1)
								{
									iVar2 = 8;
								}
								else
								{
									iVar2 = func_42(0);
									if (iVar2 > 0)
									{
										iVar2 = (iVar2 - 1);
									}
								}
								func_66("CLO_S1M_DEC_24", "CLO_S1M_D_24_25", "BennyTshirt02", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1375928);
							}
							break;
					}
					break;
				
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_107(22, 8, iVar3, &Global_1375928);
							func_107(17, 8, iVar3, &Global_1375928);
							func_107(18, 8, iVar3, &Global_1375928);
							func_73(2, 8, iVar3, &Global_1375928);
							func_73(0, 8, iVar3, &Global_1375928);
							func_107(16, 8, iVar3, &Global_1375928);
							func_107(12, 8, iVar3, &Global_1375928);
							func_107(13, 8, iVar3, &Global_1375928);
							func_120(55, 8, iVar3, &Global_1375928);
							func_120(56, 8, iVar3, &Global_1375928);
							func_120(53, 8, iVar3, &Global_1375928);
							func_107(20, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_107(10, 8, iVar3, &Global_1375928);
							func_107(21, 8, iVar3, &Global_1375928);
							func_120(60, 8, iVar3, &Global_1375928);
							func_107(11, 8, iVar3, &Global_1375928);
							func_120(51, 8, iVar3, &Global_1375928);
							func_120(52, 8, iVar3, &Global_1375928);
							func_120(59, 8, iVar3, &Global_1375928);
							func_120(58, 8, iVar3, &Global_1375928);
							func_107(14, 8, iVar3, &Global_1375928);
							func_120(54, 8, iVar3, &Global_1375928);
							func_120(57, 8, iVar3, &Global_1375928);
							func_120(47, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_107(23, 8, iVar3, &Global_1375928);
								func_120(49, 8, iVar3, &Global_1375928);
								func_120(104, 8, iVar3, &Global_1375928);
								func_120(105, 8, iVar3, &Global_1375928);
								func_120(106, 8, iVar3, &Global_1375928);
								func_120(107, 8, iVar3, &Global_1375928);
								func_120(108, 8, iVar3, &Global_1375928);
								func_120(98, 8, iVar3, &Global_1375928);
								func_120(99, 8, iVar3, &Global_1375928);
								func_120(100, 8, iVar3, &Global_1375928);
								func_120(101, 8, iVar3, &Global_1375928);
								func_107(96, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_120(103, 8, iVar3, &Global_1375928);
								func_107(95, 8, iVar3, &Global_1375928);
								func_120(109, 8, iVar3, &Global_1375928);
								func_107(99, 8, iVar3, &Global_1375928);
								func_120(110, 8, iVar3, &Global_1375928);
								func_120(111, 8, iVar3, &Global_1375928);
								func_120(112, 8, iVar3, &Global_1375928);
								func_120(113, 8, iVar3, &Global_1375928);
								func_120(114, 8, iVar3, &Global_1375928);
								func_120(115, 8, iVar3, &Global_1375928);
								func_107(100, 8, iVar3, &Global_1375928);
								func_120(116, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_107(98, 8, iVar3, &Global_1375928);
								func_91(12, 8, iVar3, &Global_1375928);
								func_91(13, 8, iVar3, &Global_1375928);
								func_91(14, 8, iVar3, &Global_1375928);
								func_91(15, 8, iVar3, &Global_1375928);
								func_91(16, 8, iVar3, &Global_1375928);
								func_91(17, 8, iVar3, &Global_1375928);
								func_91(18, 8, iVar3, &Global_1375928);
								func_91(19, 8, iVar3, &Global_1375928);
								if (!Global_262145.f_8571)
								{
									func_120(67, 8, iVar3, &Global_1375928);
									func_107(25, 8, iVar3, &Global_1375928);
									func_107(26, 8, iVar3, &Global_1375928);
								}
							}
							break;
					}
					break;
				
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_91(21, 8, iVar3, &Global_1375928);
								if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
								{
									func_91(20, 8, iVar3, &Global_1375928);
								}
								func_91(1, 8, iVar3, &Global_1375928);
								func_91(2, 8, iVar3, &Global_1375928);
								func_91(6, 8, iVar3, &Global_1375928);
								func_91(3, 8, iVar3, &Global_1375928);
								func_91(7, 8, iVar3, &Global_1375928);
								func_91(8, 8, iVar3, &Global_1375928);
								func_91(4, 8, iVar3, &Global_1375928);
								func_91(9, 8, iVar3, &Global_1375928);
								func_91(10, 8, iVar3, &Global_1375928);
								func_91(5, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_91(11, 8, iVar3, &Global_1375928);
								func_120(121, 8, iVar3, &Global_1375928);
								func_107(101, 8, iVar3, &Global_1375928);
								func_107(102, 8, iVar3, &Global_1375928);
								if (Global_262145.f_23723 == 1)
								{
									func_120(117, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23725 == 1)
								{
									func_120(118, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23724 == 1)
								{
									func_120(119, 8, iVar3, &Global_1375928);
								}
								if (Global_262145.f_23726 == 1)
								{
									func_120(120, 8, iVar3, &Global_1375928);
								}
								if (((Global_262145.f_23723 == 1 && Global_262145.f_23725 == 1) && Global_262145.f_23724 == 1) && Global_262145.f_23726 == 1)
								{
									func_107(103, 8, iVar3, &Global_1375928);
								}
								func_120(86, 8, iVar3, &Global_1375928);
								func_120(85, 8, iVar3, &Global_1375928);
								func_120(84, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_120(83, 8, iVar3, &Global_1375928);
								func_120(82, 8, iVar3, &Global_1375928);
								func_120(81, 8, iVar3, &Global_1375928);
								func_120(80, 8, iVar3, &Global_1375928);
								func_120(79, 8, iVar3, &Global_1375928);
								func_120(78, 8, iVar3, &Global_1375928);
								func_120(77, 8, iVar3, &Global_1375928);
								func_120(76, 8, iVar3, &Global_1375928);
								func_120(75, 8, iVar3, &Global_1375928);
								func_120(74, 8, iVar3, &Global_1375928);
								func_120(73, 8, iVar3, &Global_1375928);
								func_120(72, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_107(52, 8, iVar3, &Global_1375928);
								func_107(51, 8, iVar3, &Global_1375928);
								func_120(71, 8, iVar3, &Global_1375928);
								func_120(70, 8, iVar3, &Global_1375928);
								func_107(50, 8, iVar3, &Global_1375928);
								func_107(30, 8, iVar3, &Global_1375928);
								func_107(31, 8, iVar3, &Global_1375928);
								func_107(32, 8, iVar3, &Global_1375928);
								func_107(33, 8, iVar3, &Global_1375928);
								func_107(34, 8, iVar3, &Global_1375928);
								func_107(35, 8, iVar3, &Global_1375928);
								func_107(36, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_107(37, 8, iVar3, &Global_1375928);
								func_107(38, 8, iVar3, &Global_1375928);
								func_107(39, 8, iVar3, &Global_1375928);
								func_107(40, 8, iVar3, &Global_1375928);
								func_107(41, 8, iVar3, &Global_1375928);
								func_107(42, 8, iVar3, &Global_1375928);
								func_107(43, 8, iVar3, &Global_1375928);
								func_107(44, 8, iVar3, &Global_1375928);
								func_107(45, 8, iVar3, &Global_1375928);
								func_107(46, 8, iVar3, &Global_1375928);
								func_107(47, 8, iVar3, &Global_1375928);
								func_107(48, 8, iVar3, &Global_1375928);
							}
							break;
					}
					break;
				
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								func_107(49, 8, iVar3, &Global_1375928);
							}
							func_107(53, 8, iVar3, &Global_1375928);
							func_107(54, 8, iVar3, &Global_1375928);
							func_107(55, 8, iVar3, &Global_1375928);
							func_107(56, 8, iVar3, &Global_1375928);
							func_107(57, 8, iVar3, &Global_1375928);
							func_107(58, 8, iVar3, &Global_1375928);
							func_107(59, 8, iVar3, &Global_1375928);
							func_107(62, 8, iVar3, &Global_1375928);
							func_107(60, 8, iVar3, &Global_1375928);
							func_107(61, 8, iVar3, &Global_1375928);
							func_120(87, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_120(88, 8, iVar3, &Global_1375928);
							func_120(89, 8, iVar3, &Global_1375928);
							func_120(90, 8, iVar3, &Global_1375928);
							func_120(91, 8, iVar3, &Global_1375928);
							func_120(92, 8, iVar3, &Global_1375928);
							func_120(93, 8, iVar3, &Global_1375928);
							func_120(94, 8, iVar3, &Global_1375928);
							func_120(95, 8, iVar3, &Global_1375928);
							func_120(96, 8, iVar3, &Global_1375928);
							func_120(97, 8, iVar3, &Global_1375928);
							func_107(63, 8, iVar3, &Global_1375928);
							func_107(64, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_107(65, 8, iVar3, &Global_1375928);
							func_107(66, 8, iVar3, &Global_1375928);
							func_107(67, 8, iVar3, &Global_1375928);
							func_107(68, 8, iVar3, &Global_1375928);
							func_107(69, 8, iVar3, &Global_1375928);
							func_107(70, 8, iVar3, &Global_1375928);
							func_107(71, 8, iVar3, &Global_1375928);
							func_107(72, 8, iVar3, &Global_1375928);
							func_107(73, 8, iVar3, &Global_1375928);
							func_107(74, 8, iVar3, &Global_1375928);
							func_107(75, 8, iVar3, &Global_1375928);
							func_107(76, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_107(77, 8, iVar3, &Global_1375928);
							func_107(78, 8, iVar3, &Global_1375928);
							func_107(79, 8, iVar3, &Global_1375928);
							func_107(80, 8, iVar3, &Global_1375928);
							func_107(81, 8, iVar3, &Global_1375928);
							func_107(82, 8, iVar3, &Global_1375928);
							func_107(83, 8, iVar3, &Global_1375928);
							func_107(84, 8, iVar3, &Global_1375928);
							func_107(85, 8, iVar3, &Global_1375928);
							func_107(86, 8, iVar3, &Global_1375928);
							func_107(87, 8, iVar3, &Global_1375928);
							func_107(88, 8, iVar3, &Global_1375928);
							break;
					}
					break;
				
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1375928.f_1[0])
							{
								if (Global_262145.f_28472)
								{
									func_107(89, 8, iVar3, &Global_1375928);
									func_107(90, 8, iVar3, &Global_1375928);
									func_107(92, 8, iVar3, &Global_1375928);
									func_107(91, 8, iVar3, &Global_1375928);
									func_107(94, 8, iVar3, &Global_1375928);
									func_107(93, 8, iVar3, &Global_1375928);
								}
							}
							break;
					}
					break;
			}
			func_29(&Global_1375928, func_41(&Global_1375928));
			func_28(1, &Global_1376783);
			func_27(1, &Global_1376783);
			func_26(1, &Global_1376783);
			func_25(0, "HUD_AWDLIST1", &Global_1376783);
			func_25(1, "HUD_AWDLIST12", &Global_1376783);
			func_25(2, "HUD_AWDLIST3b", &Global_1376783);
			func_25(3, "HUD_AWDLIST6", &Global_1376783);
			func_25(4, "HUD_AWDLIST9", &Global_1376783);
			func_25(5, "HUD_AWDLIST10", &Global_1376783);
			func_25(6, "HUD_AWDLIST13", &Global_1376783);
			func_25(7, "HUD_AWD_GANGOP", &Global_1376783);
			func_25(8, "HUD_AWD_NIGHTCLUB", &Global_1376783);
			func_25(9, "PM_ARENA", &Global_1376783);
			func_25(10, "AWDGBC_VC", &Global_1376783);
			func_25(11, "FMMC_CH_DN", &Global_1376783);
			if (Global_262145.f_28472)
			{
				func_25(12, "SUM20AWARDPAGE", &Global_1376783);
			}
			func_25(13, "HUD_AWDLIST6b", &Global_1376783);
			func_16(&Global_1376783, func_24(&Global_1376783));
		}
	}
}

void func_16(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar1 = uParam0->f_275[iVar0];
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (uParam0->f_1[iVar0] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
				if (uParam0->f_379 == 1)
				{
					if (uParam0->f_380 == iVar0)
					{
						iVar1 = 0;
					}
					else
					{
						iVar1 = 4;
					}
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_309[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				if (uParam0->f_378)
				{
					func_22(&(uParam0->f_18[iVar0]));
				}
				else
				{
					func_21(&(uParam0->f_18[iVar0]));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_292[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_343[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_360[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_326[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			*uParam0 = 1;
			iVar0++;
		}
		func_20(0);
	}
	func_17(uParam0, func_19(uParam0));
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_381 = 0;
		func_18(uParam0);
	}
	if (uParam0->f_381 == 0)
	{
		if (uParam0->f_380 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_380);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_380 = -1;
			uParam0->f_381 = 1;
		}
	}
}

void func_18(var uParam0)
{
	uParam0->f_383 = 0;
}

int func_19(var uParam0)
{
	return uParam0->f_383;
}

void func_20(int iParam0)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_21(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

void func_22(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_23(var uParam0)
{
	uParam0->f_382 = 0;
}

int func_24(var uParam0)
{
	return uParam0->f_382;
}

void func_25(int iParam0, char* sParam1, var uParam2)
{
	StringCopy(&(uParam2->f_18[iParam0]), sParam1, 64);
	uParam2->f_1[iParam0] = 1;
}

void func_26(int iParam0, var uParam1)
{
	uParam1->f_379 = iParam0;
}

void func_27(int iParam0, var uParam1)
{
	uParam1->f_377 = iParam0;
}

void func_28(int iParam0, var uParam1)
{
	uParam1->f_378 = iParam0;
}

void func_29(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				iVar1 = -1;
				iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(uParam0->f_221[iVar0]) / SYSTEM::TO_FLOAT(uParam0->f_208[iVar0])) * 100f));
				iVar1 = uParam0->f_441[iVar0];
				iVar2 = -1;
				switch (uParam0->f_428[iVar0])
				{
					case 107:
						iVar2 = 100;
						break;
					
					case 108:
						iVar2 = 200;
						break;
					
					case 109:
						iVar2 = 400;
						break;
					
					case 110:
						iVar2 = 800;
						break;
				}
				StringCopy(&cVar3, func_38(uParam0->f_428[iVar0]), 32);
				if (uParam0->f_1[iVar0] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_22(&(uParam0->f_14[iVar0]));
					func_22(&(uParam0->f_111[iVar0]));
					func_21(&(uParam0->f_331[iVar0]));
					func_21(&(uParam0->f_234[iVar0]));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[iVar0]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					if (func_37(&cVar3))
					{
						func_22("HUD_AWDPROG_S");
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("HUD_AWDPROG");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&cVar3);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (uParam0->f_221[iVar0] >= uParam0->f_208[iVar0])
					{
						func_22("TR_COMPLETE");
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TIMER_DASHES");
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[iVar0]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[iVar0]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (iVar2 >= 0)
					{
						func_22("HUD_AWDAWARD");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			func_20(1);
			*uParam0 = 1;
		}
	}
	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
}

void func_30(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}
	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}
}

void func_31(var uParam0)
{
	uParam0->f_462 = 0;
}

int func_32(var uParam0)
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}
	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		if (uParam0->f_456 < 0)
		{
			func_22("");
			func_22("");
		}
		else if (uParam0->f_456 < 12)
		{
			func_22(&(uParam0->f_14[uParam0->f_456]));
			if (uParam0->f_208[uParam0->f_456] > -1)
			{
				func_34(&(uParam0->f_111[uParam0->f_456]), uParam0->f_208[uParam0->f_456]);
			}
			else
			{
				func_22(&(uParam0->f_111[uParam0->f_456]));
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}
}

void func_34(char* sParam0, var uParam1)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_35(var uParam0)
{
	uParam0->f_463 = 0;
}

int func_36(var uParam0)
{
	return uParam0->f_463;
}

int func_37(char[4] cParam0)
{
	if (MISC::IS_STRING_NULL(cParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(cParam0, "") || MISC::ARE_STRINGS_EQUAL(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_38(int iParam0)
{
	switch (iParam0)
	{
		case 107:
			return "HUD_MED_BRON";
			break;
		
		case 108:
			return "HUD_MED_SILV";
			break;
		
		case 109:
			return "HUD_MED_GOLD";
			break;
		
		case 110:
			return "HUD_MED_PLAT";
			break;
	}
	return "";
}

int func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam0->f_1[iVar0] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_331[iVar0])))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(uParam0->f_331[iVar0]), 0);
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(uParam0->f_331[iVar0])))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)
{
	uParam0->f_460 = 0;
}

int func_41(var uParam0)
{
	return uParam0->f_460;
}

int func_42(int iParam0)
{
	if (Global_1671743[iParam0] == -1)
	{
		iVar0 = func_47(func_46(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_43(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0] = iVar0;
	}
	return Global_1671743[iParam0];
}

void func_43(int iParam0, int iParam1)
{
	Global_1671743[iParam0] = iParam1;
	func_44(func_46(iParam0), iParam1, -1, 1, 0);
}

void func_44(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_45(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_45(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_45(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_45(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27892;
				
				case 3:
					return Global_262145.f_27893;
				
				case 4:
					return Global_262145.f_27894;
				
				case 5:
					return Global_262145.f_27895;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28059;
				
				case 3:
					return Global_262145.f_28060;
				
				case 4:
					return Global_262145.f_28061;
				
				case 5:
					return Global_262145.f_28062;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28093;
				
				case 3:
					return Global_262145.f_28094;
				
				case 4:
					return Global_262145.f_28095;
				
				case 5:
					return Global_262145.f_28096;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28097;
				
				case 3:
					return Global_262145.f_28098;
				
				case 4:
					return Global_262145.f_28099;
				
				case 5:
					return Global_262145.f_28100;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27788;
				
				case 3:
					return Global_262145.f_27789;
				
				case 4:
					return Global_262145.f_27790;
				
				case 5:
					return Global_262145.f_27791;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28063;
				
				case 3:
					return Global_262145.f_28064;
				
				case 4:
					return Global_262145.f_28065;
				
				case 5:
					return Global_262145.f_28066;
				
				default:
			}
			break;
	}
	return 999;
}

int func_50(int iParam0)
{
	bVar0 = func_60(386, -1, -1) == false;
	if (bVar0)
	{
		if (func_51(func_56(func_59(iParam0, bVar0), 3), -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_51(func_56(func_59(iParam0, bVar0), 4), -1))
	{
		return 1;
	}
	return 0;
}

bool func_51(int iParam0, int iParam1)
{
	if (func_54(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_53(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_52(iVar1));
}

int func_52(int iParam0)
{
	return (iParam0 % 32);
}

int func_53(var uParam0, int iParam1)
{
	iVar0 = func_47(func_54(uParam0), iParam1, 0);
	return iVar0;
}

int func_54(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_55(iVar0);
	if ((func_9() == 0 || func_8() == 0) || (func_9() == 999 && func_8() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_55(int iParam0)
{
	return (iParam0 / 32);
}

int func_56(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (func_58(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_57(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILES::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILES::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_57(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
		
		case -503061408:
			iVar0 = 1126;
			break;
		
		case -511607931:
			iVar0 = 1127;
			break;
		
		case -1252323352:
			iVar0 = 1128;
			break;
		
		case -1836767787:
			iVar0 = 1129;
			break;
		
		case 2104165007:
			iVar0 = 1130;
			break;
		
		case -1020450678:
			iVar0 = 1131;
			break;
		
		case 361610929:
			iVar0 = 1132;
			break;
		
		case -1060893559:
			iVar0 = 1133;
			break;
		
		case -1918931165:
			iVar0 = 1134;
			break;
		
		case 516389880:
			iVar0 = 1135;
			break;
		
		case 2047957618:
			iVar0 = 1136;
			break;
		
		case -1461327573:
			iVar0 = 1137;
			break;
		
		case -1710764657:
			iVar0 = 1138;
			break;
		
		case -815856869:
			iVar0 = 1139;
			break;
		
		case 1293748604:
			iVar0 = 1140;
			break;
		
		case -906850579:
			iVar0 = 1141;
			break;
		
		case -504902857:
			iVar0 = 1142;
			break;
		
		case -1891206996:
			iVar0 = 1143;
			break;
		
		case -6720974:
			iVar0 = 1144;
			break;
		
		case -2069848364:
			iVar0 = 1145;
			break;
		
		case 778786183:
			iVar0 = 1146;
			break;
		
		case -1337421708:
			iVar0 = 1147;
			break;
		
		case -1890546602:
			iVar0 = 1148;
			break;
		
		case 218123795:
			iVar0 = 1149;
			break;
		
		case -636242520:
			iVar0 = 1150;
			break;
		
		case -1180398682:
			iVar0 = 1151;
			break;
		
		case 1694157857:
			iVar0 = 1152;
			break;
		
		case -1696611500:
			iVar0 = 1153;
			break;
		
		case 1988941728:
			iVar0 = 1154;
			break;
		
		case -1693251432:
			iVar0 = 1155;
			break;
		
		case -1235260480:
			iVar0 = 1156;
			break;
		
		case -2013104967:
			iVar0 = 1157;
			break;
		
		case -1763320016:
			iVar0 = 1158;
			break;
		
		case 1141954591:
			iVar0 = 1159;
			break;
		
		case 24176579:
			iVar0 = 1160;
			break;
		
		case 501566279:
			iVar0 = 1161;
			break;
		
		case -909438267:
			iVar0 = 1162;
			break;
		
		case -1286663634:
			iVar0 = 1163;
			break;
		
		case -1840235222:
			iVar0 = 1164;
			break;
		
		case -888873465:
			iVar0 = 1165;
			break;
		
		case -1426756926:
			iVar0 = 1166;
			break;
		
		case 2130054214:
			iVar0 = 1167;
			break;
		
		case 836015556:
			iVar0 = 1168;
			break;
		
		case -502214028:
			iVar0 = 1169;
			break;
		
		case -1838365509:
			iVar0 = 1170;
			break;
		
		case -547605203:
			iVar0 = 1171;
			break;
		
		case 1848216712:
			iVar0 = 1172;
			break;
		
		case 223413431:
			iVar0 = 1173;
			break;
		
		case -432155816:
			iVar0 = 1174;
			break;
		
		case -104345338:
			iVar0 = 1175;
			break;
		
		case 1184426490:
			iVar0 = 1176;
			break;
		
		case 47527010:
			iVar0 = 1177;
			break;
		
		case -1576036346:
			iVar0 = 1178;
			break;
		
		case -809444617:
			iVar0 = 1179;
			break;
		
		case -1643354138:
			iVar0 = 1180;
			break;
		
		case -73524046:
			iVar0 = 1181;
			break;
		
		case -1843193891:
			iVar0 = 1182;
			break;
		
		case -1224204417:
			iVar0 = 1183;
			break;
		
		case 921109652:
			iVar0 = 1184;
			break;
		
		case -1009122462:
			iVar0 = 1185;
			break;
		
		case -2143877160:
			iVar0 = 1186;
			break;
		
		case 985961343:
			iVar0 = 1187;
			break;
		
		case 906071982:
			iVar0 = 1188;
			break;
		
		case 566663142:
			iVar0 = 1189;
			break;
		
		case 764251611:
			iVar0 = 1190;
			break;
		
		case -1575240476:
			iVar0 = 1191;
			break;
		
		case 676807987:
			iVar0 = 1192;
			break;
		
		case 272160153:
			iVar0 = 1193;
			break;
		
		case 1593344440:
			iVar0 = 1194;
			break;
		
		case 546222390:
			iVar0 = 1195;
			break;
		
		case 1983375900:
			iVar0 = 1196;
			break;
		
		case -620589387:
			iVar0 = 1197;
			break;
		
		case 383923929:
			iVar0 = 1198;
			break;
		
		case -1703406594:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -398286533:
			iVar0 = 1200;
			break;
		
		case -80478106:
			iVar0 = 1201;
			break;
		
		case 1835331655:
			iVar0 = 1202;
			break;
		
		case -1650596870:
			iVar0 = 1203;
			break;
		
		case 1231926496:
			iVar0 = 1204;
			break;
		
		case -1506181253:
			iVar0 = 1205;
			break;
		
		case -1737145605:
			iVar0 = 1206;
			break;
		
		case 1673851512:
			iVar0 = 1207;
			break;
		
		case 1023339598:
			iVar0 = 1208;
			break;
		
		case -163738770:
			iVar0 = 1209;
			break;
		
		case 1863218823:
			iVar0 = 1210;
			break;
		
		case 333966447:
			iVar0 = 1211;
			break;
		
		case 1412626052:
			iVar0 = 1212;
			break;
		
		case -39100956:
			iVar0 = 1213;
			break;
		
		case 1631533003:
			iVar0 = 1214;
			break;
		
		case 1493430918:
			iVar0 = 1215;
			break;
		
		case -196693334:
			iVar0 = 1216;
			break;
		
		case 553507495:
			iVar0 = 1217;
			break;
		
		case 2003474700:
			iVar0 = 1218;
			break;
		
		case 1121792228:
			iVar0 = 1219;
			break;
		
		case -1424651669:
			iVar0 = 1220;
			break;
		
		case -1454164346:
			iVar0 = 1221;
			break;
		
		case -779574408:
			iVar0 = 1222;
			break;
		
		case -1361908447:
			iVar0 = 1223;
			break;
		
		case 1250161120:
			iVar0 = 1224;
			break;
		
		case 1288201657:
			iVar0 = 1225;
			break;
		
		case 111412152:
			iVar0 = 1226;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_58(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case -1233846590:
			iVar0 = 820;
			break;
		
		case -1448569917:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case -416717212:
			iVar0 = 826;
			break;
		
		case -1228169566:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case -1572191963:
			iVar0 = 831;
			break;
		
		case -791841628:
			iVar0 = 832;
			break;
		
		case -1531355431:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case -2114317157:
			iVar0 = 835;
			break;
		
		case -2085191627:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case -1850499077:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case -911004337:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case -861144593:
			iVar0 = 844;
			break;
		
		case -29907878:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case -862474356:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case -225805790:
			iVar0 = 851;
			break;
		
		case -624586952:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case -242746043:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case -1097603268:
			iVar0 = 856;
			break;
		
		case -660672539:
			iVar0 = 857;
			break;
		
		case -4642188:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case -1226569770:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case -1557113221:
			iVar0 = 864;
			break;
		
		case -1690570414:
			iVar0 = 865;
			break;
		
		case -507204255:
			iVar0 = 866;
			break;
		
		case -1804897639:
			iVar0 = 867;
			break;
		
		case -1375233423:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case -2112155518:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case -627666528:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case -1448761813:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case -1021262861:
			iVar0 = 878;
			break;
		
		case -264447931:
			iVar0 = 879;
			break;
		
		case -652127435:
			iVar0 = 880;
			break;
		
		case -610014599:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case -898550276:
			iVar0 = 886;
			break;
		
		case -1074178691:
			iVar0 = 887;
			break;
		
		case -368616744:
			iVar0 = 888;
			break;
		
		case -78566501:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case -1229980240:
			iVar0 = 891;
			break;
		
		case -1558321426:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case -1996043294:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case -20709979:
			iVar0 = 896;
			break;
		
		case -1617383579:
			iVar0 = 897;
			break;
		
		case -525135065:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case -1195876295:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case -1564457471:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case -1961291349:
			iVar0 = 907;
			break;
		
		case -1912591074:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case -1015392647:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case -1855327598:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case -1423366674:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case -1578833665:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case -1786080093:
			iVar0 = 924;
			break;
		
		case -215923306:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case -1214009019:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case -1033895864:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case -574749266:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case -643353187:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case -94540936:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case -345261869:
			iVar0 = 938;
			break;
		
		case -1022859058:
			iVar0 = 939;
			break;
		
		case -1786322924:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case -506986385:
			iVar0 = 943;
			break;
		
		case -874081588:
			iVar0 = 944;
			break;
		
		case -2043405937:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case -657535677:
			iVar0 = 948;
			break;
		
		case -2093585025:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case -1608760399:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case -119951196:
			iVar0 = 954;
			break;
		
		case -1649842228:
			iVar0 = 955;
			break;
		
		case -1640764925:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case -1061215309:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case -1486297381:
			iVar0 = 963;
			break;
		
		case -540767159:
			iVar0 = 964;
			break;
		
		case -1235960692:
			iVar0 = 965;
			break;
		
		case -329316995:
			iVar0 = 966;
			break;
		
		case -581880272:
			iVar0 = 967;
			break;
		
		case -1807345434:
			iVar0 = 968;
			break;
		
		case -1018409435:
			iVar0 = 969;
			break;
		
		case -136011898:
			iVar0 = 970;
			break;
		
		case -2069494727:
			iVar0 = 971;
			break;
		
		case -642887005:
			iVar0 = 972;
			break;
		
		case -1810837638:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case -1533877336:
			iVar0 = 976;
			break;
		
		case -892254987:
			iVar0 = 977;
			break;
		
		case -654222260:
			iVar0 = 978;
			break;
		
		case -152607027:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case -1178363901:
			iVar0 = 981;
			break;
		
		case -170830010:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case -975101512:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case -737204659:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case -1470963239:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case -428330966:
			iVar0 = 993;
			break;
		
		case -532155133:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case -1103242747:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case -1996321684:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case -1232815296:
			iVar0 = 1000;
			break;
		
		case -942600475:
			iVar0 = 1001;
			break;
		
		case -157448893:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case -393833589:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case -1547493052:
			iVar0 = 1006;
			break;
		
		case -558224274:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case -1335458450:
			iVar0 = 1010;
			break;
		
		case -538608496:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case -1423594652:
			iVar0 = 1013;
			break;
		
		case -749306822:
			iVar0 = 1014;
			break;
		
		case -1357502125:
			iVar0 = 1015;
			break;
		
		case -1697184517:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case -1996334680:
			iVar0 = 1019;
			break;
		
		case -1718451770:
			iVar0 = 1020;
			break;
		
		case -1351890796:
			iVar0 = 1021;
			break;
		
		case -708316325:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case -755577025:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case -1277167165:
			iVar0 = 1032;
			break;
		
		case -2040688458:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
		
		case -599666460:
			iVar0 = 1036;
			break;
		
		case 2137077332:
			iVar0 = 1037;
			break;
		
		case -563836962:
			iVar0 = 1038;
			break;
		
		case 1757650301:
			iVar0 = 1039;
			break;
		
		case -1926213636:
			iVar0 = 1040;
			break;
		
		case 636926663:
			iVar0 = 1041;
			break;
		
		case 1864088729:
			iVar0 = 1042;
			break;
		
		case 373164468:
			iVar0 = 1043;
			break;
		
		case -1181875417:
			iVar0 = 1044;
			break;
		
		case 2125316672:
			iVar0 = 1045;
			break;
		
		case 1505585597:
			iVar0 = 1046;
			break;
		
		case -1563329786:
			iVar0 = 1047;
			break;
		
		case -546372951:
			iVar0 = 1048;
			break;
		
		case -276745962:
			iVar0 = 1049;
			break;
		
		case 98665018:
			iVar0 = 1050;
			break;
		
		case 1968556432:
			iVar0 = 1051;
			break;
		
		case -1559144195:
			iVar0 = 1052;
			break;
		
		case -1332960577:
			iVar0 = 1053;
			break;
		
		case 652305392:
			iVar0 = 1054;
			break;
		
		case 1894755292:
			iVar0 = 1055;
			break;
		
		case 1126903931:
			iVar0 = 1056;
			break;
		
		case -914706967:
			iVar0 = 1057;
			break;
		
		case -214853054:
			iVar0 = 1058;
			break;
		
		case -346130454:
			iVar0 = 1059;
			break;
		
		case 1352224647:
			iVar0 = 1060;
			break;
		
		case -1388894295:
			iVar0 = 1061;
			break;
		
		case 1928040960:
			iVar0 = 1062;
			break;
		
		case -721653798:
			iVar0 = 1063;
			break;
		
		case 1424803201:
			iVar0 = 1064;
			break;
		
		case 2024824081:
			iVar0 = 1065;
			break;
		
		case -822973907:
			iVar0 = 1066;
			break;
		
		case 1857392409:
			iVar0 = 1067;
			break;
		
		case -978468741:
			iVar0 = 1068;
			break;
		
		case -811517193:
			iVar0 = 1069;
			break;
		
		case -725236090:
			iVar0 = 1070;
			break;
		
		case -485989621:
			iVar0 = 1071;
			break;
		
		case 711356870:
			iVar0 = 1072;
			break;
		
		case 111487556:
			iVar0 = 1073;
			break;
		
		case 588276502:
			iVar0 = 1074;
			break;
		
		case -3335024:
			iVar0 = 1075;
			break;
		
		case 1184770609:
			iVar0 = 1076;
			break;
		
		case 359647189:
			iVar0 = 1077;
			break;
		
		case 1545327916:
			iVar0 = 1078;
			break;
		
		case 954502846:
			iVar0 = 1079;
			break;
		
		case -893208491:
			iVar0 = 1080;
			break;
		
		case -1661674318:
			iVar0 = 1081;
			break;
		
		case -1624645348:
			iVar0 = 1082;
			break;
		
		case 620358850:
			iVar0 = 1083;
			break;
		
		case 122204512:
			iVar0 = 1084;
			break;
		
		case -645147161:
			iVar0 = 1085;
			break;
		
		case -375556598:
			iVar0 = 1086;
			break;
		
		case 1841102407:
			iVar0 = 1087;
			break;
		
		case 831620593:
			iVar0 = 1088;
			break;
		
		case 1129884031:
			iVar0 = 1089;
			break;
		
		case 2092301321:
			iVar0 = 1090;
			break;
		
		case 580667351:
			iVar0 = 1091;
			break;
		
		case 1538832911:
			iVar0 = 1092;
			break;
		
		case -1355259635:
			iVar0 = 1093;
			break;
		
		case -1583168030:
			iVar0 = 1094;
			break;
		
		case -1831032746:
			iVar0 = 1095;
			break;
		
		case -2060448515:
			iVar0 = 1096;
			break;
		
		case -50365286:
			iVar0 = 1097;
			break;
		
		case -364095692:
			iVar0 = 1098;
			break;
		
		case -606979520:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case -1057062007:
			iVar0 = 1100;
			break;
		
		case -1253872621:
			iVar0 = 1101;
			break;
		
		case -1525625938:
			iVar0 = 1102;
			break;
		
		case 603801989:
			iVar0 = 1103;
			break;
		
		case 432289043:
			iVar0 = 1104;
			break;
		
		case 176592536:
			iVar0 = 1105;
			break;
		
		case -126291331:
			iVar0 = 1106;
			break;
		
		case 2093415191:
			iVar0 = 1107;
			break;
		
		case 1383966341:
			iVar0 = 1108;
			break;
		
		case 1061027846:
			iVar0 = 1109;
			break;
		
		case 610754913:
			iVar0 = 1110;
			break;
		
		case 1856271834:
			iVar0 = 1111;
			break;
		
		case 151235226:
			iVar0 = 1112;
			break;
		
		case 1292317344:
			iVar0 = 1113;
			break;
		
		case 1592055387:
			iVar0 = 1114;
			break;
		
		case 1048452439:
			iVar0 = 1115;
			break;
		
		case 211084:
			iVar0 = 1116;
			break;
		
		case -1009472289:
			iVar0 = 1117;
			break;
		
		case 156013410:
			iVar0 = 1118;
			break;
		
		case 2061696383:
			iVar0 = 1119;
			break;
		
		case -1462570018:
			iVar0 = 1120;
			break;
		
		case -1873628095:
			iVar0 = 1121;
			break;
		
		case -770265298:
			iVar0 = 1122;
			break;
		
		case 820753849:
			iVar0 = 1123;
			break;
		
		case -914435716:
			iVar0 = 1124;
			break;
		
		case -1170154756:
			iVar0 = 1125;
			break;
		
		case -880824798:
			iVar0 = 1126;
			break;
		
		case -249693258:
			iVar0 = 1127;
			break;
		
		case 1489278440:
			iVar0 = 1128;
			break;
		
		case -1512326404:
			iVar0 = 1129;
			break;
		
		case -1378330859:
			iVar0 = 1130;
			break;
		
		case 1459074393:
			iVar0 = 1131;
			break;
		
		case 1273491948:
			iVar0 = 1132;
			break;
		
		case -1406186689:
			iVar0 = 1133;
			break;
		
		case 2124190452:
			iVar0 = 1134;
			break;
		
		case -1740822263:
			iVar0 = 1135;
			break;
		
		case -969884576:
			iVar0 = 1136;
			break;
		
		case 335386038:
			iVar0 = 1137;
			break;
		
		case -1150178569:
			iVar0 = 1138;
			break;
		
		case 1521235675:
			iVar0 = 1139;
			break;
		
		case 1623611883:
			iVar0 = 1140;
			break;
		
		case 1329111213:
			iVar0 = 1141;
			break;
		
		case -1537321295:
			iVar0 = 1142;
			break;
		
		case -1628166034:
			iVar0 = 1143;
			break;
		
		case -132693345:
			iVar0 = 1144;
			break;
		
		case 874964805:
			iVar0 = 1145;
			break;
		
		case -1512427408:
			iVar0 = 1146;
			break;
		
		case 923836315:
			iVar0 = 1147;
			break;
		
		case -1580952699:
			iVar0 = 1148;
			break;
		
		case 1152609891:
			iVar0 = 1149;
			break;
		
		case -1637725121:
			iVar0 = 1150;
			break;
		
		case 1760547084:
			iVar0 = 1151;
			break;
		
		case -2138723176:
			iVar0 = 1152;
			break;
		
		case 1730799330:
			iVar0 = 1153;
			break;
		
		case -280222071:
			iVar0 = 1154;
			break;
		
		case 2067499855:
			iVar0 = 1155;
			break;
		
		case -1635988673:
			iVar0 = 1156;
			break;
		
		case -1849502305:
			iVar0 = 1157;
			break;
		
		case -1413356029:
			iVar0 = 1158;
			break;
		
		case -2062177771:
			iVar0 = 1159;
			break;
		
		case 2077453849:
			iVar0 = 1160;
			break;
		
		case -965460704:
			iVar0 = 1161;
			break;
		
		case -1917254263:
			iVar0 = 1162;
			break;
		
		case 1777785544:
			iVar0 = 1163;
			break;
		
		case 1505693935:
			iVar0 = 1164;
			break;
		
		case -1551981580:
			iVar0 = 1165;
			break;
		
		case 1572497951:
			iVar0 = 1166;
			break;
		
		case 585832887:
			iVar0 = 1167;
			break;
		
		case -498335731:
			iVar0 = 1168;
			break;
		
		case -137061435:
			iVar0 = 1169;
			break;
		
		case 1921321590:
			iVar0 = 1170;
			break;
		
		case -822177429:
			iVar0 = 1171;
			break;
		
		case -531271155:
			iVar0 = 1172;
			break;
		
		case 412829693:
			iVar0 = 1173;
			break;
		
		case -1411787934:
			iVar0 = 1174;
			break;
		
		case 653645139:
			iVar0 = 1175;
			break;
		
		case 1848048195:
			iVar0 = 1176;
			break;
		
		case -781400442:
			iVar0 = 1177;
			break;
		
		case 1507919906:
			iVar0 = 1178;
			break;
		
		case -1381102054:
			iVar0 = 1179;
			break;
		
		case 565394453:
			iVar0 = 1180;
			break;
		
		case -1265443416:
			iVar0 = 1181;
			break;
		
		case 1888753218:
			iVar0 = 1182;
			break;
		
		case -552467991:
			iVar0 = 1183;
			break;
		
		case -1655919948:
			iVar0 = 1184;
			break;
		
		case -917106601:
			iVar0 = 1185;
			break;
		
		case 1595446967:
			iVar0 = 1186;
			break;
		
		case -530593323:
			iVar0 = 1187;
			break;
		
		case 561619447:
			iVar0 = 1188;
			break;
		
		case -1913656173:
			iVar0 = 1189;
			break;
		
		case -1766901922:
			iVar0 = 1190;
			break;
		
		case 2091781849:
			iVar0 = 1191;
			break;
		
		case 1824588341:
			iVar0 = 1192;
			break;
		
		case 242597641:
			iVar0 = 1193;
			break;
		
		case 566785691:
			iVar0 = 1194;
			break;
		
		case -2091312957:
			iVar0 = 1195;
			break;
		
		case -2079214831:
			iVar0 = 1196;
			break;
		
		case 1359156274:
			iVar0 = 1197;
			break;
		
		case 1904247246:
			iVar0 = 1198;
			break;
		
		case -1351518396:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -797874817:
			iVar0 = 1200;
			break;
		
		case -385507297:
			iVar0 = 1201;
			break;
		
		case 2011910758:
			iVar0 = 1202;
			break;
		
		case -1953985443:
			iVar0 = 1203;
			break;
		
		case -1124222352:
			iVar0 = 1204;
			break;
		
		case -1806994767:
			iVar0 = 1205;
			break;
		
		case -1445761968:
			iVar0 = 1206;
			break;
		
		case -89186417:
			iVar0 = 1207;
			break;
		
		case -308083083:
			iVar0 = 1208;
			break;
		
		case 667714507:
			iVar0 = 1209;
			break;
		
		case -1610210252:
			iVar0 = 1210;
			break;
		
		case -417116499:
			iVar0 = 1211;
			break;
		
		case 1246110729:
			iVar0 = 1212;
			break;
		
		case 461575135:
			iVar0 = 1213;
			break;
		
		case -386163163:
			iVar0 = 1214;
			break;
		
		case -1414541879:
			iVar0 = 1215;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_59(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -627999265;
			}
			else
			{
				return -1864998224;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return 1682346315;
			}
			else
			{
				return -2140814897;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return 1021952654;
			}
			else
			{
				return 223468453;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return 1319396867;
			}
			else
			{
				return -83970305;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return 560794517;
			}
			else
			{
				return -406843262;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return 858697496;
			}
			else
			{
				return -954740942;
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return -30981230;
			}
			else
			{
				return -1675526854;
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return -328032215;
			}
			else
			{
				return 2111717556;
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return -1451681225;
			}
			else
			{
				return -415395003;
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return 267904819;
			}
			else
			{
				return 427521984;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 953986562;
			}
			else
			{
				return 1531057961;
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return 585335312;
			}
			else
			{
				return 1986678137;
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return 489617063;
			}
			else
			{
				return 2142789653;
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return 210195800;
			}
			else
			{
				return 7463306;
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return 1843402776;
			}
			else
			{
				return 308053343;
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return -1600520821;
			}
			else
			{
				return 753842819;
			}
			break;
		
		case 16:
			if (bParam1)
			{
				return 1399087889;
			}
			else
			{
				return 1052794406;
			}
			break;
		
		case 17:
			if (bParam1)
			{
				return 1169344430;
			}
			else
			{
				return -695726661;
			}
			break;
		
		case 18:
			if (bParam1)
			{
				return -2028647818;
			}
			else
			{
				return -1001821890;
			}
			break;
		
		case 19:
			if (bParam1)
			{
				return -1335845620;
			}
			else
			{
				return -1425459522;
			}
			break;
		
		case 20:
			if (bParam1)
			{
				return -1450406320;
			}
			else
			{
				return 1412653072;
			}
			break;
		
		case 21:
			if (bParam1)
			{
				return -1209849091;
			}
			else
			{
				return 1163510365;
			}
			break;
		
		case 22:
			if (bParam1)
			{
				return 2065609077;
			}
			else
			{
				return 933242602;
			}
			break;
		
		case 23:
			if (bParam1)
			{
				return -664245241;
			}
			else
			{
				return -1347021116;
			}
			break;
		
		case 24:
			if (bParam1)
			{
				return 1676130538;
			}
			else
			{
				return 1297354841;
			}
			break;
		
		case 25:
			if (bParam1)
			{
				return -1730534702;
			}
			else
			{
				return -839806574;
			}
			break;
		
		case 26:
			if (bParam1)
			{
				return -1767432596;
			}
			else
			{
				return -542100209;
			}
			break;
		
		case 27:
			if (bParam1)
			{
				return 632918673;
			}
			else
			{
				return 1525246127;
			}
			break;
		
		case 28:
			if (bParam1)
			{
				return -190040148;
			}
			else
			{
				return -11341151;
			}
			break;
		
		case 29:
			if (bParam1)
			{
				return 42936837;
			}
			else
			{
				return 516055815;
			}
			break;
		
		case 30:
			if (bParam1)
			{
				return -1458541976;
			}
			else
			{
				return -1034642040;
			}
			break;
		
		case 31:
			if (bParam1)
			{
				return -606014753;
			}
			else
			{
				return 1022637316;
			}
			break;
		
		case 32:
			if (bParam1)
			{
				return -613376371;
			}
			else
			{
				return -1677156418;
			}
			break;
		
		case 33:
			if (bParam1)
			{
				return -446291501;
			}
			else
			{
				return -1130213300;
			}
			break;
		
		case 34:
			if (bParam1)
			{
				return -863391184;
			}
			else
			{
				return 1675446188;
			}
			break;
		
		case 35:
			if (bParam1)
			{
				return 671171671;
			}
			else
			{
				return 1911627074;
			}
			break;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = 0;
	iVar1 = func_62(iParam0, iParam1);
	uVar2 = func_61(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_61(int iParam0)
{
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

int func_62(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
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

void func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "CLO_HST_A_0";
			sVar1 = "CLO_HST_AD_0";
			sVar2 = "DeathDefying";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 108;
			break;
		
		case 1:
			sVar0 = "CLO_HST_A_1";
			sVar1 = "CLO_HST_AD_1";
			sVar2 = "ForHire";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 100;
			break;
		
		case 2:
			sVar0 = "CLO_HST_A_2";
			sVar1 = "CLO_HST_AD_3";
			sVar2 = "LiveALittle";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 106;
			break;
		
		case 5:
			sVar0 = "CLO_HST_A_5";
			sVar1 = "CLO_HST_AD_6";
			sVar2 = "Decorated";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 103;
			break;
		
		case 7:
			sVar0 = "CLO_HST_A_7";
			sVar1 = "CLO_HST_AD_8";
			sVar2 = "OneManArmy";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 115;
			break;
		
		case 6:
			sVar0 = "CLO_HST_A_6";
			sVar1 = "CLO_HST_AD_7";
			sVar2 = "PsychoKiller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 111;
			break;
		
		case 8:
			sVar0 = "CLO_HST_A_8";
			sVar1 = "CLO_HST_AD_2";
			sVar2 = "ShotCaller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 101;
			break;
		
		case 34:
			sVar0 = "CLO_HSTM_U_3_0";
			sVar1 = "CLO_HST_AD_10";
			sVar2 = "EliteTshirt1";
			sVar3 = "MPTShirtAwards2";
			break;
	}
	iVar6 = 5;
	if (func_65(iVar4, 9) != 1)
	{
		iVar5 = 1;
	}
	if (iParam0 != 34)
	{
		iVar7 = func_49(iVar4, iVar6, 9);
		iVar8 = func_48(iVar4, -1);
	}
	else
	{
		iVar7 = 5;
		iVar8 = func_64();
	}
	func_66(sVar0, sVar1, sVar2, sVar3, iVar7, iVar8, -1, iVar5, &Global_1375928);
}

int func_64()
{
	if (func_70(3765, -1, -1))
	{
		iVar0++;
	}
	if (func_70(3766, -1, -1))
	{
		iVar0++;
	}
	if (func_70(3767, -1, -1))
	{
		iVar0++;
	}
	if (func_70(3768, -1, -1))
	{
		iVar0++;
	}
	if (func_70(3769, -1, -1))
	{
		iVar0++;
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return 1;
		
		case 39:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		case 63:
			return 1;
		
		case 16:
			return 1;
		
		case 0:
			return 1;
		
		case 12:
			return 1;
		
		case 11:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 15:
			return 1;
		
		case 17:
			return 1;
		
		case 21:
			return 1;
		
		case 14:
			return 1;
		
		case 22:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 104:
			return 1;
		
		case 105:
			return 1;
		
		case 106:
			return 1;
		
		case 107:
			return 1;
		
		case 108:
			return 1;
		
		case 67:
			return 1;
		
		case 98:
			return 1;
		
		case 99:
			return 1;
		
		case 100:
			return 1;
		
		case 101:
			return 1;
		
		case 102:
			return 1;
		
		case 103:
			return 1;
		
		case 109:
			return 1;
		
		case 110:
			return 1;
		
		case 111:
			return 1;
		
		case 112:
			return 1;
		
		case 113:
			return 1;
		
		case 114:
			return 1;
		
		case 115:
			return 1;
		
		case 116:
			return 1;
		
		case 117:
			return 1;
		
		case 118:
			return 1;
		
		case 119:
			return 1;
		
		case 120:
			return 1;
		
		case 121:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 1;
			break;
	}
	return 0;
}

void func_66(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8)
{
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam8->f_1[iVar0] == 0)
		{
			func_68(iVar0, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_67(iVar0, sParam0, sParam1, iParam4, iParam5, uParam8);
			uParam8->f_1[iVar0] = 1;
			iVar0 = 12;
		}
		iVar0++;
	}
}

void func_67(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5)
{
	StringCopy(&(uParam5->f_14[iParam0]), sParam1, 32);
	StringCopy(&(uParam5->f_111[iParam0]), sParam2, 32);
	uParam5->f_208[iParam0] = uParam3;
	uParam5->f_221[iParam0] = uParam4;
}

void func_68(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, var uParam5)
{
	StringCopy(&(uParam5->f_234[iParam0]), sParam1, 32);
	StringCopy(&(uParam5->f_331[iParam0]), sParam2, 32);
	uParam5->f_428[iParam0] = func_69(iParam4);
	uParam5->f_441[iParam0] = uParam3;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 107;
			break;
		
		case 3:
			return 108;
			break;
		
		case 4:
			return 109;
			break;
		
		case 5:
			return 110;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar1 = func_72(iParam0, iParam1);
	uVar2 = func_71(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_71(int iParam0)
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

int func_72(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
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

void func_73(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_84(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_82(iParam0, iParam2);
			break;
	}
	iVar0 = func_82(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_81(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_80(iParam0, iParam2, 0);
	sVar2 = func_79(iParam0, iParam1, iParam2, 0);
	sVar3 = func_78(iParam0, iParam2);
	sVar4 = func_77(iParam0, iParam2);
	iVar5 = func_76(iParam0, iVar0, iParam2);
	iVar6 = func_75(iParam0);
	iVar7 = func_74(iParam1);
	iVar8 = func_76(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_66(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3);
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 1;
			break;
		
		case 3:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 5:
			iVar0 = 4;
			break;
	}
	return iVar0;
}

int func_75(int iParam0)
{
	uVar0 = Global_1387876[iParam0];
	uVar1 = uVar0;
	if (STATS::STAT_GET_INT(uVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
	}
	return 999;
}

char* func_77(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
		
		case 1:
			return "MPAWARDS5";
		
		case 2:
			return "MPAWARDS5";
		
		case 3:
			return "MPAWARDS6";
		
		default:
	}
	return "";
}

char* func_78(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
		
		case 1:
			return "DeathmatchCreator";
		
		case 2:
			return "PlayedCreation";
		
		case 3:
			return "CreatorsScore";
		
		default:
	}
	return "";
}

char* func_79(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_76(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_686";
		
		case 1:
			return "AWS_688";
		
		case 2:
			return "AWS_689";
		
		case 3:
			return "AWS_690";
		
		default:
	}
	return "";
}

char* func_80(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_686";
		
		case 1:
			return "AWT_688";
		
		case 2:
			return "AWT_689";
		
		case 3:
			return "AWT_690";
		
		default:
	}
	return "";
}

int func_81(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	if (func_83(func_75(iParam0), func_76(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_83(func_75(iParam0), func_76(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_83(func_75(iParam0), func_76(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_83(func_75(iParam0), func_76(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 <= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	if (!func_83(func_75(iParam0), func_76(iParam0, 5, iParam1)))
	{
		return 0;
	}
	if (!func_83(func_75(iParam0), func_76(iParam0, 4, iParam1)))
	{
		return 2;
	}
	if (!func_83(func_75(iParam0), func_76(iParam0, 3, iParam1)))
	{
		return 3;
	}
	if (!func_83(func_75(iParam0), func_76(iParam0, 2, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_85(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 6:
		case 8:
			if (func_51(iParam0, -1))
			{
				iParam1 = 0;
			}
			break;
		
		case 7:
			if (func_51(iParam0, -1) == 0)
			{
				iParam1 = 5;
			}
			break;
	}
	iVar1 = func_90(iParam0);
	switch (iParam2)
	{
		case 9:
			iVar0 = 3;
			break;
	}
	if (iParam0 == 57)
	{
		iParam1 = 2;
	}
	else if (iParam0 == 58 || iParam0 == 9)
	{
		iParam1 = 3;
	}
	else if (iParam0 == 59 || iParam0 == 10)
	{
		iParam1 = 4;
	}
	else
	{
		iParam1 = 5;
	}
	sVar2 = func_89(iParam0, iVar0);
	sVar3 = func_88(iParam0, iVar0);
	sVar4 = func_87(iParam0, iVar0);
	sVar5 = func_86(iParam0, iVar0);
	iVar6 = func_49(iVar1, iParam1, 0);
	iVar7 = func_48(iVar1, -1);
	if (iVar1 == 64)
	{
		iVar6 = 1;
		iVar7 = 0;
	}
	iVar8 = -1;
	if (func_51(iParam0, -1))
	{
		iVar7 = func_49(func_90(iParam0), iParam1, 0);
		if (iVar1 == 64)
		{
			iVar7 = 1;
		}
	}
	iParam1 = 1;
	func_66(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar8, iParam1, uParam3);
}

char* func_86(int iParam0, int iParam1)
{
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_87(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_88(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_FM_TAT9D";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_FM_TAT17D";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_FM_TAT24D";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_FM_TAT37D";
			break;
		
		case 46:
			return "TAT_FM_TAT38D";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_FM_TAT40D";
			break;
		
		case 49:
			return "TAT_FM_TAT41D";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_89(int iParam0, int iParam1)
{
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 49;
		
		case 7:
			return 59;
		
		case 0:
			return 9;
		
		case 5:
			return 55;
		
		case 1:
			return 40;
		
		case 57:
			return 14;
		
		case 58:
			return 14;
		
		case 59:
			return 14;
		
		case 60:
			return 14;
		
		case 12:
			return 21;
		
		case 56:
			return 24;
		
		case 25:
			return 44;
		
		case 34:
			return 15;
		
		case 45:
			return 1;
		
		case 48:
			return 2;
		
		case 46:
			return 42;
		
		case 9:
			return 56;
		
		case 10:
			return 56;
		
		case 11:
			return 56;
		
		case 87:
			return 48;
		
		default:
	}
	return 64;
}

void func_91(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_106(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_105();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_104(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar1 = func_105();
	sVar2 = func_102(iParam0, iParam2, 0);
	sVar3 = func_101(iParam0, iParam1, iParam2, 0);
	sVar4 = func_100(iParam0, iParam2);
	sVar5 = func_99(iParam0, iParam2);
	iVar6 = func_97(iParam0, iVar1, iParam2);
	iVar7 = func_94(iParam0, iVar1, iParam2);
	iVar8 = func_74(iParam1);
	iVar9 = func_97(iParam0, iVar8, iParam2);
	iVar10 = (iVar6 - iVar9);
	iVar11 = (iVar7 - iVar9);
	if (func_93(iParam0))
	{
		iVar12 = 100;
		switch (iParam0)
		{
			case 17:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 18:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 19:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 20:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 21:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
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
				iVar7 = 26;
				iVar6 = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				iVar11 = 0;
				iVar13 = func_92(962840492);
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (MISC::IS_BIT_SET(iVar13, iVar0))
					{
						iVar11++;
					}
					iVar0++;
				}
				if (MISC::IS_BIT_SET(iVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (MISC::IS_BIT_SET(iVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 18:
				iVar11 = 0;
				iVar13 = func_92(-308302665);
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (MISC::IS_BIT_SET(iVar13, iVar0))
					{
						iVar11++;
					}
					iVar0++;
				}
				if (MISC::IS_BIT_SET(iVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (MISC::IS_BIT_SET(iVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 19:
				iVar11 = 0;
				iVar13 = func_92(-521667130);
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (MISC::IS_BIT_SET(iVar13, iVar0))
					{
						iVar11++;
					}
					iVar0++;
				}
				if (MISC::IS_BIT_SET(iVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (MISC::IS_BIT_SET(iVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 20:
				iVar11 = 0;
				iVar13 = func_92(229552884);
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (MISC::IS_BIT_SET(iVar13, iVar0))
					{
						iVar11++;
					}
					iVar0++;
				}
				if (MISC::IS_BIT_SET(iVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (MISC::IS_BIT_SET(iVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 21:
				iVar11 = 0;
				iVar13 = func_92(1123599941);
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (MISC::IS_BIT_SET(iVar13, iVar0))
					{
						iVar11++;
					}
					iVar0++;
				}
				if (MISC::IS_BIT_SET(iVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (MISC::IS_BIT_SET(iVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				iVar10 = func_97(iParam0, iVar8, iParam2);
				iVar11 = func_94(iParam0, iVar1, iParam2);
				break;
		}
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_66(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar12, iParam1, uParam3);
}

int func_92(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(int iParam0)
{
	uVar0 = Global_1387884[iParam0];
	uVar1 = uVar0;
	if (STATS::STAT_GET_BOOL(uVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_93(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_95(iParam0);
		
		case 4:
			return func_95(iParam0);
		
		case 5:
			return func_95(iParam0);
		
		case 7:
			return func_95(iParam0);
		
		case 8:
			return func_95(iParam0);
		
		case 9:
			return func_95(iParam0);
		
		case 10:
			return func_95(iParam0);
		
		case 11:
			return func_95(iParam0);
		
		default:
	}
	if (func_93(iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	iVar1 = func_92(func_96(iParam0));
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if (MISC::IS_BIT_SET(iVar1, iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -459860705;
		
		case 4:
			return 1348542811;
		
		case 7:
			return 2062296848;
		
		case 8:
			return -487098587;
		
		case 5:
			return -1292050535;
		
		case 9:
			return -1485732191;
		
		case 10:
			return -1254677972;
		
		case 11:
			return 1511438227;
		
		default:
	}
	return -459860705;
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_93(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_98();
		
		case 4:
			return func_98();
		
		case 5:
			return func_98();
		
		case 7:
			return func_98();
		
		case 8:
			return func_98();
		
		case 9:
			return func_98();
		
		case 10:
			return func_98();
		
		case 11:
			return func_98();
		
		default:
	}
	return 1;
}

int func_98()
{
	return 29;
}

char* func_99(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
		
		case 13:
			return "MpAwardHeists";
		
		case 14:
			return "MpAwardHeists";
		
		case 15:
			return "MpAwardHeists";
		
		case 16:
			return "MpAwardHeists";
		
		case 17:
			return "MpAwardHeists";
		
		case 18:
			return "MpAwardHeists";
		
		case 19:
			return "MpAwardHeists";
		
		case 20:
			return "MPAwardHeists";
		
		case 21:
			return "MPAwardHeists";
		
		case 1:
			return "MPAwardHeists2";
		
		case 2:
			return "MPAwardHeists2";
		
		case 6:
			return "MPAwardHeists2";
		
		case 3:
			return "MPAwardHeists2";
		
		case 4:
			return "MPAwardHeists2";
		
		case 5:
			return "MPAwardHeists2";
		
		case 7:
			return "MPAwardHeists2";
		
		case 8:
			return "MPAwardHeists2";
		
		case 9:
			return "MPAwardHeists2";
		
		case 10:
			return "MPAwardHeists2";
		
		case 11:
			return "MPAwardHeists2";
		
		default:
	}
	return "MPAwardHeists";
}

char* func_100(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
		
		case 13:
			return "GoToJail";
		
		case 14:
			return "LabReport";
		
		case 15:
			return "ProductPlacement";
		
		case 16:
			return "SmoothSailing";
		
		case 17:
			return "AllInOrder";
		
		case 18:
			return "Loyalty";
		
		case 19:
			return "CriminalMastermind";
		
		case 20:
			return "AnotherPerspective";
		
		case 21:
			return "SupportingRole";
		
		case 1:
			return "IAAFinale";
		
		case 2:
			return "SubmarineFinale";
		
		case 6:
			return "MissleSiloFinale";
		
		case 3:
			return "AllInOrderII";
		
		case 4:
			return "LoyaltyIV";
		
		case 5:
			return "CriminalMastermindIV";
		
		case 7:
			return "LoyaltyII";
		
		case 8:
			return "LoyaltyIII";
		
		case 9:
			return "CriminalMastermindII";
		
		case 10:
			return "CriminalMastermindIII";
		
		case 11:
			return "SupportingRoleII";
		
		default:
	}
	return "";
}

char* func_101(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_97(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWS_775";
		
		case 13:
			return "AWS_767";
		
		case 14:
			return "AWS_768";
		
		case 15:
			return "AWS_776";
		
		case 16:
			return "AWS_780";
		
		case 17:
			return "AWS_777";
		
		case 18:
			return "AWS_778";
		
		case 19:
			return "AWS_779";
		
		case 20:
			return "AWS_785";
		
		case 21:
			return "AWS_786";
		
		case 1:
			return "AWD_GANGOP0d";
		
		case 2:
			return "AWD_GANGOP1d";
		
		case 6:
			return "AWD_GANGOP2d";
		
		case 3:
			return "AWD_GANGOP3d";
		
		case 4:
			return "AWD_GANGOP7d";
		
		case 5:
			return "AWD_GANGOP9d";
		
		case 7:
			return "AWD_GANGOP4d";
		
		case 8:
			return "AWD_GANGOP6d";
		
		case 9:
			return "AWD_GANGOP5d";
		
		case 10:
			return "AWD_GANGOP8d";
		
		case 11:
			return "AWD_GANGO10d";
		
		default:
	}
	return "";
}

char* func_102(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWT_775";
		
		case 13:
			return "AWT_767";
		
		case 14:
			return "AWT_768";
		
		case 15:
			return "AWT_776";
		
		case 16:
			return "AWT_780";
		
		case 17:
			return "AWT_777";
		
		case 18:
			return "AWT_778";
		
		case 19:
			return "AWT_779";
		
		case 20:
			return "AWT_785";
		
		case 21:
			return "AWT_786";
		
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_103(iParam0);
		
		default:
	}
	return "";
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOPF0";
		
		case 2:
			return "AWD_GANGOPF1";
		
		case 6:
			return "AWD_GANGOPF2";
		
		case 3:
			return "AWD_GANGOPA";
		
		case 4:
			return "AWD_GANGOPL4";
		
		case 7:
			return "AWD_GANGOPL2";
		
		case 8:
			return "AWD_GANGOPL3";
		
		case 5:
			return "AWD_GANGOPM4";
		
		case 9:
			return "AWD_GANGOPM2";
		
		case 10:
			return "AWD_GANGOPM3";
		
		case 11:
			return "AWD_GANGOPSR";
		
		default:
	}
	return "";
}

int func_104(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 6:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_105()
{
	return 5;
}

int func_106(int iParam0)
{
	if (func_93(iParam0))
	{
		return 5;
	}
	return 0;
}

void func_107(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_119(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_118();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_117(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar0 = func_118();
	sVar1 = func_116(iParam0, iParam2, 0);
	sVar2 = func_115(iParam0, iParam1, iParam2, 0);
	sVar3 = func_114(iParam0, iParam2);
	sVar4 = func_113(iParam0, iParam2);
	iVar5 = func_112(iParam0, iVar0, iParam2);
	if (func_111(iParam0, -1) == 1)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	iVar8 = func_74(iParam1);
	iVar9 = func_112(iParam0, iVar8, iParam2);
	iVar10 = (iVar5 - iVar9);
	iVar11 = (iVar6 - iVar9);
	switch (iParam0)
	{
		case 15:
			iVar6 = func_47(1152, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 16:
			iVar6 = func_47(1151, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 12:
			iVar6 = func_47(1087, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 25:
			if (func_111(iParam0, -1))
			{
				iVar6 = func_47(2115, -1, 0) * 7;
				iVar7 = func_47(2114, -1, 0);
				iVar6 = 7;
				iVar10 = 7;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(2115, -1, 0) * 7;
				iVar7 = func_47(2114, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 7)
				{
					iVar6 = 7;
				}
				iVar10 = 7;
				iVar11 = iVar6;
			}
			break;
		
		case 26:
			if (func_111(iParam0, -1))
			{
				iVar6 = func_47(2115, -1, 0) * 7;
				iVar7 = func_47(2114, -1, 0);
				iVar6 = 28;
				iVar10 = 28;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(2115, -1, 0) * 7;
				iVar7 = func_47(2114, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 28)
				{
					iVar6 = 28;
				}
				iVar10 = 28;
				iVar11 = iVar6;
			}
			break;
		
		case 98:
			if (func_111(iParam0, -1))
			{
				iVar6 = 43;
				iVar10 = 43;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_109();
				iVar10 = 43;
				iVar11 = iVar6;
			}
			break;
		
		case 103:
			if (func_111(iParam0, -1))
			{
				iVar6 = 4;
				iVar10 = 4;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(7251, -1, 0);
				iVar10 = 4;
				iVar11 = iVar6;
			}
			break;
		
		case 102:
			if (func_111(iParam0, -1))
			{
				iVar6 = 100;
				iVar10 = 100;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(7235, -1, 0);
				iVar10 = 100;
				iVar11 = iVar6;
			}
			break;
		
		case 59:
			if (func_111(iParam0, -1))
			{
				iVar6 = 6;
				iVar10 = 6;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_108();
				iVar10 = 6;
				iVar11 = iVar6;
			}
			break;
	}
	if (func_111(iParam0, -1))
	{
		iVar12 = 100;
	}
	else
	{
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_66(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar12, iParam1, uParam3);
}

int func_108()
{
	iVar0 = func_47(8280, -1, 0);
	if (MISC::IS_BIT_SET(iVar0, 19))
	{
		return 6;
	}
	else if (MISC::IS_BIT_SET(iVar0, 4))
	{
		return 5;
	}
	else if (MISC::IS_BIT_SET(iVar0, 3))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(iVar0, 2))
	{
		return 3;
	}
	else if (MISC::IS_BIT_SET(iVar0, 1))
	{
		return 2;
	}
	else if (MISC::IS_BIT_SET(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_110(iVar0) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case default:
			break;
		
		case 0:
			return func_47(9639, -1, 0);
		
		case 1:
			return func_47(9640, -1, 0);
		
		case 2:
			return func_47(9641, -1, 0);
		
		case 3:
			return func_47(9642, -1, 0);
		
		case 4:
			return func_47(9643, -1, 0);
		
		case 5:
			return func_47(9644, -1, 0);
		
		case 6:
			return func_47(9645, -1, 0);
		
		case 7:
			return func_47(9646, -1, 0);
		
		case 8:
			return func_47(9647, -1, 0);
		
		case 9:
			return func_47(9648, -1, 0);
		
		case 10:
			return func_47(9649, -1, 0);
		
		case 11:
			return func_47(9650, -1, 0);
		
		case 12:
			return func_47(9651, -1, 0);
		
		case 13:
			return func_47(9652, -1, 0);
		
		case 14:
			return func_47(9653, -1, 0);
		
		case 15:
			return func_47(9654, -1, 0);
		
		case 16:
			return func_47(9655, -1, 0);
		
		case 17:
			return func_47(9656, -1, 0);
		
		case 18:
			return func_47(9657, -1, 0);
		
		case 19:
			return func_47(9658, -1, 0);
		
		case 20:
			return func_47(9659, -1, 0);
		
		case 21:
			return func_47(9660, -1, 0);
		
		case 22:
			return func_47(9661, -1, 0);
		
		case 23:
			return func_47(9662, -1, 0);
		
		case 24:
			return func_47(9663, -1, 0);
		
		case 25:
			return func_47(9664, -1, 0);
		
		case 26:
			return func_47(9665, -1, 0);
		
		case 27:
			return func_47(9666, -1, 0);
		
		case 28:
			return func_47(9667, -1, 0);
		
		case 29:
			return func_47(9668, -1, 0);
		
		case 30:
			return func_47(9669, -1, 0);
		
		case 31:
			return func_47(9670, -1, 0);
		
		case 32:
			return func_47(9671, -1, 0);
		
		case 33:
			return func_47(9672, -1, 0);
		
		case 34:
			return func_47(9673, -1, 0);
		
		case 35:
			return func_47(9674, -1, 0);
		
		case 36:
			return func_47(9675, -1, 0);
		
		case 37:
			return func_47(9676, -1, 0);
		
		case 38:
			return func_47(9677, -1, 0);
		
		case 39:
			return func_47(9678, -1, 0);
		
		case 40:
			return func_47(9679, -1, 0);
		
		case 41:
			return func_47(9680, -1, 0);
		
		case 42:
			return func_47(9681, -1, 0);
		
		case 43:
			return func_47(9682, -1, 0);
		
		case 44:
			return func_47(9683, -1, 0);
		
		case 45:
			return func_47(9684, -1, 0);
		
		case 46:
			return func_47(9685, -1, 0);
		
		case 47:
			return func_47(9686, -1, 0);
		
		case 48:
			return func_47(9687, -1, 0);
		
		case 49:
			return func_47(9688, -1, 0);
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	uVar0 = Global_2585647[iParam0][func_45(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 15:
			return 25;
			break;
		
		case 16:
			return 25;
			break;
		
		case 12:
			return 25;
			break;
		
		case 25:
			return 7;
			break;
		
		case 26:
			return 28;
			break;
		
		case 98:
			return 43;
			break;
		
		case 103:
			return 4;
			break;
		
		case 102:
			return 100;
			break;
		
		case 59:
			return 6;
			break;
	}
	return 1;
}

char* func_113(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards5";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards5";
		
		case 8:
			return "MPAwards5";
		
		case 10:
			return "MPAwards5";
		
		case 11:
			return "MPAwards5";
		
		case 12:
			return "MPAwards5";
		
		case 13:
			return "MPAwards5";
		
		case 14:
			return "MPAwards5";
		
		case 15:
			return "MPAwards5";
		
		case 16:
			return "MPAwards5";
		
		case 17:
			return "MPAwards5";
		
		case 18:
			return "MPAwards5";
		
		case 20:
			return "MPAwards5";
		
		case 21:
			return "MPAwards5";
		
		case 22:
			return "MPAWARDS5";
		
		case 23:
			return "MPAwards4";
		
		case 25:
			return "MPAwardHeists";
		
		case 26:
			return "MPAwardHeists";
		
		case 27:
			return "MPAWARDS6";
		
		case 96:
			return "MPAwardHeists";
		
		case 95:
			return "MPAwardHeists";
		
		case 98:
			return "MPAwardHeists";
		
		case 99:
			return "MPAwardHeists";
		
		case 100:
			return "MPAwardHeists";
		
		case 101:
			return "MPAwardNightclub";
		
		case 102:
			return "MPAwardNightclub";
		
		case 103:
			return "MPAwardNightclub";
		
		case 30:
			return "MPAwardsArena";
		
		case 31:
			return "MPAwardsArena";
		
		case 32:
			return "MPAwardsArena";
		
		case 33:
			return "MPAwardsArena";
		
		case 34:
			return "MPAwardsArena";
		
		case 35:
			return "MPAwardsArena";
		
		case 36:
			return "MPAwardsArena";
		
		case 37:
			return "MPAwardsArena";
		
		case 38:
			return "MPAwardsArena";
		
		case 39:
			return "MPAwardsArena";
		
		case 40:
			return "MPAwardsArena";
		
		case 41:
			return "MPAwardsArena";
		
		case 42:
			return "MPAwardsArena";
		
		case 43:
			return "MPAwardsArena";
		
		case 44:
			return "MPAwardsArena";
		
		case 45:
			return "MPAwardsArena";
		
		case 46:
			return "MPAwardsArena";
		
		case 47:
			return "MPAwardsArena";
		
		case 48:
			return "MPAwardsArena";
		
		case 49:
			return "MPAwardsArena";
		
		case 50:
			return "MPAwardsArena";
		
		case 51:
			return "MPAwardsArena";
		
		case 52:
			return "MPAwardsArena";
		
		case 53:
			return "MPAwardCasino";
		
		case 54:
			return "MPAwardCasino";
		
		case 55:
			return "MPAwardCasino";
		
		case 56:
			return "MPAwardCasino";
		
		case 57:
			return "MPAwardCasino";
		
		case 58:
			return "MPAwardCasino";
		
		case 59:
			return "MPAwardCasino";
		
		case 62:
			return "MPAwardCasino";
		
		case 60:
			return "MPAwardCasino";
		
		case 61:
			return "MPAwardCasino";
		
		case 63:
			return "MPAwardCasinoHeist";
		
		case 64:
			return "MPAwardCasinoHeist";
		
		case 65:
			return "MPAwardCasinoHeist";
		
		case 66:
			return "MPAwardCasinoHeist";
		
		case 67:
			return "MPAwardCasinoHeist";
		
		case 68:
			return "MPAwardCasinoHeist";
		
		case 69:
			return "MPAwardCasinoHeist";
		
		case 70:
			return "MPAwardCasinoHeist";
		
		case 71:
			return "MPAwardCasinoHeist";
		
		case 72:
			return "MPAwardCasinoHeist";
		
		case 73:
			return "MPAwardCasinoHeist";
		
		case 74:
			return "MPAwardCasinoHeist";
		
		case 75:
			return "MPAwardCasinoHeist";
		
		case 76:
			return "MPAwardCasinoHeist";
		
		case 77:
			return "MPAwardCasinoHeist";
		
		case 78:
			return "MPAwardCasinoHeist";
		
		case 79:
			return "MPAwardCasinoHeist";
		
		case 80:
			return "MPAwardCasinoHeist";
		
		case 81:
			return "MPAwardCasinoHeist";
		
		case 82:
			return "MPAwardCasinoHeist";
		
		case 83:
			return "MPAwardCasinoHeist";
		
		case 84:
			return "MPAwardCasinoHeist";
		
		case 85:
			return "MPAwardCasinoHeist";
		
		case 86:
			return "MPAwardCasinoHeist";
		
		case 87:
			return "MPAwardCasinoHeist";
		
		case 88:
			return "MPAwardCasinoHeist";
		
		case 89:
			return "MPAwardSummer2020";
		
		case 90:
			return "MPAwardSummer2020";
		
		case 93:
			return "MPAwardSummer2020";
		
		case 92:
			return "MPAwardSummer2020";
		
		case 91:
			return "MPAwardSummer2020";
		
		case 94:
			return "MPAwardSummer2020";
		
		default:
	}
	return "";
}

char* func_114(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
		iParam1 = 9;
	}
	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
		
		case 2:
			return "HoleInOne";
		
		case 3:
			return "TargetGridGranny";
		
		case 4:
			return "TennisFiveSets";
		
		case 5:
			return "TennisStraightSets";
		
		case 6:
			return "ClearAllGangHideouts";
		
		case 7:
			return "SixDartCheckout";
		
		case 8:
			return "WinEveryGameModeOnce";
		
		case 10:
			return "WinEveryTypeOfRace";
		
		case 11:
			return "HoldaRaceWorldRecord";
		
		case 12:
			return "Wear25DifferentItemsOfClothing";
		
		case 13:
			return "FullyModACar";
		
		case 14:
			return "WinACustomClassRace";
		
		case 15:
			return "Play25DifferentDeathmatches";
		
		case 16:
			return "Play25DifferentRaces";
		
		case 17:
			return "MostKillsInGangAttack";
		
		case 18:
			return "MostKillsInSurvival";
		
		case 20:
			return "Kill3InARaceAndWin";
		
		case 21:
			return "GetATattooOnEachBodyPart";
		
		case 22:
			return "10KillStreakDeathmatch";
		
		case 23:
			return "Unirider";
		
		case 25:
			return "goaloriented";
		
		case 26:
			return "overachiever";
		
		case 27:
			return "joyrider";
		
		case 96:
			return "CantTouchThis";
		
		case 95:
			return "FairPlay";
		
		case 98:
			return "JackOfAllTrades";
		
		case 99:
			return "ItTakesTwo";
		
		case 100:
			return "Showroom";
		
		case 101:
			return "Coordinated";
		
		case 102:
			return "HotSpot";
		
		case 103:
			return "Clubber";
		
		case 30:
			return "BEGINNER";
		
		case 31:
			return "FIELDFILLER";
		
		case 32:
			return "ArmchairRracer";
		
		case 33:
			return "LEARNER";
		
		case 34:
			return "SUNDAYDRIVER";
		
		case 35:
			return "THEROOKIE";
		
		case 36:
			return "BUMPANDRUN";
		
		case 37:
			return "GEARHEAD";
		
		case 38:
			return "DOORSLAMMER";
		
		case 39:
			return "HOTLAP";
		
		case 40:
			return "ARENAAMATEUR";
		
		case 41:
			return "PAINTTRADER";
		
		case 42:
			return "SHUNTER";
		
		case 43:
			return "JOCK";
		
		case 44:
			return "WARRIOR";
		
		case 45:
			return "TBONE";
		
		case 46:
			return "MAYHEM";
		
		case 47:
			return "WRECKER";
		
		case 48:
			return "CRASHCOURSE";
		
		case 49:
			return "ARENALEGEND";
		
		case 50:
			return "PEGASUS";
		
		case 51:
			return "contactsport";
		
		case 52:
			return "UNSTOPPABLE";
		
		case 53:
			return "LooseCheng";
		
		case 54:
			return "HouseKeeping";
		
		case 55:
			return "StrongArmTactics";
		
		case 56:
			return "PlayToWin";
		
		case 57:
			return "BadBeat";
		
		case 58:
			return "CashingOut";
		
		case 59:
			return "StraightFlush";
		
		case 62:
			return "LuckyLucky";
		
		case 60:
			return "TopPair";
		
		case 61:
			return "FullHouse";
		
		case 63:
			return "SCOPEOUT";
		
		case 64:
			return "ALLCREWEDUP";
		
		case 65:
			return "MOVINGON";
		
		case 66:
			return "AfterParty";
		
		case 67:
			return "GUNMAN";
		
		case 68:
			return "SmashAndGrab";
		
		case 69:
			return "HiddenInPlainSight";
		
		case 70:
			return "Undetected";
		
		case 71:
			return "AllRounder";
		
		case 72:
			return "EliteThief";
		
		case 73:
			return "Professional";
		
		case 74:
			return "SupportAct";
		
		case 75:
			return "Shafted";
		
		case 76:
			return "Collector";
		
		case 77:
			return "Deadeye";
		
		case 78:
			return "PistolAtDawn";
		
		case 79:
			return "BeatTheTraffic";
		
		case 80:
			return "AllWheels";
		
		case 81:
			return "FEELINGROGGY";
		
		case 82:
			return "ApeEscape";
		
		case 83:
			return "MonkeyMind";
		
		case 84:
			return "AquaticApe";
		
		case 85:
			return "KeepingTheFaith";
		
		case 86:
			return "TrueLove";
		
		case 87:
			return "Nemesis";
		
		case 88:
			return "Friendzoned";
		
		case 89:
			return "KingOfQub3d";
		
		case 90:
			return "Qubism";
		
		case 93:
			return "CrankItTo11";
		
		case 92:
			return "GodofQub3d";
		
		case 91:
			return "Qubits";
		
		case 94:
			return "1111";
		
		default:
	}
	return "";
}

char* func_115(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_521";
		
		case 2:
			return "AWS_660";
		
		case 3:
			return "AWS_667";
		
		case 4:
			return "AWS_670";
		
		case 5:
			return "AWS_671";
		
		case 6:
			return "AWS_691";
		
		case 7:
			return "AWS_697";
		
		case 8:
			return "AWS_701";
		
		case 10:
			return "AWS_705";
		
		case 11:
			return "AWS_706";
		
		case 12:
			return "AWS_709";
		
		case 13:
			return "AWS_711";
		
		case 14:
			return "AWS_712";
		
		case 15:
			return "AWS_714";
		
		case 16:
			return "AWS_715";
		
		case 17:
			return "AWS_718";
		
		case 18:
			return "AWS_719";
		
		case 20:
			return "AWS_725";
		
		case 21:
			return "AWS_727";
		
		case 22:
			return "AWS_717";
		
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_729_M";
			}
			else
			{
				return "AWS_729";
			}
			break;
		
		case 25:
			return "AWS_783";
		
		case 26:
			return "AWS_784";
		
		case 27:
			return "AWS_771";
		
		case 96:
			return "AWS_751";
		
		case 100:
			return "AWS_763";
		
		case 95:
			return "AWS_754";
		
		case 98:
			return "AWS_765";
		
		case 99:
			return "AWS_756";
		
		case 101:
			return "AWS_793";
		
		case 102:
			return "AWS_794";
		
		case 103:
			return "AWS_795";
		
		case 30:
			return "AWS_796";
		
		case 31:
			return "AWS_797";
		
		case 32:
			return "AWS_798";
		
		case 33:
			return "AWS_799";
		
		case 34:
			return "AWS_800";
		
		case 35:
			return "AWS_801";
		
		case 36:
			return "AWS_802";
		
		case 37:
			return "AWS_803";
		
		case 38:
			return "AWS_804";
		
		case 39:
			return "AWS_805";
		
		case 40:
			return "AWS_806";
		
		case 41:
			return "AWS_807";
		
		case 42:
			return "AWS_808";
		
		case 43:
			return "AWS_809";
		
		case 44:
			return "AWS_810";
		
		case 45:
			return "AWS_811";
		
		case 46:
			return "AWS_812";
		
		case 47:
			return "AWS_813";
		
		case 48:
			return "AWS_814";
		
		case 49:
			return "AWS_815";
		
		case 50:
			return "AWS_816";
		
		case 51:
			return "AWS_819";
		
		case 52:
			return "AWS_820";
		
		case 53:
			return "AWS_836";
		
		case 54:
			return "AWS_837";
		
		case 55:
			return "AWS_838";
		
		case 56:
			return "AWS_839";
		
		case 57:
			return "AWS_840";
		
		case 58:
			return "AWS_841";
		
		case 59:
			return "AWS_842";
		
		case 62:
			return "AWS_846";
		
		case 60:
			return "AWS_843";
		
		case 61:
			return "AWS_844";
		
		case 63:
			return "AWS_857";
		
		case 64:
			return "AWS_858";
		
		case 65:
			return "AWS_859";
		
		case 66:
			return "AWS_860";
		
		case 67:
			return "AWS_861";
		
		case 68:
			return "AWS_862";
		
		case 69:
			return "AWS_863";
		
		case 70:
			return "AWS_864";
		
		case 71:
			return "AWS_865";
		
		case 72:
			return "AWS_866";
		
		case 73:
			return "AWS_867";
		
		case 74:
			return "AWS_868";
		
		case 75:
			return "AWS_869";
		
		case 76:
			return "AWS_870";
		
		case 77:
			return "AWS_871";
		
		case 78:
			return "AWS_872";
		
		case 79:
			return "AWS_873";
		
		case 80:
			return "AWS_874";
		
		case 81:
			return "AWS_875";
		
		case 82:
			return "AWS_876";
		
		case 83:
			return "AWS_877";
		
		case 84:
			return "AWS_878";
		
		case 85:
			return "AWS_879";
		
		case 86:
			return "AWS_880";
		
		case 87:
			return "AWS_881";
		
		case 88:
			return "AWS_882";
		
		case 89:
			return "AWS_886";
		
		case 90:
			return "AWS_887";
		
		case 93:
			return "AWS_888";
		
		case 92:
			return "AWS_889";
		
		case 91:
			return "AWS_890";
		
		case 94:
			return "AWS_891";
	}
	return "";
}

char* func_116(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_521";
		
		case 2:
			return "AWT_660";
		
		case 3:
			return "AWT_667";
		
		case 4:
			return "AWT_670";
		
		case 5:
			return "AWT_671";
		
		case 6:
			return "AWT_691";
		
		case 7:
			return "AWT_697";
		
		case 8:
			return "AWT_701";
		
		case 10:
			return "AWT_705";
		
		case 11:
			return "AWT_706";
		
		case 12:
			return "AWT_709";
		
		case 13:
			return "AWT_711";
		
		case 14:
			return "AWT_712";
		
		case 15:
			return "AWT_714";
		
		case 16:
			return "AWT_715";
		
		case 17:
			return "AWT_718";
		
		case 18:
			return "AWT_719";
		
		case 20:
			return "AWT_725";
		
		case 21:
			return "AWT_727";
		
		case 22:
			return "AWT_717";
		
		case 23:
			return "AWT_729";
		
		case 25:
			return "AWT_783";
		
		case 26:
			return "AWT_784";
		
		case 96:
			return "AWT_751";
		
		case 95:
			return "AWT_754";
		
		case 98:
			return "AWT_765";
		
		case 100:
			return "AWT_763";
		
		case 99:
			return "AWT_756";
			break;
		
		case 101:
			return "AWT_793";
		
		case 102:
			return "AWT_794";
		
		case 103:
			return "AWT_795";
		
		case 30:
			return "AWT_796";
		
		case 31:
			return "AWT_797";
		
		case 32:
			return "AWT_798";
		
		case 33:
			return "AWT_799";
		
		case 34:
			return "AWT_800";
		
		case 35:
			return "AWT_801";
		
		case 36:
			return "AWT_802";
		
		case 37:
			return "AWT_803";
		
		case 38:
			return "AWT_804";
		
		case 39:
			return "AWT_805";
		
		case 40:
			return "AWT_806";
		
		case 41:
			return "AWT_807";
		
		case 42:
			return "AWT_808";
		
		case 43:
			return "AWT_809";
		
		case 44:
			return "AWT_810";
		
		case 45:
			return "AWT_811";
		
		case 46:
			return "AWT_812";
		
		case 47:
			return "AWT_813";
		
		case 48:
			return "AWT_814";
		
		case 49:
			return "AWT_815";
		
		case 50:
			return "AWT_816";
		
		case 51:
			return "AWT_819";
		
		case 52:
			return "AWT_820";
		
		case 53:
			return "AWT_836";
		
		case 54:
			return "AWT_837";
		
		case 55:
			return "AWT_838";
		
		case 56:
			return "AWT_839";
		
		case 57:
			return "AWT_840";
		
		case 58:
			return "AWT_841";
		
		case 59:
			return "AWT_842";
		
		case 62:
			return "AWT_846";
		
		case 60:
			return "AWT_843";
		
		case 61:
			return "AWT_844";
		
		case 63:
			return "AWT_857";
		
		case 64:
			return "AWT_858";
		
		case 65:
			return "AWT_859";
		
		case 66:
			return "AWT_860";
		
		case 67:
			return "AWT_861";
		
		case 68:
			return "AWT_862";
		
		case 69:
			return "AWT_863";
		
		case 70:
			return "AWT_864";
		
		case 71:
			return "AWT_865";
		
		case 72:
			return "AWT_866";
		
		case 73:
			return "AWT_867";
		
		case 74:
			return "AWT_868";
		
		case 75:
			return "AWT_869";
		
		case 76:
			return "AWT_870";
		
		case 77:
			return "AWT_871";
		
		case 78:
			return "AWT_872";
		
		case 79:
			return "AWT_873";
		
		case 80:
			return "AWT_874";
		
		case 81:
			return "AWT_875";
		
		case 82:
			return "AWT_876";
		
		case 83:
			return "AWT_877";
		
		case 84:
			return "AWT_878";
		
		case 85:
			return "AWT_879";
		
		case 86:
			return "AWT_880";
		
		case 87:
			return "AWT_881";
		
		case 88:
			return "AWT_882";
		
		case 89:
			return "AWT_886";
		
		case 90:
			return "AWT_887";
		
		case 93:
			return "AWT_888";
		
		case 92:
			return "AWT_889";
		
		case 91:
			return "AWT_890";
		
		case 94:
			return "AWT_891";
	}
	return "";
}

int func_117(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 96:
			return 1;
		
		case 95:
			return 1;
		
		case 98:
			return 1;
		
		case 100:
			return 1;
		
		case 99:
			return 1;
		
		case 101:
			return 1;
		
		case 102:
			return 1;
		
		case 103:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 53:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 62:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 63:
			return 1;
		
		case 64:
			return 1;
		
		case 65:
			return 1;
		
		case 66:
			return 1;
		
		case 67:
			return 1;
		
		case 68:
			return 1;
		
		case 69:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
			return 1;
		
		case 89:
			return 1;
		
		case 90:
			return 1;
		
		case 93:
			return 1;
		
		case 92:
			return 1;
		
		case 91:
			return 1;
		
		case 94:
			return 1;
		
		default:
	}
	return 0;
}

int func_118()
{
	return 5;
}

int func_119(int iParam0)
{
	if (func_111(iParam0, -1))
	{
		return 5;
	}
	return 0;
}

void func_120(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_126(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_125(iParam0, iParam2);
			break;
	}
	iVar0 = func_125(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_65(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_124(iParam0, iParam2);
	sVar2 = func_123(iParam0, iParam1, iParam2);
	sVar3 = func_122(iParam0, iParam1, iParam2);
	sVar4 = func_121(iParam0, iParam1, iParam2);
	iVar5 = func_49(iParam0, iVar0, iParam2);
	iVar6 = func_48(iParam0, -1);
	iVar7 = func_74(iParam1);
	iVar8 = func_49(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	uVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_66(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, uVar11, iParam1, uParam3);
}

char* func_121(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
		
		case 39:
			return "MPAwards5";
		
		case 51:
			return "MPAwards5";
		
		case 52:
			return "MPAwards5";
		
		case 16:
			return "MPAwards2";
		
		case 60:
			return "MPAwards4";
		
		case 61:
			return "MPAwards4";
		
		case 62:
			return "MPAwards4";
		
		case 63:
			return "MPAwards4";
		
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
						
						case 1:
							return "MPAwards1";
						
						case 2:
							return "MPAwards1";
						
						case 3:
							return "MPAwards1";
						
						case 4:
							return "MPAwards1";
						
						case 5:
							return "MPAwards1";
						
						default:
					}
					break;
			}
			break;
		
		case 12:
			return "MPAwards3";
		
		case 11:
			return "MPAwards4";
		
		case 20:
			return "MPAwards5";
		
		case 19:
			return "MPAwards2";
		
		case 15:
			return "MPAwards4";
		
		case 17:
			return "MPAwards2";
		
		case 21:
			return "MPAwards2";
		
		case 14:
			return "MPAwards4";
		
		case 22:
			return "MPAwards1";
		
		case 1:
			return "MPAwards5";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards4";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards4";
		
		case 8:
			return "MPAwards5";
		
		case 9:
			return "MPAwards4";
		
		case 10:
			return "MPAwards2";
		
		case 23:
			return "MPAwards1";
		
		case 24:
			return "MPAwards1";
		
		case 25:
			return "MPAwards1";
		
		case 26:
			return "MPAwards1";
		
		case 27:
			return "MPAwards1";
		
		case 28:
			return "MPAwards1";
		
		case 29:
			return "MPAwards5";
		
		case 30:
			return "MPAWARDS5";
		
		case 31:
			return "MPAWARDS5";
		
		case 32:
			return "MPAWARDS5";
		
		case 33:
			return "MPAWARDS5";
		
		case 34:
			return "MPAWARDS5";
		
		case 35:
			return "MPAWARDS5";
		
		case 36:
			return "MPAWARDS5";
		
		case 37:
			return "MPAWARDS5";
		
		case 38:
			return "MPAWARDS5";
		
		case 40:
			return "MPAWARDS5";
		
		case 41:
			return "MPAWARDS5";
		
		case 42:
			return "MPAWARDS5";
		
		case 43:
			return "MPAWARDS5";
		
		case 44:
			return "MPAWARDS5";
		
		case 45:
			return "MPAWARDS5";
		
		case 46:
			return "MPAWARDS5";
		
		case 47:
			return "MPAWARDS5";
		
		case 48:
			return "MPAWARDS5";
		
		case 49:
			return "MPAWARDS5";
		
		case 54:
			return "MPAWARDS5";
		
		case 55:
			return "MPAWARDS5";
		
		case 56:
			return "MPAWARDS5";
		
		case 57:
			return "MPAWARDS5";
		
		case 58:
			return "MPAWARDS5";
		
		case 59:
			return "MPAWARDS5";
		
		case 104:
			return "MPAwardHeists";
		
		case 105:
			return "MPAwardHeists";
		
		case 106:
			return "MPAwardHeists";
		
		case 107:
			return "MPAwardHeists";
		
		case 108:
			return "MPAwardHeists";
		
		case 67:
			return "MPAwardHeists";
		
		case 98:
			return "MPAwardHeists";
		
		case 99:
			return "MPAwardHeists";
		
		case 100:
			return "MPAwardHeists";
		
		case 101:
			return "MPAwardHeists";
		
		case 102:
			return "MPAwardHeists";
		
		case 103:
			return "MPAwardHeists";
		
		case 109:
			return "MPAwardHeists";
		
		case 110:
			return "MPAwardHeists";
		
		case 111:
			return "MPAwardHeists";
		
		case 112:
			return "MPAwardHeists";
		
		case 113:
			return "MPAwardHeists";
		
		case 114:
			return "MPAwardHeists";
		
		case 115:
			return "MPAwardHeists";
		
		case 116:
			return "MPAwardHeists";
		
		case 117:
			return "MPAwardNightclub";
		
		case 118:
			return "MPAwardNightclub";
		
		case 119:
			return "MPAwardNightclub";
		
		case 120:
			return "MPAwardNightclub";
		
		case 121:
			return "MPAwardNightclub";
		
		case 70:
			return "MPAwardsArena";
		
		case 71:
			return "MPAwardsArena";
		
		case 72:
			return "MPAwardsArena";
		
		case 73:
			return "MPAwardsArena";
		
		case 74:
			return "MPAwardsArena";
		
		case 75:
			return "MPAwardsArena";
		
		case 76:
			return "MPAwardsArena";
		
		case 77:
			return "MPAwardsArena";
		
		case 78:
			return "MPAwardsArena";
		
		case 79:
			return "MPAwardsArena";
		
		case 80:
			return "MPAwardsArena";
		
		case 81:
			return "MPAwardsArena";
		
		case 82:
			return "MPAwardsArena";
		
		case 83:
			return "MPAwardsArena";
		
		case 84:
			return "MPAwardsArena";
		
		case 85:
			return "MPAwardsArena";
		
		case 86:
			return "MPAwardsArena";
		
		case 87:
			return "MPAwardCasino";
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "MPAwardCasinoHeist";
			break;
	}
	return "";
}

char* func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 9)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
		
		case 39:
			return "ComeFromBehind";
		
		case 60:
			return "TheFugitive";
		
		case 61:
			return "NoClaimsBonus";
		
		case 62:
			return "swallow";
		
		case 63:
			return "Spinderella";
		
		case 16:
			return "Timeinheli";
		
		case 0:
			return "HangingOutInCars";
		
		case 51:
			return "WinRallyAsDriver";
		
		case 52:
			return "WinRallyAsNavigator";
		
		case 12:
			return "Killenemiesindriveby";
		
		case 11:
			return "JackVehicles";
		
		case 20:
			return "Jump40m";
		
		case 19:
			return "Timesavoiding5stars";
		
		case 15:
			return "GetLapDances";
		
		case 17:
			return "Delivercars";
		
		case 21:
			return "racesWon_generic";
		
		case 14:
			return "HoldUpShops";
		
		case 22:
			return "ArmWrestlingVictories";
		
		case 1:
			return "KillPistol";
		
		case 2:
			return "KillSniperrifle";
		
		case 3:
			return "KillGrenades";
		
		case 4:
			return "KillShotgun";
		
		case 5:
			return "KillSMG";
		
		case 6:
			return "KillRocketLauncher";
		
		case 7:
			return "KillStickyBombs";
		
		case 8:
			return "KillMeleeWeapons";
		
		case 9:
			return "Headshots";
		
		case 10:
			return "BlowupVehicles";
		
		case 23:
			return "Winatdarts";
		
		case 24:
			return "Blowupenemiesusingcarbombs";
		
		case 25:
			return "KilledpeoplewithanAssaultRifle";
		
		case 26:
			return "KilledpeoplewithaMachineGun";
		
		case 27:
			return "Gethaircuts";
		
		case 28:
			return "Parachute1min";
		
		case 29:
			return "ParachuteJumps20m";
		
		case 30:
			return "Birdie";
		
		case 31:
			return "GolfWin";
		
		case 32:
			return "TargetGridWin";
		
		case 33:
			return "RandomTargetsWin";
		
		case 34:
			return "CoveredTargetsWin";
		
		case 35:
			return "TennisMatchesWon";
		
		case 36:
			return "TennisServiceAce";
		
		case 37:
			return "GTARacesWon";
		
		case 38:
			return "FastestLap";
		
		case 40:
			return "DeathmatchWin";
		
		case 41:
			return "TeamDeathmatchWin";
		
		case 42:
			return "TeamDeathmatchMVP";
		
		case 43:
			return "KillStreak";
		
		case 44:
			return "TotalKills";
		
		case 45:
			return "HatTrickKiller";
		
		case 46:
			return "StolenKill";
		
		case 47:
			return "Land2mFromTarget";
		
		case 48:
			return "ReachHordeModeWave";
		
		case 49:
			return "EarnCashFromBetting";
		
		case 54:
			return "RaceToPointWinner";
		
		case 55:
			return "BountyHunter";
		
		case 56:
			return "OverallKills";
		
		case 57:
			return "WinASeaRace";
		
		case 58:
			return "WinAPlaneRace";
		
		case 59:
			return "GetRevengeKillDeathmatch";
		
		case 104:
			return "Captured";
		
		case 105:
			return "ThePostman";
		
		case 106:
			return "GimmeThat";
		
		case 107:
			return "NoYouDont";
		
		case 108:
			return "DeathDefying";
		
		case 67:
			return "dailyduty";
		
		case 98:
			return "TheBigTime";
		
		case 99:
			return "BePrepared";
		
		case 100:
			return "ForHire";
		
		case 101:
			return "ShotCaller";
		
		case 102:
			return "LiveALittle";
		
		case 103:
			return "Decorated";
		
		case 109:
			return "LightsOut";
		
		case 110:
			return "InControl";
		
		case 111:
			return "PsychoKiller";
		
		case 112:
			return "CalmDown";
		
		case 113:
			return "StillStanding";
		
		case 114:
			return "OneAndOnly";
		
		case 115:
			return "OneManArmy";
		
		case 116:
			return "MovingDay";
		
		case 117:
			return "Solomun";
		
		case 118:
			return "TaleOfUs";
		
		case 119:
			return "Dixon";
		
		case 120:
			return "TheBlackMadonna";
		
		case 121:
			return "ClubDrunk";
		
		case 70:
			return "watchyourstep";
		
		case 71:
			return "TOWEROFFENSE";
		
		case 72:
			return "READYFORWAR";
		
		case 73:
			return "THROUGHTHELENS";
		
		case 74:
			return "SPINNER";
		
		case 75:
			return "YOUMEANBOOBYTRAP";
		
		case 76:
			return "MASTERBANDITO";
		
		case 77:
			return "SITTINGDUCK";
		
		case 78:
			return "CROWDPARTICIPATION";
		
		case 79:
			return "KILLORBEKILLED";
		
		case 80:
			return "MASSIVESHUNT";
		
		case 81:
			return "YOUREOUTTAHERE";
		
		case 82:
			return "WEVEGOTONE";
		
		case 83:
			return "ARENAWAGEWORKER";
		
		case 84:
			return "TIMESERVED";
		
		case 85:
			return "TOPSCORE";
		
		case 86:
			return "CAREERWINNER";
		
		case 87:
			return "HighRoller";
		
		case 88:
			return "Preparation";
		
		case 89:
			return "AsleepOnTheJob";
		
		case 90:
			return "DailyCashGrab";
		
		case 91:
			return "Bigbrother";
		
		case 92:
			return "Sharpshooter";
		
		case 93:
			return "RaceChampion";
		
		case 94:
			return "PlatinumSword";
		
		case 95:
			return "CoinPurse";
		
		case 96:
			return "Astrochimp";
		
		case 97:
			return "Masterful";
			break;
	}
	return "";
}

char* func_123(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWS_721";
		
		case 60:
			return "AWS_728";
		
		case 61:
			return "AWS_730";
		
		case 62:
			return "AWS_731";
		
		case 63:
			return "AWS_732";
		
		case 16:
			return "AWS_550";
		
		case 0:
			return "AWS_282";
		
		case 51:
			return "AWS_707";
		
		case 52:
			return "AWS_708";
		
		case 12:
			return "AWS_581";
		
		case 11:
			return "AWS_582";
		
		case 19:
			return "AWS_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_509_M";
			}
			else
			{
				return "AWS_509";
			}
			break;
		
		case 39:
			return "AWS_678";
		
		case 15:
			return "AWS_559";
		
		case 17:
			return "AWS_535";
		
		case 21:
			return "AWS_586";
		
		case 14:
			return "AWS_566";
		
		case 22:
			return "AWS_589";
		
		case 1:
			return "AWS_506";
		
		case 2:
			return "AWS_585";
		
		case 3:
			return "AWS_541";
		
		case 4:
			return "AWS_584";
		
		case 5:
			return "AWS_540";
		
		case 6:
			return "AWS_539";
		
		case 7:
			return "AWS_538";
		
		case 8:
			return "AWS_537";
		
		case 9:
			return "AWS_536";
		
		case 10:
			return "AWS_583";
		
		case 23:
			return "AWS_610";
		
		case 24:
			return "AWS_611";
		
		case 25:
			return "AWS_631";
		
		case 26:
			return "AWS_632";
		
		case 27:
			return "AWS_639";
		
		case 28:
			return "AWS_640";
		
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_699_m";
			}
			else
			{
				return "AWS_699";
			}
			break;
		
		case 30:
			return "AWS_661";
		
		case 31:
			return "AWS_662";
		
		case 32:
			return "AWS_663";
		
		case 33:
			return "AWS_665";
		
		case 34:
			return "AWS_666";
		
		case 35:
			return "AWS_668";
		
		case 36:
			return "AWS_669";
		
		case 37:
			return "AWS_675";
		
		case 38:
			return "AWS_676";
		
		case 40:
			return "AWS_679";
		
		case 41:
			return "AWS_681";
		
		case 42:
			return "AWS_682";
		
		case 43:
			return "AWS_677";
		
		case 44:
			return "AWS_683";
		
		case 45:
			return "AWS_684";
		
		case 46:
			return "AWS_685";
		
		case 47:
			return "AWS_692";
		
		case 48:
			return "AWS_696";
		
		case 49:
			return "AWS_693";
		
		case 54:
			return "AWS_710";
		
		case 55:
			return "AWS_703";
		
		case 56:
			return "AWS_704";
		
		case 57:
			return "AWS_722";
		
		case 58:
			return "AWS_723";
		
		case 59:
			return "AWS_716";
		
		case 104:
			return "AWS_740";
		
		case 105:
			return "AWS_741";
		
		case 106:
			return "AWS_742";
		
		case 107:
			return "AWS_743";
		
		case 108:
			return "AWS_744";
		
		case 67:
			return "AWS_782";
		
		case 98:
			return "AWS_745";
		
		case 99:
			return "AWS_746";
		
		case 100:
			return "AWS_747";
		
		case 101:
			return "AWS_748";
		
		case 102:
			return "AWS_749";
		
		case 103:
			return "AWS_752";
		
		case 109:
			return "AWS_755";
		
		case 110:
			return "AWS_757";
		
		case 111:
			return "AWS_758";
		
		case 112:
			return "AWS_759";
		
		case 113:
			return "AWS_760";
		
		case 114:
			return "AWS_761";
		
		case 115:
			return "AWS_762";
		
		case 116:
			return "AWS_764";
		
		case 117:
			if (iParam1 == 5)
			{
				return "AWS_788_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_788_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_788_2";
			}
			else
			{
				return "AWS_788_1";
			}
			break;
		
		case 118:
			if (iParam1 == 5)
			{
				return "AWS_789_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_789_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_789_2";
			}
			else
			{
				return "AWS_789_1";
			}
			break;
		
		case 119:
			if (iParam1 == 5)
			{
				return "AWS_790_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_790_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_790_2";
			}
			else
			{
				return "AWS_790_1";
			}
			break;
		
		case 120:
			if (iParam1 == 5)
			{
				return "AWS_791_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_791_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_791_2";
			}
			else
			{
				return "AWS_791_1";
			}
			break;
		
		case 121:
			return "AWS_792";
		
		case 70:
			return "AWS_817";
		
		case 71:
			return "AWS_818";
		
		case 72:
			return "AWS_821";
		
		case 73:
			return "AWS_822";
		
		case 74:
			return "AWS_823";
		
		case 75:
			return "AWS_824";
		
		case 76:
			return "AWS_825";
		
		case 77:
			return "AWS_826";
		
		case 78:
			return "AWS_827";
		
		case 79:
			return "AWS_828";
		
		case 80:
			return "AWS_829";
		
		case 81:
			return "AWS_830";
		
		case 82:
			return "AWS_831";
		
		case 83:
			return "AWS_832";
		
		case 84:
			return "AWS_833";
		
		case 85:
			return "AWS_834";
		
		case 86:
			return "AWS_835";
		
		case 87:
			if (iParam1 == 5)
			{
				return "AWS_845_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_845_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_845_2";
			}
			else
			{
				return "AWS_845_1";
			}
			break;
		
		case 88:
			if (iParam1 == 5)
			{
				return "AWS_847_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_847_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_847_2";
			}
			else
			{
				return "AWS_847_1";
			}
			break;
		
		case 89:
			if (iParam1 == 5)
			{
				return "AWS_848_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_848_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_848_2";
			}
			else
			{
				return "AWS_848_1";
			}
			break;
		
		case 90:
			if (iParam1 == 5)
			{
				return "AWS_849_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_849_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_849_2";
			}
			else
			{
				return "AWS_849_1";
			}
			break;
		
		case 91:
			if (iParam1 == 5)
			{
				return "AWS_850_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_850_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_850_2";
			}
			else
			{
				return "AWS_850_1";
			}
			break;
		
		case 92:
			if (iParam1 == 5)
			{
				return "AWS_851_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_851_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_851_2";
			}
			else
			{
				return "AWS_851_1";
			}
			break;
		
		case 93:
			if (iParam1 == 5)
			{
				return "AWS_852_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_852_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_852_2";
			}
			else
			{
				return "AWS_852_1";
			}
			break;
		
		case 94:
			if (iParam1 == 5)
			{
				return "AWS_853_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_853_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_853_2";
			}
			else
			{
				return "AWS_853_1";
			}
			break;
		
		case 95:
			if (iParam1 == 5)
			{
				return "AWS_854_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_854_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_854_2";
			}
			else
			{
				return "AWS_854_1";
			}
			break;
		
		case 96:
			if (iParam1 == 5)
			{
				return "AWS_855_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_855_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_855_2";
			}
			else
			{
				return "AWS_855_1";
			}
			break;
		
		case 97:
			if (iParam1 == 5)
			{
				return "AWS_856_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_856_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_856_2";
			}
			else
			{
				return "AWS_856_1";
			}
			break;
	}
	return "";
}

char* func_124(int iParam0, int iParam1)
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWT_721";
		
		case 39:
			return "AWT_678";
		
		case 51:
			return "AWT_707";
		
		case 52:
			return "AWT_708";
		
		case 60:
			return "AWT_728";
		
		case 61:
			return "AWT_730";
		
		case 62:
			return "AWT_731";
		
		case 63:
			return "AWT_732";
		
		case 16:
			return "AWT_550";
		
		case 0:
			return "AWT_282";
		
		case 12:
			return "AWT_581";
		
		case 11:
			return "AWT_582";
		
		case 19:
			return "AWT_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWT_509";
			}
			else
			{
				return "AWT_509";
			}
			break;
		
		case 15:
			return "AWT_559";
		
		case 17:
			return "AWT_535";
		
		case 21:
			return "AWT_586";
		
		case 14:
			return "AWT_566";
		
		case 22:
			return "AWT_589";
		
		case 1:
			return "AWT_506";
		
		case 2:
			return "AWT_585";
		
		case 3:
			return "AWT_541";
		
		case 4:
			return "AWT_584";
		
		case 5:
			return "AWT_540";
		
		case 6:
			return "AWT_539";
		
		case 7:
			return "AWT_538";
		
		case 8:
			return "AWT_537";
		
		case 9:
			return "AWT_536";
		
		case 10:
			return "AWT_583";
		
		case 23:
			return "AWT_610";
		
		case 24:
			return "AWT_611";
		
		case 25:
			return "AWT_631";
		
		case 26:
			return "AWT_632";
		
		case 27:
			return "AWT_639";
		
		case 28:
			return "AWT_640";
		
		case 29:
			return "AWT_699";
		
		case 30:
			return "AWT_661";
		
		case 31:
			return "AWT_662";
		
		case 32:
			return "AWT_663";
		
		case 33:
			return "AWT_665";
		
		case 34:
			return "AWT_666";
		
		case 35:
			return "AWT_668";
		
		case 36:
			return "AWT_669";
		
		case 37:
			return "AWT_675";
		
		case 38:
			return "AWT_676";
		
		case 40:
			return "AWT_679";
		
		case 41:
			return "AWT_681";
		
		case 42:
			return "AWT_682";
		
		case 43:
			return "AWT_677";
		
		case 44:
			return "AWT_683";
		
		case 45:
			return "AWT_684";
		
		case 46:
			return "AWT_685";
		
		case 47:
			return "AWT_692";
		
		case 48:
			return "AWT_696";
		
		case 49:
			return "AWT_693";
		
		case 54:
			return "AWT_710";
		
		case 55:
			return "AWT_703";
		
		case 56:
			return "AWT_704";
		
		case 57:
			return "AWT_722";
		
		case 58:
			return "AWT_723";
		
		case 59:
			return "AWT_716";
		
		case 104:
			return "AWT_740";
		
		case 105:
			return "AWT_741";
		
		case 106:
			return "AWT_742";
		
		case 107:
			return "AWT_743";
		
		case 108:
			return "AWT_744";
		
		case 67:
			return "AWT_782";
		
		case 98:
			return "AWT_745";
		
		case 99:
			return "AWT_746";
		
		case 100:
			return "AWT_747";
		
		case 101:
			return "AWT_748";
		
		case 102:
			return "AWT_749";
		
		case 103:
			return "AWT_752";
		
		case 109:
			return "AWT_755";
		
		case 110:
			return "AWT_757";
		
		case 111:
			return "AWT_758";
		
		case 112:
			return "AWT_759";
		
		case 113:
			return "AWT_760";
		
		case 114:
			return "AWT_761";
		
		case 115:
			return "AWT_762";
		
		case 116:
			return "AWT_764";
		
		case 117:
			return "AWT_788";
		
		case 118:
			return "AWT_789";
		
		case 119:
			return "AWT_790";
		
		case 120:
			return "AWT_791";
		
		case 121:
			return "AWT_792";
		
		case 70:
			return "AWT_817";
		
		case 71:
			return "AWT_818";
		
		case 72:
			return "AWT_821";
		
		case 73:
			return "AWT_822";
		
		case 74:
			return "AWT_823";
		
		case 75:
			return "AWT_824";
		
		case 76:
			return "AWT_825";
		
		case 77:
			return "AWT_826";
		
		case 78:
			return "AWT_827";
		
		case 79:
			return "AWT_828";
		
		case 80:
			return "AWT_829";
		
		case 81:
			return "AWT_830";
		
		case 82:
			return "AWT_831";
		
		case 83:
			return "AWT_832";
		
		case 84:
			return "AWT_833";
		
		case 85:
			return "AWT_834";
		
		case 86:
			return "AWT_835";
		
		case 87:
			return "AWT_845";
		
		case 88:
			return "AWT_847";
		
		case 89:
			return "AWT_848";
		
		case 90:
			return "AWT_849";
		
		case 91:
			return "AWT_850";
		
		case 92:
			return "AWT_851";
		
		case 93:
			return "AWT_852";
		
		case 94:
			return "AWT_853";
		
		case 95:
			return "AWT_854";
		
		case 96:
			return "AWT_855";
		
		case 97:
			return "AWT_856";
	}
	return "";
}

int func_125(int iParam0, int iParam1)
{
	if (func_83(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_83(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_83(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_83(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_126(int iParam0, int iParam1)
{
	if (!func_83(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
	{
		return 0;
	}
	if (!func_83(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
	{
		return 2;
	}
	if (!func_83(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
	{
		return 3;
	}
	if (!func_83(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_127(var uParam0, var uParam1)
{
	iVar0 = 12;
	iVar1 = uParam0->f_455;
	switch (uParam1->f_5)
	{
		case 0:
			iVar1 = iVar1;
			break;
		
		default:
			if (uParam1->f_5 < iLocal_177)
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			else
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			break;
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_177 + 1;
	func_128(0, iVar2, iVar3, "HUD_PAGE", 0);
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(iParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_22("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_129(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = (*uParam0 + *uParam1 * 4);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_177)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_178 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_178 - 1))
						{
							*uParam1 = (3 - iVar1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_177)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_178 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_178 - 1))
						{
							*uParam1 = iVar1;
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_177)
			{
				if (*uParam0 == 0)
				{
					iVar0 = (*uParam0 + *uParam1 * 4);
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_178 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_178 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 4);
				}
			}
			break;
	}
	return iVar0;
}

void func_130(var uParam0, var uParam1)
{
	if (uParam1->f_5 > iLocal_177)
	{
		func_139(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}
}

void func_131()
{
	func_128(0, -1, -1, 0, 0);
}

void func_132()
{
	func_133();
	func_128(0, -1, -1, 0, 0);
}

void func_133()
{
	func_134(0);
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		func_135(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_135(0, 2, 0, 2, 1, 0);
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_136(var uParam0)
{
	uParam0->f_463 = 1;
}

void func_137(var uParam0)
{
	uParam0->f_462 = 1;
}

void func_138(int iParam0, var uParam1)
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
}

void func_139(var uParam0)
{
	func_140(uParam0);
	uParam0->f_460 = 1;
}

void func_140(var uParam0)
{
	Var0.f_1 = 12;
	Var0.f_14 = 12;
	Var0.f_111 = 12;
	Var0.f_208 = 12;
	Var0.f_221 = 12;
	Var0.f_234 = 12;
	Var0.f_331 = 12;
	Var0.f_428 = 12;
	Var0.f_441 = 12;
	*uParam0 = { Var0 };
}

void func_141(var uParam0)
{
	uParam0->f_383 = 1;
}

void func_142(int iParam0, var uParam1)
{
	uParam1->f_380 = iParam0;
}

void func_143(var uParam0)
{
	func_144(uParam0);
	uParam0->f_382 = 1;
}

void func_144(var uParam0)
{
	Var0.f_1 = 16;
	Var0.f_18 = 16;
	Var0.f_275 = 16;
	Var0.f_292 = 16;
	Var0.f_309 = 16;
	Var0.f_326 = 16;
	Var0.f_343 = 16;
	Var0.f_360 = 16;
	*uParam0 = { Var0 };
}

