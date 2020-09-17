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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_103();
	}
	else
	{
		func_87();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_66())
		{
			func_87();
		}
		func_1(&uLocal_116);
	}
}

void func_1(var uParam0)
{
	func_63(uParam0);
	func_61(uParam0);
	switch (uParam0->f_13)
	{
		case 0:
			func_60(&(uParam0->f_7), 11);
			func_59(uParam0, 1);
			break;
		
		case 1:
			Global_1676358 = 0;
			if (func_58(uParam0))
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 2);
			}
			break;
		
		case 2:
			if (func_57(PLAYER::PLAYER_PED_ID(), &(uParam0->f_16[uParam0->f_9])) && func_56(PLAYER::PLAYER_PED_ID(), uParam0->f_16[uParam0->f_9].f_3, uParam0->f_16[uParam0->f_9].f_13))
			{
				if ((((((((((((func_55(uParam0) || func_51(uParam0)) || func_50(uParam0)) || !func_49(uParam0)) || func_47(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || MISC::IS_BIT_SET(Global_1676377.f_4, 2)) || func_46(uParam0->f_16[uParam0->f_9].f_13))
				{
					if (func_51(uParam0))
					{
						func_45(&(uParam0->f_6), 4, "POD_TOO_MANY", 0, 0, 0, 0);
					}
					else
					{
						func_43(&(uParam0->f_6));
						func_42(uParam0);
						func_59(uParam0, 1);
					}
				}
				else
				{
					Global_1676358 = 1;
					if (uParam0->f_6 == -1)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_11) > 150)
						{
							if (func_41(uParam0->f_9) && !Global_262145.f_26280)
							{
								func_45(&(uParam0->f_6), 4, "MPTV_WALKOFF", 0, 0, 0, 0);
							}
							else
							{
								func_45(&(uParam0->f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
							}
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_43(&(uParam0->f_6));
						func_38(uParam0);
						func_59(uParam0, 3);
						if (uParam0->f_16[uParam0->f_9].f_13 == 4)
						{
							MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 15);
							func_36(157);
						}
					}
				}
			}
			else
			{
				func_42(uParam0);
				func_59(uParam0, 1);
			}
			break;
		
		case 3:
			func_35(uParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_59(uParam0, 4);
			}
			break;
		
		case 4:
			func_35(uParam0, &sVar0);
			func_34(uParam0, &sVar16);
			if (uParam0->f_1.f_1 == 3)
			{
				if (CAM::_0xEE778F8C7E1142E2(0) == 4)
				{
					if (!func_33(&(uParam0->f_7), 13))
					{
						CAM::_0x2A2173E46DAECD12(0, 1);
						func_32(&(uParam0->f_7), 13);
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			Var20 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_31(uParam0), func_30(uParam0), 0, 2) };
			Var23 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_31(uParam0), func_30(uParam0), 0, 2) };
			uVar26 = Var23.z;
			fVar27 = 0.05f;
			if (uParam0->f_1.f_1 == 1)
			{
				fVar27 = 0.15f;
			}
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var20, 1f, 500, uVar26, fVar27);
			func_29(uParam0->f_9);
			func_59(uParam0, 5);
			break;
		
		case 5:
			func_17(uParam0);
			func_35(uParam0, &sVar0);
			func_34(uParam0, &sVar16);
			iVar28 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			Var29 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_31(uParam0), func_30(uParam0), 0, 2) };
			fVar32 = Var29.z;
			if ((iVar28 != 1 && iVar28 != 0) || func_16(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar32, 5f))
			{
				if (uParam0->f_1.f_1 == 3)
				{
					if (CAM::_0xEE778F8C7E1142E2(0) == 4)
					{
						if (!func_33(&(uParam0->f_7), 13))
						{
							CAM::_0x2A2173E46DAECD12(0, 1);
							func_32(&(uParam0->f_7), 13);
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_31(uParam0), func_30(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, &sVar16, 2f, -1000f, 9, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				func_32(&(uParam0->f_7), 8);
				func_59(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_33(&(uParam0->f_7), 10) || func_15())
			{
				func_60(&(uParam0->f_7), 10);
				func_14(uParam0);
			}
			func_17(uParam0);
			func_8(uParam0);
			uVar33 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_8);
			if (func_33(&(uParam0->f_7), 13))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar33))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar33) >= 1f)
				{
					if (uParam0->f_1.f_1 == 3)
					{
						if (func_33(&(uParam0->f_7), 13))
						{
							if (CAM::_0xEE778F8C7E1142E2(0) == 1)
							{
								CAM::_0x2A2173E46DAECD12(0, 1);
								CAM::_0x2A2173E46DAECD12(0, 4);
							}
							func_60(&(uParam0->f_7), 13);
						}
					}
					func_2(uParam0, 0);
					func_35(uParam0, &sVar0);
					func_34(uParam0, &sVar16);
					uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_31(uParam0), func_30(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, &sVar16, 4f, -1.5f, 9, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
					func_32(&(uParam0->f_7), 8);
					func_32(&(uParam0->f_7), 11);
				}
				else
				{
					func_60(&(uParam0->f_7), 8);
				}
			}
			else if (!func_33(&(uParam0->f_7), 8))
			{
				func_59(uParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_8);
			func_59(uParam0, 8);
			break;
		
		case 8:
			uVar34 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_8);
			iVar35 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548);
			if (iVar35 == 0 || iVar35 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar34))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar34) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BREAKOUT_FINISH"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BREAK_OUT")))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_8);
						func_29(-1);
						func_42(uParam0);
						func_59(uParam0, 0);
					}
				}
			}
			else
			{
				func_29(-1);
				func_42(uParam0);
				func_59(uParam0, 0);
			}
			break;
	}
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_3(uParam0);
		if (iVar1 != uParam0->f_1.f_2)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_1.f_2);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_1.f_3;
		}
		iVar1 = uParam0->f_1.f_2;
	}
	else if (uParam0->f_1.f_3 == 5)
	{
		iVar1 = uParam0->f_1.f_2;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_1.f_4)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_1.f_3 > 6)
		{
			iVar1 = func_3(uParam0);
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_1.f_2;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= 90000 && uParam0->f_1.f_1 != 3)
		{
			iVar1 = func_3(uParam0);
			if (iVar1 != uParam0->f_1.f_2)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_1.f_2);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_1.f_2;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_1.f_4 = uParam0->f_1.f_3;
	uParam0->f_1.f_3 = iVar0;
	uParam0->f_1.f_2 = iVar1;
}

