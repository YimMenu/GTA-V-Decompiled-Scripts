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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_86())
	{
		while (!func_72())
		{
			SYSTEM::WAIT(0);
			func_9(&uLocal_83);
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_83);
	func_2();
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	func_7(&(uParam0->f_43.f_5));
	func_5(uParam0, 1);
	if (uParam0->f_43.f_4 > 2)
	{
		func_4(-1);
		uVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
		}
	}
}

void func_4(int iParam0)
{
	Global_2460709 = iParam0;
	Global_1590535[PLAYER::PLAYER_ID()].f_870 = iParam0;
}

void func_5(var uParam0, int iParam1)
{
	if (((((((((((((((func_6("MPOF_AC_PC_EXIT") || func_6("MPOF_AC_EXIT")) || func_6("MPOFSEAT_PCEXIT")) || func_6("MPOFSEAT_EXIT")) || func_6("DJ_SEAT_PC")) || func_6("DJ_SEAT")) || func_6("DJ_PSEAT_PC")) || func_6("DJ_PSEAT")) || func_6("DJ_SEAT_PC_BM")) || func_6("DJ_SEAT_BM")) || func_6("DJ_PSEAT_PC_BM")) || func_6("DJ_PSEAT_BM")) || func_6("DJ_SEAT_PC_TOU")) || func_6("DJ_SEAT_TOU")) || func_6("DJ_PSEAT_PC_TOU")) || func_6("DJ_PSEAT_TOU"))
	{
		UI::CLEAR_HELP(1);
	}
	if (iParam1 && uParam0->f_43.f_5 != -1)
	{
		func_7(&(uParam0->f_43.f_5));
		uParam0->f_43.f_5 = -1;
	}
}

