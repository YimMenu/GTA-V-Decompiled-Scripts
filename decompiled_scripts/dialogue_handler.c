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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char cLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	char cLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	char cLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	char* sLocal_91 = NULL;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_235 = 0;
	int iLocal_236 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_7825, 1))
		{
			if (!BitTest(Global_7824, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_19942)
					{
						func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19897)
						{
							func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_7825, 1);
				}
			}
		}
		if (BitTest(Global_20151, 0))
		{
			if (!func_120())
			{
				if (!BitTest(Global_20151, 1))
				{
					MISC::SET_BIT(&Global_20151, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_106 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_102 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_106);
				}
				else
				{
					iLocal_103 = MISC::GET_GAME_TIMER();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_113(&Global_20739, &Global_21355, &Global_21275, Global_21288, Global_22270, Global_22271, 0))
					{
						Global_20151 = 0;
					}
				}
				else
				{
					Global_20151 = 0;
				}
			}
		}
		if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !BitTest(Global_4718592.f_17, 4)) && !func_112()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21285 != 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_111();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_107();
		}
		switch (Global_21285)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21291)
				{
					if (Global_21281 == 0)
					{
						func_105();
					}
					else
					{
						func_104();
						func_105();
					}
				}
				else if (Global_21281 == 0)
				{
					func_92();
				}
				else
				{
					func_104();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21291)
				{
					if (Global_21293)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21295 = 0;
	Global_19953 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21296 = 0;
	Global_21297 = 0;
	Global_21298 = 0;
	Global_21299 = 0;
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
	Global_21289 = 0;
	Global_21290 = 0;
	Global_21332 = 0;
	Global_21333 = 0;
	Global_21336 = 0;
	Global_21338 = 0;
	Global_21337 = 0;
	Global_21340 = 0;
	Global_21339 = 0;
	Global_22302 = 0;
	Global_21342 = 0;
	if (Global_19954.f_1 == 10)
	{
	}
	else if (BitTest(Global_7824, 11))
	{
		func_3();
	}
	Global_21291 = 0;
	Global_21292 = 0;
	Global_21293 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22275 = 0;
	Global_22282 = 0;
	Global_22281 = 0;
	Global_22278 = 0;
	Global_22277 = 0;
	Global_22279 = 0;
	Global_22280 = 0;
	Global_21281 = 0;
	Global_21282 = 0;
	Global_21283 = 0;
	Global_21284 = 0;
	Global_21543 = 0;
	Global_22306 = 5000;
	Global_19937 = 0;
	MISC::CLEAR_BIT(&Global_7824, 20);
	MISC::CLEAR_BIT(&Global_7824, 24);
	MISC::CLEAR_BIT(&Global_7825, 23);
	MISC::CLEAR_BIT(&Global_7826, 0);
	MISC::CLEAR_BIT(&Global_7825, 9);
	MISC::CLEAR_BIT(&Global_7825, 31);
	MISC::CLEAR_BIT(&Global_7825, 17);
	MISC::CLEAR_BIT(&Global_7826, 5);
	Global_22269 = 0;
	Global_22268 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_21285 = 4;
	}
	else
	{
		Global_21285 = 0;
		Global_22296 = 0;
		Global_22307 = MISC::GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_7824, 11))
			{
				if (!Global_19897)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_77858)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_7824, 11);
			}
		}
	}
}

void func_4()
{
	Global_21295 = 0;
	Global_19953 = 0;
	func_2();
}

void func_5()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_21341 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_22277 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22296 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_31 = 1;
			}
		}
		else if (Global_22296 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_22279 > 0)
	{
		iLocal_37 = MISC::GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_22279)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_22277 = 0;
		}
	}
	if (Global_22296 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_21285 = 6;
		}
	}
}

