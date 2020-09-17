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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_205(ScriptParam_0);
	}
	else
	{
		func_196(0);
	}
	while (true)
	{
		func_195();
		if (func_184())
		{
			func_196(0);
		}
		if (func_181())
		{
			func_196(0);
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
	func_178();
	if (func_177(0))
	{
		func_165();
	}
	else if (func_177(1))
	{
		if (func_164())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_177(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_177(3))
	{
		func_196(1);
	}
}

void func_3()
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_5(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_6()
{
	if (!MISC::IS_BIT_SET(Local_117.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_117.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (!MISC::IS_BIT_SET(Local_117.f_5, 6))
		{
			MISC::SET_BIT(&(Local_117.f_5), 6);
			MISC::CLEAR_BIT(&(Local_117.f_5), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Local_117.f_5, 6))
	{
		MISC::CLEAR_BIT(&(Local_117.f_5), 6);
		MISC::CLEAR_BIT(&(Local_117.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(PLAYER::PLAYER_ID(), 0))
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
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_9(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_9(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_8(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
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
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_4769);
				func_9(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_8(&(Global_4268421.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
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
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
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
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
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
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_10(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
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

int func_14()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_17(8, -1) && func_16() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76882) || Global_22350.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1312812;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_20(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_21(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
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
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_18(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
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

void func_24()
{
	if (func_164())
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_117.f_62))
		{
			Local_117.f_62 = unk_0x67D02A194A2FC2BD(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_117.f_8 > -1 || MISC::IS_BIT_SET(Local_117.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (CAM::DOES_CAM_EXIST(Local_117.f_61))
		{
			Var0 = { CAM::GET_CAM_ROT(Local_117.f_61, 2) };
			func_32(SYSTEM::ROUND(-Var0.z));
		}
		func_31(Local_117.f_33);
	}
	else if (CAM::DOES_CAM_EXIST(Local_117.f_61))
	{
		Var3 = { CAM::GET_CAM_ROT(Local_117.f_61, 2) };
		fVar6 = Var3.z;
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				Var12 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
				fVar8 = ENTITY::GET_ENTITY_HEADING(func_30());
			}
		}
		while (fVar6 < 0f)
		{
			fVar6 = (fVar6 + 360f);
		}
		while (fVar6 > 360f)
		{
			fVar6 = (fVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = fVar6;
		func_25(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		fVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (fVar7 == 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 == -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 < 0f && fVar7 >= -0.5f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 < 0f && fVar7 > -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 > 1.5f && fVar7 < 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 > 2f || fVar7 < -1f)
		{
			fVar7 = 0.5f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_ALT_FOV_HEADING");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var12.z);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_CAM_LOGO");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_117.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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
		case 79:
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

int func_28(int iParam0, bool bParam1, bool bParam2)
{
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

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1370256))
		{
			return Global_1370256;
		}
		if (Global_1590382 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_MISSILE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_32(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_33()
{
	if (Local_117.f_59 <= 60f && Local_117.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_117.f_59 <= 55f && Local_117.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_117.f_59 <= 50f && Local_117.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_117.f_59 <= 45f && Local_117.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_117.f_59 <= 40f && Local_117.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_37(char* sParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_62, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_38()
{
	if (func_164())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
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
	if (!func_41())
	{
		Global_19486.f_1 = 3;
	}
}

int func_41()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_46()
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_47()
{
	if (!func_164())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((CAM::DOES_CAM_EXIST(Local_117.f_61) && CAM::IS_CAM_RENDERING(Local_117.f_61)) && func_48(Local_117.f_84[iVar1])) && func_48(func_30()))
		{
			Var10 = { CAM::GET_CAM_COORD(Local_117.f_61) };
			Var13 = { ENTITY::GET_ENTITY_COORDS(Local_117.f_84[iVar1], 1) };
			switch (Local_117.f_10[iVar1])
			{
				case 0:
					Local_117.f_98[iVar1] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var13, 511, 0, 7);
					if (Local_117.f_98[iVar1] != 0)
					{
						Local_117.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_117.f_98[iVar1], &iVar0, &Var5, &uVar2, &iVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_117.f_17[iVar1] = 1;
							Var5 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_117.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_117.f_7), iVar1);
							}
						}
						else
						{
							Local_117.f_17[iVar1] = 2;
							if (MISC::IS_BIT_SET(Local_117.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_117.f_7), iVar1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								if (Local_117.f_84[iVar1] == iVar8)
								{
									if (!MISC::IS_BIT_SET(Local_117.f_7, iVar1))
									{
										MISC::SET_BIT(&(Local_117.f_7), iVar1);
									}
								}
							}
							Local_117.f_98[iVar1] = 0;
							Local_117.f_10[iVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_117.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (MISC::IS_BIT_SET(Local_117.f_7, iVar1))
		{
			MISC::CLEAR_BIT(&(Local_117.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_48(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	if (!func_164())
	{
		return;
	}
	iVar0 = 208;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		iVar0 = 237;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)) || MISC::IS_BIT_SET(Local_117.f_5, 5))
	{
		iVar1 = 250;
		uVar2 = func_59();
		if (Local_117.f_8 > -1)
		{
			if (!MISC::IS_BIT_SET(Local_117.f_5, 3))
			{
				if (!func_58(&(Local_117.f_115)))
				{
					func_57(&(Local_117.f_115), 0, 0);
					Local_117.f_31 = 0;
					MISC::SET_BIT(&(Local_117.f_5), 5);
				}
				else if (func_56(&(Local_117.f_115), 300, 0) || Local_117.f_31 == 0)
				{
					if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
					{
						Local_117.f_31 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[Local_117.f_31]) && !ENTITY::IS_ENTITY_DEAD(Local_117.f_84[Local_117.f_31], 0))
					{
						iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
						if (iVar3 != -1)
						{
							Var4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar3) + func_54(Local_117.f_31) };
							Var7 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							Var10 = { (-SYSTEM::SIN(Var7.z) * SYSTEM::COS(Var7.x)), (SYSTEM::COS(Var7.z) * SYSTEM::COS(Var7.x)), SYSTEM::SIN(Var7.x) };
							Var13 = { 1f, 1f, 1f };
							Var16 = { Var4 + Var10 * Var13 };
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var16, iVar1, 1, func_53(0), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, uVar2, 0, 0, Local_117.f_84[Local_117.f_31], 1, 0, 1);
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", Var4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_117.f_32++;
							func_52(&(Local_117.f_115), 0, 0);
						}
					}
					if (Local_117.f_32 == Local_117.f_8)
					{
						Local_117.f_31 = 0;
						Local_117.f_33 = 0;
						Local_117.f_32 = -1;
						MISC::SET_BIT(&(Local_117.f_5), 3);
						MISC::CLEAR_BIT(&(Local_117.f_5), 5);
						func_57(&(Local_117.f_119), 0, 0);
						func_51(&(Local_117.f_115));
					}
					Local_117.f_31++;
				}
			}
		}
		else if (!MISC::IS_BIT_SET(Local_117.f_5, 1))
		{
			if (Local_117.f_31 < 0 || Local_117.f_31 >= 6)
			{
				Local_117.f_31 = 0;
			}
			iVar19 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
			if (iVar19 != -1)
			{
				Var20 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar19) + func_54(Local_117.f_31) };
				Var23 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var26 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var29 = { (-SYSTEM::SIN(Var26.z) * SYSTEM::COS(Var26.x)), (SYSTEM::COS(Var26.z) * SYSTEM::COS(Var26.x)), SYSTEM::SIN(Var26.x) };
				Var32 = { 10f, 10f, 10f };
				if (!func_50(Local_117.f_56))
				{
					Var32.x = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_117.f_56, Var23, 0);
					Var32.y = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_117.f_56, Var23, 0);
					Var32.z = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_117.f_56, Var23, 0);
				}
				Var35 = { Var23 + Var29 * Var32 };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var20, Var35, iVar1, 1, func_53(1), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, uVar2, 0, 0, 0, 1, 0, 1);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", Var20, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				MISC::SET_BIT(&(Local_117.f_5), 1);
				Local_117.f_33 = 0;
				func_57(&(Local_117.f_134), 0, 0);
				Local_117.f_31++;
			}
		}
	}
}

int func_50(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (iParam0 == 0)
		{
			return 2011877270;
		}
		else
		{
			return 1987049393;
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_55()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
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

void func_57(var uParam0, bool bParam1, bool bParam2)
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

bool func_58(var uParam0)
{
	return uParam0->f_1;
}

int func_59()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return Global_1370256;
	}
	return -1;
}

void func_60()
{
	if (!func_164())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_117.f_5, 3))
	{
		if (func_58(&(Local_117.f_119)))
		{
			if (!func_56(&(Local_117.f_119), 5000, 0))
			{
				iVar0 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_117.f_119)));
				Local_117.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_119));
				MISC::CLEAR_BIT(&(Local_117.f_5), 3);
				Local_117.f_32 = -1;
				Local_117.f_33 = 100;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_117.f_5, 1))
	{
		if (func_58(&(Local_117.f_134)))
		{
			if (!func_56(&(Local_117.f_134), 1500, 0))
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_117.f_134)));
				Local_117.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_117.f_134));
				MISC::CLEAR_BIT(&(Local_117.f_5), 1);
				Local_117.f_33 = 100;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_117.f_5, 1) && !MISC::IS_BIT_SET(Local_117.f_5, 5))
	{
		switch (Local_117.f_111)
		{
			case 0:
				func_85();
				break;
			
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()
{
	if ((CAM::DOES_CAM_EXIST(Local_117.f_61) && CAM::IS_CAM_RENDERING(Local_117.f_61)) && func_48(func_30()))
	{
		Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		Var12 = { (-SYSTEM::SIN(Var9.z) * SYSTEM::COS(Var9.x)), (SYSTEM::COS(Var9.z) * SYSTEM::COS(Var9.x)), SYSTEM::SIN(Var9.x) };
		Var15 = { 300f, 300f, 300f };
		Var18 = { Var6 + Var12 * Var15 };
		Var21 = { Var6 + Var12 * Vector(1f, 1f, 1f) };
		switch (Local_117.f_27)
		{
			case 0:
				Local_117.f_106 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var21, Var18, 511, func_30(), 7);
				if (Local_117.f_106 != 0)
				{
					Local_117.f_27 = 1;
				}
				break;
			
			case 1:
				iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_117.f_106, &iVar0, &(Local_117.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_117.f_26 = 1;
						Local_117.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_117.f_26 = 2;
						Local_117.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_117.f_27 = 0;
				}
				break;
			}
	}
}

void func_62()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_63(Local_117.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_63(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		if (Local_117.f_8 > -1)
		{
			if (func_48(iParam0))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_67(iVar8, -1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(PED::GET_VEHICLE_PED_IS_IN(iVar7, 0), 2);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
					{
						iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							if (PED::IS_PED_A_PLAYER(iVar9))
							{
								iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 2);
								}
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_117.f_48, iParam2))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_117.f_34[iParam2]) && Local_117.f_34[iParam2] == -1) && !func_66())
						{
							Local_117.f_34[iParam2] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_117.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_57(&(Local_117.f_136[iParam2]), 0, 0);
							MISC::SET_BIT(&(Local_117.f_48), iParam2);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_117.f_48, iParam2 + 6))
					{
						if (func_58(&(Local_117.f_136[iParam2])))
						{
							if (func_56(&(Local_117.f_136[iParam2]), 1000, 0))
							{
								func_65(iParam2, 0);
								if (AUDIO::HAS_SOUND_FINISHED(Local_117.f_41[iParam2]) && Local_117.f_41[iParam2] == -1)
								{
									Local_117.f_41[iParam2] = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FRONTEND(Local_117.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_57(&(Local_117.f_149[iParam2]), 0, 0);
									MISC::SET_BIT(&(Local_117.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_117.f_149[iParam2])))
					{
						if (func_56(&(Local_117.f_149[iParam2]), 700, 0))
						{
							func_64(iParam2, 0);
						}
					}
					GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
					if (!MISC::IS_BIT_SET(Local_117.f_48, iParam2 + 6))
					{
						HUD::GET_HUD_COLOUR(15, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					else
					{
						HUD::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					if (!bParam1)
					{
						GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, uVar3, uVar4, uVar5, uVar6, 1);
					}
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, uVar3, uVar4, uVar5, uVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, uVar3, uVar4, uVar5, uVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, uVar3, uVar4, uVar5, uVar6, 1);
					GRAPHICS::CLEAR_DRAW_ORIGIN();
				}
				else
				{
					func_65(iParam2, 1);
					func_64(iParam2, 1);
				}
			}
			else
			{
				func_65(iParam2, 1);
				func_64(iParam2, 1);
			}
		}
		else
		{
			func_65(iParam2, 1);
			func_64(iParam2, 1);
		}
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(Local_117.f_48, iParam0 + 6))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_117.f_41[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_117.f_41[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_117.f_41[iParam0]);
		}
		Local_117.f_41[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_117.f_48), iParam0 + 6);
		}
		func_51(&(Local_117.f_149[iParam0]));
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(Local_117.f_48, iParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_117.f_34[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_117.f_34[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_117.f_34[iParam0]);
		}
		Local_117.f_34[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_117.f_48), iParam0);
		}
		func_51(&(Local_117.f_136[iParam0]));
	}
}