var func_6(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_8(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_8(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_9(var uParam0)
{
	func_69(uParam0);
	func_67(uParam0);
	switch (uParam0->f_43.f_4)
	{
		case 0:
			func_66(&(uParam0->f_43), 11);
			func_65(uParam0, 1);
			break;
		
		case 1:
			Global_1676358 = 0;
			if (func_64(uParam0))
			{
				uParam0->f_43.f_6 = GAMEPLAY::GET_GAME_TIMER();
				func_65(uParam0, 2);
			}
			break;
		
		case 2:
			if (func_63(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_43.f_2]) && func_62(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_43.f_2]->f_8.f_3, (*uParam0)[uParam0->f_43.f_2]))
			{
				if ((func_60(uParam0) || func_56(uParam0)) || !func_55(uParam0))
				{
					func_5(uParam0, 1);
					func_65(uParam0, 1);
				}
				else
				{
					Global_1676358 = 1;
					if (uParam0->f_43.f_5 == -1)
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_43.f_6) > 150)
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_7(&(uParam0->f_43.f_5));
						func_51(uParam0);
						func_65(uParam0, 3);
					}
				}
			}
			else
			{
				func_5(uParam0, 1);
				func_65(uParam0, 1);
			}
			break;
		
		case 3:
			func_50(uParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_65(uParam0, 4);
			}
			break;
		
		case 4:
			func_50(uParam0, &sVar0);
			func_49(uParam0, &sVar16);
			Var20 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			Var23 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			uVar26 = Var23.z;
			fVar27 = 0.05f;
			if (uParam0->f_43.f_8 == 1)
			{
				fVar27 = 0.15f;
			}
			AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var20, 1f, 500, uVar26, fVar27);
			func_4(uParam0->f_43.f_2);
			func_65(uParam0, 5);
			break;
		
		case 5:
			func_35(uParam0);
			func_50(uParam0, &sVar0);
			func_49(uParam0, &sVar16);
			iVar28 = AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			Var29 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			fVar32 = Var29.z;
			if ((iVar28 != 1 && iVar28 != 0) || func_34(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar32, 5f))
			{
				uParam0->f_43.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
				uParam0->f_43.f_8.f_4 = GAMEPLAY::GET_GAME_TIMER();
				func_33(&(uParam0->f_43), 8);
				func_65(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_32(&(uParam0->f_43), 10) || func_31())
			{
				func_66(&(uParam0->f_43), 10);
				func_30(uParam0);
			}
			func_35(uParam0);
			func_16(uParam0);
			uVar33 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar33))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar33) >= 1f)
				{
					func_10(uParam0, 0);
					func_50(uParam0, &sVar0);
					func_49(uParam0, &sVar16);
					uParam0->f_43.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
					func_33(&(uParam0->f_43), 8);
					func_33(&(uParam0->f_43), 11);
				}
				else
				{
					func_66(&(uParam0->f_43), 8);
				}
			}
			else if (!func_32(&(uParam0->f_43), 8))
			{
				func_65(uParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
			func_65(uParam0, 8);
			break;
		
		case 8:
			uVar34 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
			iVar35 = AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548);
			if (iVar35 == 0 || iVar35 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar34))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar34) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
						func_4(-1);
						func_5(uParam0, 1);
						func_65(uParam0, 0);
					}
				}
			}
			else
			{
				func_4(-1);
				func_5(uParam0, 1);
				func_65(uParam0, 0);
			}
			break;
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_11(uParam0);
		if (iVar1 != uParam0->f_43.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_43.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_43.f_8.f_2;
		}
		iVar1 = uParam0->f_43.f_8.f_1;
	}
	else if (uParam0->f_43.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_43.f_8.f_1;
		iVar2 = 3;
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_43.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_43.f_8.f_2 > 6)
		{
			iVar1 = func_11(uParam0);
			uParam0->f_43.f_8.f_4 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_43.f_8.f_1;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_43.f_8.f_4) >= 90000)
		{
			iVar1 = func_11(uParam0);
			if (iVar1 != uParam0->f_43.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_43.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_43.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_43.f_8.f_3 = uParam0->f_43.f_8.f_2;
	uParam0->f_43.f_8.f_2 = iVar0;
	uParam0->f_43.f_8.f_1 = iVar1;
}

int func_11(var uParam0)
{
	if (uParam0->f_43.f_8 == 2)
	{
		return uParam0->f_43.f_8.f_1;
	}
	iVar0 = (uParam0->f_43.f_8.f_1 + 1 % func_14(uParam0->f_43.f_8));
	if (func_12())
	{
		if (uParam0->f_43.f_8 == 1)
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
	}
	else if (uParam0->f_43.f_8 == 1)
	{
		if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

bool func_12()
{
	return func_13(PLAYER::PLAYER_ID());
}

int func_13(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_15(func_12(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_15(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_16(var uParam0)
{
	if (uParam0->f_43.f_4 == 6)
	{
		Var0 = { CONTROLS::GET_CONTROL_NORMAL(0, 218), CONTROLS::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar3 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_43.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)) && !func_32(&(uParam0->f_43), 12))
		{
			if ((fVar3 >= 0.35f && !Global_2514785) && !Global_2514787)
			{
				func_29(uParam0);
			}
		}
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			func_5(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_5(uParam0, 1);
		}
		else if (Global_2514785 || Global_2514787)
		{
			func_5(uParam0, 1);
		}
		else if (func_28(uParam0))
		{
			func_5(uParam0, 1);
		}
		else
		{
			CONTROLS::_DISABLE_INPUT_GROUP(2);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 263, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 264, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			bVar4 = false;
			if (((func_26(func_27()) && func_25()) && func_24(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8, 4)) && func_23(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8))
			{
				bVar4 = true;
			}
			if (((((!UI::IS_PAUSE_MENU_ACTIVE() && !func_32(&(uParam0->f_43), 0)) && !func_32(&(uParam0->f_43), 4)) && !func_22()) && !func_20(1)) && uParam0->f_43.f_8.f_2 != 3)
			{
				if (uParam0->f_43.f_5 == -1)
				{
					if (uParam0->f_43.f_8 == 1 || uParam0->f_43.f_8 == 0)
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2))
						{
							if (bVar4)
							{
								if (func_17(PLAYER::PLAYER_ID()) == 3)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_BM", 0, 0, 0, 0);
								}
								else if (func_17(PLAYER::PLAYER_ID()) == 2)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_TOU", 0, 0, 0, 0);
								}
								else
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC", 0, 0, 0, 0);
								}
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "MPOF_AC_PC_EXIT", 0, 0, 0, 0);
							}
						}
						else if (bVar4)
						{
							if (func_17(PLAYER::PLAYER_ID()) == 3)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_BM", 0, 0, 0, 0);
							}
							else if (func_17(PLAYER::PLAYER_ID()) == 2)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_TOU", 0, 0, 0, 0);
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT", 0, 0, 0, 0);
							}
						}
						else
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPOF_AC_EXIT", 0, 0, 0, 0);
						}
					}
					else if (uParam0->f_43.f_8 == 2)
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2))
						{
							if (bVar4)
							{
								if (func_17(PLAYER::PLAYER_ID()) == 3)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_BM", 0, 0, 0, 0);
								}
								else if (func_17(PLAYER::PLAYER_ID()) == 2)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_TOU", 0, 0, 0, 0);
								}
								else
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC", 0, 0, 0, 0);
								}
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
							}
						}
						else if (bVar4)
						{
							if (func_17(PLAYER::PLAYER_ID()) == 3)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_BM", 0, 0, 0, 0);
							}
							else if (func_17(PLAYER::PLAYER_ID()) == 2)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_TOU", 0, 0, 0, 0);
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT", 0, 0, 0, 0);
							}
						}
						else
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				if (uParam0->f_43.f_4 == 6)
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						iVar5 = 225;
					}
					else
					{
						iVar5 = 190;
					}
					if (((CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203)) && !Global_2514787) && !Global_2514785)
					{
						func_30(uParam0);
					}
					if (((((CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5)) && func_26(func_27())) && func_25()) && func_24(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8, 4)) && func_23(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8))
					{
						Global_2514787 = 1;
						Global_2514785 = 1;
					}
				}
			}
		}
	}
	func_66(&(uParam0->f_43), 9);
}