int func_3(var uParam0)
{
	iVar0 = (uParam0->f_1.f_2 + 1 % func_6(uParam0->f_1.f_1));
	if (uParam0->f_1.f_1 == 2 || uParam0->f_1.f_1 == 3)
	{
		return uParam0->f_1.f_2;
	}
	if (func_4())
	{
		if (uParam0->f_1.f_1 == 1)
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
	}
	else if (uParam0->f_1.f_1 == 1)
	{
		if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

bool func_4()
{
	return func_5(PLAYER::PLAYER_ID());
}

int func_5(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_7(func_4(), 4, 5);
		
		case 2:
			return 5;
		
		case 3:
			return 3;
		
		default:
	}
	return 0;
}

int func_7(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_8(var uParam0)
{
	if (uParam0->f_13 == 6)
	{
		Var0 = { PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar3 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_13 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BLOCK_INTERRUPT"))) && !func_33(&(uParam0->f_7), 12))
		{
			if ((fVar3 >= 0.35f && !Global_2514785) && !Global_2514787)
			{
				func_13(uParam0);
			}
		}
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			func_42(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BLOCK_INTERRUPT")))
		{
			func_42(uParam0);
		}
		else if (Global_2514785 || Global_2514787)
		{
			func_42(uParam0);
		}
		else if (func_12(uParam0))
		{
			func_42(uParam0);
		}
		else
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_33(&(uParam0->f_7), 0)) && !func_33(&(uParam0->f_7), 4)) && !func_11()) && !func_9(1)) && uParam0->f_1.f_3 != 3)
			{
				if (uParam0->f_6 == -1)
				{
					if (uParam0->f_1.f_1 == 1 || uParam0->f_1.f_1 == 0)
					{
						if (PAD::_IS_USING_KEYBOARD(2))
						{
							func_45(&(uParam0->f_6), 4, "MPOF_AC_PC_EXIT", 0, 0, 0, 0);
						}
						else
						{
							func_45(&(uParam0->f_6), 4, "MPOF_AC_EXIT", 0, 0, 0, 0);
						}
					}
					else if (PAD::_IS_USING_KEYBOARD(2))
					{
						func_45(&(uParam0->f_6), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
					}
					else
					{
						func_45(&(uParam0->f_6), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_13 == 6)
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						iVar4 = 225;
					}
					else
					{
						iVar4 = 190;
					}
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar4))
					{
						func_14(uParam0);
					}
				}
			}
		}
	}
	func_60(&(uParam0->f_7), 9);
}

