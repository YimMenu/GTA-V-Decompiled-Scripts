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
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
	{
		func_53();
	}
	func_46();
	Global_21871 = 0;
	Global_111638.f_14046[Global_19486].f_18 = 0;
	Global_19663 = 0;
	func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_42();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
	Global_19490 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = GAMEPLAY::GET_GAME_TIMER();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2547059 == 0)
						{
							func_37();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					func_53();
				}
			}
			else if (func_3(2, Global_19454, 0) || GAMEPLAY::IS_BIT_SET(Global_7357, 12))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					GAMEPLAY::CLEAR_BIT(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
					{
						func_53();
					}
					func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_42();
					if (Global_111638.f_14136[iLocal_58].f_29 > 0)
					{
						if (Global_111638.f_14136[iLocal_58].f_31 == 1)
						{
							Global_111638.f_14136[iLocal_58].f_29 = 4;
							Global_111638.f_14136[iLocal_58].f_24 = 1;
						}
						else
						{
							Global_111638.f_14136[iLocal_58].f_29 = 4;
							Global_111638.f_14136[iLocal_58].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			func_53();
		}
		if (func_1())
		{
			func_53();
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
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && CONTROLS::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
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
	func_6();
}

void func_6()
{
	if (Global_111638.f_14136[iLocal_58].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_26();
				if (Global_111638.f_14136[iLocal_58].f_27 == 1)
				{
					Global_111638.f_14136[iLocal_58].f_99[0] = 0;
					Global_111638.f_14136[iLocal_58].f_99[1] = 0;
					Global_111638.f_14136[iLocal_58].f_99[2] = 0;
				}
				else
				{
					Global_111638.f_14136[iLocal_58].f_99[Global_19486] = 0;
				}
				if (func_25(iLocal_58))
				{
				}
				else
				{
					Global_111638.f_14136[iLocal_58].f_24 = 0;
					Global_111638.f_14136[iLocal_58].f_28 = 0;
				}
				UI::_REMOVE_NOTIFICATION(Global_111638.f_14136[iLocal_58].f_16);
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_42();
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
		if (CONTROLS::IS_CONTROL_PRESSED(2, Global_19458))
		{
			if (iLocal_60 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73809, UI::_GET_LABEL_TEXT(&Global_21846), 64);
					Global_73938 = 7;
					GAMEPLAY::SET_BIT(&Global_7357, 10);
					Global_19486.f_1 = 6;
				}
				func_53();
			}
		}
	}
	if (Global_111638.f_14136[iLocal_58].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_22();
				Global_19464 = 1;
				Global_111638.f_14136[iLocal_58].f_29 = 2;
				Global_111638.f_14136[iLocal_58].f_24 = 1;
				Global_111638.f_14136[iLocal_58].f_31 = 0;
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_111638.f_14136[iLocal_58].f_29 > 0)
			{
				func_22();
				Global_111638.f_14136[iLocal_58].f_29 = 3;
				Global_111638.f_14136[iLocal_58].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
			else if (Global_111638.f_14136[iLocal_58].f_30 == 1)
			{
				func_22();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_19484 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_6671 = Global_111638.f_14136[iLocal_58].f_17;
				if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_211", &(Global_1798[Global_6671].f_3), 0);
				}
				func_7();
				func_53();
			}
		}
	}
}

