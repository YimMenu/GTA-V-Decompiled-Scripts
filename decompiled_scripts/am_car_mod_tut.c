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
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_237 = -1;
	func_208(ScriptParam_0);
	while (true)
	{
		func_207();
		if (func_197())
		{
			func_187();
		}
		switch (func_186(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_185() == 2)
				{
					Local_140[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
				}
				else if (func_185() == 6)
				{
					Local_140[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 2:
				if (func_185() == 2)
				{
					if (!func_184(0))
					{
						func_74();
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
					{
						func_8();
					}
				}
				else if (func_185() == 6)
				{
					Local_140[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_61.f_2));
				if (func_5(&(Local_61.f_2)))
				{
					Local_140[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
				}
				break;
			
			case 3:
				Local_140[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
			
			case 6:
				func_187();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_185())
			{
				case 0:
					Local_61.x = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_61.x = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (GAMEPLAY::IS_BIT_SET(Local_61.y, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_139 == 0)
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_238, 0);
			GAMEPLAY::SET_BIT(&uLocal_238, 1);
		}
		iVar0 = iLocal_139;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!GAMEPLAY::IS_BIT_SET(Local_140[iLocal_139].f_2, 0))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_238, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1590535[iLocal_139].f_146, 4))
				{
				}
			}
		}
		iLocal_139++;
		if (iLocal_139 == 32)
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 1))
			{
				GAMEPLAY::SET_BIT(&(Local_61.f_1), 0);
			}
			GAMEPLAY::SET_BIT(&uLocal_238, 0);
			iLocal_139 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (iLocal_237 != -1)
	{
		func_72(iLocal_237, 0);
		func_71(iLocal_237, 0);
		iLocal_237 = -1;
	}
	GAMEPLAY::SET_BIT(&(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 0);
	GAMEPLAY::SET_BIT(&(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 1);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_13(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_17()
{
	return Global_30768;
}

void func_18(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_19(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_15(func_16(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_23()
{
	if (!func_29())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_24();
}

void func_24()
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_26()
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		UI::_BEGIN_TEXT_COMMAND_UNK(&(Global_1312585.f_12));
		func_27();
		UI::_END_TEXT_COMMAND_UNK();
	}
}

void func_27()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_28()
{
	if (!func_29())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_27();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_29()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_30(bool bParam0)
{
	if (Global_1312448)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574637[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574637[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574637[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, -1))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		GAMEPLAY::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_968399 = 0;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_32())
	{
		iVar0 = Global_2583656[iParam0][func_13(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()
{
	return 1;
	return 0;
}

bool func_33()
{
	return Global_1312865;
}

bool func_34()
{
	return Global_1312867;
}

void func_35(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

int func_37(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_13(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98796.f_9[iParam0] = 1;
	}
	else
	{
		Global_98796.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_184(0);
	if (Global_262145.f_63 == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_1735), 10);
		}
	}
}

int func_41(int iParam0)
{
	if (Global_1671743[iParam0] == -1)
	{
		iVar0 = func_15(func_43(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0] = iVar0;
	}
	return Global_1671743[iParam0];
}

void func_42(int iParam0, int iParam1)
{
	Global_1671743[iParam0] = iParam1;
	func_12(func_43(iParam0), iParam1, -1, 1, 0);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

void func_44(bool bParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_184(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_47(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_34() || func_33())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1574637[iVar1], iVar0);
}

int func_46()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	uVar0 = Global_1388048[func_13(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	if (!func_68())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_730, iVar1);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_49()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_146, 3);
}

void func_50(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_58(-1))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(-1))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		GAMEPLAY::SET_BIT(&(Global_1574637[iVar1]), iVar0);
	}
}

int func_51()
{
	if (func_54(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1388048[func_13(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 2))
	{
		func_52(1);
		return 1;
	}
	return 0;
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 25))
		{
			func_53(PLAYER::PLAYER_ID(), 12);
			GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_142), 25);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_142, 25))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_142), 25);
	}
}

void func_53(int iParam0, int iParam1)
{
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	GAMEPLAY::SET_BIT(&(Global_1590535[iParam0].f_730), iVar1);
}

bool func_54(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 25);
}

int func_55()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 6))
	{
		return 1;
	}
	uVar0 = Global_1388048[func_13(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1731, 6))
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_1731), 6);
		}
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_146, 7);
}