int func_66()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_117.f_34[iVar0]) || !AUDIO::HAS_SOUND_FINISHED(Local_117.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_68()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_117.f_7, iVar0))
				{
					if (func_58(&(Local_117.f_121[iVar0])))
					{
						if (func_56(&(Local_117.f_121[iVar0]), 1000, 0))
						{
							Local_117.f_84[iVar0] = -1;
							if (Local_117.f_8 > -1)
							{
								Local_117.f_17[iVar0] = 0;
								func_51(&(Local_117.f_121[iVar0]));
								Local_117.f_8 = (Local_117.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_117.f_121[iVar0]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_117.f_121[iVar0]));
				}
				if ((!func_74(Local_117.f_84[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0])) || !func_69(Local_117.f_84[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]))
					{
					}
					if (!func_74(Local_117.f_84[iVar0]))
					{
					}
					Local_117.f_84[iVar0] = -1;
					if (Local_117.f_8 > -1)
					{
						Local_117.f_17[iVar0] = 0;
						func_51(&(Local_117.f_121[iVar0]));
						Local_117.f_8 = (Local_117.f_8 - 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_117.f_8 != iVar1)
	{
		Local_117.f_8 = iVar1;
	}
}

int func_69(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_72(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				if (!func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_29();
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1779120616:
		case -1536924937:
		case -1683328900:
		case 1922257928:
			return 1;
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_75()
{
	if (Local_117.f_28 < 0 || Local_117.f_28 >= 20)
	{
		Local_117.f_28 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_63[Local_117.f_28]) && !ENTITY::IS_ENTITY_DEAD(Local_117.f_63[Local_117.f_28], 0))
	{
		func_83(Local_117.f_63[Local_117.f_28]);
		if (func_56(&(Local_117.f_117), 1000, 0))
		{
			if (Local_117.f_112 == 2)
			{
				if (MISC::IS_BIT_SET(Local_117.f_5, 0))
				{
					if (Local_117.f_8 < 5)
					{
						if (func_82(Local_117.f_63[Local_117.f_28]))
						{
							Local_117.f_63[Local_117.f_28] = -1;
							MISC::CLEAR_BIT(&(Local_117.f_5), 0);
							func_51(&(Local_117.f_117));
							Local_117.f_28++;
						}
					}
					else
					{
						if (func_79(Local_117.f_63[Local_117.f_28]))
						{
							func_76(Local_117.f_63[Local_117.f_28]);
						}
						Local_117.f_63[Local_117.f_28] = -1;
						MISC::CLEAR_BIT(&(Local_117.f_5), 0);
						Local_117.f_25 = 0;
						func_51(&(Local_117.f_117));
						Local_117.f_28++;
					}
				}
				else
				{
					Local_117.f_25 = 0;
					Local_117.f_63[Local_117.f_28] = -1;
					MISC::CLEAR_BIT(&(Local_117.f_5), 0);
					func_52(&(Local_117.f_117), 0, 0);
					Local_117.f_28++;
				}
			}
		}
	}
	else
	{
		Local_117.f_63[Local_117.f_28] = -1;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28++;
	}
	if (Local_117.f_28 == 20)
	{
		Local_117.f_111 = 0;
		Local_117.f_25 = 0;
		func_51(&(Local_117.f_117));
		Local_117.f_28 = 0;
	}
}

void func_76(int iParam0)
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[func_77()]) && ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			Local_117.f_84[func_77()] = iParam0;
		}
	}
}