int func_17(int iParam0)
{
	iVar0 = -1;
	if (func_18(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (func_18(iParam0, 1))
	{
		iVar0 = 1;
	}
	else if (func_18(iParam0, 2))
	{
		iVar0 = 2;
	}
	else if (func_18(iParam0, 3))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_18(int iParam0, int iParam1)
{
	if (iParam0 == func_19() || iParam1 == -1)
	{
		return 0;
	}
	iVar0 = iParam1 + 20;
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, iVar0);
}

int func_19()
{
	return -1;
}

int func_20(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_21(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
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
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	if (iParam0 == func_19())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 1);
}

int func_24(int iParam0, int iParam1)
{
	if (iParam0 == func_19())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 0);
			break;
		
		case 1:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 1);
			break;
		
		case 4:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 2);
			break;
		
		case 2:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 3);
			break;
		
		case 3:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 4);
			break;
		
		case 5:
			return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 5);
			break;
	}
	return 0;
}

int func_25()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1612.283f, -3021.792f, -76.18069f, -1612.22f, -3005.203f, -74.20517f, 12.75f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (Global_262145.f_23846)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		
		default:
	}
	return 0;
}

int func_27()
{
	return Global_2460709;
}

bool func_28(var uParam0)
{
	return func_32(&(uParam0->f_43), 9);
}

void func_29(var uParam0)
{
	if (((func_11(uParam0) != uParam0->f_43.f_8.f_1 && uParam0->f_43.f_8.f_2 < 6) && uParam0->f_43.f_8.f_2 != 3) && uParam0->f_43.f_8.f_2 != 4)
	{
		func_10(uParam0, 1);
		func_50(uParam0, &sVar0);
		func_49(uParam0, &sVar16);
		uParam0->f_43.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1148846080, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
		func_33(&(uParam0->f_43), 8);
		PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_30(var uParam0)
{
	uParam0->f_43.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
	func_50(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_43.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_43.f_1);
	func_7(&(uParam0->f_43.f_5));
	func_65(uParam0, 8);
}

bool func_31()
{
	return GAMEPLAY::IS_BIT_SET(Global_1676377.f_3, 25);
}

bool func_32(var uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, iParam1);
}

void func_33(var uParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(uParam0, iParam1);
}

int func_34(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0)
{
	switch (uParam0->f_43.f_4)
	{
		case 4:
		case 8:
			func_40(1);
		
		case 6:
			CAM::_0xF4F2C0D4EE209E20();
			UI::_SHOW_WEAPON_WHEEL(0);
			UI::DISPLAY_AMMO_THIS_FRAME(0);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			UI::_0x0AFC4AF510774B47();
			func_39();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) && iVar0 != -1569615261)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
			func_37(1);
			func_36();
			break;
	}
}

void func_36()
{
	Global_22211.f_6 = 1;
}