int func_9(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
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

int func_10(var uParam0)
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

int func_11()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_12(var uParam0)
{
	return func_33(&(uParam0->f_7), 9);
}

void func_13(var uParam0)
{
	if (((func_3(uParam0) != uParam0->f_1.f_2 && uParam0->f_1.f_3 < 6) && uParam0->f_1.f_3 != 3) && uParam0->f_1.f_3 != 4)
	{
		func_2(uParam0, 1);
		func_35(uParam0, &sVar0);
		func_34(uParam0, &sVar16);
		uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_31(uParam0), func_30(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, &sVar16, 4f, -1.5f, 9, 0, 1148846080, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
		func_32(&(uParam0->f_7), 8);
		PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_14(var uParam0)
{
	uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_31(uParam0), func_30(uParam0), 2, 1, 0, 1065353216, 0, 1.12f);
	func_35(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, "exit", 4f, -4f, 9, 0, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
	func_43(&(uParam0->f_6));
	func_59(uParam0, 8);
}

bool func_15()
{
	return MISC::IS_BIT_SET(Global_1676377.f_3, 25);
}

int func_16(float fParam0, float fParam1, float fParam2)
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

void func_17(var uParam0)
{
	CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-70.0027f, -10.1277f);
	switch (uParam0->f_13)
	{
		case 4:
		case 8:
		case 6:
			func_22(1);
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(0);
			HUD::DISPLAY_AMMO_THIS_FRAME(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
			func_21();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) && iVar0 != -1569615261)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			func_19(1);
			func_18();
			break;
	}
}

void func_18()
{
	Global_22211.f_6 = 1;
}

void func_19(bool bParam0)
{
	if (bParam0)
	{
		if (func_20())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_20()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_21()
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_22(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_27(0))
		{
			func_23(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_23(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_26())
		{
			func_25(1, 1);
		}
		else
		{
			func_25(0, 0);
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
	if (!func_24())
	{
		Global_19486.f_1 = 3;
	}
}

int func_24()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_27(0))
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

bool func_26()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_27(int iParam0)
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

bool func_28()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_29(int iParam0)
{
	Global_2460709 = iParam0;
	Global_1590535[PLAYER::PLAYER_ID()].f_870 = iParam0;
}

Vector3 func_30(var uParam0)
{
	Var0 = { uParam0->f_16[uParam0->f_9].f_3 };
	if (func_4() && uParam0->f_1.f_1 == 0)
	{
		Var0.z = (Var0.z - 4f);
	}
	return Var0;
}

Vector3 func_31(var uParam0)
{
	return uParam0->f_16[uParam0->f_9];
}

void func_32(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0, iParam1);
}

bool func_33(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_34(var uParam0, char* sParam1)
{
	if (uParam0->f_1.f_1 == 1)
	{
		if (func_4())
		{
			switch (uParam0->f_1.f_3)
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
			switch (uParam0->f_1.f_3)
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
		switch (uParam0->f_1.f_3)
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
	if (uParam0->f_1.f_1 == 3)
	{
		if (uParam0->f_1.f_3 == 5)
		{
			StringCopy(sParam1, "BASE_A", 16);
		}
		else if (uParam0->f_1.f_3 == 0)
		{
			StringCopy(sParam1, "IDLE_B", 16);
		}
	}
}

void func_35(var uParam0, char* sParam1)
{
	switch (uParam0->f_1.f_1)
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
		
		case 3:
			StringCopy(sParam1, "ANIM@AMB@YACHT@JACUZZI@SEATED", 64);
			break;
	}
	if (func_4())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_1.f_1)
	{
		case 1:
			if (func_4())
			{
				switch (uParam0->f_1.f_2)
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
				switch (uParam0->f_1.f_2)
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
			switch (uParam0->f_1.f_2)
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
			switch (uParam0->f_1.f_2)
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
		
		case 3:
			switch (uParam0->f_1.f_2)
			{
				case 0:
					StringConCat(sParam1, "@VARIATION_01@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VARIATION_02@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VARIATION_03@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VARIATION_04@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VARIATION_05@", 64);
					break;
			}
			break;
	}
}

void func_36(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_37()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_37()
{
	iVar0 = 0;
	return iVar0;
}

void func_38(var uParam0)
{
	uParam0->f_1.f_1 = func_40(uParam0->f_16[uParam0->f_9].f_13);
	uParam0->f_1.f_2 = func_39(uParam0);
	uParam0->f_1.f_3 = 3;
	uParam0->f_1.f_4 = 3;
}

int func_39(var uParam0)
{
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_6(uParam0->f_1.f_1));
	if (uParam0->f_1.f_1 == 1)
	{
		if (func_4())
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
	if (uParam0->f_1.f_1 == 3)
	{
		if (uParam0->f_9 >= 118 && uParam0->f_9 <= 122)
		{
			iVar0 = 2;
		}
	}
	if (uParam0->f_1.f_1 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 >= 1)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		default:
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 6:
		case 7:
			if (Global_98796.f_344 == 486476725)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_42(var uParam0)
{
	if (uParam0->f_6 != -1)
	{
		func_43(&(uParam0->f_6));
		uParam0->f_6 = -1;
		HUD::CLEAR_HELP(1);
	}
}

void func_43(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_44(*uParam0);
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

int func_44(int iParam0)
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

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_43(uParam0);
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
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
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

int func_46(int iParam0)
{
	if (iParam0 != 4)
	{
		return 0;
	}
	return Global_262145.f_26136;
}

bool func_47(int iParam0)
{
	return func_48(iParam0) == 1119849093;
}

int func_48(int iParam0)
{
	return Global_1628237[iParam0].f_595;
}

bool func_49(var uParam0)
{
	Stack.Push(!func_33(&(uParam0->f_7), 5));
	Stack.Push(&(uParam0->f_16[uParam0->f_9]));
	Stack.Push(uParam0->f_9);
	Call_Loc(*uParam0);
	return (StackVal || StackVal);
}

int func_50(var uParam0)
{
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar11 = 0;
	while (iVar11 < 10)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar11]) && !PED::IS_PED_INJURED(uVar0[iVar11])) && ENTITY::IS_ENTITY_VISIBLE(uVar0[iVar11])) && func_57(uVar0[iVar11], &(uParam0->f_16[uParam0->f_9])))
		{
			return 1;
		}
		iVar11++;
	}
	return 0;
}

int func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && func_54(iVar1, 1, 1))
			{
				if (func_57(PLAYER::GET_PLAYER_PED(iVar1), &(uParam0->f_16[uParam0->f_9])) || func_52(iVar1) == uParam0->f_9)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1590535[iParam0].f_870;
	}
	return -1;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
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

bool func_55(var uParam0)
{
	return uParam0->f_7 & 31 > 0;
}

int func_56(var uParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (iParam4 == 3 || iParam4 == 4)
		{
			if (func_16(ENTITY::GET_ENTITY_HEADING(uParam0), (Param1.z - 180f), 45f))
			{
				return 1;
			}
		}
		else if (func_16(ENTITY::GET_ENTITY_HEADING(uParam0), Param1.z, 45f))
		{
			return 1;
		}
	}
	return 0;
}

var func_57(var uParam0, var uParam1)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, uParam1->f_6.f_1, uParam1->f_6.f_4, uParam1->f_6, 0, 1, 0);
}