int func_57()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(121, -1);
}

bool func_58(int iParam0)
{
	return func_37(123, iParam0);
}

int func_59(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_15(func_60(iParam0), -1, 0);
			if (GAMEPLAY::IS_BIT_SET(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)
{
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_61(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_58(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_62(int iParam0)
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(119, iParam0);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)
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

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_13(-1)];
			}
			else if (func_67(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_13(-1)];
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_68()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(120, -1);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 18);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 18);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (UI::DOES_BLIP_EXIST(Global_98796.f_235[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		
		case 40:
			func_73(40, bParam1);
			break;
		
		case 41:
			func_73(41, bParam1);
			break;
		
		case 42:
			func_73(42, bParam1);
			break;
		
		case 43:
			func_73(43, bParam1);
			break;
		
		case 44:
			func_73(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()
{
	switch (Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_1)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 5))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
							{
								GAMEPLAY::CLEAR_BIT(&uLocal_238, 10);
							}
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
								}
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 7))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 7);
								}
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 8))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 8);
								}
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 11))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 11);
								}
								if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 2))
								{
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
									func_180("FM_CTUT_CAR", 0);
									GAMEPLAY::SET_BIT(&uLocal_238, 2);
								}
							}
							else
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 2))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 2);
								}
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if ((!func_152(iVar0, 0, &uVar1) || !func_151(iVar0)) || func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
								{
									if (func_149())
									{
										func_148(0);
									}
									if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
									{
										GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
									}
									if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 7))
									{
										func_180("FM_CTUT_ANO", 0);
										GAMEPLAY::SET_BIT(&uLocal_238, 7);
									}
									if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 8))
									{
										if (func_143())
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
											{
												if (iLocal_246 > 0)
												{
													if (func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
													{
														func_142("FM_CTUT_PRM", -1);
														GAMEPLAY::SET_BIT(&uLocal_238, 8);
														GAMEPLAY::SET_BIT(&uLocal_238, 11);
														func_7(&uLocal_243, 0, 0);
													}
													else if (!func_151(iVar0))
													{
														GAMEPLAY::SET_BIT(&uLocal_238, 8);
														func_142("FM_CTUT_DRI", -1);
													}
													else if (!func_152(iVar0, 0, &uVar1))
													{
														GAMEPLAY::SET_BIT(&uLocal_238, 8);
														func_142("FM_CTUT_HMD", -1);
													}
												}
											}
										}
									}
									else if (GAMEPLAY::IS_BIT_SET(uLocal_238, 11))
									{
										if (func_141(&uLocal_243, 30000, 0))
										{
											if (func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
											{
												if (func_143())
												{
													func_142("FM_CTUT_PRM", -1);
													func_140(&uLocal_243);
													func_7(&uLocal_243, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (GAMEPLAY::IS_BIT_SET(uLocal_238, 7))
									{
										GAMEPLAY::CLEAR_BIT(&uLocal_238, 7);
									}
									if (!func_149())
									{
										func_148(1);
									}
									if (func_139("FM_CTUT_HMD"))
									{
										UI::CLEAR_HELP(1);
									}
									if (!func_138() || (func_138() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
									{
										if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
										{
											func_180("FM_CTUT_MOD", 0);
											GAMEPLAY::SET_BIT(&uLocal_238, 3);
											func_140(&uLocal_239);
											func_7(&uLocal_239, 0, 0);
											if (!func_137(PLAYER::PLAYER_ID()))
											{
												func_69(1);
											}
											if (iLocal_237 == -1)
											{
												iLocal_237 = func_121(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, -1);
												if (iLocal_237 != -1)
												{
													func_72(iLocal_237, 1);
													func_71(iLocal_237, 1);
												}
											}
										}
									}
									else if (func_138() && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
									{
										if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
										{
											GAMEPLAY::SET_BIT(&uLocal_238, 3);
										}
									}
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 4))
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
								{
									if (func_141(&uLocal_239, 10000, 0))
									{
										if (!UI::IS_PAUSE_MENU_ACTIVE())
										{
											if (!func_120())
											{
												if (func_143())
												{
													GAMEPLAY::SET_BIT(&uLocal_238, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 10))
							{
								if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 9))
								{
									func_180("FM_IHELP_LCP", 0);
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 2);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 7);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 8);
									GAMEPLAY::SET_BIT(&uLocal_238, 10);
								}
							}
							if (func_149())
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										if ((!func_152(iVar0, 0, &uVar2) || !func_151(iVar0)) || func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
										{
											func_148(0);
										}
									}
									else
									{
										func_148(0);
									}
								}
							}
						}
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3) || (func_138() && GAMEPLAY::IS_BIT_SET(uLocal_238, 10)))
					{
						if (func_138())
						{
							if (((func_139("FM_IHELP_CAR") || func_139("FM_IHELP_MOD")) || func_139("FM_CMOD_GPS")) || func_139("FM_CMOD_STOL"))
							{
								UI::CLEAR_HELP(1);
							}
							if (func_117("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 9))
							{
								if (func_115())
								{
									GAMEPLAY::SET_BIT(&uLocal_238, 9);
									GAMEPLAY::SET_BIT(&(Global_2537071.f_1729), 25);
									if (func_117("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_114())
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1729, 25))
								{
									GAMEPLAY::SET_BIT(&(Global_2537071.f_1729), 25);
								}
								if (!func_113(PLAYER::PLAYER_ID()))
								{
									if (!func_112(PLAYER::PLAYER_ID()))
									{
										func_111(1);
										iLocal_245 = 1;
										func_30(1);
									}
								}
								if ((func_117("FM_CTUT_RSP") || func_117("FM_IHELP_PTRK")) || func_117("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(uLocal_238, 9))
							{
								if (func_110(PLAYER::PLAYER_ID()) || (!func_108() && func_107()))
								{
									iVar3 = func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
									if (iVar3 > 0)
									{
										if (!func_117("FM_CTUT_REP"))
										{
											func_180("FM_CTUT_REP", 0);
										}
									}
									else if (!func_102())
									{
										if (!func_117("FM_CTUT_RSP"))
										{
											func_180("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_100())
									{
										if (!func_117("FM_IHELP_PTRK"))
										{
											func_180("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_97())
									{
										if (!func_117("FM_IHELP_PINS"))
										{
											func_180("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (GAMEPLAY::IS_BIT_SET(uLocal_238, 9))
						{
							if (!func_114())
							{
								if (CAM::IS_SCREEN_FADED_IN())
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 9);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 10);
									func_23();
									iLocal_237 = -1;
									func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
							{
								GAMEPLAY::SET_BIT(&(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 0);
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(uLocal_238, 9))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_238, 9);
						GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
						GAMEPLAY::CLEAR_BIT(&uLocal_238, 10);
						func_23();
						iLocal_237 = -1;
					}
					if (!GAMEPLAY::IS_BIT_SET(uLocal_238, 5))
					{
						if (((func_82(PLAYER::PLAYER_ID(), 1, 0) || func_81()) || func_80() > 0) || (!func_78() && !func_138()))
						{
							GAMEPLAY::SET_BIT(&uLocal_238, 5);
							func_23();
						}
					}
					else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || func_138())
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							if ((((!func_82(PLAYER::PLAYER_ID(), 1, 0) && !func_81()) && func_80() == 0) && func_78()) || func_138())
							{
								if (!func_77(&uLocal_241))
								{
									func_7(&uLocal_241, 0, 0);
								}
								else if (func_141(&uLocal_241, 7000, 0) || func_138())
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 5);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 2);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 3);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 7);
									GAMEPLAY::CLEAR_BIT(&uLocal_238, 10);
									func_140(&uLocal_241);
									if (iLocal_237 != -1)
									{
										func_72(iLocal_237, 0);
										func_71(iLocal_237, 0);
										iLocal_237 = -1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (func_138())
	{
		return;
	}
	switch (iLocal_246)
	{
		case 0:
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_142("FM_IHELP_CAR", -1);
				iLocal_246++;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_142("FM_IHELP_MOD", -1);
					iLocal_246++;
				}
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_77(&uLocal_247))
							{
								func_7(&uLocal_247, 0, 0);
							}
							else if (func_141(&uLocal_247, 1000, 0))
							{
								func_142("FM_CMOD_GPS", -1);
								iLocal_246++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_247))
					{
						func_7(&uLocal_247, 0, 0);
					}
					else if (func_141(&uLocal_247, 1000, 0))
					{
						func_142("FM_CMOD_STOL", -1);
						iLocal_246++;
					}
				}
			}
			break;
		
		case 4:
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_247))
					{
						func_7(&uLocal_247, 0, 0);
					}
					else if (func_141(&uLocal_247, 5000, 0))
					{
						func_142("FM_IHELP_BLP", -1);
						iLocal_246++;
					}
				}
			}
			break;
		
		case 5:
			if (GAMEPLAY::IS_BIT_SET(uLocal_238, 3))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_246++;
				}
			}
			break;
	}
}

int func_76()
{
	if (GAMEPLAY::IS_BIT_SET(Local_140[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

int func_78()
{
	if (func_79() == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	return Global_1312467.f_18;
}

int func_80()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_197;
}

bool func_81()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_83(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_96())
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
		if (!func_78())
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
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_94(PLAYER::PLAYER_ID(), 0) && !func_93()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, 0);
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
					func_90(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_0x7350823473013C02(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_88();
					func_87();
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
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
						}
					}
					if (func_86(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
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
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_88()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_89(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2)
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
				func_92();
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
		if (func_94(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_91(-2008016205, iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_92()
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

bool func_93()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_96()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (Global_98796.f_1423)
	{
		return 1;
	}
	if (func_98() >= 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1323615[func_98()].f_102, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_98()
{
	if (Global_2097152[func_99()].f_6174.f_2 >= 307)
	{
		Global_2097152[func_99()].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_99()].f_6174.f_2;
}

int func_99()
{
	iVar0 = 0;
	return iVar0;
}

int func_100()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_101(iVar0, 1) || Global_98796.f_1422)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_102()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_103(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_103(int iParam0)
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_104(int iParam0)
{
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (VEHICLE::_IS_VEHICLE_DAMAGED(iParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::_0x27B926779DEB502D(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::_0x27B926779DEB502D(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	if (VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::_0x5DB8010EE71FDEF2(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_106(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11551));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11551)))
		{
			iVar4 = Global_262145.f_11549;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11550)
		{
			iVar0 = Global_262145.f_11550;
		}
	}
	else if (func_105(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11554));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11554)))
		{
			iVar4 = Global_262145.f_11552;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11553)
		{
			iVar0 = Global_262145.f_11553;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_105(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case 1180875963:
		case 682434785:
		case -1912017790:
		case -1649536104:
		case 989294410:
		case -827162039:
		case -312295511:
		case 941494461:
		case -1590337689:
			return 1;
			break;
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

bool func_107()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_108()
{
	if (((((func_109(39) || func_109(40)) || func_109(41)) || func_109(42)) || func_109(43)) || func_109(44))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	return func_22(iParam0, 20, 1);
}

bool func_110(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_146, 19);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_146), 20);
	}
}

bool func_112(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_146, 20);
}

bool func_113(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_146, 21);
}

int func_114()
{
	if (!func_100())
	{
		return 0;
	}
	if (!func_97())
	{
		return 0;
	}
	if (!func_102())
	{
		return 0;
	}
	return 1;
}

int func_115()
{
	if (((((func_116(39) || func_116(40)) || func_116(41)) || func_116(42)) || func_116(43)) || func_116(44))
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
{
	return func_22(iParam0, 6, 1);
}

int func_117(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (UI::_0x43E4111189E54F0E(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	return func_118(sParam0);
}

bool func_118(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_119(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_119(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

bool func_120()
{
	return Global_1312877;
}

int func_121(struct<3> Param0, int iParam3, int iParam4)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_136(iVar4))
			{
				fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, func_122(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_122(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_133(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_132())
			{
				if (func_131(Global_1590374))
				{
					return func_124(2, 2);
				}
				else if (func_123(Global_1590374))
				{
					return func_124(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_123(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_124(int iParam0, int iParam1)
{
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_132())
	{
		if (iParam1 == 3)
		{
			if (func_125(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_125(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_125(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_125(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_130(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_130(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_128(iParam0) };
	}
	else
	{
		Var12 = { func_127(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_126(Var18, -Var0.f_3.f_2) };
	Var18 = { func_126(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_126(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_128(int iParam0)
{
	return func_129(iParam0);
}

struct<6> func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	return -1;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_134() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_134()
{
	return func_135(PLAYER::PLAYER_ID());
}

var func_135(int iParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

bool func_136(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[39]);
			break;
		
		case 40:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[40]);
			break;
		
		case 41:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[41]);
			break;
		
		case 42:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[42]);
			break;
		
		case 43:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[43]);
			break;
		
		case 44:
			bVar0 = UI::DOES_BLIP_EXIST(Global_98796.f_235[44]);
			break;
	}
	return bVar0;
}

bool func_137(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_146, 18);
}

int func_138()
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return 1;
	}
	return 0;
}

bool func_139(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_140(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_141(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_142(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_143()
{
	if (((((((((((((!func_4(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_147(8, -1)) || func_147(15, -1)) || func_146()) || func_147(3, -1)) || UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_82(PLAYER::PLAYER_ID(), 1, 0)) || func_81()) || func_107()) || func_145()) || func_144()) || UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	return 1;
}

var func_144()
{
	return Global_2439138.f_3047.f_578;
}

bool func_145()
{
	return Global_98796.f_346 > 0;
}

var func_146()
{
	return Global_2394809;
}

bool func_147(int iParam0, int iParam1)
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

void func_148(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_2537071.f_1732), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1732), 4);
	}
}

bool func_149()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_1732, 4);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case -1216765807:
		case -1696146015:
		case 2072687711:
		case -1311154784:
		case 330661258:
		case 108773431:
		case -1291952903:
		case -5153954:
		case -1995326987:
		case 418536135:
		case 1051415893:
		case -433375717:
		case 1032823388:
		case -1461482751:
		case 1737773231:
		case -1934452204:
		case 1545842587:
		case -2098947590:
		case 1123216662:
		case 338562499:
		case 758895617:
		case 1672195559:
		case -114291515:
		case -891462355:
		case -1670998136:
		case 301427732:
		case -566387422:
		case 544021352:
		case 37348240:
		case 11251904:
		case -1622444098:
		case -1045541610:
		case 384071873:
		case -1041692462:
		case -1269889662:
		case -1297672541:
		case -142942670:
		case 408192225:
		case -1403128555:
		case 486987393:
		case 767087018:
		case 1488164764:
		case -349601129:
		case 92612664:
		case 117401876:
		case 1836027715:
		case -1237253773:
		case -1205801634:
		case 75131841:
		case 841808271:
		case 1373123368:
		case -431692672:
		case 1078682497:
		case 1011753235:
		case -845961253:
		case 743478836:
		case -159126838:
		case 1265391242:
		case -1089039904:
		case 444171386:
		case 941800958:
		case 509498602:
		case 1753414259:
		case 296357396:
		case -2107990196:
		case 970385471:
		case -1860900134:
		case 2071877360:
		case -1372848492:
		case 410882957:
		case 640818791:
		case -2052737935:
		case -82626025:
		case -2096818938:
		case -1600252419:
		case 1077420264:
		case 1039032026:
		case -901163259:
		case 723973206:
		case 1233534620:
		case 1923400478:
		case -1066334226:
		case -591651781:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 237764926:
		case -915704871:
		case -326143852:
		case 349315417:
		case -401643538:
		case -613725916:
		case -1106353882:
		case -631760477:
		case -589178377:
		case 729783779:
		case 630371791:
		case 833469436:
		case -1479664699:
		case 349605904:
		case 784565758:
		case -1566741232:
		case -1214293858:
		case 1987142870:
		case 1075432268:
		case 1663218586:
		case 1070967343:
		case -1353081087:
		case -498054846:
		case 1581459400:
		case -2119578145:
		case 525509695:
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
		case -831834716:
		case 2068293287:
		case -2039755226:
		case -1126264336:
		case 223258115:
		case 1119641113:
		case -1797613329:
		case -899509638:
		case 16646064:
		case 1878062887:
		case 634118882:
		case 470404958:
		case 666166960:
		case 906642318:
		case 704435172:
		case -2030171296:
		case -604842630:
		case -1660945322:
		case -1943285540:
		case -1485523546:
		case -888242983:
		case 1489967196:
		case 1922255844:
		case 1102544804:
		case 972671128:
		case 633712403:
		case -295689028:
		case -602287871:
		case 1274868363:
		case -305727417:
		case 1426219628:
		case -1295027632:
		case -1829802492:
		case 2123327359:
		case 1475773103:
		case -1757836725:
		case -2100640717:
		case -1845487887:
		case -1930048799:
		case 1203490606:
		case -432008408:
		case 234062309:
		case -1232836011:
		case -777172681:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 683047626:
		case 390201602:
		case 86520421:
		case 2067820283:
		case 819197656:
		case -2103821244:
		case -1071380347:
		case 741090084:
		case 482197771:
		case -2115793025:
		case -440768424:
		case 6774487:
		case -1404136503:
		case 822018448:
		case 2035069708:
		case -1289178744:
		case -1842748181:
		case -255678177:
		case -1523428744:
		case -1606187161:
		case -674927303:
		case 1873600305:
		case 1491277511:
		case -405626514:
		case -1558399629:
		case -609625092:
		case -618617997:
		case 1026149675:
		case -1009268949:
		case -570033273:
		case -1045541610:
		case -2022483795:
		case -239841468:
		case 1790834270:
		case -566387422:
		case 196747873:
		case 627535535:
		case -757735410:
		case -2048333973:
		case -482719877:
		case 1034187331:
		case 1093792632:
		case -1758137366:
		case 1886268224:
		case 1074745671:
		case 272929391:
		case -1590337689:
		case 682434785:
		case -827162039:
		case -312295511:
		case -1649536104:
		case 941494461:
		case 777714999:
		case 1180875963:
		case 989294410:
		case -1912017790:
		case 1234311532:
		case -1405937764:
		case 719660200:
		case -982130927:
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 884483972:
		case -1210451983:
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
		case 1909189272:
		case 1617472902:
		case -1267543371:
		case 931280609:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case 1945374990:
		case 1653666139:
		case 219613597:
		case 2069146067:
		case -638562243:
		case -54332285:
		case 2044532910:
		case -420911112:
		case 321186144:
		case 500482303:
		case -1988428699:
		case 1692272545:
		case 345756458:
		case -307958377:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
		case -286046740:
		case 540101442:
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case -941272559:
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -447711397:
		case 1416466158:
		case -208911803:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 740289177:
		case 301304410:
		case 2031587082:
		case -1960756985:
		case 1693751655:
		case 960812448:
		case -2122646867:
		case -2098954619:
		case 2134119907:
		case 67753863:
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case 1181339704:
		case -1728685474:
			return 1;
			break;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0, bool bParam1, var uParam2)
{
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_178(iVar0, bParam1, uParam2) && !func_177(PLAYER::PLAYER_ID())) && !func_161(iParam0))
	{
		return 0;
	}
	if (func_177(PLAYER::PLAYER_ID()))
	{
		if (func_160(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_159(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_157(iParam0)) && !bVar1) && !(func_156(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_154(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_153(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != 873639469) && ENTITY::GET_ENTITY_MODEL(iParam0) != -1177863319)
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_153(int iParam0)
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

int func_154(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
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

int func_156(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_158(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case -1254331310:
		case -907477130:
			return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (func_176(PLAYER::PLAYER_ID()) || func_175(PLAYER::PLAYER_ID()))
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_165(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(PLAYER::PLAYER_ID()))
		{
			if (func_163(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_164(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -2096818938:
		case -1860900134:
			if (func_167(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2537071.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_166(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_166(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_106(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case -2119578145:
		case -682211828:
		case 349605904:
		case 525509695:
		case -1150599089:
		case 523724515:
			return func_174();
			break;
		
		case -1685021548:
			if (Global_262145.f_14219)
			{
				return func_173();
			}
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
			if (Global_262145.f_14220)
			{
				return func_173();
			}
			break;
		
		case 16646064:
			if (Global_262145.f_14218)
			{
				return func_173();
			}
			break;
		
		case -310465116:
			if (Global_262145.f_14221)
			{
				return func_173();
			}
			break;
		
		case 729783779:
			if (Global_262145.f_14223)
			{
				return func_173();
			}
			break;
		
		case 970598228:
		case -1041692462:
			return func_172();
			break;
		
		case -1045541610:
			if (Global_262145.f_18669)
			{
				return func_171();
			}
			break;
		
		case -239841468:
			if (Global_262145.f_18671)
			{
				return func_171();
			}
			break;
		
		case 627535535:
			if (Global_262145.f_18675)
			{
				return func_171();
			}
			break;
		
		case -566387422:
			if (Global_262145.f_18672)
			{
				return func_171();
			}
			break;
		
		case 1034187331:
			if (Global_262145.f_18679)
			{
				return func_171();
			}
			break;
		
		case -2048333973:
			if (Global_262145.f_18677)
			{
				return func_171();
			}
			break;
		
		case 1886268224:
			if (Global_262145.f_18682)
			{
				return func_171();
			}
			break;
		
		case -2096818938:
			if (Global_262145.f_20625)
			{
				return func_170();
			}
			break;
		
		case -1860900134:
			if (Global_262145.f_20626)
			{
				return func_170();
			}
			break;
		
		case -667151410:
		case -589178377:
			return func_169();
			break;
		
		case 75131841:
			if (func_169() || func_168())
			{
				return 1;
			}
			break;
		
		case -2096690334:
			return func_169();
			break;
		
		case 931280609:
			return func_169();
			break;
		
		case 741090084:
			return func_169();
			break;
		
		case 80636076:
			return func_169();
			break;
		
		case -915704871:
			return func_169();
			break;
		
		case 444994115:
			return func_169();
			break;
		
		case 1637620610:
			return func_169();
			break;
		
		case -755532233:
			return func_169();
			break;
		
		case -27326686:
			return func_169();
			break;
		
		case -1812949672:
			return func_169();
			break;
		
		case -1374500452:
			return func_169();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_169();
			break;
		
		case 1026149675:
			if (Global_262145.f_28524)
			{
				return func_168();
			}
			break;
		
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_168();
			}
			break;
		
		case -2124201592:
			if (Global_262145.f_28523)
			{
				return func_168();
			}
			break;
		
		case 1830407356:
			if (Global_262145.f_28873)
			{
				return func_168();
			}
			break;
		
		case 1871995513:
			if (Global_262145.f_28872)
			{
				return func_168();
			}
			break;
	}
	return 0;
}

var func_168()
{
	return DLC2::IS_DLC_PRESENT(1815791016);
}

var func_169()
{
	return DLC2::IS_DLC_PRESENT(1927191088);
}

var func_170()
{
	return DLC2::IS_DLC_PRESENT(2067165443);
}

var func_171()
{
	return DLC2::IS_DLC_PRESENT(-957277403);
}

var func_172()
{
	return DLC2::IS_DLC_PRESENT(210122941);
}

var func_173()
{
	return DLC2::IS_DLC_PRESENT(-1894522408);
}

var func_174()
{
	return DLC2::IS_DLC_PRESENT(1630677557);
}

int func_175(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_132())
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_132())
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_177(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_155(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == 2046537925 || iParam0 == -1536924937) || iParam0 == -1779120616) || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -1973172295) || iParam0 == 1127131465) || iParam0 == -1647941228) || iParam0 == 353883353) || iParam0 == -34623805) || iParam0 == 456714581) || iParam0 == -1205689942) || iParam0 == -1683328900) || iParam0 == 741586030) || iParam0 == 1922257928)
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == 1171614426 || iParam0 == 1938952078) || iParam0 == -956048545) || iParam0 == 469291905) || iParam0 == -845979911) || iParam0 == 1682114128) || iParam0 == 1283517198) || iParam0 == 1560980623)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -1346687836 || iParam0 == -1776615689) || iParam0 == -810318068) || iParam0 == 728614474)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -186537451 || iParam0 == 1131912276) || iParam0 == 448402357) || iParam0 == -836512833)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == 1147287684 || iParam0 == 1491375716) || iParam0 == -537896628) || iParam0 == 321739290) || iParam0 == 1127861609) || iParam0 == -1233807380) || iParam0 == -400295096) || iParam0 == 1641462412) || iParam0 == -2076478498) || iParam0 == 1783355638) || iParam0 == -2033222435) || iParam0 == -884690486) || iParam0 == -1961627517) || iParam0 == 2072156101) || iParam0 == 1739845664) || iParam0 == 2053223216) || iParam0 == 2112052861) || iParam0 == 771711535) || iParam0 == -1241712818) || iParam0 == 534258863)
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_159(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != -2128233223) && iParam0 != -48031959) && iParam0 != -1269889662) && iParam0 != -440768424) && iParam0 != -1590337689) && iParam0 != 6774487) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && iParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == -845961253)
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == -1860900134 || iParam0 == -2096818938) || iParam0 == -114627507)
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_179(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == -1860900134 || iParam0 == 2071877360)
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case -1323100960:
		case -442313018:
		case 1491375716:
			return 1;
			break;
	}
	return 0;
}

