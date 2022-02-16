#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<3> Local_22 = { 0, 0, 0 } ;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<2> Local_76 = { 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_157 = { 0, 0 } ;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 15;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	struct<2> Local_188 = { 0, 0 } ;
	struct<2> Local_190 = { 0, 0 } ;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.56.09";
	iLocal_26 = -1;
	iLocal_27 = -1;
	iLocal_75 = -1;
	iLocal_79 = -1;
	iLocal_160 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577977 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_302())
		{
			func_300();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723433.f_3)
		{
			func_299();
			func_298();
			func_295();
			func_293();
			func_292();
			func_286();
			func_285();
			func_280();
			func_270();
			func_266();
			func_254();
			func_250();
			func_248();
			func_246();
			func_245();
			func_240();
			func_239();
			func_238();
			func_217();
			func_216();
			func_210();
			func_191();
			func_190();
			func_183();
			func_181();
			func_180();
			func_175();
			func_172();
			func_166();
			func_163();
			func_161();
			func_158();
			func_146();
			func_145();
			func_144();
			func_141();
			func_138();
			func_121();
			func_118();
			func_115();
			func_114();
			func_111();
			func_109();
			func_102();
			func_101();
			func_100();
			func_86();
			func_83();
			func_75();
			func_58();
			func_54();
			func_39();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_34();
			func_33();
			func_32();
			func_29();
			func_28();
			func_26();
			func_23();
			func_17();
			func_16();
		}
		func_9();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (func_2())
	{
		if (!iLocal_198)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_198 = 1;
		}
	}
	else if (iLocal_198)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_198 = 0;
	}
}

int func_2()
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_7()) || func_6()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_3(PLAYER::PLAYER_ID()) && Global_1946928 != 7)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	if (iParam0 != func_5() && func_4(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
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
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_5()
{
	return -1;
}

bool func_6()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

int func_7()
{
	if (func_8() == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	return Global_1574629.f_18;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_15()) && !func_6())
	{
		switch (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_6)
		{
			case 155:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 372.7166f, -61.5635f, 106.1633f, 374.0844f, -62.0511f, 108.5383f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 374.8303f, -60.0519f, 106.1633f, 373.443f, -59.5593f, 108.5383f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 156:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.933f, -436.7131f, 66.6614f, -1026.643f, -436.0464f, 69.0364f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.595f, -434.1366f, 66.6614f, -1028.902f, -434.8141f, 69.0364f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 157:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -578.381f, -711.6314f, 115.8054f, -579.8333f, -711.6372f, 118.1804f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -579.856f, -713.7709f, 115.8054f, -578.3839f, -713.7631f, 118.1804f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 158:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -998.9874f, -770.6858f, 64.6945f, -998.9971f, -769.2336f, 67.0695f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1001.131f, -769.2165f, 64.6945f, -1001.119f, -770.6886f, 67.0695f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			}
	}
	if (iVar0 && func_14())
	{
		if (func_13("BUNK_PC_BLCK2"))
		{
			func_12("FHQ_PC_BLCK", 1000);
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (Global_43328[iVar1 /*32*/])
			{
				if (MISC::GET_HASH_KEY(&(Global_43328[iVar1 /*32*/].f_8)) == 1654027762)
				{
					StringCopy(&(Global_43328[iVar1 /*32*/].f_8), "FHQ_PC_BLCK", 16);
				}
			}
			iVar1++;
		}
	}
	else if (((((((((iVar0 && (Global_2714627.f_744 || uLocal_84)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN()) && !func_11()) && HUD::GET_PAUSE_MENU_STATE() == 0) && func_7()) && !func_10()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!iLocal_83)
		{
			uLocal_84 = Global_2714627.f_744;
			Global_2714627.f_744 = 0;
			iLocal_83 = 1;
		}
	}
	else if (iLocal_83)
	{
		Global_2714627.f_744 = uLocal_84;
		iLocal_83 = 0;
	}
}

bool func_10()
{
	return Global_2714627.f_691;
}

bool func_11()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6135 + 100;
}

void func_12(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_13(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_14()
{
	return Global_1575005 == 10;
}

bool func_15()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

void func_16()
{
	if (Global_4718592.f_86750 == 380938673)
	{
		if (!MISC::IS_BIT_SET(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_17()
{
	int iVar0;
	
	if (Global_4718592.f_86750 != Global_262145.f_31350[2])
	{
		iLocal_159 = 0;
		func_22(&Local_157);
		return;
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_159 = 0;
		func_22(&Local_157);
		return;
	}
	iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FIX_LAMAR", 0);
	if (func_21(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash")) && !MISC::IS_BIT_SET(iLocal_159, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 0);
			func_20(&Local_157, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash2")) && !MISC::IS_BIT_SET(iLocal_159, 1))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 1);
			func_20(&Local_157, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash3")) && !MISC::IS_BIT_SET(iLocal_159, 2))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 2);
			func_20(&Local_157, 0, 0);
		}
		if (func_19(&Local_157) && func_18(Local_157, 1500, 0))
		{
			func_22(&Local_157);
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
			GRAPHICS::ANIMPOSTFX_STOP_ALL();
		}
	}
}

int func_18(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_19(var uParam0)
{
	return uParam0->f_1;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5])
	{
		iLocal_81 = 0;
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128495[0 /*565*/].f_18), 20);
	MISC::CLEAR_BIT(&(Global_4718592.f_128495[0 /*565*/].f_16), 3);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_81 = 0;
		return;
	}
	if (Global_1958759 == -1)
	{
		iLocal_81 = 0;
		return;
	}
	iVar0 = (Global_1958759 - func_25());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return;
	}
	if (iLocal_81)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (iVar1 >= Global_1058064.f_94[0])
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(Global_1853128[iVar3 /*888*/].f_36.f_18, 6))
			{
			}
			else if (MISC::IS_BIT_SET(Global_1853128[iVar3 /*888*/].f_36.f_18, 14))
			{
			}
			else if (Global_1853128[iVar3 /*888*/].f_205 == 8)
			{
			}
			else
			{
				if (iVar3 == PLAYER::PLAYER_ID())
				{
					iVar2 = iVar1;
					Jump @271; //curOff = 250
				}
				iVar1++;
			}
			iVar3++;
		}
	}
	if (iVar2 >= 4)
	{
		return;
	}
	Var4 = { Global_4718592.f_128495[iVar0 /*565*/].f_26[iVar2 /*3*/] };
	fVar7 = Global_4718592.f_128495[iVar0 /*565*/].f_66[iVar2];
	if (func_24(Var4))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var4, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar7);
	iLocal_81 = 1;
}

int func_24(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	if (Global_4718592.f_138118 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_26()
{
	if (Global_1977248 || Global_1977247)
	{
		if ((!func_10() && !func_27()) && !func_6())
		{
			Global_1977248 = 0;
			Global_1977247 = 0;
		}
	}
}

bool func_27()
{
	return Global_2714627.f_692;
}

void func_28()
{
	if (Global_4718592.f_86750 != Global_262145.f_31343[5])
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128495[2 /*565*/].f_19), 2);
}

void func_29()
{
	if (Global_4718592.f_86750 != Global_262145.f_31343[3] || Global_1574629.f_18 != 0)
	{
		if (iLocal_35)
		{
			Global_1058355 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1058064.f_280), 17);
			MISC::CLEAR_BIT(&(Global_1058026.f_30), 30);
			MISC::CLEAR_BIT(&(Global_1058026.f_35), 7);
			MISC::CLEAR_BIT(&(Global_1058026.f_31), 6);
		}
		iLocal_35 = 0;
		func_22(&uLocal_33);
		return;
	}
	if (Global_1058064.f_14[0] == 10)
	{
		if (!func_19(&uLocal_33))
		{
			func_31(&uLocal_33, 0, 0);
		}
		else if (func_30(&uLocal_33, 14000, 0))
		{
			if (!iLocal_35)
			{
				MISC::SET_BIT(&(Global_1058064.f_280), 17);
				iLocal_35 = 1;
				Global_4718592.f_112674[2 /*1582*/].f_1529 = 0;
				MISC::CLEAR_BIT(&(Global_4718592.f_112674[2 /*1582*/].f_5), 20);
				MISC::CLEAR_BIT(&(Global_4718592.f_112674[2 /*1582*/].f_5), 28);
				MISC::SET_BIT(&(Global_1058026.f_30), 30);
				MISC::SET_BIT(&(Global_1058026.f_35), 7);
				MISC::SET_BIT(&(Global_1058026.f_31), 6);
				Global_1058355 = { Global_1058352 };
			}
		}
	}
}

int func_30(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_31(var uParam0, bool bParam1, bool bParam2)
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

void func_32()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5] || Global_1574629.f_18 != 0)
	{
		iLocal_36 = 0;
		iLocal_37 = 0;
		iLocal_39 = 0;
		iLocal_38 = 0;
		return;
	}
	if (iLocal_37 >= 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		Var0 = { -1003f, -3007.9f, 15.2f };
		iLocal_39 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 3f, joaat("schafter6"), 65602);
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_36, iLocal_38))
	{
		iVar3 = (-1 + iLocal_38);
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_39, iVar3, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar4, false);
			ENTITY::SET_ENTITY_DYNAMIC(iVar4, true);
			PED::SET_PED_CONFIG_FLAG(iVar4, 106, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 107, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 108, false);
			MISC::SET_BIT(&iLocal_36, iLocal_38);
			iLocal_37++;
		}
	}
	iLocal_38++;
	if (iLocal_38 >= (8 - 1))
	{
		iLocal_38 = 0;
	}
}