void func_37(bool bParam0)
{
	if (bParam0)
	{
		if (func_38())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_38()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_39()
{
	GAMEPLAY::SET_BIT(&Global_7357, 4);
}

void func_40(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_45(0))
		{
			func_41(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_42())
	{
		Global_19486.f_1 = 3;
	}
}

int func_42()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
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

bool func_44()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_45(int iParam0)
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

bool func_46()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

Vector3 func_47(var uParam0)
{
	Var0 = { uParam0[uParam0->f_43.f_2]->f_8.f_3 };
	if (func_12() && uParam0->f_43.f_8 == 0)
	{
		Var0.z = (Var0.z - 4f);
	}
	return Var0;
}

Vector3 func_48(var uParam0)
{
	return uParam0[uParam0->f_43.f_2]->f_8;
}

void func_49(var uParam0, char* sParam1)
{
	if (uParam0->f_43.f_8 == 1)
	{
		if (func_12())
		{
			switch (uParam0->f_43.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_A", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
		}
		else
		{
			switch (uParam0->f_43.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "A_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
				}
		}
	}
	else
	{
		switch (uParam0->f_43.f_8.f_2)
		{
			case 0:
				StringCopy(sParam1, "IDLE_A", 16);
				break;
			
			case 1:
				StringCopy(sParam1, "IDLE_B", 16);
				break;
			
			case 2:
				StringCopy(sParam1, "IDLE_C", 16);
				break;
			
			case 3:
				StringCopy(sParam1, "ENTER", 16);
				break;
			
			case 5:
				StringCopy(sParam1, "BASE", 16);
				break;
			
			case 4:
				StringCopy(sParam1, "EXIT", 16);
				break;
			
			case 7:
				StringCopy(sParam1, "A_TO_B", 16);
				break;
			
			case 8:
				StringCopy(sParam1, "B_TO_C", 16);
				break;
			
			case 9:
				StringCopy(sParam1, "C_TO_D", 16);
				break;
			
			case 10:
				StringCopy(sParam1, "D_TO_E", 16);
				break;
			
			case 12:
				StringCopy(sParam1, "B_TO_E", 16);
				break;
			
			case 13:
				StringCopy(sParam1, "C_TO_A", 16);
				break;
			
			case 14:
				StringCopy(sParam1, "D_TO_A", 16);
				break;
			
			case 15:
				StringCopy(sParam1, "E_TO_A", 16);
				break;
			
			default:
				StringCopy(sParam1, "invalid_clip", 16);
				break;
			}
	}
}

void func_50(var uParam0, char* sParam1)
{
	switch (uParam0->f_43.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_12())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_43.f_8)
	{
		case 1:
			if (func_12())
			{
				switch (uParam0->f_43.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					
					case 4:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
				}
			}
			else
			{
				switch (uParam0->f_43.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_A@BASE@", 64);
						break;
					
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					
					case 4:
						StringConCat(sParam1, "@VAR_E@BASE@", 64);
						break;
					}
			}
			break;
		
		case 0:
			switch (uParam0->f_43.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_43.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_51(var uParam0)
{
	uParam0->f_43.f_8 = func_53((*uParam0)[uParam0->f_43.f_2]);
	uParam0->f_43.f_8.f_1 = func_52(uParam0);
	uParam0->f_43.f_8.f_2 = 3;
	uParam0->f_43.f_8.f_3 = 3;
}

int func_52(var uParam0)
{
	switch (uParam0->f_43.f_8)
	{
		case 2:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_14(uParam0->f_43.f_8));
	}
	if (uParam0->f_43.f_8 == 1)
	{
		if (func_12())
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 2;
		
		default:
	}
	return 0;
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_7(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_55(var uParam0)
{
	Stack.Push(!func_32(&(uParam0->f_43), 5));
	Stack.Push(uParam0[uParam0->f_43.f_2]);
	Stack.Push(uParam0->f_43.f_2);
	Call_Loc(uParam0->f_43.f_13);
	return (StackVal || StackVal);
}

int func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && func_59(iVar1, 1, 1))
			{
				if (func_63(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_43.f_2]) || func_58(iVar1) == uParam0->f_43.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	if (func_57(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_57(var uParam0)
{
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar11 = 0;
	while (iVar11 < 10)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar11]) && !PED::IS_PED_INJURED(uVar0[iVar11])) && ENTITY::IS_ENTITY_VISIBLE(uVar0[iVar11])) && (func_63(uVar0[iVar11], uParam0[uParam0->f_43.f_2]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar0[iVar11], 0), uParam0[uParam0->f_43.f_2]->f_1 + uParam0[uParam0->f_43.f_2]->f_1.f_3 / Vector(2f, 2f, 2f)) < 1f))
		{
			return 1;
		}
		iVar11++;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 != func_19())
	{
		return Global_1590535[iParam0].f_870;
	}
	return -1;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
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

bool func_60(var uParam0)
{
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return uParam0->f_43 & 31 > 0;
}

bool func_61(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 13);
}

int func_62(var uParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (iParam4 == 3)
		{
			if (func_34(ENTITY::GET_ENTITY_HEADING(uParam0), (Param1.z - 180f), 45f))
			{
				return 1;
			}
		}
		else if (func_34(ENTITY::GET_ENTITY_HEADING(uParam0), Param1.z, 45f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(var uParam0, var uParam1)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_64(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_63(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_43.f_2]) && func_62(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_43.f_2]->f_8.f_3, (*uParam0)[uParam0->f_43.f_2]))
		{
			return 1;
		}
		else
		{
			uParam0->f_43.f_2 = (uParam0->f_43.f_2 + 1 % 3);
		}
		iVar0++;
	}
	return 0;
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_43.f_4 = iParam1;
}