int func_58(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_57(PLAYER::PLAYER_PED_ID(), &(uParam0->f_16[uParam0->f_9])) && func_56(PLAYER::PLAYER_PED_ID(), uParam0->f_16[uParam0->f_9].f_3, uParam0->f_16[uParam0->f_9].f_13))
		{
			return 1;
		}
		else
		{
			uParam0->f_9 = (uParam0->f_9 + 1 % 31);
		}
		iVar0++;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_60(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(uParam0, iParam1);
}

void func_61(var uParam0)
{
	if (uParam0->f_13 == 6)
	{
	}
	else if (uParam0->f_13 > 4)
	{
		CAM::_0x2AED6301F67007D5(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_62());
		uParam0->f_12 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_12) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_62());
	}
}

float func_62()
{
	return 0.13f;
}

void func_63(var uParam0)
{
	func_64(&(uParam0->f_7), 4, func_65());
	func_64(&(uParam0->f_7), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0));
	func_64(&(uParam0->f_7), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1));
	func_64(&(uParam0->f_7), 0, func_27(0));
	func_64(&(uParam0->f_7), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_64(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(uParam0, iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(uParam0, iVar0);
	}
}

bool func_65()
{
	return Global_73825;
}

int func_66()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (!func_85(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_82(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (func_80() != 0)
	{
		return 1;
	}
	if (func_69())
	{
		return 1;
	}
	if (!func_67())
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	if (func_68() == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	return Global_1312467.f_18;
}

int func_69()
{
	func_77(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_76())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_75())
	{
		return 1;
	}
	if (func_74(159))
	{
		if (!func_73())
		{
			return 1;
		}
	}
	if (func_74(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_70() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_70()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_70()
{
	switch (func_72())
	{
		case 0:
			return func_71();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_71()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_72()
{
	return Global_30768;
}

bool func_73()
{
	return Global_2450632.f_598;
}

int func_74(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return Global_2460680;
}

bool func_76()
{
	return Global_2450632.f_593;
}

void func_77(var uParam0)
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
					func_78(iVar0);
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

void func_78(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_54(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_79(uVar4, &bVar5))
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

int func_79(var uParam0, var uParam1)
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

int func_80()
{
	return func_81(PLAYER::PLAYER_ID());
}

var func_81(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_82(int iParam0)
{
	if (iParam0 != func_53() && func_54(iParam0, 1, 1))
	{
		if (func_84(iParam0) && !func_83(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_53() && func_54(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_53() && func_54(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_85(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_54(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_86(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_86(int iParam0)
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

void func_87()
{
	func_89(&uLocal_116);
	func_88();
}

void func_88()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_89(var uParam0)
{
	func_43(&(uParam0->f_6));
	func_42(uParam0);
	if (uParam0->f_13 > 2)
	{
		func_29(-1);
		uVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_8);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_8);
		}
		func_90(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 15);
}

void func_90(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_102())
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
		if (!func_67())
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
				else if (bVar14 || (!func_99(PLAYER::PLAYER_ID(), 0) && !func_98()))
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
					func_95(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_94(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					func_93();
					func_92();
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
				if (!func_94(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					if (func_91(Global_4456448.f_232883))
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
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
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

bool func_91(int iParam0)
{
	return iParam0 == 17;
}

void func_92()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_93()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_94(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_95(int iParam0, int iParam1, int iParam2)
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
				func_97();
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
		if (func_99(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_96(-2008016205, iParam0);
	}
}

void func_96(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_97()
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

bool func_98()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_99(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_100(-1, 0) == 8;
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

int func_100(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_101();
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

int func_101()
{
	return Global_1312745;
}

int func_102()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, func_114());
	func_112(0, -1, 0);
	func_111();
	func_104();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_87();
	}
}

void func_104()
{
	func_105(0, &uLocal_116, 0, 3);
	func_105(1, &uLocal_116, 1, 3);
	func_105(2, &uLocal_116, 2, 3);
	func_105(3, &uLocal_116, 3, 1);
	func_105(4, &uLocal_116, 4, 1);
	func_105(5, &uLocal_116, 5, 1);
	func_105(6, &uLocal_116, 6, 1);
	func_105(7, &uLocal_116, 7, 1);
	func_105(8, &uLocal_116, 8, 1);
	func_105(9, &uLocal_116, 9, 1);
	func_105(10, &uLocal_116, 10, 1);
	func_105(11, &uLocal_116, 11, 1);
	func_105(12, &uLocal_116, 12, 1);
	func_105(13, &uLocal_116, 13, 1);
	func_105(14, &uLocal_116, 14, 1);
	func_105(15, &uLocal_116, 15, 1);
	func_105(16, &uLocal_116, 16, 1);
	func_105(17, &uLocal_116, 17, 1);
	func_105(18, &uLocal_116, 18, 1);
	func_105(19, &uLocal_116, 19, 1);
}

void func_105(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_110(iParam0, &Var0, &fVar3);
	uParam1->f_16[iParam2].f_13 = iParam3;
	uParam1->f_16[iParam2] = { Var0 };
	uParam1->f_16[iParam2].f_3 = { 0f, 0f, fVar3 };
	uParam1->f_16[iParam2].f_6.f_1 = { func_107(func_109(), func_108(iParam3, fVar3)) + Var0 };
	uParam1->f_16[iParam2].f_6.f_4 = { func_107(func_106(), func_108(iParam3, fVar3)) + Var0 };
	uParam1->f_16[iParam2].f_6 = 1.25f;
}

Vector3 func_106()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_107(struct<3> Param0, var uParam3)
{
	fVar3 = SYSTEM::SIN(uParam3);
	fVar4 = SYSTEM::COS(uParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

float func_108(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return fParam1;
		
		case 4:
		case 3:
			return (fParam1 - 180f);
		
		default:
	}
	return fParam1;
}

Vector3 func_109()
{
	return -0.5f, -0.5f, 0f;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	if (func_4())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 986.563f, 71.013f, 115.7594f };
				*uParam2 = 154.5f;
				break;
			
			case 1:
				*uParam1 = { 989.038f, 69.538f, 115.7594f };
				*uParam2 = 154.5f;
				break;
			
			case 2:
				*uParam1 = { 975.475f, 43.275f, 115.7483f };
				*uParam2 = 65.25f;
				break;
			
			case 3:
				*uParam1 = { 949.163f, 0.63f, 115.1641f };
				*uParam2 = -133.75f;
				break;
			
			case 4:
				*uParam1 = { 945.913f, -1.483f, 115.1641f };
				*uParam2 = -171.25f;
				break;
			
			case 5:
				*uParam1 = { 944.888f, -1.583f, 115.1641f };
				*uParam2 = 178.5f;
				break;
			
			case 6:
				*uParam1 = { 943.913f, -1.47f, 115.1641f };
				*uParam2 = 168.5f;
				break;
			
			case 7:
				*uParam1 = { 942.926f, -1.233f, 115.1641f };
				*uParam2 = 160.75f;
				break;
			
			case 8:
				*uParam1 = { 941.988f, -0.845f, 115.1641f };
				*uParam2 = 151.25f;
				break;
			
			case 9:
				*uParam1 = { 941.913f, 0.868f, 115.1641f };
				*uParam2 = 56.08f;
				break;
			
			case 10:
				*uParam1 = { 942.551f, 2.318f, 115.1641f };
				*uParam2 = 146.08f;
				break;
			
			case 11:
				*uParam1 = { 941.251f, 1.855f, 115.1641f };
				*uParam2 = -121.92f;
				break;
			
			case 12:
				*uParam1 = { 947.401f, 23.606f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 13:
				*uParam1 = { 946.726f, 24.068f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 14:
				*uParam1 = { 945.988f, 24.518f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 15:
				*uParam1 = { 950.376f, 17.905f, 115.1641f };
				*uParam2 = -136.88f;
				break;
			
			case 16:
				*uParam1 = { 951.201f, 18.555f, 115.1641f };
				*uParam2 = -153.88f;
				break;
			
			case 17:
				*uParam1 = { 952.101f, 18.955f, 115.1641f };
				*uParam2 = -163.25f;
				break;
			
			case 18:
				*uParam1 = { 954.176f, 19.03f, 115.1641f };
				*uParam2 = 164f;
				break;
			
			case 19:
				*uParam1 = { 956.126f, 18.18f, 115.1641f };
				*uParam2 = 145.5f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 986.563f, 71.013f, 115.7594f };
				*uParam2 = 140.5f;
				break;
			
			case 1:
				*uParam1 = { 989.038f, 69.538f, 115.7594f };
				*uParam2 = 140.5f;
				break;
			
			case 2:
				*uParam1 = { 975.475f, 43.275f, 115.7483f };
				*uParam2 = 51.25f;
				break;
			
			case 3:
				*uParam1 = { 949.163f, 0.63f, 115.1641f };
				*uParam2 = -133.75f;
				break;
			
			case 4:
				*uParam1 = { 945.913f, -1.483f, 115.1641f };
				*uParam2 = -171.25f;
				break;
			
			case 5:
				*uParam1 = { 944.888f, -1.583f, 115.1641f };
				*uParam2 = 178.5f;
				break;
			
			case 6:
				*uParam1 = { 943.913f, -1.47f, 115.1641f };
				*uParam2 = 168.5f;
				break;
			
			case 7:
				*uParam1 = { 942.926f, -1.233f, 115.1641f };
				*uParam2 = 160.75f;
				break;
			
			case 8:
				*uParam1 = { 941.988f, -0.845f, 115.1641f };
				*uParam2 = 151.25f;
				break;
			
			case 9:
				*uParam1 = { 941.913f, 0.868f, 115.1641f };
				*uParam2 = 56.08f;
				break;
			
			case 10:
				*uParam1 = { 942.551f, 2.318f, 115.1641f };
				*uParam2 = 146.08f;
				break;
			
			case 11:
				*uParam1 = { 941.251f, 1.855f, 115.1641f };
				*uParam2 = -121.92f;
				break;
			
			case 12:
				*uParam1 = { 947.401f, 23.606f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 13:
				*uParam1 = { 946.726f, 24.068f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 14:
				*uParam1 = { 945.988f, 24.518f, 115.1641f };
				*uParam2 = 145f;
				break;
			
			case 15:
				*uParam1 = { 950.376f, 17.905f, 115.1641f };
				*uParam2 = -136.88f;
				break;
			
			case 16:
				*uParam1 = { 951.201f, 18.555f, 115.1641f };
				*uParam2 = -153.88f;
				break;
			
			case 17:
				*uParam1 = { 952.101f, 18.955f, 115.1641f };
				*uParam2 = -163.25f;
				break;
			
			case 18:
				*uParam1 = { 954.176f, 19.03f, 115.1641f };
				*uParam2 = 164f;
				break;
			
			case 19:
				*uParam1 = { 956.126f, 18.18f, 115.1641f };
				*uParam2 = 145.5f;
				break;
			}
	}
}

void func_111()
{
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_113())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_76())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_74(157))
				{
					if (!bParam2)
					{
						func_88();
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
					func_88();
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
				func_88();
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
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_113()
{
	return Global_1312854;
}

var func_114()
{
	uVar0 = Global_2425662[PLAYER::PLAYER_ID()].f_310.f_6;
	return uVar0;
}