int func_77()
{
	iVar0 = -1;
	fVar1 = 0f;
	if (CAM::DOES_CAM_EXIST(Local_117.f_61) && CAM::IS_CAM_RENDERING(Local_117.f_61))
	{
		Var2 = { CAM::GET_CAM_COORD(Local_117.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar5]) && !ENTITY::IS_ENTITY_DEAD(Local_117.f_84[iVar5], 0))
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_117.f_84[iVar5], 1) - Var2 };
				fVar9 = func_78(Var6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_117.f_9 = iVar0;
	return iVar0;
}

var func_78(struct<3> Param0)
{
	return SYSTEM::SQRT((((Param0.x * Param0.x) + (Param0.y * Param0.y)) + (Param0.z * Param0.z)));
}

int func_79(int iParam0)
{
	if (func_77() != -1)
	{
		if ((func_48(Local_117.f_84[func_77()]) && func_48(iParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_117.f_84[func_77()], 1) > func_80(func_81(), iParam0, 1) && func_80(Local_117.f_84[func_77()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_80(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_81()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::NETWORK_PLAYER_ID_TO_INT() != -1)
		{
			return Global_2439138.f_1123[PLAYER::NETWORK_PLAYER_ID_TO_INT()];
		}
	}
	return -1;
}

int func_82(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]))
		{
			Local_117.f_84[iVar0] = uParam0;
			Local_117.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_83(int iParam0)
{
	if (((CAM::DOES_CAM_EXIST(Local_117.f_61) && CAM::IS_CAM_RENDERING(Local_117.f_61)) && func_48(iParam0)) && func_48(func_30()))
	{
		Var0 = { CAM::GET_CAM_COORD(Local_117.f_61) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		switch (Local_117.f_25)
		{
			case 0:
				Local_117.f_105 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var3, 511, 0, 7);
				if (Local_117.f_105 != 0)
				{
					Local_117.f_25 = 1;
				}
				break;
			
			case 1:
				Local_117.f_112 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_117.f_105, &iVar6, &Var10, &uVar7, &iVar13);
				if (Local_117.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_117.f_24 = 1;
						Var10 = { 0f, 0f, 0f };
						if (MISC::IS_BIT_SET(Local_117.f_5, 0))
						{
							MISC::CLEAR_BIT(&(Local_117.f_5), 0);
						}
					}
					else
					{
						Local_117.f_24 = 2;
						if (ENTITY::DOES_ENTITY_EXIST(iVar13))
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(iVar13) || (ENTITY::IS_ENTITY_A_PED(iVar13) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13))))
							{
								if (iVar13 == func_84(iParam0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
									{
										if (!MISC::IS_BIT_SET(Local_117.f_5, 0))
										{
											MISC::SET_BIT(&(Local_117.f_5), 0);
										}
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_117.f_5, 0))
							{
								MISC::CLEAR_BIT(&(Local_117.f_5), 0);
							}
						}
						Local_117.f_105 = 0;
						Local_117.f_25 = 0;
					}
				}
				else if (Local_117.f_112 == 0)
				{
					Local_117.f_25 = 0;
				}
				break;
		}
	}
	else if (MISC::IS_BIT_SET(Local_117.f_5, 0))
	{
		MISC::CLEAR_BIT(&(Local_117.f_5), 0);
	}
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85()
{
	if (CAM::DOES_CAM_EXIST(Local_117.f_61) && CAM::IS_CAM_RENDERING(Local_117.f_61))
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar105 = VEHICLE::_GET_ALL_VEHICLES(&uVar2);
				if (iVar105 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar105)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]))
						{
						}
						else if ((!ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_69(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[iVar0]) && !func_86(uVar2[iVar0]))
						{
							if (func_74(uVar2[iVar0]) && func_80(uVar2[iVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
					{
						iVar103 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
						iVar104 = PLAYER::GET_PLAYER_PED(iVar103);
						if ((iVar103 == PLAYER::PLAYER_ID() || !func_69(iVar104)) || ENTITY::IS_ENTITY_DEAD(iVar104, 0))
						{
						}
						else if (func_87(iVar104) && !func_86(iVar104))
						{
							if (func_80(iVar104, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_117.f_63[iVar1] = iVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_117.f_111 = 1;
			}
		}
	}
}

int func_86(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_117.f_84[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_117.f_84[iVar0], 0)) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_117.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_117.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_65(iVar0, 1);
		func_64(iVar0, 1);
		iVar0++;
	}
}

void func_89()
{
	if ((func_48(func_30()) && CAM::DOES_CAM_EXIST(Local_117.f_61)) && CAM::IS_CAM_RENDERING(Local_117.f_61))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_382, 0))
			{
				MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_382), 0);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_382, 0))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_382), 0);
	}
}