void func_180(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_118(sParam0))
	{
		return;
	}
	func_24();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_183()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

int func_184(bool bParam0)
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1726, 26))
		{
			uVar0 = func_15(1191, -1, 0);
			if (!GAMEPLAY::IS_BIT_SET(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_37(122, -1);
}

int func_185()
{
	return Local_61.x;
}

int func_186(int iParam0)
{
	return Local_140[iParam0];
}

void func_187()
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_189();
	}
	if (iLocal_237 != -1)
	{
		func_72(iLocal_237, 0);
		func_71(iLocal_237, 0);
	}
	if (!func_184(0))
	{
		if (func_112(PLAYER::PLAYER_ID()) || iLocal_245)
		{
			func_31(122, 1, -1, 1);
		}
	}
	func_69(0);
	func_188();
}

void func_188()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_189()
{
	if (!func_196(1, -1))
	{
		func_194(1, -1);
	}
	if (func_120() && func_17() == 0)
	{
	}
	else
	{
		NETWORK::NETWORK_BLOCK_INVITES(0);
	}
	if (func_193(1))
	{
		NETWORK::_0x4A9FDE3A5A6D0437(1);
	}
	else
	{
		NETWORK::_0x4A9FDE3A5A6D0437(0);
	}
	Global_2450632.f_643 = 0;
	if (func_190())
	{
		if (!func_37(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

int func_190()
{
	if (func_192() && func_191(0))
	{
		return 1;
	}
	return 0;
}

var func_191(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_192()
{
	return func_191(func_14() + 1);
}

bool func_193(int iParam0)
{
	return Global_1662155.f_16[iParam0].f_3;
}

void func_194(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	Global_1387909 = 0;
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			uVar1 = func_195(iParam1);
			iVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			break;
		
		default:
			uVar1 = func_195(iParam1);
			iVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::SET_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_12(1303, 0, iParam1, 1, 0);
			func_12(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_195(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_14();
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

bool func_196(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	uVar0 = func_195(iParam1);
	uVar1 = GAMEPLAY::GET_PROFILE_SETTING(uVar0);
	return GAMEPLAY::IS_BIT_SET(uVar1, iParam0);
}

int func_197()
{
	func_204(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_203())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_202())
	{
		return 1;
	}
	if (func_201(159))
	{
		if (!func_200())
		{
			return 1;
		}
	}
	if (func_201(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_198() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_198()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_198()
{
	switch (func_17())
	{
		case 0:
			return func_199();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_199()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_200()
{
	return Global_2450632.f_598;
}

int func_201(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_202()
{
	return Global_2460680;
}

bool func_203()
{
	return Global_2450632.f_593;
}

void func_204(var uParam0)
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
					func_205(iVar0);
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

void func_205(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_4(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_206(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_206(int iParam0, var uParam1)
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

void func_207()
{
	SYSTEM::WAIT(0);
}

void func_208(struct<21> Param0)
{
	func_214(func_215(Param0), Param0);
	func_212(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_61, 78);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_140, 97);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_211())
	{
		func_187();
	}
	func_70(10, 1);
	func_209();
}

void func_209()
{
	NETWORK::NETWORK_BLOCK_INVITES(1);
	func_210(1, -1);
	NETWORK::_0x4A9FDE3A5A6D0437(1);
	if (func_37(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2450632.f_643 = 1;
}

void func_210(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			uVar1 = func_195(iParam1);
			iVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

int func_211()
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
		if (func_203())
		{
			return 0;
		}
		if (func_201(157))
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

int func_212(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_188();
			}
			else
			{
				return 0;
			}
		}
		if (!func_213())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_203())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_201(157))
				{
					if (!bParam2)
					{
						func_188();
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
					func_188();
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
				func_188();
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
			func_188();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_213()
{
	return Global_1312854;
}

void func_214(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_188();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