void func_33()
{
	struct<3> Var0;
	int iVar3;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5] || Global_1574629.f_18 != 0)
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	Var0 = { -952.13f, -2990.26f, 22.73f };
	iVar3 = 1906226714;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		iLocal_31 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 2f, joaat("jet"), 16386);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_31))
	{
		return;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_32))
	{
		iLocal_32 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
		return;
	}
	INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_31, iLocal_32, iVar3);
}

void func_34()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (Global_1958759 == -1)
	{
		func_38();
		return;
	}
	iVar0 = (Global_1958759 - func_37());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		func_38();
		return;
	}
	sVar1 = func_36(&(Global_4718592.f_128495[iVar0 /*565*/]));
	if (!MISC::ARE_STRINGS_EQUAL("FIX_BIL_MCS2", sVar1) && !MISC::ARE_STRINGS_EQUAL("FIX_TRIP2_MCS1", sVar1))
	{
		func_38();
		return;
	}
	iLocal_30 = 1;
	if (CUTSCENE::HAS_CUTSCENE_LOADED() && !Global_1058362)
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	Global_1058362 = 1;
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	func_20(&uLocal_28, 0, 0);
	iVar2 = func_35(&uLocal_28, 0, 0);
	iVar3 = CUTSCENE::_0x971D7B15BCDBEF99() + 5000;
	if (iVar2 > iVar3)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

int func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_36(var uParam0)
{
	return uParam0;
}

