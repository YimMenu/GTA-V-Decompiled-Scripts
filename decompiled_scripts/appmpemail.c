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
	int iLocal_18 = 0;
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_61();
	}
	func_60();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
	Global_19663 = 0;
	func_59();
	func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_31 = MISC::GET_GAME_TIMER();
	Global_19490 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_39);
	Local_38 = { Local_39 };
	Local_38.x = (Local_38.x - 10f);
	Local_38.f_1 = (Local_38.f_1 + 20f);
	Global_21838 = 0;
	Global_21839 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21839 == 0 && Global_21838 == 1)
		{
			func_50();
		}
		if (Global_21839 == 1 && Global_21838 == 0)
		{
			func_45();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = MISC::GET_GAME_TIMER();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_19486.f_1 != 9 && Global_21839 == 0) && Global_21838 == 0)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					Global_21838 = 1;
				}
			}
			else if (func_3(2, Global_19454, 0) || MISC::IS_BIT_SET(Global_7357, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_61();
					}
					func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4268500[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4268500[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4268500[iLocal_24 /*104*/].f_29 = 4;
							Global_4268500[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4268500[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			func_9();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_58(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4268500[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_30();
				if (Global_4268500[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4268500[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4268500[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4268500[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4268500[iLocal_24 /*104*/].f_99[Global_19486] = 0;
				}
				if (func_29(iLocal_24))
				{
				}
				else
				{
					Global_4268500[iLocal_24 /*104*/].f_24 = 0;
					Global_4268500[iLocal_24 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_4268500[iLocal_24 /*104*/].f_16);
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_51();
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
					Global_21871 = 0;
				}
			}
		}
	}
	else if (Global_19464 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_19458))
		{
			if (iLocal_26 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, HUD::_GET_LABEL_TEXT(&Global_21846), 64);
					if (MISC::ARE_STRINGS_EQUAL(&Global_73809, "HARDCODED_4207156"))
					{
						Global_19486.f_1 = 3;
						Global_1694146 = 1;
					}
					else
					{
						Global_73938 = 7;
						MISC::SET_BIT(&Global_7357, 10);
						Global_19486.f_1 = 6;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4268500[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_27();
				Global_19464 = 1;
				Global_4268500[iLocal_24 /*104*/].f_29 = 2;
				Global_4268500[iLocal_24 /*104*/].f_24 = 1;
				Global_4268500[iLocal_24 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_4268500[iLocal_24 /*104*/].f_29 > 0)
			{
				func_27();
				Global_4268500[iLocal_24 /*104*/].f_29 = 3;
				Global_4268500[iLocal_24 /*104*/].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4268500[iLocal_24 /*104*/].f_30 == 1)
			{
				func_27();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_19484 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_6671 = Global_4268500[iLocal_24 /*104*/].f_17;
				if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_211", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(Global_7961);
			if (Global_7961 == 1)
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_18();
				MISC::CLEAR_BIT(&Global_7358, 9);
				func_58(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_17();
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_23(Global_6671, Global_19486) == 0)
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_58(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_6671, Global_19486) == 0)
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_58(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_58(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_15();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_76622)
	{
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7356, 17);
	}
}

void func_16(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18()
{
	if (Global_76622)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_7356, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7362);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_16(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_16(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_16(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_16(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_16(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_24(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_76622)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_76622)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_7356, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
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
		Global_19486 = func_31();
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

var func_31()
{
	func_32();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_33(Global_111638.f_2358.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;
	
	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_4269750 == 1) || Global_21865 == 1)
		{
			if (Global_4269750 == 0 && Global_21865 == 0)
			{
				func_27();
			}
			Global_19464 = 1;
			iLocal_30 = 0;
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
					Global_21871 = 1;
					iLocal_23 = iLocal_22;
					SOCIALCLUB::_0x4737980E8A283806(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
				iLocal_33 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_33) && iLocal_28 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_42();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[1 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[2 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[3 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[4 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[5 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[6 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[7 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[8 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_56[9 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 3:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 4:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 5:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 6:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 7:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 8:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_dynasty8");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 9:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_bennys");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 10:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ammunation");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 11:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_SSSA");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 12:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 13:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_shark");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 14:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_RP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (MISC::IS_BIT_SET(Global_4269765, 25))
					{
						MISC::CLEAR_BIT(&Global_4269765, 25);
					}
					if (Global_4268499 > 0)
					{
						func_39(9980, iLocal_40, -1, 1, 0);
						if (Global_4268499 > 0)
						{
							Global_4268499 = 0;
						}
					}
				}
				return;
			}
			if (Global_4268500[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
				}
				if (Global_4269750 == 1 || Global_21865 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4269750 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_28 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
					iLocal_33 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_33) && iLocal_28 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4268500[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_4268500[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_26 = 1;
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_7356, 17);
					Global_4268500[iLocal_24 /*104*/].f_26 = 1;
					Global_4268500[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4268500[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4268500[iLocal_24 /*104*/].f_24 = 1;
				}
				func_42();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1798[Global_4268500[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_4268500[iLocal_24 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4268500[iLocal_24 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268500[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_33));
						if (Global_4268500[iLocal_24 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4268500[iLocal_24 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_24 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_24 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_24 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_24 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268500[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268500[iLocal_24 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268500[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268500[iLocal_24 /*104*/].f_49);
						if (Global_4268500[iLocal_24 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4268500[iLocal_24 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_24 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_24 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4268500[iLocal_24 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268500[iLocal_24 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_38(iLocal_24);
						break;
					
					case 5:
						func_38(iLocal_24);
						break;
					
					case 6:
						func_38(iLocal_24);
						break;
					
					case 7:
						func_38(iLocal_24);
						break;
					
					case 8:
						func_38(iLocal_24);
						break;
					
					case 9:
						func_38(iLocal_24);
						break;
					
					case 10:
						func_38(iLocal_24);
						break;
					
					case 11:
						func_38(iLocal_24);
						break;
				}
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iLocal_24 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 149)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 140)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 155)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_arena");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4268500[iLocal_24 /*104*/].f_17 == 160)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_diamond");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_21871 = 1;
				func_58(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				HUD::THEFEED_REMOVE_ITEM(Global_4268500[iLocal_24 /*104*/].f_16);
				if (Global_4268500[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4268500[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_24 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268500[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4268500[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_19474)
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_7356, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_7356, 17);
				}
				else
				{
					func_22(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269750 = 0;
			}
			else
			{
				Global_111638.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269750 = 0;
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_111638.f_14136[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iParam0 /*104*/]));
	while (iVar0 < Global_111638.f_14136[iParam0 /*104*/].f_49)
	{
		switch (Global_111638.f_14136[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2537071.f_1662[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662018[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662059[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662080[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662097[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662110[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662123[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662136[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1312745;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4268500[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4268500[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_1694138, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_34, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_34))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_19462, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(Local_39, Local_38, Global_19446, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_21839 = 0;
		iLocal_18 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4270044 == 0)
	{
		if (MISC::IS_BIT_SET(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4270044 = 1;
			}
		}
	}
	if (func_49() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_48((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_19414 = { func_47(Param0, Param1, fVar2) };
		Global_19417 = { func_47(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19414 = { Param1 };
		Global_19417 = { Param3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19417, 0);
	return fVar1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
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

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_111638.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(Local_38, Local_39, -90f, 0f, 90f, Global_19446, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_21838 = 0;
		func_61();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4269750 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_52(Global_19467, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_58(Global_19467, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_19474)
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_22(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_16(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_16(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_16(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_16(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_16(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_30();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4268500[iVar4 /*104*/].f_18 = -1;
		Global_4268500[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4268500[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4268500[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4268500[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_61();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4268500[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4268500[iVar3 /*104*/].f_99[Global_19486] == 1)
					{
						if (func_57(Global_4268500[iVar3 /*104*/].f_18, Global_4268500[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4268500[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4268500[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4268500[iVar4 /*104*/].f_99[Global_19486] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_25);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				if (Global_4268500[iVar4 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268500[iVar4 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_1798[Global_4268500[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4268500[iVar4 /*104*/] };
				if (func_43(&(Global_4268500[iVar4 /*104*/])))
				{
					iVar6 = func_54(7315, -1, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			SOCIALCLUB::_0x4737980E8A283806(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4268499 == 0)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_23[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_23[1 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_56(iParam0, iParam1);
	iVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_57(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_58(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_59()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case -1:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 0:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 1:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_fr");
			break;
		
		case 2:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ge");
			break;
		
		case 3:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_it");
			break;
		
		case 4:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_sp");
			break;
		
		case 5:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_pt");
			break;
		
		case 6:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_pl");
			break;
		
		case 7:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ru");
			break;
		
		case 8:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ko");
			break;
		
		case 9:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ch");
			break;
		
		case 10:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_ja");
			break;
		
		case 11:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_me");
			break;
		
		case 12:
			SOCIALCLUB::_0x07DBD622D9533857("gta5mkt_cn");
			break;
	}
	SOCIALCLUB::_SC_INBOX_GET_EMAILS(0, 6);
	SYSTEM::WAIT(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_19486.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_43 = SOCIALCLUB::_0x16DA8172459434AA();
		if (func_4())
		{
			Global_19486.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = SOCIALCLUB::_0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_60()
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_61()
{
	if (func_49() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_19439[Global_19431 /*3*/]);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_62(0);
	}
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	Global_21839 = 0;
	Global_21838 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_63())
	{
		Global_19486.f_1 = 3;
	}
}

int func_63()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
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

int func_65(int iParam0)
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

bool func_66()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_67()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