void func_7()
{
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
			func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_7961);
			if (Global_7961 == 1)
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_12();
				GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
				func_45(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_11();
				func_45(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (func_17(Global_6671, Global_19486) == 0)
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_45(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
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
					if (func_17(Global_6671, Global_19486) == 0)
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &cVar0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_45(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_9();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_76622)
	{
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
}

void func_10(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_11()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
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
			switch (Global_111638.f_14046[Global_19486].f_6)
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
			switch (Global_111638.f_14046[Global_19486].f_6)
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

void func_12()
{
	if (Global_76622)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_7356, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
{
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
		if (func_15(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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
									func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_10(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_16(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_10(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_10(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_10(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_10(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_18(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
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
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_76622)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								GAMEPLAY::SET_BIT(&Global_7356, 11);
								AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_20()
{
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_0x4F32C0D5A90A9B40())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
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
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3) == -1030275036) || ENTITY::GET_ENTITY_MODEL(uVar3) == -616331036) || ENTITY::GET_ENTITY_MODEL(uVar3) == 782665360) || ENTITY::GET_ENTITY_MODEL(uVar3) == 771711535) || ENTITY::GET_ENTITY_MODEL(uVar3) == -1066334226) || ENTITY::GET_ENTITY_MODEL(uVar3) == 1070967343)
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(361769742) > 0 || Global_111638.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-622120100) > 0)
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

void func_22()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_24()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
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

int func_25(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_15(14))
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
		Global_19486 = func_27();
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

var func_27()
{
	func_28();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_28()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_31(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER::PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1798[iParam0];
}

void func_33()
{
	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_111638.f_14046[Global_19486].f_17 == 1) || Global_21865 == 1)
		{
			if (Global_111638.f_14046[Global_19486].f_17 == 0 && Global_21865 == 0)
			{
				func_22();
			}
			Global_19464 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_111638.f_14136[iLocal_58].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
					Global_19486.f_1 = 8;
				}
				if (Global_111638.f_14046[Global_19486].f_17 == 1 || Global_21865 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_111638.f_14046[Global_19486].f_17 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_62 = 0;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_67 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
					while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_67) && iLocal_62 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_111638.f_14136[iLocal_58].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_111638.f_14136[iLocal_58] };
				StringConCat(&Var0, "_LINK", 64);
				if (UI::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_60 = 1;
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GAMEPLAY::SET_BIT(&Global_7356, 17);
					Global_111638.f_14136[iLocal_58].f_26 = 1;
					Global_111638.f_14136[iLocal_58].f_24 = 2;
				}
				if (Global_111638.f_14136[iLocal_58].f_26 == 0)
				{
					Global_111638.f_14136[iLocal_58].f_24 = 1;
				}
				func_36();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(7);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				if (Global_111638.f_14136[iLocal_58].f_17 == 145)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_50));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iLocal_58].f_17].f_3));
				}
				switch (Global_111638.f_14136[iLocal_58].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iLocal_58]));
						break;
					
					case 1:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iLocal_58]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_33));
						if (Global_111638.f_14136[iLocal_58].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iLocal_58].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iLocal_58].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iLocal_58].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 2:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iLocal_58]));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_111638.f_14136[iLocal_58].f_49);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 3:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iLocal_58]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_33));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_111638.f_14136[iLocal_58].f_49);
						if (Global_111638.f_14136[iLocal_58].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_67));
						}
						if ((Global_111638.f_14136[iLocal_58].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iLocal_58].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iLocal_58].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iLocal_58].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iLocal_58].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 4:
						func_35(iLocal_58);
						break;
					
					case 5:
						func_35(iLocal_58);
						break;
					
					case 6:
						func_35(iLocal_58);
						break;
					
					case 7:
						func_35(iLocal_58);
						break;
					
					case 8:
						func_35(iLocal_58);
						break;
					
					case 9:
						func_35(iLocal_58);
						break;
					
					case 10:
						func_35(iLocal_58);
						break;
					
					case 11:
						func_35(iLocal_58);
						break;
				}
				if (Global_21874[iLocal_58] == 0)
				{
					if (Global_111638.f_14136[iLocal_58].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_1798[Global_111638.f_14136[iLocal_58].f_17].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_21874[iLocal_58]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_21874[iLocal_58]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_21874[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar16);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				Global_21871 = 1;
				func_45(Global_19467, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				UI::_REMOVE_NOTIFICATION(Global_111638.f_14136[iLocal_58].f_16);
				if (Global_111638.f_14136[iLocal_58].f_29 > 0)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_111638.f_14136[iLocal_58].f_30 == 1)
				{
					if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58].f_29 > 0)
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_111638.f_14136[iLocal_58].f_24 == 2)
				{
					if (Global_111638.f_14136[iLocal_58].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_19474)
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GAMEPLAY::SET_BIT(&Global_7356, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_7356, 17);
				}
				else
				{
					func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&Global_7356, 17);
				}
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_111638.f_14046[Global_19486].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_111638.f_14046[Global_19486].f_17 == 1 || Global_21865 == 1)
				{
					if (Global_21865)
					{
					}
					iVar17 = 1;
				}
				Global_111638.f_14046[Global_19486].f_18 = 0;
				Global_111638.f_14046[Global_19486].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_19486.f_1 = 3;
				}
			}
		}
		if (Global_2547059 == 0)
		{
			if (Global_76622)
			{
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19458);
				if (func_3(2, Global_19458, 0))
				{
					Global_19464 = 1;
					Global_2547059 = 1;
				}
			}
		}
	}
}