int func_37()
{
	if (Global_4718592.f_138118 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_38()
{
	func_22(&uLocal_28);
	if (iLocal_30)
	{
		iLocal_30 = 0;
		Global_1058362 = 0;
	}
}

void func_39()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_19(&uLocal_20))
	{
		MISC::SET_BIT(&Global_7825, 2);
		if (func_30(&uLocal_20, 60000, 0))
		{
			func_31(&uLocal_20, 0, 0);
			func_22(&uLocal_20);
		}
	}
	if (func_19(&uLocal_18) && func_30(&uLocal_18, 1000, 0))
	{
		if (iLocal_27 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_27 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_27, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_30(&uLocal_18, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_27))
			{
				AUDIO::STOP_SOUND(iLocal_27);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_27);
			iLocal_27 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_31(&uLocal_18, 0, 0);
			func_22(&uLocal_18);
		}
	}
	if (!iLocal_12 && !func_49())
	{
		return;
	}
	iLocal_12 = 1;
	MISC::SET_BIT(&Global_7825, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_11))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_11 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_11, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_11, 8000);
			iVar1 = func_48(7868, -1, 0);
			func_45(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_22 = { ENTITY::GET_ENTITY_COORDS(iLocal_11, false) };
			iLocal_25 = 0;
		}
	}
	else
	{
		func_44();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_26 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_26 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_26, "07", iLocal_11, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_13)
			{
				if (func_30(&uLocal_14, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_11, false);
					func_31(&uLocal_14, 0, 0);
					func_22(&uLocal_14);
					func_20(&uLocal_16, 0, 0);
					iLocal_13 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_35(&uLocal_16, 0, 0)) / SYSTEM::TO_FLOAT(func_43()));
				fVar47 = (SYSTEM::TO_FLOAT(func_35(&uLocal_14, 0, 0)) / SYSTEM::TO_FLOAT(func_42()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_40(Local_22, func_41(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_11, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_25++;
					Local_22 = { ENTITY::GET_ENTITY_COORDS(iLocal_11, false) };
					func_31(&uLocal_14, 0, 0);
					func_22(&uLocal_14);
					if (func_42() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_11);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_26))
						{
							AUDIO::STOP_SOUND(iLocal_26);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_26);
						iLocal_26 = -1;
						func_20(&uLocal_18, 0, 0);
						func_20(&uLocal_20, 0, 0);
						func_31(&uLocal_16, 0, 0);
						func_22(&uLocal_16);
						Local_22 = { 0f, 0f, 0f };
						iLocal_25 = 0;
						iLocal_12 = 0;
						iLocal_13 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_40(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_41()
{
	switch (iLocal_25)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_42()
{
	switch (iLocal_25)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_43()
{
	return 3150;
}

void func_44()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_11, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_11, Var0, 2, true);
}

void func_45(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1574907;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_49()
{
	if (((((((func_53(22107, -1) && Global_2671444 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_52(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715542.f_3076.f_178 >= 1) && Global_2715542.f_3076.f_178 < 4) && func_51()) && func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (func_53(15476, -1) && func_48(5452, func_47(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_47();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_54()
{
	if (func_57())
	{
		func_31(&uLocal_196, 1, 0);
	}
	if (func_56())
	{
		if (!iLocal_193)
		{
			Global_262145.f_12919 = 1;
			Global_262145.f_12920 = 1;
			Global_262145.f_12921 = 1;
			Global_262145.f_12922 = 1;
			Global_262145.f_12923 = 1;
			Global_262145.f_12924 = 1;
			Global_262145.f_12925 = 1;
			Global_262145.f_12926 = 1;
			if (func_57())
			{
				Global_2703656.f_847.f_16 = 1;
				iLocal_192 = 1;
			}
			else if (!func_30(&uLocal_196, 1000, 1))
			{
				iLocal_192 = 1;
			}
			iLocal_193 = 1;
		}
		if (func_57() && func_55())
		{
			Global_2703656.f_847.f_16 = 1;
		}
	}
	else if (iLocal_193)
	{
		Global_262145.f_12919 = 0;
		Global_262145.f_12920 = 0;
		Global_262145.f_12921 = 0;
		Global_262145.f_12922 = 0;
		Global_262145.f_12923 = 0;
		Global_262145.f_12924 = 0;
		Global_262145.f_12925 = 0;
		Global_262145.f_12926 = 0;
		if (func_57())
		{
			Global_2703656.f_847.f_16 = 1;
		}
		iLocal_193 = 0;
	}
	if (iLocal_192)
	{
		Global_1938241.f_44 = 1;
		if (!func_19(&uLocal_194))
		{
			func_20(&uLocal_194, 1, 0);
		}
		if ((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_30(&uLocal_194, 2000, 1))
		{
			Global_1938241.f_44 = 0;
			iLocal_192 = 0;
			func_22(&uLocal_194);
		}
	}
}

var func_55()
{
	return Global_1964196;
}

int func_56()
{
	if (!func_21(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_30)
	{
		case 83:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.2475f, 320.8778f, 186.3198f, -797.2629f, 328.7055f, 189.591f, 6.6875f, false, true, 0);
			break;
		
		case 84:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.5227f, 320.9101f, 216.0381f, -797.2699f, 328.7055f, 219.3134f, 6.6875f, false, true, 0);
			break;
		
		case 85:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -763.4833f, 329.0945f, 195.0859f, -763.2568f, 336.8706f, 198.3614f, 6.6875f, false, true, 0);
			break;
	}
	return 0;
}

int func_57()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_58()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	func_74(1, Local_188);
	func_72(Local_190);
	if (PLAYER::PLAYER_ID() != func_5())
	{
		if (func_71(PLAYER::PLAYER_ID()))
		{
			bVar0 = true;
			if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_70(PLAYER::PLAYER_ID())) && !func_74(1, Local_188)) && !func_72(Local_190)) && !Global_1946858) && !func_69())
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (Global_2359296[func_68() /*5559*/].f_675.f_2 != -1 && MISC::IS_BIT_SET(Global_1585844[Global_2359296[func_68() /*5559*/].f_675.f_2 /*142*/].f_103, 0))
					{
						func_63(1, 0, 1, 0, 0);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!iLocal_187)
		{
			func_62(45, 2, 1);
			func_62(45, 8, 1);
			iLocal_187 = 1;
		}
	}
	else if (iLocal_187)
	{
		func_59(45, 2, 1);
		func_59(45, 8, 1);
		iLocal_187 = 0;
	}
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_61() == 0)
		{
			iVar0 = func_48(func_60(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_45(func_60(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10851;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12597;
}

int func_61()
{
	return Global_31505;
}

void func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_61() == 0)
		{
			iVar0 = func_48(func_60(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_45(func_60(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

void func_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam0)
	{
		func_67(2);
	}
	else
	{
		func_67(1);
	}
	if (bParam1)
	{
		func_67(11);
	}
	if (bParam2)
	{
		func_67(32);
		if (bParam3)
		{
			if (MISC::IS_BIT_SET(Global_1585844[func_66() /*142*/].f_103, 0))
			{
				func_67(33);
			}
		}
		else
		{
			func_65(33);
		}
	}
	if (bParam4)
	{
		func_67(36);
	}
	if (func_64(36))
	{
		if (func_64(2))
		{
			func_65(36);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2810287.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

bool func_64(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32));
}

void func_65(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

int func_66()
{
	return Global_2359296[func_68() /*5559*/].f_675.f_2;
}

void func_67(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_69()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_70(int iParam0)
{
	if (iParam0 != func_5() && func_4(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return Global_2689156[iParam0 /*453*/].f_319.f_6 == 122;
			}
		}
	}
	return 0;
}

int func_72(var uParam0, var uParam1)
{
	if (func_11() && (func_73(&(Global_22830.f_1), "DEL_VEH_SEL0") || func_73(&(Global_22830.f_1), "DEL_VEH_SEL3")))
	{
		func_31(&uParam0, 1, 0);
		return 1;
	}
	else if (func_19(&uParam0) && !func_30(&uParam0, 1000, 1))
	{
		return 1;
	}
	return 0;
}

int func_73(char* sParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, var uParam1, var uParam2)
{
	if (Global_75021)
	{
		func_31(&uParam1, 1, 0);
		return 1;
	}
	else if ((iParam0 && func_19(&uParam1)) && !func_30(&uParam1, 1000, 1))
	{
		return 1;
	}
	return 0;
}

void func_75()
{
	int iVar0;
	
	if ((func_6() && func_82(Global_4718592.f_138117)) && func_81() == 26)
	{
		if (!iLocal_186)
		{
			iVar0 = func_76();
			if (iVar0 != -1)
			{
				if (func_19(&(Global_1890187[iVar0 /*105*/].f_31)))
				{
					if (func_30(&(Global_1890187[iVar0 /*105*/].f_31), 37500, 0))
					{
						Global_2715542.f_6286 = -1;
						iLocal_186 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_186)
	{
		iLocal_186 = 0;
	}
}

int func_76()
{
	return func_77();
}

int func_77()
{
	struct<13> Var0;
	
	Var0 = { func_79() };
	if (func_78(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_5();
}

bool func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_79()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_80(iVar0))
		{
			return Global_2715542.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_80(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2715542.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_81()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192;
}

bool func_82(int iParam0)
{
	return iParam0 == 88;
}

void func_83()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !Global_2667222.f_2678) && !MISC::IS_BIT_SET(Global_1946934, 27))
	{
		if ((((MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 4) && Global_1946928 == 4) && Global_1946934.f_508) && Global_1946934.f_516) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_fixer_hq")) == 1)
		{
			iVar0 = func_85(PLAYER::PLAYER_ID());
			if (func_84(iVar0) == 24)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (func_19(&uLocal_184))
					{
						if (func_30(&uLocal_184, 20000, 1))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							func_22(&uLocal_184);
						}
					}
					else
					{
						func_20(&uLocal_184, 1, 0);
					}
				}
				else if (func_19(&uLocal_184))
				{
					func_22(&uLocal_184);
				}
			}
			else
			{
				func_22(&uLocal_184);
			}
		}
		else
		{
			func_22(&uLocal_184);
		}
	}
	else
	{
		func_22(&uLocal_184);
	}
}

int func_84(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_85(int iParam0)
{
	if (iParam0 != func_5() && func_4(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

void func_86()
{
	if (!func_93())
	{
		if (func_19(&uLocal_182))
		{
			func_22(&uLocal_182);
		}
		iLocal_181 = 0;
		iLocal_180 = 0;
		return;
	}
	if (((!MISC::IS_BIT_SET(Global_1977217.f_1, 17) && !MISC::IS_BIT_SET(Global_1977217.f_1, 0)) && func_92(PLAYER::PLAYER_ID())) && !func_90(PLAYER::PLAYER_ID(), 0))
	{
		if (func_19(&(Global_1977217.f_4)))
		{
			if (iLocal_181)
			{
				func_22(&(Global_1977217.f_4));
				func_87(&(Global_1977217.f_4), iLocal_180, 0, 0);
				iLocal_181 = 0;
			}
			if (!func_19(&uLocal_182))
			{
				MISC::_COPY_MEMORY(&uLocal_182, &(Global_1977217.f_4), 2);
				iLocal_180 = 0;
			}
		}
		else if (func_19(&uLocal_182))
		{
			iLocal_180 = func_35(&uLocal_182, 0, 0);
			iLocal_181 = 1;
			func_22(&uLocal_182);
		}
	}
}

void func_87(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_89(bParam2, bParam3), func_88(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_88(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_89(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, func_91(iParam1));
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		default:
	}
	return -1;
}

int func_92(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, 2);
	}
	return 0;
}

int func_93()
{
	if ((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || func_6()) || func_96()) || func_95(PLAYER::PLAYER_ID())) || func_94(PLAYER::PLAYER_ID())) || !MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_139, 22))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2783989;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

int func_96()
{
	if (func_99(PLAYER::PLAYER_ID(), 0) && func_97(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_97(int iParam0)
{
	return func_98(iParam0, 20);
}

bool func_98(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_99(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_101()
{
	int iVar0;
	
	if (Global_4718592.f_86750 == Global_262145.f_31343[5])
	{
		if (!iLocal_161)
		{
			iLocal_161 = 1;
		}
	}
	else if (iLocal_161)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-935.7f, -2992.2f, 13.9f, "v_hanger");
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::DISABLE_INTERIOR(iVar0, false);
			iLocal_161 = 0;
		}
	}
}

void func_102()
{
	if (func_106() && (((MISC::IS_BIT_SET(Global_1946934.f_4, 2) || Global_2667222.f_2679) || func_103(PLAYER::PLAYER_PED_ID()) >= 10) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())))
	{
		if (func_21(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4922.84f, -4907.485f, 2.228949f, 4919.344f, -4904.029f, 4.454555f, 3.25f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 51, true);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_104(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_43560[iVar1 /*5*/].f_3;
}

int func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43560[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43560[iVar0 /*5*/].f_1)
		{
			return Global_43560[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_106()
{
	return func_107(PLAYER::PLAYER_ID());
}

bool func_107(int iParam0)
{
	return func_108(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_108(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_109()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_344, 31) && !func_110(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
		if (Global_1836747.f_67)
		{
			iVar0 = (Global_2715542.f_4316.f_378[70] - 2000);
			if (!func_19(&(Global_2715542.f_4316.f_227[70 /*2*/])) || func_30(&(Global_2715542.f_4316.f_227[70 /*2*/]), iVar0, 1))
			{
				func_31(&(Global_2715542.f_4316.f_227[70 /*2*/]), 1, 0);
				iLocal_160 = 1;
				Global_2715542.f_4316.f_378[70] = Global_262145.f_25437;
			}
		}
		else if (iLocal_160)
		{
			func_22(&(Global_2715542.f_4316.f_227[70 /*2*/]));
			Global_2715542.f_4316.f_378[70] = Global_262145.f_25437;
			iLocal_160 = 0;
		}
	}
}

int func_110(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_403.f_3, 6);
	}
	return 0;
}

void func_111()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if ((func_113(PLAYER::PLAYER_ID()) && func_112(PLAYER::PLAYER_ID()) != 229) && func_112(PLAYER::PLAYER_ID()) != 230)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660673)
		{
			if (Global_1660673.f_1[iVar1] == 1572255940)
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			Global_1660673.f_1[Global_1660673] = 1572255940;
			Global_1660673++;
		}
	}
	else if (Global_1660673 > 0)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660673)
		{
			if (Global_1660673.f_1[iVar1] == 1572255940)
			{
				Global_1660673.f_1[iVar1] = 0;
				Global_1660673 = (Global_1660673 - 1);
			}
			iVar1++;
		}
	}
}

int func_112(int iParam0)
{
	if (func_99(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_98(iParam0, 9);
	}
	return 0;
}

void func_114()
{
	if (Global_2810287.f_962)
	{
		if (Global_2703656.f_75.f_16)
		{
			Global_2810287.f_962 = 0;
		}
	}
}

void func_115()
{
	if (Global_1977096.f_3 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_1977153.f_1, 11) && !MISC::IS_BIT_SET(Global_1977096.f_10, 1))
		{
			if (func_116() && MISC::IS_BIT_SET(Global_1977096.f_10, 0))
			{
				if (Global_262145.f_30573)
				{
					Global_262145.f_30573 = 0;
				}
			}
		}
	}
	else if (Global_1977096.f_3 != 0)
	{
		if (!Global_262145.f_30573)
		{
			Global_262145.f_30573 = 1;
		}
	}
}

int func_116()
{
	if (func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		return func_117(PLAYER::PLAYER_PED_ID(), 987.32f, 79.32f, 79.99f, 0) <= 20f;
	}
	return 0;
}

float func_117(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_118()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !func_7()) || func_107(PLAYER::PLAYER_ID()))
	{
		return;
	}
	Var5 = { func_120() };
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var2 = { func_119(iVar0) };
		if (!func_24(Var2))
		{
			fVar1 = SYSTEM::VDIST2(Var2, Var5);
			if (fVar1 > 4E+08f)
			{
				bVar8 = true;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if (func_4(PLAYER::PLAYER_ID(), 1, 1))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

Vector3 func_119(int iParam0)
{
	if (iParam0 < 17)
	{
		return Global_262145.f_6158[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_120()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	return ENTITY::GET_ENTITY_COORDS(iVar0, false);
}

void func_121()
{
	int iVar0;
	int iVar1;
	
	if (!Global_1659375.f_556)
	{
		Global_1659375.f_556 = 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				func_122(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1386010354:
			func_123(iParam0);
			break;
	}
}

void func_123(int iParam0)
{
	struct<10> Var0;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var0.f_3 = 4;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10);
	bVar11 = false;
	iVar10 = 0;
	while (iVar10 < Var0.f_3)
	{
		if (NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[iVar10])
		{
			bVar11 = true;
		}
		iVar10++;
	}
	if (bVar11)
	{
		if (NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[0])
		{
			func_124(Var0.f_2, &(Var0.f_3), Var0.f_8, Var0.f_9);
		}
		else
		{
			iVar12 = -1;
			func_124(Var0.f_2, &(Var0.f_3), Var0.f_8, iVar12);
		}
	}
}

void func_124(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam1 > 4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] == 0)
		{
			(*uParam1)[iVar0] = -1;
		}
		iVar0++;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!(*uParam1)[iVar0] == -1)
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar4 = (*uParam1)[iVar0];
		if (iVar4 < 0)
		{
			iVar4 = (iVar4 * -1);
		}
		iVar3 = (2147483647 - iVar2);
		if (iVar4 > iVar3)
		{
			iVar2 = (iVar4 - iVar3);
		}
		else
		{
			iVar2 = (iVar2 + iVar4);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_9[iVar0] = -1;
		iVar0++;
	}
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_3 = uParam0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_2 = iVar2;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/] = 0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_4[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if (iParam2 == -1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_14 = 0;
		}
	}
	func_126(PLAYER::PLAYER_ID(), 0, 57348, 0);
	func_125();
	Global_4516656.f_943 = 0;
}

void func_125()
{
	Global_4516656.f_944 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_126(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_137())
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
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (!func_7())
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
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_135(PLAYER::PLAYER_ID(), 0) && !func_134()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_131(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_130(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_129();
					func_128();
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
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_130(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_127(Global_4718592.f_138117))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
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

bool func_127(int iParam0)
{
	return iParam0 == 17;
}

void func_128()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_129()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
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

void func_131(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
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
			if (bParam0 == 1)
			{
				func_133();
			}
			else if (!MISC::IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_135(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_132(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_132(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_133()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_134()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

bool func_135(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_136(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
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

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_137()
{
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592 == 0)
	{
		if (!iLocal_90)
		{
			iVar0 = 0;
			while (iVar0 < 65)
			{
				iLocal_91[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && (func_140(Global_794709.f_177589[iVar0 /*13*/].f_1) || func_139(Global_794709.f_177589[iVar0 /*13*/].f_1)))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					iVar1 = (iVar0 / 32);
					iVar2 = (iVar0 % 32);
					MISC::SET_BIT(&(iLocal_91[iVar1]), iVar2);
				}
				iVar0++;
			}
			iLocal_90 = 1;
		}
	}
	else if (iLocal_90)
	{
		iVar0 = 0;
		while (iVar0 < 2018)
		{
			iVar3 = (iVar0 / 32);
			iVar4 = (iVar0 % 32);
			if (MISC::IS_BIT_SET(iLocal_91[iVar3], iVar4))
			{
				MISC::SET_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 65)
		{
			iLocal_91[iVar0] = 0;
			iVar0++;
		}
		iLocal_90 = 0;
	}
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31350[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_141()
{
	if (func_143())
	{
		func_142(0);
	}
}

void func_142(int iParam0)
{
	Global_76659 = iParam0;
}

bool func_143()
{
	return Global_76659;
}

void func_144()
{
	if (PLAYER::PLAYER_ID() == func_5())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 6))
	{
		iLocal_88 = 1;
		iLocal_89 = 1;
	}
	else
	{
		if (iLocal_88)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1965719) && !ENTITY::IS_ENTITY_DEAD(Global_1965719, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1965719))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1965719, false);
					iLocal_88 = 0;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_1965719);
				}
			}
			else
			{
				iLocal_88 = 0;
			}
		}
		if (iLocal_89)
		{
			if (((!HUD::IS_WARNING_MESSAGE_ACTIVE() && func_7()) && CAM::IS_SCREEN_FADED_IN()) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2810287.f_298) && !ENTITY::IS_ENTITY_DEAD(Global_2810287.f_298, false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2810287.f_298))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_2810287.f_298, false);
						iLocal_89 = 0;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2810287.f_298);
					}
				}
			}
		}
	}
}

void func_145()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_80 = 0;
		return;
	}
	if (Global_262145.f_30684[7] != Global_4718592.f_86750)
	{
		iLocal_80 = 0;
		return;
	}
	if (iLocal_80)
	{
		return;
	}
	Global_4980736.f_88118[66 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[67 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[68 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[69 /*926*/].f_839.f_8 = 0f;
	MISC::SET_BIT(&(Global_4980736.f_88118[66 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[67 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[68 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[69 /*926*/].f_530), 25);
	iLocal_80 = 1;
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (func_156(PLAYER::PLAYER_ID()) && func_155(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_150(PLAYER::PLAYER_ID(), 0, 1);
		if ((iVar0 != 7 && iVar0 != 8) && iVar0 != 9)
		{
			func_148(0, 8, 1);
		}
		if (func_147())
		{
			iVar1 = 0;
			while (iVar1 <= 21)
			{
				if (iVar1 < 4 || iVar1 > 7)
				{
					Global_22830.f_1610[iVar1] = 0;
				}
				if (iVar1 > 18)
				{
					StringCopy(&(Global_22830.f_73[iVar1 /*6*/]), "CELL_MP_302", 24);
				}
				iVar1++;
			}
		}
	}
}

bool func_147()
{
	return MISC::IS_BIT_SET(Global_1973263, 1);
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	func_45(func_149(iParam0, iParam2), iParam1, -1, 1, 0);
	switch (iParam2)
	{
		case 0:
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_411[iParam0] = iParam1;
			break;
		
		case 1:
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_468[iParam0] = iParam1;
			break;
	}
}

int func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8749;
					break;
				
				case 1:
					return 9631;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8750;
					break;
				
				case 1:
					return 9911;
					break;
			}
			break;
		
		case 2:
			return 8751;
			break;
		
		case 3:
			return 8752;
			break;
		
		case 4:
			return 8753;
			break;
		
		case 5:
			return 8754;
			break;
		
		case 6:
			return 8755;
			break;
		
		case 7:
			return 8756;
			break;
		
		case 8:
			return 8757;
			break;
		
		case 9:
			return 8758;
			break;
		
		case 10:
			return 8759;
			break;
		
		case 11:
			return 8760;
			break;
		
		case 12:
			return 8761;
			break;
		
		case 13:
			return 8762;
			break;
		
		case 14:
			return 8763;
			break;
		
		case 15:
			return 8764;
			break;
		
		case 16:
			return 8765;
			break;
		
		case 17:
			return 8766;
			break;
		
		case 18:
			return 8767;
			break;
		
		case 19:
			return 8768;
			break;
		
		case 20:
			return 8769;
			break;
		
		case 21:
			return 8770;
			break;
		
		case 22:
			return 8771;
			break;
		
		case 23:
			return 8772;
			break;
		
		case 24:
			return 8773;
			break;
		
		case 25:
			return 8774;
			break;
		
		case 26:
			return 8775;
			break;
		
		case 27:
			return 8776;
			break;
		
		case 28:
			return 8777;
			break;
		
		case 29:
			return 8778;
			break;
		
		case 30:
			return 8779;
			break;
		
		case 31:
			return 8780;
			break;
		
		case 32:
			return 8781;
			break;
		
		case 33:
			return 8782;
			break;
		
		case 34:
			return 8783;
			break;
		
		case 35:
			return 8784;
			break;
		
		case 36:
			return 8785;
			break;
		
		case 37:
		case 38:
		case 39:
		case 40:
			return 8786;
			break;
	}
	return 8749;
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_5())
	{
		switch (iParam2)
		{
			case 0:
				iVar0 = Global_1853128[iParam0 /*888*/].f_267.f_411[iParam1];
				break;
			
			case 1:
				iVar0 = Global_1853128[iParam0 /*888*/].f_267.f_468[iParam1];
				break;
		}
		iVar1 = func_154(iVar0);
		if (iVar1 != -1)
		{
			if ((func_153(iParam0, iVar1, iParam2) && func_152(iParam0, iVar1, iParam2)) || func_151(iVar1))
			{
				return iVar0;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		iVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_409.f_1, iVar0);
				break;
			}
	}
	return 1;
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		iVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_409, iVar0);
				break;
			}
	}
	return 1;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 10;
		
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 5;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 2;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 12;
		
		case 15:
			return 11;
		
		case 16:
			return 13;
		
		case 17:
			return 9;
		
		case 18:
			return 17;
		
		case 19:
			return 18;
		
		case 20:
			return 19;
		
		case 21:
			return 14;
		
		case 22:
			return 15;
		
		case 23:
			return 16;
		
		default:
	}
	return -1;
}

int func_155(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_460.f_3, 3);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_157(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_84(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

void func_158()
{
	if (!func_160(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 1))
	{
		if (((((((((((((func_159(0) && func_159(1)) && func_159(2)) && func_159(3)) && func_159(4)) && func_159(5)) && func_159(6)) && func_159(7)) && func_159(8)) && func_159(9)) && func_159(10)) && func_159(11)) && func_159(12)) && func_159(13))
		{
			MISC::SET_BIT(&(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3), 1);
		}
	}
}

bool func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_409, iVar0);
}

bool func_160(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_267.f_403 != 0;
}

void func_161()
{
	int iVar0;
	
	iVar0 = func_47();
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (!iLocal_85[iVar0])
		{
			if (func_53(31736, -1))
			{
				func_162(32314, 1, -1);
				iLocal_85[iVar0] = 1;
			}
		}
	}
}

void func_162(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_47();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_163()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_82)
	{
		iVar0 = func_48(7854, -1, 0);
		if (iVar0 != 0)
		{
			iVar1 = iVar0;
			func_164(iVar1);
			iLocal_82 = 1;
		}
		else
		{
			iLocal_82 = 1;
		}
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_45(7854, iParam0, -1, 1, 0);
	func_165(7285, 122, -1, 1);
	Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_349 = iParam0;
}

void func_165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_46(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_46(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_46(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_46(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_46(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_46(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_46(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_46(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_46(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_46(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_46(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_46(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_46(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_46(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_46(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_46(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_46(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_46(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_46(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_46(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_46(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_46(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_46(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_46(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_46(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_46(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_46(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_46(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_46(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_46(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_46(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_46(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_46(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_46(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_46(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_46(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_46(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_46(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_46(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_46(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_46(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_46(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_46(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_46(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_46(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_46(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_46(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_46(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_46(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_46(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_46(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_46(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_166()
{
	if (!func_168(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_106())
	{
		return;
	}
	func_167();
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
}

void func_167()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

bool func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_112(iParam0) == 256)
	{
		return func_171(iParam0);
	}
	return -1;
}

int func_171(int iParam0)
{
	if (func_99(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

void func_172()
{
	if (!func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_174(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_173())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.262f, -79.05004f, -100.0031f, -1008.166f, -79.02464f, -98.00307f, 0.9f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.16f);
	}
}

int func_173()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_505, 29) || MISC::IS_BIT_SET(Global_1946934.f_505, 30))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_84(Global_2689156[iParam0 /*453*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_175()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_174(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_173())
	{
		return;
	}
	if (!iLocal_78)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1009.889f, -85.44301f, -100.4031f, -1009.788f, -94.42639f, -97.56435f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 0;
			iLocal_78 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1013.188f, -49.82637f, -100.0031f, -1023.535f, -49.96507f, -97.50307f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 1;
			iLocal_78 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1008.102f, -49.8092f, -100.0031f, -1002.001f, -49.79685f, -97.46447f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 2;
			iLocal_78 = 1;
		}
	}
	else
	{
		func_179(iLocal_79, &Var0, &fVar3);
		if (CAM::IS_SCREEN_FADED_OUT() && func_177(Var0, fVar3, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_176("MUS_STIO_DOOR_R", -1);
			iLocal_78 = 0;
		}
	}
}

void func_176(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_177(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22691.f_6 = 1;
	if (Global_2703656.f_924 && Global_2703656.f_932)
	{
		func_178(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2703656.f_924)
		{
			func_178(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703656.f_924 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2703656.f_924 = 0;
				Global_2703656.f_925 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703656.f_926 || !Param0.f_1 == Global_2703656.f_926.f_1) || !Param0.f_2 == Global_2703656.f_926.f_2) || !fParam3 == Global_2703656.f_929)
	{
		if (Global_2703656.f_924 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703656.f_930) < 10000)
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2703656.f_925 = 1;
		}
		else
		{
			Global_2703656.f_925 = 0;
		}
		Global_2703656.f_926 = { Param0 };
		Global_2703656.f_929 = fParam3;
		Global_2703656.f_924 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703656.f_924 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		iParam7 = iParam7;
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (Global_2703656.f_931 > -1)
		{
			Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_924 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_178(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_924 = 1;
		}
	}
	if (Global_2703656.f_924)
	{
		Global_22691.f_6 = 1;
		Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
		if (Global_2703656.f_931 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2703656.f_926) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_178(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2703656.f_932 = 1;
						return 0;
					}
				}
				func_178(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

void func_178(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_128();
}

int func_179(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1010.057f, -84.228f, -100.4031f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 1:
			*uParam1 = { -1012.153f, -49.7938f, -100.4031f };
			*uParam2 = 270.5516f;
			return 1;
			break;
		
		case 2:
			*uParam1 = { -1009.128f, -49.7938f, -100.4031f };
			*uParam2 = 90.9647f;
			return 1;
			break;
	}
	return 0;
}

void func_180()
{
	if (!func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_174(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_173())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.787f, -47.99169f, -100.3851f, -1010.684f, -55.70412f, -98.15313f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.917f, -85.33492f, -100.3889f, -1011.801f, -85.40305f, -98.14022f, 3.5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.499f);
	}
}

void func_181()
{
	if (func_112(PLAYER::PLAYER_ID()) != 262)
	{
		func_182();
		return;
	}
	if (iLocal_10)
	{
		return;
	}
	iLocal_9 = 1;
	if (!func_30(&uLocal_7, 5000, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 18, true);
		PAD::DISABLE_CONTROL_ACTION(2, 18, true);
		PAD::DISABLE_CONTROL_ACTION(1, 18, true);
		return;
	}
	iLocal_10 = 1;
}

void func_182()
{
	func_22(&uLocal_7);
	if (iLocal_9)
	{
		iLocal_9 = 0;
	}
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
}

void func_183()
{
	if (!func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (Global_262145.f_31488 == 0 && iLocal_3 == 0)
	{
		return;
	}
	if (func_184() && Global_262145.f_31488)
	{
		Global_262145.f_31488 = 0;
		iLocal_3 = 1;
	}
	if (!func_184() && iLocal_3)
	{
		Global_262145.f_31488 = 1;
		iLocal_3 = 0;
	}
}

int func_184()
{
	int iVar0;
	
	if ((func_187(PLAYER::PLAYER_ID(), 1) || (func_186(PLAYER::PLAYER_ID()) && !func_99(PLAYER::PLAYER_ID(), 0))) || func_185())
	{
		return 1;
	}
	if (func_99(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_112(PLAYER::PLAYER_ID());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
			case 262:
			case 263:
			case 285:
			case 284:
			case 264:
				return 1;
			}
		
		default:
	}
	return 0;
}

var func_185()
{
	return Global_1835491;
}

int func_186(int iParam0)
{
	if (func_95(iParam0))
	{
		return 1;
	}
	if (func_113(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_188(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853128[iParam0 /*888*/] == 2 || Global_1853128[iParam0 /*888*/] == 1) || Global_1853128[iParam0 /*888*/] == 0) || Global_1853128[iParam0 /*888*/] == 3) || Global_1853128[iParam0 /*888*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_188(int iParam0)
{
	return func_189(iParam0);
}

bool func_189(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

void func_190()
{
	int iVar0;
	int iVar1;
	
	if (!func_4(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (!func_174(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (func_173())
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if ((((Global_1578985.f_3 != -1 || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (!(Global_1578985.f_2 == 11 || Global_1578985.f_2 == 12) && !MISC::IS_BIT_SET(iLocal_4, 0))
	{
		if (PED::GET_CLOSEST_PED(-1004.985f, -78.122f, -98.972f, 0.5f, true, true, &iVar0, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
			MISC::SET_BIT(&iLocal_4, 0);
		}
	}
	if (Global_1578985.f_2 == 8 && !MISC::IS_BIT_SET(iLocal_4, 1))
	{
		if (PED::GET_CLOSEST_PED(-1004.94f, -80.51f, -98.972f, 0.5f, true, true, &iVar1, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar1, false, false);
			MISC::SET_BIT(&iLocal_4, 1);
		}
	}
}

void func_191()
{
	int iVar0;
	char* sVar1;
	
	if (func_209(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_203();
		if ((iVar0 != func_5() && func_195(iVar0)) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_76.f_1))
			{
				sVar1 = func_194(0);
				Local_76.f_0 = MISC::GET_HASH_KEY(sVar1);
				if (func_193(Local_76.f_0))
				{
					Local_76.f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_76.f_0, -1024.45f, -422.027f, 72.259f, false, false, false);
					ENTITY::SET_ENTITY_ROTATION(Local_76.f_1, 0f, 0f, 132f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_76.f_1, true);
				}
			}
		}
		else
		{
			func_192();
		}
	}
	else
	{
		func_192();
	}
}

void func_192()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_76.f_1));
	}
}

bool func_193(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sf_prop_sf_scr_m_lrg_01a";
			break;
		
		case 1:
			return "sf_prop_sf_scr_m_lrg_01b";
			break;
		
		case 2:
			return "sf_prop_sf_scr_m_lrg_01c";
			break;
		
		case 3:
			return "sf_prop_sf_monitor_b_02b";
			break;
		
		case 4:
			return "prop_npc_phone";
			break;
	}
	return "INVALID";
}

int func_195(int iParam0)
{
	if (!func_200(iParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1946934.f_10, 5))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_199(iParam0) && MISC::IS_BIT_SET(Global_1977217.f_1, 8)) && !func_198())
		{
			return 1;
		}
	}
	else if (func_197(iParam0) && func_196() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
}

bool func_197(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_5, 18);
}

bool func_198()
{
	return func_53(28257, -1);
}

int func_199(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, 0);
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_201() == 1)
	{
		return 0;
	}
	return 1;
}

int func_201()
{
	return func_202(PLAYER::PLAYER_ID());
}

int func_202(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

int func_203()
{
	return func_204(PLAYER::PLAYER_ID());
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	if (func_208(iParam0) != -1)
	{
		iVar0 = func_84(func_208(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_206(iParam0, 0))
			{
				return func_205(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_5();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_5();
}

int func_205(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_5();
}

bool func_206(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_207(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_5();
}

int func_207(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_5())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_4(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_209(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_84(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_210()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_215())
		{
			if (func_214() && func_213() != 18)
			{
				iVar0 = func_77();
				if (iVar0 != func_5() && func_212(iVar0))
				{
					if (Global_4718592.f_527 != Global_2711168[2])
					{
						Global_4718592.f_527 = Global_2711168[2];
						iLocal_75 = Global_2711168[2];
					}
				}
				else if (Global_4718592.f_527 != 1)
				{
					Global_4718592.f_527 = 1;
					iLocal_75 = -1;
				}
			}
			else if (func_211())
			{
				if (iLocal_75 != -1)
				{
					if (Global_2711168[2] != iLocal_75)
					{
						Global_2711168[2] = iLocal_75;
					}
					if (Global_4718592.f_527 != Global_2711168[2])
					{
						Global_4718592.f_527 = Global_2711168[2];
					}
				}
			}
		}
	}
	else if (iLocal_75 != -1)
	{
		iLocal_75 = -1;
	}
}

bool func_211()
{
	return Global_1923723.f_3;
}

int func_212(int iParam0)
{
	if ((func_90(iParam0, 0) && func_90(iParam0, 1)) && func_90(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	return Global_1057405;
}

int func_214()
{
	switch (func_81())
	{
		case 41:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

bool func_215()
{
	return func_140(Global_4718592.f_86750);
}

void func_216()
{
	if (func_174(PLAYER::PLAYER_ID()) && func_173())
	{
		if (Global_2785380 == 102)
		{
			uLocal_58 = Global_2792497[102 /*66*/][0];
		}
		else
		{
			Global_2792497[102 /*66*/][0] = uLocal_58;
		}
	}
}

void func_217()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_BIT_SET(Global_1946934.f_10, 28))
	{
		if (MISC::COMPARE_STRINGS(&(Global_22830.f_1), "OF_PA_MENUI_1b", false, -1) == 0)
		{
			if (!iLocal_62)
			{
				iVar0 = 0;
				iLocal_63[0] = PLAYER::PLAYER_ID();
				iVar0++;
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar2 = iVar1;
					if (!iVar2 == PLAYER::PLAYER_ID())
					{
						if (func_228(iVar2))
						{
							if (iVar0 < 10)
							{
								iLocal_63[iVar0] = iVar2;
							}
						}
					}
					iVar1++;
				}
				iLocal_62 = 1;
			}
			if (iLocal_74)
			{
				if (!func_227() && !PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_74 = 0;
				}
			}
			else if (func_227() || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iVar2 = iLocal_63[Global_22830.f_5996];
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_220(iLocal_60, iLocal_61, iVar2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Interior_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DLC_Fixer_Office_Interior_Scene");
				}
			}
		}
		else
		{
			func_218(Global_22830.f_5996, &iLocal_60, &iLocal_61);
			iLocal_62 = 0;
			iLocal_74 = 1;
		}
	}
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		*iParam1 = 553;
		*iParam2 = 0;
	}
	else
	{
		func_219((iParam0 - 1), iParam1, iParam2);
	}
}

void func_219(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 164;
			break;
		
		case 1:
			*uParam1 = 164;
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam1 = 217;
			break;
		
		case 3:
			*uParam1 = 243;
			break;
		
		case 4:
			*uParam1 = 244;
			break;
		
		case 5:
			*uParam1 = 253;
			break;
		
		case 6:
			*uParam1 = 15;
			break;
		
		case 7:
			*uParam1 = 16;
			break;
		
		case 8:
			*uParam1 = 20;
			break;
		
		case 9:
			*uParam1 = 78;
			break;
		
		case 10:
			*uParam1 = 187;
			break;
		
		case 11:
			*uParam1 = 185;
			break;
		
		case 12:
			*uParam1 = 19;
			break;
		
		case 13:
			*uParam1 = 254;
			break;
		
		case 14:
			*uParam1 = 178;
			break;
		
		case 15:
			*uParam1 = 88;
			break;
		
		case 16:
			*uParam1 = 237;
			break;
		
		case 17:
			*uParam1 = 186;
			break;
		
		case 18:
			*uParam1 = 256;
			break;
		
		case 19:
			*uParam1 = 200;
			break;
		
		case 20:
			*uParam1 = 160;
			break;
	}
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	Global_2725260.f_24 = iParam2;
	CAM::DO_SCREEN_FADE_OUT(500);
	func_226(1);
	func_225(iParam0, iParam1);
	func_221(iParam0, iParam1);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_224(iParam0, iParam1);
	Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_46 = func_223(iVar0);
	func_222(iVar0, &(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_47), &(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_48));
}

int func_222(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
		
		default:
	}
	return -1;
}

int func_224(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (iParam1 == 2)
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

void func_225(var uParam0, var uParam1)
{
	Global_2725260.f_20 = 0;
	Global_2725260.f_19 = 1;
	Global_2725260.f_17 = uParam0;
	Global_2725260.f_18 = uParam1;
}

void func_226(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_514), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_514), 3);
	}
	Global_2725260 = bParam0;
}

int func_227()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4534059 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (((func_4(iParam0, 1, 1) && !func_237(iParam0)) && func_236(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 26))
	{
		if (func_234(iParam0, PLAYER::PLAYER_ID(), 0, 1))
		{
			if (func_233(iParam0, PLAYER::PLAYER_ID()))
			{
				if (!func_70(iParam0) && !func_232(iParam0))
				{
					iVar0 = func_208(PLAYER::PLAYER_ID());
					if (func_201() == func_202(iParam0) || !func_229(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_229(int iParam0)
{
	var uVar0;
	
	uVar0 = { func_230(iParam0) };
	return MISC::IS_BIT_SET(uVar0[0], 1);
}

Vector3 func_230(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946934.f_13[iParam0 /*3*/][0] == -1)
	{
		Global_1946934.f_13[iParam0 /*3*/] = { func_231(iParam0) };
	}
	return Global_1946934.f_13[iParam0 /*3*/];
}

Vector3 func_231(int iParam0)
{
	struct<3> Var0;
	
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 11);
	MISC::SET_BIT(&(Var0[0]), 1);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 4);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[1]), 0);
	MISC::SET_BIT(&(Var0[1]), 6);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 20);
	MISC::SET_BIT(&(Var0[1]), 3);
	MISC::SET_BIT(&(Var0[1]), 21);
	return Var0;
}

bool func_232(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 16);
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_5() && iParam1 != func_5())
	{
		iVar0 = func_205(iParam0);
		if (iVar0 != func_5())
		{
			return iVar0 == func_205(iParam1);
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_235(iParam0, 1, 0) && func_235(iParam1, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_31 == Global_1853128[iParam1 /*888*/].f_267.f_31 && Global_1853128[iParam0 /*888*/].f_267.f_30 == Global_1853128[iParam1 /*888*/].f_267.f_30)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 3) && MISC::IS_BIT_SET(Global_1853128[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
				if (!MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 3) && !MISC::IS_BIT_SET(Global_1853128[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_7 > -1) && Global_2689156[iParam0 /*453*/].f_319.f_6 == Global_2689156[iParam1 /*453*/].f_319.f_6) && Global_2689156[iParam0 /*453*/].f_319.f_7 == Global_2689156[iParam1 /*453*/].f_319.f_7) && Global_2680195.f_903.f_168[iParam0] == Global_2680195.f_903.f_168[iParam1])
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == PLAYER::PLAYER_ID()) && func_4(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 2) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 3)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 5)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 6)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 7)) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (Global_1574980 != 58)
	{
		return;
	}
	if ((!MISC::IS_BIT_SET(Global_1058026.f_15, 19) && !MISC::IS_BIT_SET(Global_1058026.f_15, 20)) && !MISC::IS_BIT_SET(Global_1058026.f_15, 21))
	{
		return;
	}
	NETWORK::NETWORK_BAIL(1, 0, 0);
}

void func_239()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		if (Global_4718592.f_86750 == Global_262145.f_31343[1] && Global_1574954)
		{
			if (Global_1057979.f_5 == 0)
			{
				if (!iLocal_59)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
					iLocal_59 = 1;
				}
			}
			else if (iLocal_59)
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				iLocal_59 = 0;
			}
		}
	}
}

void func_240()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_243();
	}
	else
	{
		func_241();
	}
}

void func_241()
{
	int iVar0;
	
	if (iLocal_56 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (MISC::IS_BIT_SET(iLocal_56, iVar0))
		{
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_242(iVar0), false);
			MISC::CLEAR_BIT(&iLocal_56, iVar0);
		}
		iVar0++;
	}
	iLocal_57 = 0;
	Global_2785470 = 0;
}

char* func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_37_MOTOMAMI";
		
		case 2:
			return "RADIO_12_REGGAE";
		
		case 3:
			return "RADIO_15_MOTOWN";
		
		case 4:
			return "RADIO_16_SILVERLAKE";
		
		case 5:
			return "RADIO_17_FUNK";
		
		case 6:
			return "RADIO_18_90S_ROCK";
		
		case 7:
			return "RADIO_04_PUNK";
		
		case 8:
			return "RADIO_05_TALK_01";
		
		case 9:
			return "RADIO_06_COUNTRY";
		
		case 10:
			return "RADIO_07_DANCE_01";
		
		case 11:
			return "RADIO_08_MEXICAN";
		
		case 12:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 13:
			return "RADIO_13_JAZZ";
		
		case 14:
			return "RADIO_14_DANCE_02";
		
		case 15:
			return "RADIO_20_THELAB";
		
		case 16:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 17:
			return "RADIO_21_DLC_XM17";
		
		case 18:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 19:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 20:
			return "RADIO_27_DLC_PRHEI4";
		
		case 21:
			return "RADIO_01_CLASS_ROCK";
		
		case 22:
			return "RADIO_02_POP";
		
		case 23:
			return "RADIO_03_HIPHOP_NEW";
		
		case 24:
			return "RADIO_09_HIPHOP_OLD";
		
		case 25:
			return "RADIO_11_TALK_02";
		
		default:
	}
	return "OFF";
}

void func_243()
{
	int iVar0;
	int iVar1;
	
	if (!func_244(Global_4718592.f_86750))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		iVar1 = func_48(9876, -1, 0);
		if (!MISC::IS_BIT_SET(iLocal_57, iVar0))
		{
			if (MISC::IS_BIT_SET(iVar1, iVar0))
			{
			}
			MISC::SET_BIT(&iLocal_57, iVar0);
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_242(iVar0), true);
		}
		if (!MISC::IS_BIT_SET(iVar1, iVar0) && !MISC::IS_BIT_SET(iLocal_56, iVar0))
		{
			MISC::SET_BIT(&iLocal_56, iVar0);
			Global_2785470 = 1;
		}
		iVar0++;
	}
}

int func_244(int iParam0)
{
	if ((iParam0 == Global_262145.f_31350[0] || iParam0 == Global_262145.f_31350[1]) || iParam0 == Global_262145.f_31350[2])
	{
		return 1;
	}
	return 0;
}

void func_245()
{
	switch (Global_262145.f_30709)
	{
		case joaat("mamba"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.565f;
			Global_1966336 = -3.3f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.98f;
			Global_1966336 = -2.7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.849f;
			Global_1966336 = -4f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.87f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 1.025f;
			Global_1966336 = -3.1f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.7f;
			Global_1966336 = -2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.725f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.735f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.735f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.695f;
			Global_1966336 = -2.7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.715f;
			Global_1966336 = -3.2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966333 = 0f;
			Global_1966334 = -1.61f;
			Global_1966335 = 0.755f;
			Global_1966336 = -5f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966333 = 0f;
			Global_1966334 = -1.6f;
			Global_1966335 = 0.695f;
			Global_1966336 = -3.2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("comet6"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.795f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
	}
}

void func_246()
{
	switch (func_247())
	{
		case joaat("mamba"):
			Global_1966321 = 0.53f;
			break;
		
		case joaat("growler"):
			Global_1966321 = 0.6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966321 = 0.6f;
			break;
		
		case joaat("raiden"):
			Global_1966321 = 0.95f;
			break;
		
		case joaat("jugular"):
			Global_1966321 = 0.65f;
			break;
		
		case joaat("tampa2"):
			Global_1966321 = 0.65f;
			break;
		
		case joaat("t20"):
			Global_1966321 = 0.83f;
			break;
	}
}

int func_247()
{
	return Global_262145.f_26423;
}

void func_248()
{
	var uVar0;
	var uVar3;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == func_5())
	{
		return;
	}
	if (func_202(PLAYER::PLAYER_ID()) == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_249(&uVar0, &uVar3);
	if ((func_70(PLAYER::PLAYER_ID()) || Global_1946928 != 7) || !ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, false, true, 0))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 58, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

void func_249(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

void func_250()
{
	if (!func_251())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 51, true);
}

int func_251()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_3, 5))
	{
		return 1;
	}
	if ((func_253(PLAYER::PLAYER_ID()) && func_11()) && func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_252(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_84(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_254()
{
	var uVar0;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	switch (iLocal_54)
	{
		case 0:
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 444479190)
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()) || !func_7()) || func_6()) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				iLocal_54 = 0;
				return;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_10 = func_5();
				MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
				MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
				iLocal_55 = Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17;
				func_264(0, -1);
				if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
				}
				iLocal_54 = 2;
				return;
			}
			if ((!HUD::IS_WARNING_MESSAGE_ACTIVE() || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 444479190) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_54 = 0;
			}
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
			MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
			func_264(0, -1);
			Global_1946934.f_4521.f_6 = iLocal_55;
			iLocal_54 = 3;
			break;
		
		case 3:
			if (Global_1946934.f_4521.f_6 == -1)
			{
				if (((func_21(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_7()) && !func_6())
				{
					iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_21(iVar19))
					{
						iVar21 = ENTITY::GET_ENTITY_MODEL(iVar19);
						func_261(iLocal_55, &uVar0);
						if (!func_255(&uVar0, iVar19, iVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
					MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
					MISC::CLEAR_BIT(&(Global_1946934.f_4521.f_1), 9);
					func_264(0, -1);
					iLocal_54 = 0;
				}
			}
			break;
	}
}

int func_255(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_260(iParam1, iParam2, &Var0, &Var3, &Var6, &Var9);
	func_259(iParam1, iParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_257(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_257(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_257(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_257(Var21, Var9, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_256(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_257(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_257(Var0, Var3, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_256(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_256(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if ((func_256(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || func_256(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
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

Vector3 func_257(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_258(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_258(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_258(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_258(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_259(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.f_0 = Var3.f_0;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_260(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_261(int iParam0, var uParam1)
{
	func_262(iParam0, &(uParam1->f_4), &(uParam1->f_7), &(uParam1->f_10), &(uParam1->f_13), &(uParam1->f_14));
	uParam1->f_2 = 1;
	MISC::SET_BIT(&(uParam1->f_3), 6);
	MISC::SET_BIT(&(uParam1->f_3), 0);
	MISC::SET_BIT(&(uParam1->f_3), 2);
	MISC::SET_BIT(&(uParam1->f_3), 4);
}

void func_262(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { func_263(iParam0) };
	switch (iParam0)
	{
		case 149:
			*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
			*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
			*uParam4 = 3.25f;
			*uParam5 = 90f;
			break;
		
		case 150:
			*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
			*uParam3 = { -148.563f, -1341.091f, 32.5145f };
			*uParam4 = 2.75f;
			*uParam5 = 0f;
			break;
		
		case 151:
			*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
			*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
			*uParam4 = 2.5f;
			*uParam5 = 70f;
			break;
		
		case 152:
			*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
			*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
			*uParam4 = 2.25f;
			*uParam5 = 50f;
			break;
		
		case 153:
			*uParam2 = { 488.2599f, -896.563f, 24.7408f };
			*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
			*uParam4 = 2.25f;
			*uParam5 = 85f;
			break;
	}
}

Vector3 func_263(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 759.36f, -675.13f, 27.86f;
			break;
		
		case 150:
			return -144.58f, -1341.37f, 28.87f;
			break;
		
		case 151:
			return -171f, -31.4f, 51.27f;
			break;
		
		case 152:
			return 231.54f, -1875.7f, 25.41f;
			break;
		
		case 153:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_264(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
		{
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319), 5);
			if (iParam1 != -1)
			{
				func_265(1, iParam1);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319), 5);
		func_265(0, -1);
	}
}

void func_265(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17 = iParam1;
	}
	else
	{
		Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17 = -1;
	}
}

void func_266()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723433.f_3)
	{
		switch (iLocal_51)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1946934.f_496 && func_269(Global_1946934.f_3369))
				{
					func_267(1);
					iLocal_51 = 1;
				}
				break;
			
			case 1:
				func_267(1);
				if ((!func_6() && func_7()) && Global_1946928 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_7() && !func_236(PLAYER::PLAYER_ID())) && !func_3(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_81() == 37 && Global_262145.f_10513)
				{
					func_20(&uLocal_52, 1, 0);
				}
				if (bVar0)
				{
					iLocal_51 = 2;
				}
				break;
			
			case 2:
				func_267(0);
				iLocal_51 = 0;
				break;
		}
	}
	else if (iLocal_51 != 0)
	{
		func_267(0);
		iLocal_51 = 0;
	}
	if (func_19(&uLocal_52))
	{
		if (func_30(&uLocal_52, 20000, 1))
		{
			func_22(&uLocal_52);
			Global_262145.f_10513 = 1;
		}
		else
		{
			Global_262145.f_10513 = 0;
		}
	}
}

void func_267(bool bParam0)
{
	func_268(bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946934.f_9), 21);
		MISC::SET_BIT(&(Global_1946934.f_9), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946934.f_9), 21);
		MISC::CLEAR_BIT(&(Global_1946934.f_9), 20);
	}
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946934.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946934.f_4), 7);
	}
}

int func_269(int iParam0)
{
	if ((((iParam0 == 151 || iParam0 == 149) || iParam0 == 153) || iParam0 == 152) || iParam0 == 150)
	{
		return 1;
	}
	return 0;
}

void func_270()
{
	switch (iLocal_50)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1946934, 6))
			{
				if (MISC::IS_BIT_SET(Global_2703656.f_75.f_60, 0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_50 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1574580.f_1)
			{
				iLocal_50 = 2;
			}
			else if (func_278())
			{
				iLocal_50 = 0;
			}
			break;
		
		case 2:
			if (!Global_1574580.f_1)
			{
				iLocal_50 = 0;
			}
			else if (func_278())
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			iLocal_50 = 0;
			if (Global_1574580.f_1)
			{
				func_271();
			}
			break;
	}
}

void func_271()
{
	if (Global_1574580.f_1 == 1)
	{
		func_272(7, 0, 1);
		Global_1574580.f_1 = 0;
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_9 = 0;
	}
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	if (func_277())
	{
		if (iParam1 == 1)
		{
			if (Global_2810287.f_4462 == -1)
			{
				Global_2810287.f_4462 = Global_262145.f_26832;
			}
			func_31(&(Global_2810287.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810287.f_4465 == -1)
				{
					Global_2810287.f_4465 = Global_262145.f_26833;
				}
				func_31(&(Global_2810287.f_4463), 0, 0);
			}
			else
			{
				Global_1574580 = 0;
				Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_8 = 0;
				func_276(1);
			}
		}
		else
		{
			Global_1574580 = 0;
			Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_8 = 0;
			func_276(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_275()) && !func_273(PLAYER::PLAYER_ID()))
		{
			Global_1057404 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_273(int iParam0)
{
	if (func_274(iParam0, 1))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_188(iParam0))
		{
			return 1;
		}
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_275()
{
	return Global_2714627.f_840;
}

void func_276(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_277())
		{
			if (func_4(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_4(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_277()
{
	return Global_1574580;
}

bool func_278()
{
	return (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_279(PLAYER::PLAYER_ID()));
}

int func_279(int iParam0)
{
	if (iParam0 != func_5())
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_5, 6);
	}
	return 0;
}

void func_280()
{
	int iVar0;
	
	if (func_284(PLAYER::PLAYER_ID()))
	{
		if (Global_2810287.f_5193.f_765)
		{
			iVar0 = func_282();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_19(&uLocal_48))
			{
				func_31(&uLocal_48, 1, 0);
				func_281(1, 1);
			}
		}
	}
	if (func_19(&uLocal_48))
	{
		if (func_30(&uLocal_48, 10000, 1))
		{
			func_22(&uLocal_48);
			func_281(0, 0);
		}
	}
}

void func_281(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1964897 && bParam0)
		{
			Global_1964897 = 1;
			iLocal_46 = 1;
		}
	}
	else
	{
		if (Global_1964897 && iLocal_46)
		{
			Global_1964897 = 0;
		}
		iLocal_46 = 0;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1946934.f_3, 5))
		{
			MISC::SET_BIT(&(Global_1946934.f_3), 5);
			iLocal_47 = 1;
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Global_1946934.f_3, 5) && iLocal_47)
		{
			MISC::CLEAR_BIT(&(Global_1946934.f_3), 5);
		}
		iLocal_47 = 0;
	}
}

int func_282()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_283(7, iVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) && MISC::GET_HASH_KEY(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1645739.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_283(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1645739.f_6736[iParam0], iParam1);
}

int func_284(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_84(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

void func_285()
{
	if (PLAYER::PLAYER_ID() == func_5())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
	{
		if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && (HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 15890625 || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == -862848537)) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 0)
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
		}
	}
}

void func_286()
{
	if (func_291())
	{
		if (!iLocal_40)
		{
			func_62(45, 1, 1);
			iLocal_40 = 1;
		}
	}
	else if (iLocal_40)
	{
		func_59(45, 1, 1);
		iLocal_40 = 0;
		func_22(&uLocal_41);
	}
	if (func_287())
	{
		if (!iLocal_45)
		{
			Global_1965072 = 1;
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		Global_1965072 = 0;
		iLocal_45 = 0;
		func_22(&uLocal_43);
	}
}

int func_287()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_284(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 235;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 58;
	}
	if (func_13("CM_PV_MEM") || func_13("CM_PV_MEM_PC"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
		{
			func_31(&uLocal_43, 0, 0);
			return 1;
		}
	}
	if (func_19(&uLocal_43) && !func_30(&uLocal_43, 3000, 0))
	{
		return 1;
	}
	if (func_21(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_290(iVar1, 1))
		{
			iVar2 = func_288(iVar1);
			if ((iVar2 != func_5() && iVar2 != PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2689156[iVar2 /*453*/].f_319.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	if (!func_290(iParam0, 1))
	{
		return func_5();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_289(iVar0, 0, 1, 0);
}

int func_289(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_4(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_4(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_5();
}

int func_290(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_291()
{
	int iVar0;
	
	if (!func_284(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 201;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 223;
	}
	if (!func_13("CM_PV_MEM") && !func_13("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_31(&uLocal_41, 0, 0);
		return 1;
	}
	if (func_11() && MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "INST_MENU_TTL"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			func_31(&uLocal_41, 0, 0);
			return 1;
		}
	}
	if (func_19(&uLocal_41) && !func_30(&uLocal_41, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_292()
{
	if ((Global_111861 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_7())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_293()
{
	int iVar0;
	
	if (!iLocal_6)
	{
		if (Global_1836379)
		{
			iVar0 = func_294(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10384 = 1;
			}
			iLocal_6 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_6 = 0;
	}
}

int func_294(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_295()
{
	if (!iLocal_5)
	{
		if (Global_1836379)
		{
			if (func_297() || func_296())
			{
				Global_262145.f_19963 = 1;
			}
			else
			{
				Global_262145.f_19963 = 0;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_5 = 0;
	}
}

int func_296()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_294(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10493)
	{
		return 0;
	}
	uVar1[0] = func_294(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_294(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_294(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_294(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10489 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10493)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_297()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_294(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10492)
	{
		return 0;
	}
	uVar1[0] = func_294(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_294(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_294(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_294(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10488 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10492)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_298()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853128)
		{
			MISC::SET_BIT(&(Global_1853128[iVar0 /*888*/].f_766), 1);
			iVar0++;
		}
	}
}

void func_299()
{
	if (Global_262145.f_10468 != 120)
	{
		Global_262145.f_10468 = 120;
	}
}

void func_300()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_301(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_301(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_302()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