void func_90()
{
	if (((CAM::DOES_CAM_EXIST(Local_117.f_61) && (CAM::IS_CAM_RENDERING(Local_117.f_61) || !MISC::IS_BIT_SET(Local_117.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&fVar12, &fVar11);
		func_25(&fVar13);
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::SET_INPUT_EXCLUSIVE(0, 39);
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			fVar14 = 15f;
			fVar5 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14);
			fVar6 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14);
		}
		else
		{
			iVar4 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14));
			iVar3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14));
		}
		iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0, 39) * fVar14));
		if (!PAD::_IS_USING_KEYBOARD(0))
		{
			iVar18 = SYSTEM::ROUND((IntToFloat(iVar18) * fVar14));
			if (MISC::ABSI(iVar2) < iVar18)
			{
				iVar2 = 0;
			}
			Var19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (SYSTEM::VMAG(Var19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((Var15.x / fVar7) * 0.5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			Local_117[2] = ((fVar5 * Local_117.f_59) * fVar1);
			Local_117[3] = (((fVar6 * Local_117.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_117[2] = (((SYSTEM::TO_FLOAT(iVar4) * Local_117.f_59) * fVar1) * SYSTEM::TIMESTEP());
			Local_117[3] = ((((SYSTEM::TO_FLOAT(iVar3) * Local_117.f_59) * fVar1) * fVar22) * SYSTEM::TIMESTEP());
		}
		Local_117[3] = func_94(Local_117[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			Var15 = { CAM::GET_CAM_ROT(Local_117.f_61, 2) };
		}
		if (!func_93(CAM::GET_CAM_COORD(Local_117.f_61), 0f, 0f, 0f, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				fVar23 = ENTITY::GET_ENTITY_HEADING(func_30());
				fVar24 = (fVar23 - Var15.z);
				while (MISC::ABSF(fVar24) >= 180f && iVar25 < 30)
				{
					if (fVar24 < 0f)
					{
						fVar24 = (fVar24 + 360f);
					}
					else
					{
						fVar24 = (fVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (fVar24 >= fVar11)
				{
					if (fVar24 > 0f)
					{
						Var15.z = (fVar23 - fVar11);
					}
					else
					{
						Var15.z = (fVar23 + fVar11);
					}
				}
				if (fVar24 < fVar12)
				{
					if (fVar24 > 0f)
					{
						Var15.z = (fVar23 - MISC::ABSF(fVar12));
					}
					else
					{
						Var15.z = (fVar23 + MISC::ABSF(fVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_93(Local_117.f_50, 0f, 0f, 0f, 0))
			{
				Local_117.f_50 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			}
			else
			{
				Var28 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
				fVar31 = ((MISC::ABSF(Local_117.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((Var28.x - Local_117.f_50) * fVar31));
				fVar27 = (fVar27 + (Var28.z - Local_117.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (Var28.x < -80f || Var28.x > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_30()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_117.f_50 = { Var28 };
			}
			if ((((Local_117[2] != 0f || Local_117[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !MISC::IS_BIT_SET(Local_117.f_5, 2))
			{
				fVar32 = (((Local_117.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_117[2] = (Local_117[2] * fVar32);
				Local_117[3] = (Local_117[3] * fVar32);
				Local_117.f_53 = (Local_117.f_53 + Local_117[2]);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - Local_117[3]);
				Local_117.f_53 = (Local_117.f_53 - fVar26);
				Local_117.f_53.f_2 = (Local_117.f_53.f_2 - fVar27);
				if (Local_117.f_53 < fVar8)
				{
					Local_117.f_53 = fVar8;
				}
				if (Local_117.f_53 > fVar7)
				{
					Local_117.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_117.f_53.f_2 > 180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 - 360f);
					}
					while (Local_117.f_53.f_2 < -180f)
					{
						Local_117.f_53.f_2 = (Local_117.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_117.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_117.f_53.f_2 > (fVar13 / 2f))
					{
						Local_117.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_117.f_5, 2))
			{
				if (func_164())
				{
					Local_117.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_117.f_53 = { fVar7, 0f, 0f };
				}
				MISC::SET_BIT(&(Local_117.f_5), 2);
			}
			if (!func_92(Global_2425662[PLAYER::PLAYER_ID()].f_383[0], Local_117.f_53, 0f, Local_117.f_53.f_2, 1056964608, 0))
			{
				Global_2425662[PLAYER::PLAYER_ID()].f_383[0] = { Local_117.f_53, 0f, Local_117.f_53.f_2 };
			}
			if (func_164())
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_117.f_61, func_30(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), "weapon_1d"), 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
			else
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_117.f_61, func_30(), 0, 1, Local_117.f_53, 0f, Local_117.f_53.f_2, func_91(), 1);
			}
		}
		Local_117.f_59 = (Local_117.f_59 + (((SYSTEM::TO_FLOAT(iVar2) / 5f) * SYSTEM::TIMESTEP()) * fVar0));
		if (Local_117.f_59 > fVar9)
		{
			Local_117.f_59 = fVar9;
		}
		if (Local_117.f_59 < fVar10)
		{
			Local_117.f_59 = fVar10;
		}
		CAM::_0x487A82C650EB7799(1f);
		CAM::SET_CAM_FOV(Local_117.f_61, Local_117.f_59);
		fVar33 = ((Local_117.f_59 - 5f) / 42f);
		GRAPHICS::_0xE2892E7E55D7073A(fVar33);
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((MISC::ABSI(iVar2) > 0 && Local_117.f_59 <= fVar9) && Local_117.f_59 >= fVar10)
			{
				iVar34 = Local_117.f_29;
				if (iVar34 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar34))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar34, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Ctrl", SYSTEM::TO_FLOAT(iVar2));
					if (iVar2 < 0)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", -1f);
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_117.f_29 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(Local_117.f_29))
				{
					AUDIO::STOP_SOUND(Local_117.f_29);
				}
			}
			Var35 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) };
			if (SYSTEM::VMAG(Var35) > 0f)
			{
				iVar38 = Local_117.f_30;
				if (iVar38 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar38))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar38, "COP_HELI_CAM_TURN", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "Ctrl", SYSTEM::VMAG(Var35));
				}
			}
			else
			{
				iVar39 = Local_117.f_30;
				if (iVar39 != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iVar39))
					{
						AUDIO::STOP_SOUND(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_91()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case -1660661558:
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_92(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (MISC::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_93(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)
{
	*fParam0 = 0.0015f;
}

int func_99()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (func_102(1))
	{
		return 1;
	}
	if (func_100(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_102(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_103()
{
	if (!func_111())
	{
		func_110(1);
	}
	HUD::SET_BIGMAP_ACTIVE(0, 1);
	if (func_164())
	{
		func_109();
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_117.f_107))
	{
		NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Local_117.f_107);
	}
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_108()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(Var0.x, Var0.y);
		HUD::_0xA17784FCA9548D15(Var0.x, Var0.y, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_108())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (func_164())
	{
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
		}
	}
	HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.y);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
	if (CAM::DOES_CAM_EXIST(Local_117.f_61))
	{
		CAM::_0x661B5C8654ADD825(Local_117.f_61, 1);
	}
	HUD::SET_RADAR_ZOOM(0);
	if (func_164())
	{
		Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
		Var3 = { func_107(Var3) };
		if (!HUD::DOES_BLIP_EXIST(Local_117.f_109))
		{
			Local_117.f_108 = func_105(Var0, 0);
			HUD::SET_BLIP_SPRITE(Local_117.f_108, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_117.f_108, 0);
			HUD::SET_BLIP_DISPLAY(Local_117.f_108, 4);
			HUD::SET_BLIP_COLOUR(Local_117.f_108, func_104(2));
			HUD::SET_BLIP_SHOW_CONE(Local_117.f_108, 1);
			HUD::SET_BLIP_SCALE(Local_117.f_108, 0.54f);
			HUD::SET_BLIP_PRIORITY(Local_117.f_108, 13 + 1);
			Local_117.f_109 = func_105(Var0, 0);
			HUD::SET_BLIP_SPRITE(Local_117.f_109, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_117.f_109, 0);
			HUD::SET_BLIP_DISPLAY(Local_117.f_109, 4);
			HUD::SET_BLIP_COLOUR(Local_117.f_109, func_104(18));
			HUD::SET_BLIP_SHOW_CONE(Local_117.f_109, 1);
			HUD::SET_BLIP_SCALE(Local_117.f_109, 0.44f);
			HUD::SET_BLIP_PRIORITY(Local_117.f_109, 13 + 1);
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_117.f_109, 1);
			HUD::SET_BLIP_ROTATION(Local_117.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.y)));
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_117.f_108, 1);
			HUD::SET_BLIP_ROTATION(Local_117.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.y)));
		}
		else
		{
			HUD::SET_BLIP_COORDS(Local_117.f_109, Var0);
			HUD::SET_BLIP_ROTATION(Local_117.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.y)));
			HUD::SET_BLIP_DISPLAY(Local_117.f_109, 5);
			HUD::SET_BLIP_COORDS(Local_117.f_108, Var0);
			HUD::SET_BLIP_ROTATION(Local_117.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.y)));
			HUD::SET_BLIP_DISPLAY(Local_117.f_108, 5);
		}
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_105(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_106(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(struct<3> Param0)
{
	Var0.x = SYSTEM::COS(Param0.x);
	Var0.y = SYSTEM::COS(Param0.z);
	Var0.z = SYSTEM::SIN(Param0.x);
	Var0.y = (Var0.y * Var0.x);
	Var0.x = (Var0.x * -SYSTEM::SIN(Param0.z));
	return Var0;
}

bool func_108()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_109()
{
	Global_1312666 = 1;
}

void func_110(int iParam0)
{
	Global_2462959 = iParam0;
}

bool func_111()
{
	return Global_2462959;
}

void func_112(int iParam0)
{
	if (Local_117.f_110 != iParam0)
	{
		Local_117.f_110 = iParam0;
	}
}

int func_113()
{
	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_164())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 80) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_117.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_117.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					return 1;
				}
				if (func_48(func_30()))
				{
					if (CAM::DOES_CAM_EXIST(Local_117.f_61))
					{
						Var0 = { CAM::GET_CAM_COORD(Local_117.f_61) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, 0, 0))
						{
							if (SYSTEM::VDIST(Var0, Var0.x, Var0.y, uVar3) < 2f)
							{
								return 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_WATER(func_30()))
					{
						return 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_117.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_117.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_124())
			{
				return 1;
			}
		}
	}
	if (func_122(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_48(func_114()))
		{
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	if (Global_1590382 != func_29())
	{
		if (!func_115(Global_1590382))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1370256))
			{
				return Global_1370256;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_116()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1590382 != func_29())
		{
			if (func_115(Global_1590382) || func_121(Global_1590382))
			{
				return 1;
			}
			if (func_120(Global_1590382))
			{
				if (func_27(func_119(Global_1590382)) == 11)
				{
					if (func_27(func_118(Global_1590382)) == 11)
					{
						if (func_117(Global_1590382) == 5)
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

int func_117(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_15;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 14);
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_123(iParam0) && !func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_124()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_30(), -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_125(iVar1))
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

int func_125(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_126()
{
	return Global_22211.f_135;
}

int func_127(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_128(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_129()
{
	return MISC::IS_BIT_SET(Global_1687686, 1);
}

void func_130()
{
	if (func_137())
	{
		if (!CAM::DOES_CAM_EXIST(Local_117.f_61))
		{
			Local_117.f_61 = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_FOV(Local_117.f_61, Local_117.f_59);
			Var0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			CAM::SET_CAM_ROT(Local_117.f_61, 0f, 0f, Var0.z, 2);
			CAM::ATTACH_CAM_TO_ENTITY(Local_117.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (MISC::IS_BIT_SET(Local_117.f_5, 2))
		{
			func_103();
			func_3();
			CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			if (Local_117.f_49 == -1)
			{
				Local_117.f_49 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_117.f_107 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_117.f_107, 1) };
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), Local_117.f_107, 0, 0, Var3, 4, 0f, -1f, -1f, -1, -1, -1082130432, 0);
				VEHICLE::_0xE5810AC70602F2F5(Local_117.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 25))
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 25))
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 25);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_129())
		{
			MISC::SET_BIT(&Global_1687686, 1);
		}
	}
	else
	{
		if (func_129())
		{
			MISC::CLEAR_BIT(&Global_1687686, 1);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135())
		{
			MISC::SET_BIT(&Global_1687686, 2);
		}
	}
	else if (func_135())
	{
		MISC::CLEAR_BIT(&Global_1687686, 2);
	}
}

bool func_135()
{
	return MISC::IS_BIT_SET(Global_1687686, 2);
}

Vector3 func_136()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case -1660661558:
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_137()
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()) && ENTITY::IS_ENTITY_DEAD(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	if (func_137())
	{
		if (func_150())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_139(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			if (!func_58(&(Local_117.f_113)))
			{
				if (func_48(func_30()))
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(func_30(), 1), 100f, 1))
					{
						func_57(&(Local_117.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_117.f_113), 2000, 0))
			{
				STREAMING::SET_FOCUS_ENTITY(func_30());
			}
		}
		if (func_58(&(Local_117.f_113)))
		{
			if (func_56(&(Local_117.f_113), 5000, 0))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!CAM::DOES_CAM_EXIST(Local_117.f_61))
					{
						Local_117.f_61 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_FOV(Local_117.f_61, Local_117.f_59);
						Var0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
						CAM::SET_CAM_ROT(Local_117.f_61, 0f, 0f, Var0.z, 2);
						CAM::ATTACH_CAM_TO_ENTITY(Local_117.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (MISC::IS_BIT_SET(Local_117.f_5, 2))
					{
						func_103();
						func_3();
						STREAMING::NEW_LOAD_SCENE_STOP();
						CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
						if (Local_117.f_49 == -1)
						{
							Local_117.f_49 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_117.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_149())
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
		if (!func_147())
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
				else if (bVar14 || (!func_10(PLAYER::PLAYER_ID(), 0) && !func_101()))
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
					func_144(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_143(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_142();
					func_141();
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
				if (!func_143(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
							ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
						}
					}
					if (func_140(Global_4456448.f_232883))
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

bool func_140(int iParam0)
{
	return iParam0 == 17;
}

void func_141()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_142()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_143(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
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

void func_144(int iParam0, int iParam1, int iParam2)
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
			if (iParam0 == 1)
			{
				func_146();
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
		if (func_10(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_145(-2008016205, iParam0);
	}
}

void func_145(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_146()
{
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

int func_147()
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	return Global_1312467.f_18;
}

int func_149()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 0;
}

int func_151()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_162(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_161(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_160(Global_4456448.f_194990))
			{
				if (func_163(iVar0))
				{
					if (func_159(iVar0))
					{
						return 1;
					}
					else if (func_123(PLAYER::PLAYER_ID()) || func_158())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return 1;
	}
	if (func_157(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_156(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_155(iVar0))
			{
				return 1;
			}
			else if (func_123(PLAYER::PLAYER_ID()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_154(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_29() && func_123(Global_1590382)) && func_27(func_119(Global_1590382)) == 11) && func_67(Global_1590382, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590382), 0), -1988428699))
			{
				return 1;
			}
			else if (func_115(iVar0))
			{
				return 1;
			}
			else if (func_123(PLAYER::PLAYER_ID()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_157(PLAYER::PLAYER_ID()) || func_153(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22585)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22586)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319114 == 1)
	{
		return 1;
	}
	if (func_152(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_155(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_157(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_158()
{
	return MISC::IS_BIT_SET(Global_1676377, 6);
}

int func_159(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

bool func_160(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_161(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == 387748548 || ENTITY::GET_ENTITY_MODEL(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_163(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_29())
			{
				return func_27(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_164()
{
	return MISC::IS_BIT_SET(Local_117.f_5, 7);
}

void func_165()
{
	if (!func_99())
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_171())
			{
				if (func_164())
				{
					if ((func_167() && !func_150()) && func_166("MP_HTRUCK_T_2"))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
						{
							func_134(1);
							func_112(1);
							HUD::CLEAR_HELP(1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_166("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_166("HUNTGUN_1b"))
					{
						HUD::CLEAR_HELP(1);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
					{
						func_134(1);
						func_112(1);
						HUD::CLEAR_HELP(1);
					}
				}
				else if (func_166("HUNTGUN_1b"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_166("HUNTGUN_1b"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

bool func_166(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_167()
{
	if ((func_26(PLAYER::PLAYER_ID(), 0) && Global_1319110 == 2) && func_168())
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_169(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0, int iParam1)
{
	if (func_170(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_48(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_262145.f_24157)
		{
			return 1;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_115(Global_1590382))
		{
			return 1;
		}
	}
	if (func_125(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_44(0))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!func_137())
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (Global_1319114)
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_48(func_114()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (!func_164())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_48(uVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4, 0, 0))
				{
					if (SYSTEM::VDIST(Var1, Var1.x, Var1.y, uVar4) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_172()
{
	return Global_96053;
}

int func_173()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return Global_1676377.f_474;
}

int func_175()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_176()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_177(int iParam0)
{
	return Local_117.f_110 == iParam0;
}

void func_178()
{
	if (func_177(1) || func_177(2))
	{
		if (func_48(func_30()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
			PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 100f, 200f);
			INTERIOR::_0x483ACA1176CA93F1();
			if ((MISC::GET_FRAME_COUNT() % 120) == 0)
			{
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Var0, 300f, 30);
			}
		}
	}
	if (func_177(2))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			func_139(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_179();
		PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 166, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 167, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 168, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 169, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 218, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 219, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 220, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 221, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 209, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 210, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 80, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 189, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
		}
	}
}

void func_179()
{
	func_180();
}

void func_180()
{
	iVar0 = 0;
	while (iVar0 < 361)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

int func_181()
{
	if (!func_147())
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!func_164())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_182(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case -1660661558:
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_1687686, 0);
}

int func_184()
{
	func_192(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_191())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (func_189(159))
	{
		if (!func_188())
		{
			return 1;
		}
	}
	if (func_189(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_185() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_185()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_185()
{
	switch (func_187())
	{
		case 0:
			return func_186();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_186()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_187()
{
	return Global_30768;
}

bool func_188()
{
	return Global_2450632.f_598;
}

int func_189(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_190()
{
	return Global_2460680;
}

bool func_191()
{
	return Global_2450632.f_593;
}

void func_192(var uParam0)
{
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
					func_193(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_193(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_28(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_194(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_194(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_195()
{
	SYSTEM::WAIT(0);
}

void func_196(bool bParam0)
{
	if (!func_164())
	{
		if (func_166("HUNTGUN_1b"))
		{
			HUD::CLEAR_HELP(1);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (func_48(func_30()))
	{
		STREAMING::CLEAR_FOCUS();
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("droneHUD");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_117.f_62));
	func_204();
	func_203();
	if (func_111())
	{
		func_110(0);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	if (func_147() && !func_123(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_139(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	func_51(&(Local_117.f_113));
	func_51(&(Local_117.f_115));
	func_51(&(Local_117.f_117));
	func_51(&(Local_117.f_119));
	func_133(0);
	func_132(0);
	Local_117.f_32 = -1;
	Local_117.f_31 = 0;
	Local_117.f_5 = 0;
	Local_117.f_24 = 0;
	Local_117.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_17[iVar0] = 0;
		func_51(&(Local_117.f_121[iVar0]));
		iVar0++;
	}
	func_88();
	if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_382, 0))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_382), 0);
	}
	Local_117.f_48 = 0;
	func_202();
	func_200(1, -1);
	if (HUD::DOES_BLIP_EXIST(Local_117.f_108))
	{
		HUD::REMOVE_BLIP(&(Local_117.f_108));
	}
	if (HUD::DOES_BLIP_EXIST(Local_117.f_109))
	{
		HUD::REMOVE_BLIP(&(Local_117.f_109));
	}
	if (!bParam0)
	{
		func_199(0);
		func_198();
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)
{
	Local_117.f_33 = 100;
	Local_117.f_59 = 50f;
	Local_117.f_62 = unk_0x67D02A194A2FC2BD(func_38());
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", 0);
	Local_117.f_29 = AUDIO::GET_SOUND_ID();
	Local_117.f_30 = AUDIO::GET_SOUND_ID();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_117.f_34[iVar0] = -1;
		Local_117.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_198()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		if (!func_183())
		{
			MISC::SET_BIT(&Global_1687686, 0);
		}
	}
	else if (func_183())
	{
		MISC::CLEAR_BIT(&Global_1687686, 0);
	}
}

void func_200(bool bParam0, int iParam1)
{
	if (!func_18(&iVar0, 0, iParam1))
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
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
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
		func_201(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_201(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_202()
{
	if (Local_117.f_30 != -1)
	{
		AUDIO::STOP_SOUND(Local_117.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_117.f_30);
		Local_117.f_30 = -1;
	}
	if (Local_117.f_29 != -1)
	{
		AUDIO::STOP_SOUND(Local_117.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_117.f_29);
		Local_117.f_29 = -1;
	}
	if (Local_117.f_49 != -1)
	{
		AUDIO::STOP_SOUND(Local_117.f_49);
		AUDIO::RELEASE_SOUND_ID(Local_117.f_49);
		Local_117.f_49 = -1;
	}
	AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

void func_203()
{
	if (Local_117.f_6 == -1)
	{
		AUDIO::STOP_SOUND(Local_117.f_6);
		AUDIO::RELEASE_SOUND_ID(Local_117.f_6);
		Local_117.f_6 = -1;
	}
}

void func_204()
{
	if (CAM::DOES_CAM_EXIST(Local_117.f_61))
	{
		CAM::DESTROY_CAM(Local_117.f_61, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_205(struct<19> Param0, var uParam19, var uParam20)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0.f_16);
	func_208(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_116, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_83, 33);
	if (!func_207())
	{
		func_196(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_196(0);
	}
	if (Param0.f_18 == 1)
	{
		func_206(1);
	}
	else
	{
		func_206(0);
	}
	func_197(1);
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_117.f_5, 7))
		{
			MISC::SET_BIT(&(Local_117.f_5), 7);
		}
	}
	else if (MISC::IS_BIT_SET(Local_117.f_5, 7))
	{
		MISC::CLEAR_BIT(&(Local_117.f_5), 7);
	}
}

int func_207()
{
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
		if (func_191())
		{
			return 0;
		}
		if (func_189(157))
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

int func_208(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_198();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_191())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_189(157))
				{
					if (!bParam2)
					{
						func_198();
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
					func_198();
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
				func_198();
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
			func_198();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()
{
	return Global_1312854;
}