void func_66(var uParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(uParam0, iParam1);
}

void func_67(var uParam0)
{
	if (uParam0->f_43.f_4 == 6)
	{
	}
	else if (uParam0->f_43.f_4 > 4)
	{
		CAM::_0x2AED6301F67007D5(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_68());
		uParam0->f_43.f_7 = GAMEPLAY::GET_FRAME_COUNT();
	}
	else if ((GAMEPLAY::GET_FRAME_COUNT() - uParam0->f_43.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_68());
	}
}

float func_68()
{
	return 0.13f;
}

void func_69(var uParam0)
{
	func_70(&(uParam0->f_43), 4, func_71());
	func_70(&(uParam0->f_43), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0));
	func_70(&(uParam0->f_43), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1));
	func_70(&(uParam0->f_43), 0, func_45(0));
	func_70(&(uParam0->f_43), 2, AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	uVar0 = iParam1;
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0, uVar0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0, iVar0);
	}
}

bool func_71()
{
	return Global_73825;
}

int func_72()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !func_85()) && !Global_2514785)
	{
		return 1;
	}
	if (!func_84())
	{
		return 1;
	}
	if (func_73())
	{
		return 1;
	}
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 == func_19())
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	func_81(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_80())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_79())
	{
		return 1;
	}
	if (func_78(159))
	{
		if (!func_77())
		{
			return 1;
		}
	}
	if (func_78(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_74() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_74()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	switch (func_76())
	{
		case 0:
			return func_75();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_75()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_76()
{
	return Global_30768;
}

bool func_77()
{
	return Global_2450632.f_598;
}

int func_78(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_79()
{
	return Global_2460680;
}

bool func_80()
{
	return Global_2450632.f_593;
}

void func_81(var uParam0)
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
					func_82(iVar0);
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

void func_82(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_59(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_83(uVar4, &bVar5))
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

int func_83(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.5193f, 5163.855f, -86.59737f, 211.7083f, 5163.879f, -83.6007f, 6.25f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_85()
{
	return GAMEPLAY::IS_BIT_SET(Global_1676377.f_4, 10);
}

int func_86()
{
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 != func_19())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_workshop_seats", Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8, 1, 0))
		{
			return 0;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8);
		func_95(0, -1, 0);
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_94();
		func_87();
		return 1;
	}
	return 0;
}

void func_87()
{
	func_88(0, &uLocal_83, 0, 2);
	func_88(1, &uLocal_83, 1, 1);
	func_88(2, &uLocal_83, 2, 2);
}

void func_88(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_93(iParam0, &Var0, &fVar3);
	(*uParam1)[iParam2] = iParam3;
	uParam1[iParam2]->f_8 = { Var0 };
	uParam1[iParam2]->f_8.f_3 = { 0f, 0f, fVar3 };
	uParam1[iParam2]->f_1 = { func_90(func_92(), func_91(iParam3, fVar3)) + Var0 };
	uParam1[iParam2]->f_1.f_3 = { func_90(func_89(), func_91(iParam3, fVar3)) + Var0 };
	uParam1[iParam2]->f_1.f_6 = 1.25f;
}

Vector3 func_89()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_90(struct<3> Param0, var uParam3)
{
	fVar3 = SYSTEM::SIN(uParam3);
	fVar4 = SYSTEM::COS(uParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

float func_91(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return fParam1;
		
		case 3:
			return (fParam1 - 180f);
		
		default:
	}
	return fParam1;
}

Vector3 func_92()
{
	return -0.5f, -0.5f, 0f;
}

void func_93(int iParam0, var uParam1, var uParam2)
{
	if (func_12())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 209.185f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 210.085f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 210.897f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 209.185f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 210.085f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 210.897f, 5166.375f, -86.6007f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_94()
{
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_96())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_80())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_78(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_96()
{
	return Global_1312854;
}