void func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	func_10(sParam2);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_10(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_10(sParam4);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_10(sParam5);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_10(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_35(int iParam0)
{
	iVar0 = 0;
	switch (Global_111638.f_14136[iParam0].f_49)
	{
		case 1:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CL09");
			break;
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iParam0]));
	while (iVar0 < Global_111638.f_14136[iParam0].f_49)
	{
		switch (Global_111638.f_14136[iParam0].f_32)
		{
			case 4:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2537071.f_1662[iVar0]));
				break;
			
			case 5:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662018[iVar0]));
				break;
			
			case 6:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662059[iVar0]));
				break;
			
			case 7:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662080[iVar0]));
				break;
			
			case 8:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662097[iVar0]));
				break;
			
			case 9:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662110[iVar0]));
				break;
			
			case 10:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662123[iVar0]));
				break;
			
			case 11:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662136[iVar0]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_36()
{
	if (iLocal_2219)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_68);
	}
	iLocal_2219 = 0;
	if (Global_111638.f_14136[iLocal_58].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iLocal_58]), &(Local_84[iVar0])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0]}, 16);
				}
				iLocal_2219 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_68, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_68))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (iLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_19462, 0) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_40();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_19463, 0) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_38();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_38()
{
	func_45(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_39();
}

void func_39()
{
	if (func_24())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_40()
{
	func_45(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_41();
}

void func_41()
{
	if (func_24())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

void func_42()
{
	if (Global_111638.f_14046[Global_19486].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_45(Global_19467, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_34(Global_19467, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_19474)
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76622)
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_16(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_43()
{
	iLocal_55 = 0;
	func_26();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			func_53();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_111638.f_14136[iVar38].f_18 = -1;
		Global_111638.f_14136[iVar38].f_18.f_1 = 0;
		Global_111638.f_14136[iVar38].f_18.f_2 = 0;
		Global_111638.f_14136[iVar38].f_18.f_3 = 0;
		Global_111638.f_14136[iVar38].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
			{
				func_53();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_111638.f_14136[iVar37].f_24 != 0)
				{
					if (Global_111638.f_14136[iVar37].f_99[Global_19486] == 1)
					{
						if (func_44(Global_111638.f_14136[iVar37].f_18, Global_111638.f_14136[iVar38].f_18))
						{
							iVar38 = iVar37;
							if (Global_111638.f_14136[iVar38].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_111638.f_14136[iVar38].f_24 != 0)
		{
			if (Global_111638.f_14136[iVar38].f_99[Global_19486] == 1)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(6);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar36);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_111638.f_14136[iVar38].f_18.f_2);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_111638.f_14136[iVar38].f_18.f_1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iLocal_59);
				if (Global_111638.f_14136[iVar38].f_17 == 145)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFNH");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_50));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					func_10(&(Global_1798[Global_111638.f_14136[iVar38].f_17].f_3));
				}
				switch (Global_111638.f_14136[iVar38].f_32)
				{
					case 0:
						func_10(&(Global_111638.f_14136[iVar38]));
						break;
					
					case 1:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iVar38]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_33));
						if (Global_111638.f_14136[iVar38].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_67));
						}
						if ((Global_111638.f_14136[iVar38].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iVar38].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iVar38].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iVar38].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iVar38].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 2:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iVar38]));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_111638.f_14136[iVar38].f_49);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 3:
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_111638.f_14136[iVar38]));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_33));
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_111638.f_14136[iVar38].f_49);
						if (Global_111638.f_14136[iVar38].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_67), "NULL"))
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_67));
						}
						if ((Global_111638.f_14136[iVar38].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar38].f_83), "NULL"))
						{
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iVar38].f_67)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iVar38].f_67));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_67));
							}
							if (UI::DOES_TEXT_LABEL_EXIST(&(Global_111638.f_14136[iVar38].f_83)))
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111638.f_14136[iVar38].f_83));
							}
							else
							{
								UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111638.f_14136[iVar38].f_83));
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						break;
					
					case 4:
						func_35(iVar38);
						break;
					
					case 5:
						func_35(iVar38);
						break;
					
					case 6:
						func_35(iVar38);
						break;
					
					case 7:
						func_35(iVar38);
						break;
					
					case 8:
						func_35(iVar38);
						break;
					
					case 9:
						func_35(iVar38);
						break;
					
					case 10:
						func_35(iVar38);
						break;
					
					case 11:
						func_35(iVar38);
						break;
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		if (Global_111638.f_14136[iVar36].f_24 != 0)
		{
			if (Global_111638.f_14136[iVar36].f_99[Global_19486] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_46()
{
	StringCopy(&(Local_84[0]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18]), "executiveproducer", 32);
	StringCopy(&(Local_84[19]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159]), "BAT_carpark_3", 24);
	StringCopy(&(Local_84[160]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1075[160]), "ib_aircon", 24);
	if (func_52(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_84[44]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74]), "SCLUB_3", 24);
	}
	else if (func_51(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_84[44]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_47(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_84[44]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1075[44]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_84[45]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1075[45]), "heist3_prep_maid02", 24);
	}
	else if (func_47(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_84[44]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1075[44]), "heist3_cashier1", 24);
		StringCopy(&(Local_84[45]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1075[45]), "heist3_cashier2", 24);
		StringCopy(&(Local_84[46]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1075[46]), "heist3_cashier3", 24);
		StringCopy(&(Local_84[47]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1075[47]), "heist3_cashier4", 24);
	}
}

int func_47(int iParam0)
{
	if (func_50(iParam0) == 158)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_48(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_49(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (func_50(iParam0) == 243)
	{
		return func_48(iParam0);
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_50(iParam0) == 237 || func_50(iParam0) == 250)
	{
		return func_48(iParam0);
	}
	return -1;
}

void func_53()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
	{
		func_54(0);
	}
	if (iLocal_2219)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_68);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_55())
	{
		Global_19486.f_1 = 3;
	}
}

int func_55()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_59()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