void func_6()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!BitTest(Global_7824, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_77858 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_77858 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_77858 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22296 == 1)
		{
			if (Global_22297 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_31 = 1;
				Global_22297 = 0;
			}
		}
	}
	else if (Global_22296 == 0)
	{
		if (Global_22297 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_22297 = 0;
		}
	}
	if (Global_21338 == 0)
	{
		if (!Global_21298)
		{
			if (!BitTest(Global_7825, 31))
			{
				if (!BitTest(Global_7825, 27))
				{
					if (func_54())
					{
						if (Global_19954.f_1 > 6)
						{
							MISC::SET_BIT(&Global_7825, 24);
							MISC::SET_BIT(&Global_7825, 27);
							MISC::CLEAR_BIT(&Global_7825, 26);
							MISC::CLEAR_BIT(&Global_7825, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_21298 == 0)
	{
		if (Global_21338 == 1)
		{
			MISC::SET_BIT(&Global_7825, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_7825, 23);
		}
		if (Global_21342)
		{
			if (Global_21338 == 0)
			{
				Global_20904 = { Global_21343 };
				Global_21361 = { Global_21349 };
				Global_21295 = 0;
				Global_22302 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21340)
		{
			while (Global_21338 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_19954.f_1 < 6)
				{
					Global_21338 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21340)
						{
							iLocal_30 = 1;
							Global_22300 = 1;
							func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
							func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19942)
							{
								func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_7824, 17);
								func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_7824, 17);
								func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22298 = 1;
							if (func_50(Global_7139, Global_19954) == 0)
							{
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21427, "CELL_300", &(Global_117[Global_7139 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
								func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19942)
							{
								func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_7824, 17);
						}
					}
					if (func_49(2, Global_19923, 0))
					{
						func_47();
						Global_19880 = 0.19f;
						Global_21338 = 0;
						func_45();
						if (Global_21340)
						{
							Global_20904 = { Global_21421 };
							Global_22302 = 5;
						}
						else if (Global_21283 > 0)
						{
							Global_21543 = 1;
							Global_21285 = 0;
							Global_22306 = 0;
							if (BitTest(Global_7825, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22269 + 1)
								{
									uLocal_111[iVar0] = func_44(&(Global_21544[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_44(&(Global_21906[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22269, &Global_20574, Global_7139, &Global_21361, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_21283 == 2)
							{
								func_25(&Global_20574, Global_7139, &Global_21361, &(Global_21439[0 /*6*/]), &(Global_21491[0 /*6*/]), &(Global_21439[1 /*6*/]), &(Global_21491[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22302 = 1;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20904 = { Global_21379 };
							Global_22302 = 1;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19924, 0) || BitTest(Global_7824, 24))
					{
						func_47();
						Global_19880 = 0.19f;
						Global_21338 = 0;
						func_45();
						if (Global_21340)
						{
							Global_20904 = { Global_21415 };
							Global_22302 = 4;
						}
						else if (Global_21283 > 0)
						{
							Global_21543 = 1;
							Global_21285 = 0;
							Global_22306 = 0;
							if (BitTest(Global_7825, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22268 + 1)
								{
									uLocal_173[iVar1] = func_44(&(Global_21725[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_44(&(Global_22087[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22268, &Global_20574, Global_7139, &Global_21361, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_21283 == 2)
							{
								func_25(&Global_20574, Global_7139, &Global_21361, &(Global_21452[0 /*6*/]), &(Global_21504[0 /*6*/]), &(Global_21452[1 /*6*/]), &(Global_21504[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22302 = 2;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20904 = { Global_21385 };
							Global_22302 = 2;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19926, 0))
					{
						if (Global_21340)
						{
							Global_19880 = 0.19f;
							Global_21338 = 0;
							func_45();
							func_47();
							Global_20904 = { Global_21409 };
							Global_22302 = 3;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21338)
			{
				SYSTEM::WAIT(0);
				if (Global_19954.f_1 < 6)
				{
					Global_21338 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19935, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19935, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19942)
						{
							func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_7824, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19923, 0))
					{
						func_47();
						Global_21338 = 0;
						func_45();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "GET_CURRENT_SELECTION");
						iLocal_236 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_236))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_20904 = { Global_21415 };
								Global_22302 = 4;
								break;
							
							case 1:
								Global_20904 = { Global_21409 };
								Global_22302 = 3;
								break;
							
							case 2:
								Global_20904 = { Global_21421 };
								Global_22302 = 5;
								break;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19924, 0))
					{
						Global_21338 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21286 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_19954.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_21285 = 6;
		}
		if (!Global_1574979)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19943, true);
		}
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
	else if (Global_20144 == 0)
	{
		if (func_49(2, Global_19922, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_7824, 20))
					{
					}
					else
					{
						Global_19932 = 1;
						func_45();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_21334 = 1;
						Global_21335 = 1;
						Global_21285 = 6;
						func_15();
						Global_19954.f_1 = Global_19956;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	char cVar0[24];
	
	if (Global_19937 == 1)
	{
		return;
	}
	if (Global_19954.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
	{
		if (Global_77858)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19954.f_1)
	{
		case 6:
			func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8429);
			if (Global_8429 == 1)
			{
				func_51(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19958), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19958;
			}
			else
			{
				func_51(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19959), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19959;
			}
			if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20146 == 0)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7824, 17);
			}
			else if (Global_77858)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7824, 17);
			}
			else
			{
				if (Global_20145 == 1)
				{
					if (Global_19942)
					{
						func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19942)
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_7824, 17);
			}
			if (Global_77858)
			{
				func_11();
				MISC::CLEAR_BIT(&Global_7826, 9);
				func_51(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19958), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7824, 17);
			if (BitTest(Global_7824, 20))
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19953 == 1)
			{
				func_10();
				func_51(Global_19935, "SET_THEME", SYSTEM::TO_FLOAT(Global_112922.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21298)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21300);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_50(Global_7139, Global_19954) == 0)
				{
					func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_217", &(Global_1918[Global_7139 /*29*/].f_3), 0);
				}
				func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21285 == 4 || Global_21285 == 3)
			{
				func_51(Global_19935, "SET_THEME", SYSTEM::TO_FLOAT(Global_112922.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21298)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21300);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21543)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_50(Global_7139, Global_19954) == 0)
					{
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), &cVar0, &(Global_1918[Global_7139 /*29*/].f_3), 0);
					}
				}
				func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19954 == 0)
		{
			switch (Global_112922.f_14051[Global_19954 /*20*/].f_6)
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
		if (Global_19954 == 1)
		{
			switch (Global_112922.f_14051[Global_19954 /*20*/].f_6)
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
		if (Global_19954 == 2)
		{
			switch (Global_112922.f_14051[Global_19954 /*20*/].f_6)
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
		if (Global_19954 == 3)
		{
			switch (Global_4535603)
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

void func_11()
{
	if (Global_77858)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_7824, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_14(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725228)
							{
								if (iVar1 == 14)
								{
									func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112922.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112922.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112922.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77858)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43791;
											break;
										
										case 1:
											iVar6 = Global_43792;
											break;
										
										case 2:
											iVar6 = Global_43793;
											break;
										
										default:
											break;
									}
									func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7830);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_7825, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889925.f_1;
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_15()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return;
	}
	switch (Global_19956)
	{
		case 5:
			Global_19956 = 6;
			break;
		
		case 6:
			if (BitTest(Global_7825, 5))
			{
				Global_19956 = 6;
				MISC::CLEAR_BIT(&Global_7825, 5);
			}
			else
			{
				Global_19956 = 3;
			}
			break;
		
		case 7:
			Global_19956 = 3;
			break;
		
		case 3:
			if (BitTest(Global_7825, 5))
			{
				Global_19956 = 6;
				MISC::CLEAR_BIT(&Global_7825, 5);
			}
			else
			{
				Global_19956 = 3;
			}
			break;
		
		default:
			Global_19956 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_235)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_49(2, Global_19930, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_20();
			iLocal_235 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_49(2, Global_19931, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_17();
			iLocal_235 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()
{
	func_51(Global_19935, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19943, true);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20149 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77858)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4535605 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_51(Global_19935, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19943, true);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20149 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_23()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
	{
		func_24();
		if (Global_19953 == 1)
		{
			if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21332)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_7824, 20))
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7824, 17);
		}
		else
		{
			func_121(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7824, 17);
			if (BitTest(Global_7824, 20))
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_77858)
	{
		func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7824, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21297 = 1;
	}
	else
	{
		Global_21297 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_39(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar11, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam2 > Global_21287)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_37();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22281 = Global_22282;
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_20904.f_370 = Global_22274;
		Global_21281 = Global_21282;
		Global_21283 = Global_21284;
		if (Global_21543 == 0)
		{
			Global_21439[0 /*6*/] = { Global_21465[0 /*6*/] };
			Global_21439[1 /*6*/] = { Global_21465[1 /*6*/] };
			Global_21491[0 /*6*/] = { Global_21517[0 /*6*/] };
			Global_21491[1 /*6*/] = { Global_21517[1 /*6*/] };
			Global_21452[0 /*6*/] = { Global_21478[0 /*6*/] };
			Global_21452[1 /*6*/] = { Global_21478[1 /*6*/] };
			Global_21504[0 /*6*/] = { Global_21530[0 /*6*/] };
			Global_21504[1 /*6*/] = { Global_21530[1 /*6*/] };
		}
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (Global_21543 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_27();
			Global_21295 = bParam3;
		}
		Global_21287 = iParam2;
		if (Global_21281 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21281)
			{
				StringCopy(&(Global_20904.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20904.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20151 = 0;
		func_53();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21287 || iParam2 == Global_21287)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_27()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_28()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_30()
{
	if (func_14(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_31();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_14(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_33(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
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
	return Global_1918[iParam0 /*29*/];
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_21282 = uParam0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
}

void func_41()
{
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_21299 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21297 = 1;
	}
	else
	{
		Global_21297 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19943, true);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_19897)
				{
					if (!BitTest(Global_7824, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			if (Global_19897 == 0)
			{
				if (Global_7139 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_21285 != 2)
						{
						}
					}
				}
			}
		}
		if (func_14(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1923655))))
		{
			return 0;
		}
		if (Global_111970)
		{
			return 0;
		}
	}
	if (Global_77858)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
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
	if (Global_4535605 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_112922.f_14051.f_89)
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

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

void func_51(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_19897)
				{
					if (BitTest(Global_7824, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

int func_54()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_107);
	}
	else
	{
		iLocal_105 = MISC::GET_GAME_TIMER();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_20144)
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
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_28())
	{
		Global_19954.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

int func_57(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return BitTest(Global_1958928, 5);
}

bool func_59()
{
	return BitTest(Global_1958928, 19);
}

void func_60()
{
	if (func_49(2, Global_19931, 0))
	{
		if (Global_22296 == 0)
		{
			if (Global_21291)
			{
				if (BitTest(Global_7825, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_62() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_77858)
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
			if (!Global_19897)
			{
				if (Global_7139 != 128)
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
								if (Global_77858)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_7824, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_77858 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22298 = 1;
		if (func_50(Global_7139, Global_19954) == 0)
		{
			func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21427, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19880 = 0.2f;
		if (Global_19942)
		{
			func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_121(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7824, 17);
	}
	if (Global_21338 == 1)
	{
		if (Global_19954.f_1 < 6)
		{
			Global_21338 = 0;
		}
		else
		{
			if (Global_19894 == 0)
			{
				if (func_49(2, Global_19923, 0))
				{
					Global_19880 = 0.19f;
					Global_21338 = 0;
					func_45();
					Global_22303 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19924, 0))
			{
				Global_19880 = 0.19f;
				Global_21338 = 0;
				func_45();
				Global_22303 = 2;
			}
		}
	}
	else if (Global_22303 == 2)
	{
		if (Global_21286 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_21285 = 6;
		}
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19943, true);
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
}

void func_64()
{
	if (Global_20152 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_20152 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_20152 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_21285 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_20152 == 1)
		{
			Global_20152 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_22306 || Global_20152 == 1)
	{
		if (func_49(2, Global_19922, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_7824, 20))
					{
					}
					else
					{
						Global_19932 = 1;
						func_45();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_21334 = 1;
						Global_21285 = 6;
						MISC::CLEAR_BIT(&Global_7824, 27);
						if (!Global_21296)
						{
							MISC::SET_BIT(&Global_7825, 5);
						}
						func_15();
						Global_19954.f_1 = Global_19956;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 27);
		Global_21285 = 4;
		Global_21342 = 0;
		func_67();
		func_66();
		if (!Global_21298)
		{
			if (Global_22302 == 0)
			{
				if (!BitTest(Global_7826, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_7826, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20904.f_368, Global_20904.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_104 = MISC::GET_GAME_TIMER();
	}
}

void func_66()
{
	if (Global_21298)
	{
		if (Global_77858)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2810701.f_1795), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
	{
		if (!Global_21293)
		{
			func_121(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7824, 17);
			if (BitTest(Global_7824, 20))
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21298)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21300);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_50(Global_7139, Global_19954) == 0)
			{
				func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_121(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_219", &(Global_1918[Global_7139 /*29*/].f_3), 0);
			}
		}
		func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_109 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_95);
		iLocal_110 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_98);
	}
	else
	{
		iLocal_94 = MISC::GET_GAME_TIMER();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = MISC::GET_GAME_TIMER();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_21332 == 1)
	{
		if (func_48())
		{
			if (iLocal_109 > 4000)
			{
				if (BitTest(Global_7824, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
					{
						func_45();
						Global_19953 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (BitTest(Global_7824, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19935))
				{
					func_45();
					Global_19953 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_19953 = 3;
	}
	if (Global_19953 == 2)
	{
		iLocal_30 = 0;
		Global_21285 = 4;
		func_61();
		Global_21342 = 0;
		func_67();
		func_66();
		if (!Global_21298)
		{
			if (Global_22302 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20904.f_368, Global_20904.f_369);
			}
		}
		func_65();
		Global_22301 = 0;
	}
	if (Global_21332 == 0)
	{
		if (Global_19953 == 3)
		{
			if (Global_21298)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22301 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_21285 = 6;
				func_15();
				Global_19954.f_1 = Global_19956;
				func_8();
			}
		}
	}
	else if (Global_19953 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2817527.f_2 = 1;
	Global_2817527.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2817527 = 0;
			Global_2817527.f_2 = 0;
		}
		else if (func_73(Global_2817527.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2817527.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2817527.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2817527.f_37)
	{
		func_55(0);
	}
	Global_2817527.f_37 = 0;
	Global_2817527.f_3 = 0;
}

void func_71()
{
	Global_2817527.f_1 = 0;
	Global_2817527 = 0;
	Global_2817527.f_2 = 0;
	Global_2817527.f_33 = -1;
	Global_2817527.f_34 = -1;
	StringCopy(&(Global_2817527.f_4), "", 64);
	StringCopy(&(Global_2817527.f_39[0 /*16*/]), "", 64);
	Global_2817527.f_38 = 0;
	Global_2817527.f_56 = 0;
	Global_2817527.f_57 = 0;
	Global_2817527.f_58 = -2;
	Global_2817527.f_3 = 0;
	func_72(&(Global_2817527.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_21281)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_20904.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_20153[iVar2 /*6*/] = { Global_20904.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_20153[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20153[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20153[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_50, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				iVar5 = func_85(iVar13);
				bLocal_82 = func_84();
				bLocal_83 = func_83();
				bLocal_84 = func_82();
				bVar6 = func_81(iVar13);
				bVar7 = func_80(iVar13);
				bVar8 = func_79(iVar13);
				iVar12 = func_78(iVar13);
				bVar9 = func_77(iVar13);
				bVar10 = func_76(iVar13);
				bVar11 = func_75(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20153[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_20153[iVar2 /*6*/]), &(Global_20904.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_20153[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, HUD::_GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				iVar5 = func_85(0);
				bLocal_82 = func_84();
				bLocal_83 = func_83();
				bLocal_84 = func_82();
				bVar6 = func_81(0);
				bVar7 = func_80(0);
				bVar8 = func_79(0);
				iVar12 = func_78(0);
				bVar9 = func_77(0);
				bVar10 = func_76(0);
				bVar11 = func_75(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_20904.f_6[iLocal_92 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_20153[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20153[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21291 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(bLocal_83);
		AUDIO::_0x61631F5DF50D1C34(bLocal_84);
		AUDIO::START_SCRIPT_CONVERSATION(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, bLocal_82);
		Global_21285 = 4;
	}
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(sVar0);
}

int func_86(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(sVar0);
}

int func_88(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(sVar0);
}

void func_89()
{
	cLocal_85 = { Global_20904.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		sLocal_91 = HUD::_GET_LABEL_TEXT(&cLocal_85);
		if (MISC::IS_STRING_NULL(sLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_20904.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		sLocal_79 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_80))
		{
		}
		sLocal_81 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_20904.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		sLocal_72 = HUD::_GET_LABEL_TEXT(&cLocal_66);
		if (MISC::IS_STRING_NULL(sLocal_72))
		{
		}
	}
}

void func_92()
{
	func_93();
	AUDIO::_0x0B568201DD99F0EB(bLocal_83);
	AUDIO::_0x61631F5DF50D1C34(bLocal_84);
	if (Global_22277)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, bLocal_82);
		iLocal_36 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, bLocal_82);
	}
	Global_21285 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_21361))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_21361, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_103() || func_102())
		{
			if (Global_1835497 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_77858 || func_101())
		{
			if (Global_1835497 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(MISC::GET_HASH_KEY(&Global_21361)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21287 < 5 || Global_21287 == 10) || Global_21287 == 12) || Global_21287 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_21361, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21361, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_21361, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21361, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22295 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_20904 };
		StringConCat(&cLocal_44, "A", 24);
		Global_20153[iVar2 /*6*/] = { Global_20904 };
		StringConCat(&(Global_20153[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20153[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20153[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_50, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4535515 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			iVar5 = func_85(iVar2);
			bLocal_82 = func_84();
			bLocal_83 = func_83();
			bLocal_84 = func_82();
			bVar6 = func_81(iVar2);
			bVar7 = func_80(iVar2);
			bVar8 = func_79(iVar2);
			iVar12 = func_78(iVar2);
			bVar9 = func_77(iVar2);
			bVar10 = func_76(iVar2);
			bVar11 = func_75(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20153[iVar2 /*6*/])))
			{
				if (Global_22275 == 0 && Global_22281 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_20153[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_20153[iVar2 /*6*/]), &Global_22283))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_20153[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_22295 = iVar2;
					if (Global_22281 == 1)
					{
						Global_22281 = 0;
					}
				}
			}
			else if (Global_22281 == 0 && Global_22275 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &cLocal_50, iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, HUD::_GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				iVar5 = func_85(iVar2);
				bLocal_82 = func_84();
				bLocal_83 = func_83();
				bLocal_84 = func_82();
				bVar6 = func_81(iVar2);
				bVar7 = func_80(iVar2);
				bVar8 = func_79(iVar2);
				iVar12 = func_78(iVar2);
				bVar9 = func_77(iVar2);
				bVar10 = func_76(iVar2);
				bVar11 = func_75(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &Global_20904, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20574[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_20574[iVar0 /*10*/]) || Global_20574[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_20574[iVar0 /*10*/], &(Global_20574[iVar0 /*10*/].f_1));
			}
			if (Global_20574.f_161 == iVar0)
			{
				if ((Global_20574.f_162 != 0f && Global_20574.f_162.f_1 != 0f) && Global_20574.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_20574.f_161, Global_20574.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4535515 == 1)
	{
		Global_4535515 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4535334[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4535334[iVar0 /*9*/]) || Global_4535334[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4535334[iVar0 /*9*/].f_8, Global_4535334[iVar0 /*9*/], &(Global_4535334[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_85 = { Global_20904 };
	StringConCat(&cLocal_85, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		sLocal_91 = HUD::_GET_LABEL_TEXT(&cLocal_85);
		if (MISC::IS_STRING_NULL(sLocal_91))
		{
		}
	}
}

void func_96()
{
	cLocal_73 = { Global_20904 };
	StringConCat(&cLocal_73, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		sLocal_79 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_80))
		{
		}
		sLocal_81 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_81))
		{
		}
	}
}

void func_97()
{
	cLocal_66 = { Global_20904 };
	StringConCat(&cLocal_66, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		sLocal_72 = HUD::_GET_LABEL_TEXT(&cLocal_66);
		if (MISC::IS_STRING_NULL(sLocal_72))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2883694)
	{
		if (func_14(0))
		{
			if (Global_3407872 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_14(0))
		{
			if (Global_3932160 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

var func_101()
{
	return Global_1575030;
}

bool func_102()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

bool func_103()
{
	return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_103() || func_102())
	{
		if (Global_1835497 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_77858)
	{
		if (Global_1835497 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_21361))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_21361, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(MISC::GET_HASH_KEY(&Global_21361)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21287 < 5 || Global_21287 == 10) || Global_21287 == 12) || Global_21287 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_21361, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21361, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_21361, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21361, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_94();
}

void func_105()
{
	while (Global_19937 == 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_19937 = 0;
	if (BitTest(Global_7824, 20))
	{
		MISC::SET_BIT(&Global_7825, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7825, 1);
	}
	Global_19938 = 0;
	if (Global_21281 == 0)
	{
		if (!Global_21298)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20152 = 0;
	if (Global_21295)
	{
		if (Global_22302 == 0)
		{
			if (Global_21298 == 0)
			{
				iLocal_34 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20904.f_368, Global_20904.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20152 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_20152 == 1 && Global_21285 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_20152 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_21285 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_20152 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_21285 != 1)
		{
		}
		if (Global_20152 == 0)
		{
		}
	}
	Global_20152 = 0;
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 0) || Global_21285 != 1) || Global_19920 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
	}
	else
	{
		if (Global_21293)
		{
			Global_22303 = 0;
			iLocal_32 = 0;
		}
		if (Global_21295 == 0)
		{
			if (Global_21336 == 0)
			{
				Global_19956 = Global_19954.f_1;
				Global_21336 = 1;
			}
			iLocal_30 = 0;
			if (Global_22302 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20904.f_368, Global_20904.f_369);
				SYSTEM::WAIT(0);
				Global_21285 = 3;
				Global_20152 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_7824, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_20152 = 0;
				Global_21285 = 4;
			}
			Global_19953 = 0;
			if (Global_21296 == 1)
			{
				if (Global_19954.f_1 == 10)
				{
				}
				if (!Global_19954.f_1 == 9)
				{
					if (Global_19954.f_1 > 4)
					{
						if (Global_19937 == 0)
						{
							Global_19954.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19954.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19954.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_20152 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_20152 = 0;
							}
						}
					}
				}
				if (Global_19954.f_1 == 6)
				{
				}
				if (Global_19954.f_1 == 10)
				{
				}
				if (Global_19954.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21285 = 6;
					Global_19938 = 1;
					return;
				}
				Global_19954.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = MISC::GET_GAME_TIMER();
			}
			while (Global_19954.f_1 != 9 && Global_19937 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_20152 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_20152 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_101);
				}
				else
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_22301 = 1;
						Global_19937 = 1;
					}
				}
			}
			if (!BitTest(Global_7824, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19937 == 0)
			{
				if (!Global_22302 == 0)
				{
					Global_21342 = 0;
					func_67();
					func_66();
					if (!Global_21298)
					{
						if (Global_22302 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_20904.f_368, Global_20904.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_106();
				Global_19938 = 1;
			}
		}
		else
		{
			Global_19953 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_19954.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_7825, 21);
				}
			}
			if (Global_21336 == 0)
			{
				Global_19956 = Global_19954.f_1;
				Global_21336 = 1;
			}
			if (Global_19954.f_1 == 3)
			{
				Global_19954.f_1 = 4;
			}
			else
			{
				while (Global_19954.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_19954.f_1 == 6)
				{
				}
				Global_19954.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_101 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = MISC::GET_GAME_TIMER();
			}
			while (Global_19954.f_1 != 9 && Global_19937 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_101);
				}
				else
				{
					iLocal_100 = MISC::GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_22301 = 1;
						Global_19937 = 1;
						MISC::CLEAR_BIT(&Global_7825, 21);
					}
				}
			}
			if (Global_19937 == 0)
			{
				Global_21285 = 2;
			}
			else
			{
				func_106();
				Global_19938 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_95 = NETWORK::GET_NETWORK_TIME();
				iLocal_98 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_93 = MISC::GET_GAME_TIMER();
				iLocal_96 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_106()
{
	Global_20151 = 0;
	func_111();
}

void func_107()
{
	float fVar0;
	
	fVar0 = func_108(Global_19907[Global_19899 /*3*/], Global_19900[Global_19899 /*3*/], Global_19914, Global_19885, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22299 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_32 = 0;
	}
}

float func_108(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4535606 == 0)
	{
		if (BitTest(Global_7824, 14) && Global_19954.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19907[Global_19899 /*3*/].f_1 == Var0.f_1)
			{
				Global_4535606 = 1;
			}
		}
	}
	if (func_48() && Global_4535606 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_110((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_19882 = { func_109(Param0, Param3, fVar4) };
		Global_19885 = { func_109(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19882 = { Param3 };
		Global_19885 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19885, 0);
	return fVar3;
}

Vector3 func_109(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_110(float fParam0, float fParam1, float fParam2)
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

void func_111()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

bool func_112()
{
	return BitTest(Global_4718592.f_132162, 12);
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_37();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, 0);
			if (bParam2)
			{
				func_30();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_53();
		func_115();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_115()
{
	if (!func_116())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_116()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_119())
	{
		return 0;
	}
	if (func_117(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0, 20);
}

var func_118(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_119()
{
	return -1;
}

int func_120()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

