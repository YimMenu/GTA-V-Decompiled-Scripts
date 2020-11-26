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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<872> Local_80 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_81[32];
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97[4] = { 0, 0, 0, 0 };
	struct<8> Local_98[30];
	var uLocal_99[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<21> Local_107 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_89 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_996(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_946(ScriptParam_107);
	}
	else
	{
		func_898();
	}
	while (true)
	{
		func_897();
		if (func_889())
		{
			func_898();
		}
		Global_1674356.f_2 = Local_80.f_863;
		Global_1674356.f_3 = Local_80.f_864;
		switch (func_888(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_887() == 1)
				{
					if (func_886())
					{
						func_885();
						if (func_884())
						{
							func_869(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							func_868(0f);
							iLocal_88 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_87);
						}
						else
						{
							func_869(166, 0, -1, 0);
						}
						func_867();
						func_866();
						func_865();
						Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (func_887() == 4)
				{
					Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_861(1))
				{
					Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (func_887() == 1)
				{
					func_860();
					func_840();
					func_817();
					func_311();
					func_302();
					if (func_884() || func_300())
					{
						func_152(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_887() == 4)
				{
					Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_80.f_845));
				if (func_72(&(Local_80.f_845)))
				{
					Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			
			case 4:
				func_898();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_887())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_80.f_863), &(Local_80.f_864));
						Local_80 = 1;
						Local_80.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_80.f_119 = PLAYER::PLAYER_ID();
						func_869(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_80 = 4;
					}
					else if (func_1())
					{
						Local_80 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_80.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (MISC::IS_BIT_SET(Local_80.f_1, 1))
			{
				Local_80.f_117 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_80.f_1, 3))
			{
				Local_80.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!MISC::IS_BIT_SET(Local_80.f_1, 6))
	{
		if (!func_8(&(Local_80.f_849)))
		{
			func_7(&(Local_80.f_849), 0, 0);
		}
		else if (func_6(&(Local_80.f_849), 500, 0))
		{
			MISC::SET_BIT(&(Local_80.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_80.f_847)))
	{
		func_7(&(Local_80.f_847), 0, 0);
	}
	else if (func_6(&(Local_80.f_847), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_80.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_15014;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_80.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_80.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
							{
								Local_80.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_80.f_2[iVar0 /*26*/] == 1)
						{
							Local_80.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_80.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_80.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2)))
									{
										if (MISC::IS_BIT_SET(Local_80.f_109, iVar0))
										{
											MISC::SET_BIT(&(Local_80.f_108), iVar0);
											Local_80.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_80.f_110, iVar0))
										{
											MISC::SET_BIT(&(Local_80.f_108), iVar0);
											Local_80.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_80.f_111, iVar0))
										{
											MISC::SET_BIT(&(Local_80.f_108), iVar0);
											Local_80.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_80.f_112, iVar0))
										{
											Local_80.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_80.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_80.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1)))
							{
								Local_80.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_80.f_2[iVar0 /*26*/].f_2))
								{
									Local_80.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (MISC::IS_BIT_SET(Local_80.f_112, iVar0))
								{
									Local_80.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), false))
							{
								Local_80.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							if (MISC::IS_BIT_SET(Local_80.f_110, iVar0))
							{
								Local_80.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (MISC::IS_BIT_SET(Local_80.f_111, iVar0))
							{
								Local_80.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_80.f_2[iVar0 /*26*/].f_24)
						{
							Local_80.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_80.f_2[iVar0 /*26*/].f_25)
						{
							Local_80.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_80.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_80.f_2[iVar0 /*26*/] == 0)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_80.f_2[iVar0 /*26*/] == 2)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_80.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_80.f_2[iVar0 /*26*/].f_17 == 3 || Local_80.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_80.f_2[iVar0 /*26*/].f_24)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_80.f_2[iVar0 /*26*/].f_17 == 3 || Local_80.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), false))
								{
									Local_80.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_80.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						MISC::SET_BIT(&(Local_80.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_17(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), iVar1, false);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_80.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_80 != 4)
	{
		iLocal_84 = 0;
		while (iLocal_84 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_84)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_84));
				if (!func_17(iVar3, 0))
				{
					if (func_996(iVar3, 1, 1))
					{
					}
					func_24(iLocal_84);
					func_23(iLocal_84);
					if (!MISC::IS_BIT_SET(Local_80.f_1, 2))
					{
						if (!bVar2)
						{
							if ((MISC::IS_BIT_SET(Local_80.f_1, 1) || MISC::IS_BIT_SET(Local_80.f_1, 3)) || MISC::IS_BIT_SET(Local_80.f_1, 5))
							{
								if (!MISC::IS_BIT_SET(Local_81[iLocal_84 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (Local_80.f_118 > -1)
				{
					if (iLocal_84 == Local_80.f_118)
					{
						MISC::SET_BIT(&(Local_80.f_1), 5);
					}
				}
			}
			iLocal_84++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(Local_80.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_80.f_115 != iVar0)
		{
			Local_80.f_115 = iVar0;
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_80.f_1), 1);
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_80.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_113, iVar0))
			{
				if (!func_8(&(Local_80.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_80.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_80.f_853[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_80.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_80.f_109, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_109), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_110, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_110), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_112, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_112), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_111, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_111), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_113, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_113), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_113), iVar0);
			}
		}
		if (Local_80.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_80.f_2[iVar0 /*26*/].f_24)
			{
				if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_12, iVar0))
				{
					Local_80.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_80.f_2[iVar0 /*26*/].f_25)
			{
				if (MISC::IS_BIT_SET(Local_81[iParam0 /*14*/].f_13, iVar0))
				{
					Local_80.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_80.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_80.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), true);
							MISC::SET_BIT(&(Local_80.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_80.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Local_80.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_80.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = Local_80.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_80.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			fVar4 = Local_80.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_80.f_123[iVar0 /*36*/].f_32[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar2))
					{
						if (!MISC::IS_BIT_SET(Local_80.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							MISC::CLEAR_AREA(Var3, 10f, true, false, false, true);
							MISC::SET_BIT(&(Local_80.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), true);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), true);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), true, iLocal_87);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_31(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam3 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { Param0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam1;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam2;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam3;
	}
}

int func_32(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34(int iParam0)
{
	int iVar0;
	
	if (Local_80.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_80.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_80.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_80.f_2[iParam0 /*26*/];
	iVar2 = Local_80.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_80.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_80.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_80.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), Local_80.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true, 0f);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575012);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true, iLocal_87);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_80.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_80.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_80.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, fVar6, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true, 0f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575012);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true, iLocal_87);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, false, false);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_40();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_39();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), false);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()
{
	return SYSTEM::ROUND(Global_262145.f_15022);
}

int func_39()
{
	return 200;
}

var func_40()
{
	return Global_262145.f_15021;
}

int func_41(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (Local_80.f_2[iParam0 /*26*/] == 0 || Local_80.f_2[iParam0 /*26*/] == 2);
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)
{
	switch (Local_80.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_80.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_80.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_80.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_80.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_80.f_2[iParam0 /*26*/].f_2), iVar0, Local_80.f_2[iParam0 /*26*/].f_13, Local_80.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true, true, false);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_2), true, iLocal_87);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), false);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_80.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_80.f_2[iParam0 /*26*/].f_1), Local_80.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), Global_1575012);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, iLocal_87);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_80.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_80.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_80.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_80.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_80.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_80.f_2[iParam0 /*26*/].f_13, Local_80.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), Global_1575012);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, iLocal_87);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_80.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_80.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_80.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_80.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_80.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_53(Var2);
							}
						}
						if (!func_28(Local_80.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_80.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_80.f_2[iParam0 /*26*/].f_13, Local_80.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), Global_1575012);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, iLocal_87);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 44, true);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar7 = func_52(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), Local_80.f_2[iParam0 /*26*/].f_13, fVar7, false, false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_51();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), iVar5);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_50();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), iVar6);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), func_49());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_80.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()
{
	return SYSTEM::ROUND(Global_262145.f_15020);
}

int func_50()
{
	return 100;
}

var func_51()
{
	return Global_262145.f_15019;
}

float func_52(int iParam0)
{
	if (func_28(Local_80.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_80.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, true, true, true, true);
		MISC::SET_BIT(&(Local_80.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_80.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, true, true, true, true);
		MISC::SET_BIT(&(Local_80.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_80.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, true, true, true, true);
		MISC::SET_BIT(&(Local_80.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_80.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_80.f_122);
			if (!func_28(Local_80.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_80.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_80.f_123[iVar0 /*36*/] };
					*uParam2 = Local_80.f_123[iVar0 /*36*/].f_3;
					Local_80.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_80.f_122);
			if (!func_28(Local_80.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_80.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_80.f_123[iVar0 /*36*/] };
					*uParam2 = Local_80.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_80.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_80.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_80.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_80.f_484[iVar0 /*36*/] };
					*uParam2 = Local_80.f_484[iVar0 /*36*/].f_3;
					Local_80.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2405072.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_996(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_996(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590535[iVar0 /*876*/].f_847) && !func_60(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2450632.f_17;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_996(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_68(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_67(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_67(iParam0) };
		Global_2513231 = { func_67(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()
{
	Local_80.f_2[0 /*26*/] = 2;
	Local_80.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_80.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_80.f_2[1 /*26*/] = 2;
	Local_80.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_80.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_80.f_2[2 /*26*/] = 0;
	Local_80.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_80.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_80.f_2[3 /*26*/] = 0;
	Local_80.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_80.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()
{
	func_71();
	if (Local_80.f_122 == 0)
	{
		if (Local_80.f_121 == 0)
		{
			Local_80.f_122 = 10;
		}
		else
		{
			Local_80.f_122 = 9;
		}
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 4))
	{
		return;
	}
	switch (Local_80.f_121)
	{
		case 0:
			Local_80.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_80.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_80.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_80.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_80.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_80.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_80.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_80.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_80.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_80.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_80.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_80.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_80.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_80.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_80.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_80.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_80.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_80.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_80.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_80.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_80.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_80.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_80.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_80.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_80.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_80.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_80.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_80.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_80.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_80.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_80.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_80.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_80.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_80.f_123[6 /*36*/].f_14[2] = 180f;
			Local_80.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_80.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_80.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_80.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_80.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_80.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_80.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_80.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_80.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_80.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_80.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_80.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_80.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_80.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_80.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_80.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_80.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_80.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_80.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_80.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_80.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_80.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_80.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_80.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_80.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_80.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_80.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_80.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_80.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_80.f_484[0 /*36*/].f_3 = 179.583f;
			Local_80.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_80.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_80.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_80.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_80.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_80.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_80.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_80.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_80.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_80.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_80.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_80.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_80.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_80.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_80.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_80.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_80.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_80.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_80.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_80.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_80.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_80.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_80.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_80.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_80.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_80.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_80.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_80.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_80.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_80.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_80.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_80.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_80.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_80.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_80.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_80.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_80.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_80.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_80.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_80.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_80.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_80.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_80.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_80.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_80.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_80.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_80.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_80.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_80.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_80.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_80.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_80.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_80.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_80.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_80.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_80.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_80.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_80.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_80.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_80.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_80.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_80.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_80.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_80.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_80.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_80.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_80.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_80.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_80.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_80.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_80.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_80.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_80.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_80.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_80.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_80.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_80.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_80.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_80.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_80.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_80.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_80.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_80.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_80.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_80.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_80.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_80.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_80.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_80.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_80.f_1), 4);
}

var func_71()
{
	if (Local_80.f_121 != -1)
	{
		return Local_80.f_121;
	}
	if (Local_80.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) == -289320599)
		{
			Local_80.f_121 = 0;
		}
		else
		{
			Local_80.f_121 = 1;
		}
	}
	return Local_80.f_121;
}

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()
{
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_80.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574967[iVar1], Global_1575012);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1575012, Global_1574967[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0 /*615*/].f_11 != func_65())
		{
			return iParam1 == Global_1628237[iParam0 /*615*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 != func_65())
			{
				if (Global_1628237[iParam0 /*615*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	
	if (func_884())
	{
		return;
	}
	if (!func_300())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_151(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_150(PLAYER::PLAYER_ID()))
		{
			if (!func_144())
			{
				func_133(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
				MISC::SET_BIT(&iLocal_82, 18);
			}
		}
	}
	if (Local_80.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_79(166, Var0, &uLocal_101, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_132(PLAYER::PLAYER_ID()) && !func_131(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 8)) && (func_130(PLAYER::PLAYER_ID()) || func_129(PLAYER::PLAYER_ID()))) || func_60(Param1))
	{
		return;
	}
	Global_1674347 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	func_125(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_124(PLAYER::PLAYER_ID()) || func_122(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_121(PLAYER::PLAYER_ID(), 21) || func_121(PLAYER::PLAYER_ID(), 25)))
		{
			func_120(Param1, 1, 0);
		}
		if (!*uParam2 && func_996(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (func_119(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_118(iParam0));
				if (func_117(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_116(iParam0))
			{
				fVar1 = func_115(iParam0);
				if (fVar1 != 1f)
				{
					func_868(fVar1);
					MISC::SET_BIT(&(Global_1674347.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_114(iParam0) && func_124(PLAYER::PLAYER_ID()))
				{
					func_112(1);
					func_111(2);
				}
			}
			func_110(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_109(PLAYER::PLAYER_ID(), 19))
			{
				func_108(19);
			}
		}
		if (*uParam2 && func_996(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (func_119(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674347.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_116(iParam0))
			{
				func_107();
				MISC::CLEAR_BIT(&(Global_1674347.f_3), 1);
			}
			if (iParam5 && !func_132(PLAYER::PLAYER_ID()))
			{
				if (func_105(PLAYER::PLAYER_ID()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_112(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

bool func_81(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

void func_82()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_24), &Global_2409327, 2);
	MISC::_COPY_MEMORY(&(Global_2405072.f_26), &Global_2409329, 19);
	func_103();
	func_85(1, 1, 0);
	func_83();
}

void func_83()
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_102();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_87(0);
	func_86();
}

void func_86()
{
	struct<6> Var0;
	
	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_101())
		{
			func_100();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_98();
		func_92(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_98();
		func_92(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_90()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_91()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_65())
	{
		if (MISC::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_93()
{
	if ((((((func_105(PLAYER::PLAYER_ID()) == 229 || func_105(PLAYER::PLAYER_ID()) == 191) || func_97()) || func_96()) || func_95(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_94(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	if (func_130(iParam0))
	{
		return 1;
	}
	if (func_150(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
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

var func_96()
{
	return Global_1574405;
}

int func_97()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	func_99();
	Global_2405072.f_706 = 0;
}

void func_99()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_100()
{
	if (func_91())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_101()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_103()
{
	func_104();
	Global_2405072.f_2254 = 0;
}

void func_104()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_105(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_106(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_108(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_109(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

void func_110(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

void func_111(int iParam0)
{
	MISC::SET_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_112(int iParam0)
{
	if (func_113() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_113()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_118(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405072.f_45.f_49 = { Param0 };
	Global_2405072.f_45.f_52 = iParam1;
	Global_2405072.f_45.f_53 = iParam2;
}

bool func_121(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_122(int iParam0)
{
	if (func_123(iParam0))
	{
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_65())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_109(iParam0, 9);
	}
	return 0;
}

void func_125(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_128(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_126();
	}
}

void func_126()
{
	if (!func_127(PLAYER::PLAYER_ID()))
	{
		func_110(25);
	}
}

bool func_127(int iParam0)
{
	return func_109(iParam0, 25);
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

bool func_131(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 2);
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return 0;
}

void func_133(int iParam0)
{
	if (!func_150(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_141(PLAYER::PLAYER_ID()) != 0)
		{
			func_110(20);
			func_134(func_136());
			if (func_132(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_135() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
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

int func_135()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_136()
{
	int iVar0;
	
	iVar0 = func_105(PLAYER::PLAYER_ID());
	if (func_140(iVar0) == 0)
	{
		return -1;
	}
	if (func_139(iVar0))
	{
		return 65;
	}
	if (func_138(iVar0))
	{
		return 66;
	}
	if (func_137(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_141(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_132(iParam0) && !func_131(iParam0)) && !MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 8));
	bVar2 = func_150(iParam0);
	uVar3 = func_143();
	uVar4 = func_144();
	if ((bVar1 && (func_130(iParam0) || func_129(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_124(iParam0)) && !func_142(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_109(iParam0, 19);
}

bool func_143()
{
	return Global_1312418;
}

int func_144()
{
	if ((func_109(PLAYER::PLAYER_ID(), 21) || func_109(PLAYER::PLAYER_ID(), 22)) || func_147())
	{
		return 1;
	}
	if (func_145())
	{
		func_110(22);
		return 1;
	}
	return 0;
}

int func_145()
{
	if (func_106(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_143() && !func_146()) || func_121(PLAYER::PLAYER_ID(), 21)) || func_121(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_108(27);
		}
	}
	return 0;
}

bool func_146()
{
	return Global_1312418.f_1;
}

bool func_147()
{
	return func_148(358, -1);
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2583656[iParam0 /*3*/][func_149(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_150(int iParam0)
{
	return func_109(iParam0, 20);
}

float func_151(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_80.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_80.f_2[iVar2 /*26*/].f_1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(Var3, Var4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_152(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_299(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_297() || iParam2 == 28)
	{
		if (func_238(iParam1, iParam2, uParam3, Global_1574185, 0, func_295(), sParam7))
		{
			func_237(1);
			if ((!func_235() && !func_233()) || MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_232())
				{
					func_227();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_226(1);
						Global_1574185 = 0;
						iVar19 = -1;
						if (Global_1574406 != 1)
						{
							func_225(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_996(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_224(iVar3) || Global_2425662[iVar3 /*421*/].f_236 != -1) || func_223(iVar3))
										{
											iVar9 = iVar3;
											if (func_123(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_222(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_219(PLAYER::PLAYER_ID(), 0) && func_105(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_218())
							{
								if (func_996(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_65();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_217(iVar3) && func_213(iVar3, iParam2)) && func_996(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590535[iVar9 /*876*/].f_211.f_6;
								Var6 = { func_208(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
								iVar5 = func_202(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574185++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_218())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_197(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_196(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_191(iVar3, 0);
								if (bVar2)
								{
									if (func_190(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_189(iParam5))
								{
									func_188(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_188(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_996(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_65();
							}
							if (func_217(iVar3))
							{
								if (func_996(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590535[iVar9 /*876*/].f_211.f_6;
									Var6 = { func_208(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
									iVar5 = func_202(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574185++;
									iVar16 = func_191(iVar3, 1);
									if (bVar2)
									{
										if (func_190(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_166(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_163(uParam3, iParam1, iParam2);
						}
						func_162(&(uParam3->f_21));
						func_161();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_160(uParam3, iParam1);
							func_159(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_160(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_155(uParam3))
						{
							Global_1574406 = 1;
						}
						func_153(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_161();
			func_226(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_153(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_162(&(uParam0->f_21));
		func_154(0);
	}
}

void func_154(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_65() && func_996(iVar3, 0, 1))
	{
		Var2 = { func_67(iVar3) };
		iVar1 = func_158(uParam0, uParam0->f_37);
		if (func_157(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_156(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_158(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_159(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_160(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_161()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_162(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_163(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_65())
		{
			if (func_996(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_165(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_164(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_164(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_165(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_166(int iParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_187() && iParam4 < func_186())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_185(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_185("");
			if (uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				func_185(&sParam5);
			}
			func_171(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_170(uParam3))
			{
				func_169("DPAD_FRIEND");
			}
			else if (func_168(uParam3))
			{
				func_169("DPAD_FRIEND");
			}
			else if (func_167(uParam3))
			{
				func_169("DPAD_CREW");
			}
			else
			{
				func_169("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_167(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_168(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_169(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_170(var uParam0)
{
	if (func_168(uParam0) && func_167(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_171(var uParam0, int iParam1)
{
	if (func_184(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_176(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2425662[iParam1 /*421*/].f_413, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_172())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_172()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_174() || func_173())
		{
			return 1;
		}
	}
	return 0;
}

var func_173()
{
	return Global_2450632.f_15;
}

int func_174()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_173();
	}
	return func_175(Global_4456448.f_194990);
}

int func_175(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0)
{
	if ((func_996(iParam0, 0, 1) && func_180()) && func_177(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_177(int iParam0, bool bParam1)
{
	return func_178(iParam0, bParam1, 1);
}

int func_178(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_179(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_65() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_65())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_180()
{
	if (func_132(PLAYER::PLAYER_ID()) || func_183())
	{
		if (!func_181(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_181(int iParam0)
{
	if (func_182(iParam0) == 236 || func_182(iParam0) == 150)
	{
		return func_130(iParam0);
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_183()
{
	switch (func_105(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_172())
	{
		if (func_996(iParam0, 0, 1))
		{
			return func_123(iParam0);
		}
	}
	if ((func_996(iParam0, 0, 1) && func_180()) && func_179(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_185(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_186()
{
	int iVar0;
	
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_187()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_188(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_187() && iParam3 < func_186())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_169(sParam16);
				}
				else
				{
					func_185(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_218())
				{
					func_185("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_169(&(uParam2->f_104));
					}
					else
					{
						func_185("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_185("");
				}
				if (uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					func_185(&sParam4);
				}
				func_171(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_185("");
					func_185("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_170(uParam2))
				{
					func_169("DPAD_FRIEND");
				}
				else if (func_168(uParam2))
				{
					func_169("DPAD_FRIEND");
				}
				else if (func_167(uParam2))
				{
					func_169("DPAD_CREW");
				}
				else
				{
					func_169("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_189(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_190(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_123(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_65();
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_132(iParam0)) && !func_150(iParam0))
	{
		iVar0 = func_195();
	}
	iVar1 = func_194(iParam0);
	if (!iVar1 == -1)
	{
		return func_192(iVar1);
	}
	return iVar0;
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_193(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_193(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_194(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_190(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_195()
{
	return 21;
}

char* func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_197(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_201(iParam3))
	{
		*fParam1 = (func_198(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_189(iParam3))
	{
		*fParam1 = (func_198(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_200(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_199(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_199(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_200(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = func_205(iParam0);
	if (iVar0 == -1)
	{
		func_203(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_203(int iParam0, bool bParam1)
{
	if (!func_996(iParam0, 0, 1))
	{
		return;
	}
	if (func_205(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_204(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!func_996(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_206(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_206(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389239)
	{
		Global_1389078[iVar2 /*5*/] = { Global_1389078[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_207(&(Global_1389078[iVar2 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_207(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_208(int iParam0)
{
	char cVar0[32];
	
	if (func_996(iParam0, 0, 1))
	{
		Global_2513218 = { func_67(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_157(Global_2513218))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_212(&Global_2513218))
		{
			Global_2513148 = { func_210(iParam0) };
			func_209(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_209(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_210(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_211(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_211(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_212(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_131(iParam0) || func_216(iParam0)) || func_215(iParam0))
		{
			return 0;
		}
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	if ((!func_224(iParam0) && Global_2425662[iParam0 /*421*/].f_236 == -1) && !func_223(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_214(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_142, 22);
}

bool func_215(int iParam0)
{
	if (func_131(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 8);
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iVar0 /*876*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_218()
{
	switch (func_105(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_182(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_150(PLAYER::PLAYER_ID()))
	{
		switch (func_105(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_220(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_220(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_221(iParam0, 0);
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_996(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_224(iVar1) || Global_2425662[iVar1 /*421*/].f_236 != -1) || func_223(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_223(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196 != 0;
}

int func_224(int iParam0)
{
	if (func_996(iParam0, 0, 1))
	{
		if (func_996(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_105(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_226(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_227()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_231())
		{
			func_228();
		}
	}
}

void func_228()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_229(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_229(var uParam0, int iParam1)
{
	func_230(uParam0, iParam1);
}

void func_230(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_231()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

int func_232()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0) && func_231())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1) && func_231())
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	if (func_231())
	{
		if (func_234(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_235()
{
	if (func_231())
	{
		if (func_236(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_237(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_238(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_294(iParam1);
	fVar4 = func_293();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_292())
		{
			if (func_291() > 0 && Global_1574187)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_272())
		{
			func_271(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_271(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_291() == 1)
		{
			func_270(bVar3, iParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_271(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_291() == 0 && !bParam5))
		{
			func_271(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_269();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_269();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_270(bVar3, iParam0, 0))
				{
					func_225(iParam0, 0, 0);
					sVar1 = func_267(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_265(iParam1) };
					if (bParam4)
					{
						func_262(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_255(iParam0, func_259(uParam2), func_256(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_248(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_246(iParam0, sVar6, func_247(), -1);
					}
					else if (func_172())
					{
						uParam2->f_34 = Global_1574186;
						func_262(iParam0, sVar1, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_239(iParam1);
						uParam2->f_34 = Global_1574186;
						func_262(iParam0, sVar1, "", 0, iVar5, Global_1574186, 1);
					}
					else
					{
						iVar5 = func_239(iParam1);
						func_262(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_245())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_244(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_243(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_242(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_240())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_240()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_241(Global_4456448.f_194990);
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_242(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_243(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_244(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_245()
{
	return Global_4456448.f_1 == 0;
}

void func_246(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_169(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_169("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_247()
{
	switch (func_105(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_248(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_105(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_251())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_250(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_250(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_249(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_250(bool bParam0)
{
	return func_177(PLAYER::PLAYER_ID(), bParam0);
}

bool func_251()
{
	return (func_254() && func_252(func_253()));
}

bool func_252(int iParam0)
{
	return func_179(iParam0, 1);
}

int func_253()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35;
}

bool func_254()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148;
}

void func_255(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_169(sParam1);
		}
		else if (func_182(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_169("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_256(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(PLAYER::PLAYER_ID());
	if (func_258())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_257())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_257()
{
	if (func_182(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_258()
{
	return Global_1590408;
}

char* func_259(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(PLAYER::PLAYER_ID());
	if (func_258())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_261() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_261() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_257())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_260() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_260()
{
	return Global_2537071.f_5048;
}

int func_261()
{
	if (func_182(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_262(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_185(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_169(sParam1);
		}
		if (func_292() && iParam6)
		{
			if (func_264())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_169(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_263(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_263(int iParam0)
{
	if (func_244(iParam0) || func_243(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_264()
{
	return Global_1574187;
}

struct<4> func_265(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_266(PLAYER::PLAYER_ID()) || func_242(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_172() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_266(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_267(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_172() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_268();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_268()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_269()
{
	Global_42351 = 1;
}

bool func_270(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_271(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_161();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_162(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_272()
{
	if (func_290())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (!func_287())
	{
		return 0;
	}
	if (!func_285())
	{
		return 0;
	}
	if (func_284(8, -1))
	{
		return 0;
	}
	if (func_291() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_283())
	{
		return 0;
	}
	else if (!func_280(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_279(1) || func_277(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_276() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_274(PLAYER::PLAYER_ID()) && !func_276())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_273(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_273(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

int func_274(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_275()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_276()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

int func_277(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_278(PLAYER::PLAYER_PED_ID()))
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

int func_278(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_279(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_280(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_281(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_281(int iParam0)
{
	return func_282(iParam0);
}

bool func_282(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

bool func_283()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_284(int iParam0, int iParam1)
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

int func_285()
{
	if (func_286() == 0)
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	return Global_1312467.f_18;
}

int func_287()
{
	if (func_288())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_288()
{
	return Global_1312440;
}

bool func_289()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

bool func_290()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_291()
{
	return Global_1377170.f_68;
}

int func_292()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_293()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_295()
{
	if (func_296(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_296(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_297()
{
	if (func_295())
	{
		return 1;
	}
	if (func_215(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_258())
	{
		return 1;
	}
	if (func_132(PLAYER::PLAYER_ID()))
	{
		switch (func_182(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_298(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_298(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_298(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_298(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 4);
}

int func_299(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_132(PLAYER::PLAYER_ID()) && !func_150(PLAYER::PLAYER_ID())) && !func_181(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_106(PLAYER::PLAYER_ID(), 0) && func_150(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_141(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_300()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_301();
	}
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Local_81[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_301()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_302()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_303(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_303(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_113, iVar7))
			{
				if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!MISC::IS_BIT_SET(Local_80.f_109, iVar7))
							{
								if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, iVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar7 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_80.f_2[iVar7 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_80.f_2[iVar7 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_885() == Local_80.f_118)
															{
																MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), iVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (iVar2 == NETWORK::NET_TO_PED(Local_80.f_2[iVar7 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(iVar1))
										{
											iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
											{
												if (Var0.f_5)
												{
													if (iVar4 == PLAYER::PLAYER_ID())
													{
														Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), iVar7);
														Var6.f_2 = -332709484;
														Var6.f_10 = PLAYER::PLAYER_ID();
														func_309(Var6, func_310(0));
														func_304("HUNT_TCKP");
													}
												}
											}
											else if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
											{
												if (Var0.f_5)
												{
													iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
													MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
										{
											if (Var0.f_5)
											{
												MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
									{
										if (Var0.f_5)
										{
											MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
								{
									if (Var0.f_5)
									{
										MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_300())
	{
		if (!func_109(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (func_190(iVar3, 1))
											{
												if (Local_80.f_118 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_118));
													if (func_76(iVar3, iVar5, 1))
													{
														if (!func_144())
														{
															func_133(0);
															func_126();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_304(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_305(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_305(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_308() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_306(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_307(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_308()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_309(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_310(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_996(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_311()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_82, 14))
		{
			MISC::CLEAR_BIT(&iLocal_82, 14);
		}
		return;
	}
	iVar0 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	if (!MISC::IS_BIT_SET(iLocal_82, 14))
	{
		if (Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_82, 14);
	}
	if (!MISC::IS_BIT_SET(iLocal_82, 15))
	{
		MISC::SET_BIT(&iLocal_82, 15);
		func_816();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_81[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_770();
					func_752();
					func_737();
					break;
				
				case 2:
					func_312();
					break;
				
				case 3:
					func_898();
					break;
				}
			}
	}
}

void func_312()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = func_301();
		iVar2 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	}
	if (!MISC::IS_BIT_SET(Local_81[iVar1 /*14*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_82, 9))
		{
			if (MISC::IS_BIT_SET(Local_80.f_1, 1))
			{
				if (iVar1 == Local_80.f_118 || func_885() == Local_80.f_118)
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_736(iVar2);
						iVar4 = func_735(iVar2);
						func_733(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_82, 6))
						{
							func_621(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_82, 6);
						}
						Var0 = func_620();
						Var0.f_1 = func_619();
						func_440(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
						iLocal_102 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&iLocal_82, 17);
						func_7(&uLocal_103, 0, 0);
					}
				}
				else if (func_300())
				{
					if (func_190(iVar2, 1))
					{
						if (func_141(iVar2) >= 2)
						{
							sVar3 = func_736(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
							iVar4 = func_735(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
							func_733(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_82, 6))
							{
								func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_82, 6);
							}
							if (func_127(iVar2))
							{
								Var0 = func_439();
								Var0.f_1 = func_438();
							}
							func_440(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_141(iVar2) >= 2)
						{
							sVar3 = func_736(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
							iVar4 = func_735(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
							func_733(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_82, 6))
							{
								func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_82, 6);
							}
							if (func_127(iVar2))
							{
								Var0 = func_439();
								Var0.f_1 = func_438();
							}
							func_440(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_82, 9);
			}
			else if (MISC::IS_BIT_SET(Local_80.f_1, 3))
			{
				iVar5 = (4 - Local_80.f_115);
				if (iVar1 == Local_80.f_118 || func_885() == Local_80.f_118)
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_432();
						iVar4 = func_735(iVar2);
						func_733(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_82, 6))
						{
							func_621(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_82, 6);
						}
						Var0 = func_620();
						Var0.f_1 = func_619();
						func_440(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_736(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
						iVar4 = func_735(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
						if (iVar5 == 1)
						{
							func_733(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_733(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_82, 6))
						{
							func_621(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_82, 6);
						}
						if (func_127(iVar2))
						{
							Var0 = func_439();
							Var0.f_1 = func_438();
						}
						func_440(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				MISC::SET_BIT(&iLocal_82, 9);
			}
			else if (MISC::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (func_385())
				{
					if (func_884())
					{
						if (func_141(iVar2) >= 2)
						{
						}
					}
					else if (func_141(iVar2) >= 2)
					{
						func_347(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_82, 6))
					{
						func_621(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_82, 6);
					}
					func_440(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_82, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_82, 9))
		{
			func_816();
			if (!MISC::IS_BIT_SET(iLocal_83, 8))
			{
				func_332();
				func_75();
				MISC::SET_BIT(&iLocal_83, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_82, 10))
			{
			}
			if (func_313(&uLocal_90, 0, 0))
			{
				if (iVar1 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_82, 17))
			{
				if (func_6(&uLocal_103, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iLocal_102);
					MISC::CLEAR_BIT(&iLocal_82, 17);
				}
			}
		}
	}
}

int func_313(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_110(29);
	if ((*uParam0 > 0 && !func_231()) && func_141(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_329())
		{
			func_328();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2537071.f_4588), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_327(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_320(iParam2);
				func_327(uParam0, 2);
			}
			break;
		
		case 2:
			func_320(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_314(func_315(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_327(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
				MISC::CLEAR_BIT(&(Global_1674347.f_3), 2);
				func_327(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
			MISC::CLEAR_BIT(&(Global_1674347.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_314(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_315(int iParam0)
{
	if (((func_318(PLAYER::PLAYER_ID()) || func_317(PLAYER::PLAYER_ID())) || func_251()) || iParam0)
	{
		if (func_317(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_220(func_316()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_316()
{
	return Global_1650640;
}

bool func_317(int iParam0)
{
	return func_221(func_105(iParam0), 0);
}

bool func_318(int iParam0)
{
	return func_319(func_105(iParam0));
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148 && func_179(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_320(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_996(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !CAM::IS_SCREEN_FADED_OUT()) && !func_109(PLAYER::PLAYER_ID(), 22)) && func_141(PLAYER::PLAYER_ID()) != 0) && !func_325(func_326())) && !func_318(PLAYER::PLAYER_ID())) && !func_324(func_105(PLAYER::PLAYER_ID()))) && !func_323(func_105(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2537071.f_4588), 1);
			func_322(func_315(iParam0), -1);
			func_321(1);
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_321(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_250(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_231())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_322(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_326()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_328()
{
	Global_2462222 = 1;
}

int func_329()
{
	if (((((((func_105(PLAYER::PLAYER_ID()) == 170 || func_105(PLAYER::PLAYER_ID()) == 219) || func_105(PLAYER::PLAYER_ID()) == 221) || func_105(PLAYER::PLAYER_ID()) == 220) || func_105(PLAYER::PLAYER_ID()) == 216) || func_105(PLAYER::PLAYER_ID()) == 215) || func_105(PLAYER::PLAYER_ID()) == 214) || func_105(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_330(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_330(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_331(int iParam0)
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
		case joaat("MPSV_LP0_31"):
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

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_97[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_97[iVar0]));
		}
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_82, 18))
	{
		func_346(1);
		MISC::CLEAR_BIT(&iLocal_82, 18);
	}
	func_343();
	func_333();
}

void func_333()
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_82, 7))
	{
		MISC::SET_BIT(&iLocal_82, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iVar0))
					{
						func_341(iVar1, 432, 0, 0);
						func_334(iVar1, func_340(iLocal_100), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_334(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_336(iParam0))
	{
		return;
	}
	if (func_335(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = uParam1;
		}
	}
}

int func_335(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_336(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_337())
	{
		return 1;
	}
	return 0;
}

int func_337()
{
	switch (func_339())
	{
		case 0:
			return func_338();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_338()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_339()
{
	return Global_30768;
}

int func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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

void func_341(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_336(iParam0))
	{
		return;
	}
	if (func_335(&(Global_2416079.f_588[iParam0]), &(Global_2416079.f_951[iParam0]), &(Global_2416079.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_342();
		}
	}
}

void func_342()
{
	Global_2416079.f_1614 = 1;
}

void func_343()
{
	if (MISC::IS_BIT_SET(iLocal_82, 16))
	{
		func_86();
		func_344();
		MISC::CLEAR_BIT(&iLocal_82, 16);
	}
}

void func_344()
{
	if (Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_345();
	}
}

void func_345()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_346(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_143())
		{
			if (func_996(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false, false);
				}
			}
		}
		else
		{
			if (func_996(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_347(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_384(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_229(&(Var0.f_69), iParam7);
	}
	return func_348(&Var0);
}

int func_348(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_359(uParam0, uParam0->f_17);
	func_358(uParam0);
	if (func_61())
	{
		func_358(uParam0);
	}
	if (func_357(uParam0->f_1))
	{
		func_350();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_350();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_229(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_349(uParam0->f_69, 128))
			{
				if (func_234(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_229(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_349(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_350()
{
	bool bVar0;
	
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_351();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_351()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_355(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_352(&(Global_2439138.f_3047.f_1));
}

void func_352(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_354(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_353(0);
}

void func_353(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_354(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_355(var uParam0)
{
	func_356(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_356(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_357(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_358(var uParam0)
{
	if (func_236(uParam0->f_1))
	{
		uParam0->f_72 = func_195();
	}
}

void func_359(var uParam0, int iParam1)
{
	if (func_236(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_996(iParam1, 0, 1))
	{
		return;
	}
	if (func_234(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_360(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_360(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_274(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_274(PLAYER::PLAYER_ID()) || (func_383() && func_382())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_381();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_996(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_379(iParam1, iParam0, 0);
							}
							else
							{
								return func_373(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_373(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_379(iParam1, iParam0, 0);
				}
				else
				{
					return func_361(0, -1, 0);
				}
			}
			else
			{
				return func_361(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_379(iParam1, iParam0, 0);
		}
		else
		{
			return func_373(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_373(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_361(bool bParam0, int iParam1, bool bParam2)
{
	return func_362(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_362(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_372() || (func_371() && func_369())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_368(iParam2, iVar0);
		}
		else
		{
			return func_368(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_367(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_366(1);
				}
				else
				{
					return func_366(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_363(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_363(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_366(1);
	}
	return func_366(0);
}

int func_363(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_365(iParam0, iParam1, iParam3);
	if (func_364(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_364(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_367(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_366(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_367(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_365(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_369()
{
	if (func_370())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_370()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_371()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_372()
{
	if (func_370() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_376())
			{
				iVar3 = func_194(iParam0);
				if (!iVar3 == -1)
				{
					return func_192(iVar3);
				}
			}
			if ((func_375(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_367(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_366(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_374(1);
			}
			else
			{
				return func_362(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_366(1);
			}
			else
			{
				return func_362(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_194(iParam0);
	if (!iVar4 == -1)
	{
		return func_192(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_374(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_375(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_376()
{
	if (((func_173() || func_378()) || func_61()) || func_377())
	{
		return 1;
	}
	return 0;
}

var func_377()
{
	return Global_2450632.f_19;
}

var func_378()
{
	return Global_2450632.f_16;
}

int func_379(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969031.f_14[iParam0];
	if (func_376())
	{
		iVar2 = func_194(iParam1);
		if (!iVar2 == -1)
		{
			return func_192(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_362(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_380(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_367(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_374(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_381()
{
	return Global_2359302.f_2;
}

bool func_382()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_383()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

void func_384(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_385()
{
	int iVar0;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_386(1, 1, 1, 0))
		{
			if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_144())
		{
			if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_301();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_81[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_386(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_431(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_214(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_430(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (func_428())
	{
		return 0;
	}
	if (func_283())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_281(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_285())
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID(), 0) || func_121(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_121(PLAYER::PLAYER_ID(), 12) || func_121(PLAYER::PLAYER_ID(), 14)) || func_121(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_421(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_396())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_395())
		{
			return 0;
		}
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_394(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_393())
	{
		return 0;
	}
	if (func_392(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_391(PLAYER::PLAYER_ID()) && func_390(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_389())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_388(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_95(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_150(PLAYER::PLAYER_ID()))
	{
		if (func_387(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return 0;
}

int func_388(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_389()
{
	return Global_1676377.f_4303 != -1;
}

int func_390(int iParam0)
{
	if (iParam0 != func_65() && func_996(iParam0, 1, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

int func_391(int iParam0)
{
	if (iParam0 != func_65() && func_996(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_392(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (!func_996(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

bool func_395()
{
	return Global_98796.f_346 > 0;
}

int func_396()
{
	int iVar0;
	
	iVar0 = func_105(PLAYER::PLAYER_ID());
	if (((func_420(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_28) || func_419(PLAYER::PLAYER_ID())) || func_418(PLAYER::PLAYER_ID())) || func_413(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_411(PLAYER::PLAYER_ID()))
	{
		if (func_138(iVar0) || func_410(iVar0))
		{
			return 1;
		}
	}
	if (func_330(PLAYER::PLAYER_ID()))
	{
		if (func_410(iVar0))
		{
			return 1;
		}
	}
	if (func_409(PLAYER::PLAYER_ID()))
	{
		if (func_408(iVar0))
		{
			return 1;
		}
	}
	if (func_407(PLAYER::PLAYER_ID()))
	{
		if (func_406(iVar0))
		{
			return 1;
		}
	}
	if (func_405(PLAYER::PLAYER_ID()))
	{
		if (func_404(iVar0))
		{
			return 1;
		}
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		if (func_402(iVar0))
		{
			return 1;
		}
	}
	if (func_401(PLAYER::PLAYER_ID(), 0))
	{
		if (func_137(iVar0))
		{
			if (func_399(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_398(PLAYER::PLAYER_ID()))
	{
		if (func_397(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (func_400(iParam0) != func_65())
	{
		return func_400(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_400(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_401(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_65())
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(int iParam0)
{
	if (func_412(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_413(int iParam0)
{
	if (func_414(Global_1590535[iParam0 /*876*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_415(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_415(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_415(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_65())
	{
		if (!func_417(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (MISC::IS_BIT_SET(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_416(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 24);
}

int func_416(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_421(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_330(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_418(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_409(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_407(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_405(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_427(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_403(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_426(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_401(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_398(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_424(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_422(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_996(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_65())
			{
				return func_331(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_428()
{
	return Global_1312877;
}

bool func_429()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

int func_430(int iParam0)
{
	if (func_280(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_431(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

char* func_432()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (iVar0 != func_65())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_109(iVar0, 28) || func_109(PLAYER::PLAYER_ID(), 28)) || func_437(iVar0)) && !func_436(iVar0))
			{
				return func_434(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_434(iVar0, 0);
			}
		}
		sVar1 = func_433(&(Global_1628237[iVar0 /*615*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_434(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_433(var uParam0)
{
	return uParam0;
}

char* func_434(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_177(iParam0, 1))
		{
			return func_435();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_435()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_436(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_437(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_438()
{
	return ((4 - Local_80.f_115) * Global_262145.f_15518);
}

int func_439()
{
	return ((4 - Local_80.f_115) * Global_262145.f_15517);
}

void func_440(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_617(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_616(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_615(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_613(iParam0))
	{
		if (bParam1)
		{
			if (func_612(PLAYER::PLAYER_ID()) > 0)
			{
				func_611();
			}
			else
			{
				func_610();
			}
		}
		else
		{
			func_609();
		}
	}
	func_593(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_591(iParam0, uParam2, &iVar0, &iVar5);
	func_566(iParam0, uParam2, &iVar0, &iVar5);
	func_563(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_546(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	iVar8 = func_253();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_190(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_76(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_535(&iVar0, 1);
			}
		}
	}
	func_531(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_530();
		func_487(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674356.f_9 = iVar0;
		func_461(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_460(iParam0, iVar0);
		if (func_459(iParam0))
		{
			if (func_458(iParam0) > -1)
			{
				func_457(func_458(iParam0), iVar0);
			}
		}
		Global_2462880 = iVar0;
		func_456(&Global_2461144, 0, 0);
	}
	if (func_124(PLAYER::PLAYER_ID()) || func_150(PLAYER::PLAYER_ID()))
	{
		func_447(iParam0);
	}
	if (func_319(iParam0))
	{
		Global_1674374.f_13 = iVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_324(iParam0))
	{
		Global_1674428.f_13 = iVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_408(iParam0))
	{
		Global_1674491.f_12 = iVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_406(iParam0))
	{
		Global_1674535.f_12 = iVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_404(iParam0))
	{
		Global_1674589.f_12 = iVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_323(iParam0))
	{
		if (func_446(iParam0))
		{
			Global_1674671.f_12 = iVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_442(iParam0))
		{
			Global_1674725.f_12 = iVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_441(iParam0))
	{
		Global_1674809.f_12 = iVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_397(iParam0))
	{
		Global_1674884.f_16 = iVar0;
		Global_1674884.f_17 = iVar1;
	}
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_442(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_443(func_444(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	if (func_105(iParam0) == 237 || func_105(iParam0) == 250)
	{
		return func_445(iParam0);
	}
	return -1;
}

int func_445(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_446(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_447(int iParam0)
{
	if (func_455(PLAYER::PLAYER_ID()) && func_454())
	{
		if (func_138(iParam0))
		{
			func_449(10146, -1);
		}
		else if (func_139(iParam0))
		{
			func_449(10148, -1);
		}
		else if (func_221(iParam0, 1))
		{
			func_449(10149, -1);
		}
		else if (func_448(iParam0))
		{
			func_449(10150, -1);
		}
	}
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_453(iParam0, func_149(iParam1), 0);
	iVar0++;
	if (!func_452(iParam0))
	{
		func_451(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_450(iParam0, iVar0, iParam1, 1);
	}
}

void func_450(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_149(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_149(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_149(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_149(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_149(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_149(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_149(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_149(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_149(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_149(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_149(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_149(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_149(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_149(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_149(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_149(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_149(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_149(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_149(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_149(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_149(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_149(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_149(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_149(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_149(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_149(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_149(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_149(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_149(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_149(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_149(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_149(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_149(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_149(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_149(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_149(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_149(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_149(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_149(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_149(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_149(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_149(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_149(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_149(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_149(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_149(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_149(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_149(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_149(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_149(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_149(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_451(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_452(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_149(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_454()
{
	return func_252(PLAYER::PLAYER_ID());
}

bool func_455(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_123, 14);
}

void func_456(var uParam0, bool bParam1, bool bParam2)
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

void func_457(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_459(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_460(int iParam0, int iParam1)
{
	if (func_455(PLAYER::PLAYER_ID()) && func_454())
	{
		if (func_138(iParam0) && iParam1 > 0)
		{
			func_451(10147, (func_453(10147, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_486();
	if (iVar5 != func_65())
	{
		func_485(iVar5, &iVar0, &iVar1);
	}
	bVar6 = !func_484(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_483())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_454())
			{
				if (!func_483())
				{
					Var7 = { func_482() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_481(Var7)), func_480(Var7), iParam4);
				}
			}
			else if (func_483())
			{
				func_468(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_467())
			{
				if (!func_483())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_481(func_466(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_483())
			{
				func_468(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_467())
			{
				if (!func_483())
				{
					iVar2 = func_462(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_483())
			{
				func_468(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, iVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_483())
			{
				func_468(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_467())
			{
				if (!func_483())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_483())
			{
				func_468(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_483())
			{
				func_468(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_483())
			{
				func_468(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_483())
			{
				func_468(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_483())
			{
				func_468(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_483())
				{
					func_468(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_483())
			{
				func_468(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_483())
			{
				func_468(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = iVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(iVar0, iVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_462(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_465(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_463(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_463(int iParam0, int iParam1)
{
	return (func_464(iParam0) * iParam1);
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		
		case 0:
			return Global_262145.f_22307;
		
		case 1:
			return Global_262145.f_22308;
		
		case 2:
			return Global_262145.f_22309;
		
		case 3:
			return Global_262145.f_22310;
		
		case 4:
			return Global_262145.f_22311;
		
		case 5:
			return Global_262145.f_22312;
		
		case 6:
			return Global_262145.f_22313;
		
		case 7:
			return Global_262145.f_22314;
		
		default:
	}
	return 0;
}

float func_465(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_466(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_467()
{
	return func_123(PLAYER::PLAYER_ID());
}

void func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_483())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_469(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_469(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_469(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_469(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_469(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_483())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_476(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_475(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_470(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_471(iParam0);
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_483())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_474(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_472(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_472(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_473(&(uParam0->f_14));
	func_473(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_473(var uParam0)
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

int func_474(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_483())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_477(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_477(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_479(Var0.f_1);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_478();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_478()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_479(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_481(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_482()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_193;
}

int func_483()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_484(bool bParam0)
{
	return func_190(PLAYER::PLAYER_ID(), bParam0);
}

void func_485(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[iParam0 /*615*/].f_11.f_8[0];
	*uParam2 = Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_486()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

int func_487(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_488(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_488(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_498(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_494(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_489(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_489(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_492(iParam0, 1) };
	if (iParam0 == func_491(PLAYER::PLAYER_PED_ID()))
	{
		func_490(1);
	}
	func_494(Var0, iParam1, 0, sParam2, iParam3);
}

void func_490(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_491(int iParam0)
{
	return iParam0;
}

Vector3 func_492(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_493(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_493(int iParam0)
{
	return iParam0;
}

void func_494(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { Param0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_497(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam1;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam2;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_496();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_495();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_495()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_496()
{
	var uVar0;
	
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_497(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_498(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_499(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_499(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_529(PLAYER::PLAYER_ID()) || func_528(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_240() || func_527(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_526(sParam2))
	{
	}
	if (func_525())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_523(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_522(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_520(0, &iVar1);
					break;
				
				case 3:
					func_520(1, &iVar1);
					break;
				
				case 1:
					func_518(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_517(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_509((func_516(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_2 != -1)
				{
					func_517(1165, iVar1, -1);
				}
				func_504(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_500((func_502(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_500((func_502(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_500(int iParam0)
{
	if (func_525())
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_5 = iParam0;
		func_501(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_501(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_502(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_996(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_503(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_503(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_503(int iParam0)
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

void func_504(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_67(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_507(func_508(&Var0));
			if (iVar1 == 0)
			{
				func_506(&Global_1387915, iParam0);
				func_505(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar1 == 1)
			{
				func_506(&Global_1387916, iParam0);
				func_505(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar1 == 2)
			{
				func_506(&Global_1387917, iParam0);
				func_505(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar1 == 3)
			{
				func_506(&Global_1387918, iParam0);
				func_505(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar1 == 4)
			{
				func_506(&Global_1387919, iParam0);
				func_505(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_505(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_506(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_507(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_508(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	if (func_525())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_149(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_149(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_515(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_6 = func_513(iParam0, 1);
		}
		func_450(639, iParam0, -1, 1);
		func_451(640, func_513(iParam0, 1), -1, 1, 0);
		Global_1388060[func_149(-1)] = iParam0;
		func_510(-1109644434, 7, 0);
	}
}

void func_510(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_512(iParam1, iParam2))
	{
		iVar0 = func_511();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_512(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_513(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_514(iParam0, 0);
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
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

int func_515(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_516(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_149(-1)];
			}
			else if (func_515(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_149(-1)];
	}
	return 0;
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_453(iParam0, func_149(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_452(iParam0))
	{
		func_451(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_450(iParam0, iVar0, iParam2, 1);
	}
}

void func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_367(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_68(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_519(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_519(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_519(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_520(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_996(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_996(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_521(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_519(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_519(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_521(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_522(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_519(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_523(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_516(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_516(PLAYER::PLAYER_ID());
		}
	}
	if (func_524(8000, 0, 0) > 0)
	{
		if (func_524(8000, 0, 0) < (iParam0 + func_516(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_524(8000, 0, 0) - func_516(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_524(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_525()
{
	return 1;
}

int func_526(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	return func_404(func_105(iParam0));
}

bool func_528(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_529(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_530()
{
	Global_2462221 = 1;
}

void func_531(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_534(iParam0);
	iVar1 = func_533(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2537071.f_5124.f_265, NETWORK::GET_NETWORK_TIME()));
	if (func_532(iParam0) != -1)
	{
		if (iVar2 > func_532(iParam0))
		{
			iVar2 = func_532(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_532(int iParam0)
{
	if (func_221(iParam0, 0) || func_139(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_138(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		
		case 191:
			return Global_262145.f_18485;
		
		case 190:
			return Global_262145.f_18484;
		
		case 227:
			return Global_262145.f_21043;
		
		case 226:
			return Global_262145.f_21031;
		
		case 225:
			return Global_262145.f_21051;
		
		case 230:
			return Global_262145.f_22303;
		
		case 229:
			return Global_262145.f_22207;
		
		case 233:
			return Global_262145.f_22779;
		
		case 237:
			return Global_262145.f_23942;
		
		case 238:
			return Global_262145.f_24053;
		
		case 249:
			return Global_262145.f_24069;
		
		case 243:
			return Global_262145.f_26301;
		
		default:
	}
	return -1;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14995;
		
		case 171:
			return Global_262145.f_15054;
		
		case 172:
			return Global_262145.f_15072;
		
		case 173:
			return Global_262145.f_15013;
		
		case 166:
			return Global_262145.f_15028;
		
		case 167:
			return Global_262145.f_15119;
		
		case 169:
			return Global_262145.f_15091;
		
		case 168:
			return Global_262145.f_15084;
		
		case 179:
			return Global_262145.f_18366;
		
		case 180:
			return Global_262145.f_18144;
		
		case 182:
			return Global_262145.f_18144;
		
		case 183:
			return Global_262145.f_18144;
		
		case 185:
			return Global_262145.f_18144;
		
		case 186:
			return Global_262145.f_18144;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return Global_262145.f_18020;
		
		case 191:
			return Global_262145.f_18111;
		
		case 192:
			return Global_262145.f_17905;
		
		case 193:
			return Global_262145.f_18366;
		
		case 194:
			return Global_262145.f_18366;
		
		case 195:
			return Global_262145.f_18144;
		
		case 197:
			return Global_262145.f_18144;
		
		case 198:
			return Global_262145.f_18144;
		
		case 199:
			return Global_262145.f_18366;
		
		case 200:
			return Global_262145.f_18366;
		
		case 201:
			return Global_262145.f_18366;
		
		case 205:
			return Global_262145.f_18366;
		
		case 207:
			return Global_262145.f_18144;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return Global_262145.f_18144;
		
		case 210:
			return Global_262145.f_18366;
		
		case 211:
			return Global_262145.f_18366;
		
		case 214:
			return Global_262145.f_19216;
		
		case 215:
			return Global_262145.f_19218;
		
		case 216:
			return Global_262145.f_19220;
		
		case 217:
			return Global_262145.f_19222;
		
		case 218:
			return Global_262145.f_19224;
		
		case 219:
			return Global_262145.f_19226;
		
		case 220:
			return Global_262145.f_19228;
		
		case 221:
			return Global_262145.f_19230;
		
		case 225:
			if (!func_467())
			{
				return Global_262145.f_21053;
			}
			break;
		
		case 226:
			if (!func_467())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 227:
			if (!func_467())
			{
				return Global_262145.f_21045;
			}
			break;
		
		case 229:
			if (!func_467())
			{
				return Global_262145.f_22209;
			}
			break;
		
		case 230:
			if (!func_467())
			{
				return Global_262145.f_22305;
			}
			break;
		
		case 233:
			if (!func_467())
			{
				return Global_262145.f_22778;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_467())
			{
				return Global_262145.f_23944;
			}
			break;
		
		case 238:
			if (!func_467())
			{
				return Global_262145.f_24055;
			}
			break;
		
		case 249:
			if (!func_467())
			{
				return Global_262145.f_24071;
			}
			break;
		
		case 243:
			if (!func_467())
			{
				return Global_262145.f_26304;
			}
			break;
		
		case 158:
			if (!func_467())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14994;
		
		case 171:
			return Global_262145.f_15053;
		
		case 172:
			return Global_262145.f_15071;
		
		case 173:
			return Global_262145.f_15012;
		
		case 166:
			return Global_262145.f_15027;
		
		case 179:
			return Global_262145.f_18365;
		
		case 180:
			return Global_262145.f_18143;
		
		case 182:
			return Global_262145.f_18143;
		
		case 183:
			return Global_262145.f_18143;
		
		case 185:
			return Global_262145.f_18143;
		
		case 186:
			return Global_262145.f_18143;
		
		case 189:
			return Global_262145.f_18365;
		
		case 193:
			return Global_262145.f_18365;
		
		case 194:
			return Global_262145.f_18365;
		
		case 195:
			return Global_262145.f_18143;
		
		case 197:
			return Global_262145.f_18143;
		
		case 198:
			return Global_262145.f_18143;
		
		case 199:
			return Global_262145.f_18365;
		
		case 200:
			return Global_262145.f_18365;
		
		case 201:
			return Global_262145.f_18365;
		
		case 205:
			return Global_262145.f_18365;
		
		case 207:
			return Global_262145.f_18143;
		
		case 208:
			return Global_262145.f_18143;
		
		case 209:
			return Global_262145.f_18143;
		
		case 210:
			return Global_262145.f_18365;
		
		case 211:
			return Global_262145.f_18365;
		
		case 190:
			if (func_250(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_250(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_250(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19215;
		
		case 215:
			return Global_262145.f_19217;
		
		case 216:
			return Global_262145.f_19219;
		
		case 217:
			return Global_262145.f_19221;
		
		case 218:
			return Global_262145.f_19223;
		
		case 219:
			return Global_262145.f_19225;
		
		case 220:
			return Global_262145.f_19227;
		
		case 221:
			return Global_262145.f_19229;
		
		case 225:
			if (func_250(0))
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 226:
			if (func_250(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 227:
			if (func_250(0))
			{
				return Global_262145.f_21044;
			}
			break;
		
		case 229:
			if (func_250(0))
			{
				return Global_262145.f_22208;
			}
			break;
		
		case 230:
			if (func_250(0))
			{
				return Global_262145.f_22304;
			}
			break;
		
		case 233:
			if (func_250(0))
			{
				return Global_262145.f_22780;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_250(0))
			{
				return Global_262145.f_23943;
			}
			break;
		
		case 238:
			if (func_250(0))
			{
				return Global_262145.f_24054;
			}
			break;
		
		case 249:
			if (func_250(0))
			{
				return Global_262145.f_24070;
			}
			break;
		
		case 243:
			return Global_262145.f_26300;
		
		case 158:
			if (func_250(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_535(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_467())
		{
			if (func_484(0))
			{
				if (!func_250(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_486()))
					{
						if (func_545() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_545());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_543(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_540("GB_BCUT_TICK1", func_486(), iVar0, 0, 0, 1);
						}
						func_539(20);
						func_536(func_486(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_996(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_538(iParam0);
		func_537(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_479(iParam0));
	}
}

void func_537(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_538(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_533;
}

void func_539(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_540(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_360(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_541(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_305(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_541(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_542(&cVar0);
}

var func_542(char[4] cParam0)
{
	return cParam0;
}

void func_543(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_544(1);
	}
	else
	{
		iVar1 = func_544(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_544(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_545()
{
	return Global_262145.f_12389;
}

void func_546(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_250(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_467())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_486();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590535[iVar11 /*876*/].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[iVar11 /*876*/].f_854.f_2;
			}
			else
			{
				iVar2 = func_562(Global_1590535[iVar11 /*876*/].f_854, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_561(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_560("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1674671.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_559(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_557(*uParam3);
				}
				iVar6 = func_556(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_539(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_555(iVar23))
								{
									func_547(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_539(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_547(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_549(iParam0);
	func_548(iParam0, uVar0, iParam1, iParam2);
}

void func_548(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -601653676;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_538(iParam0);
	func_537(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_479(iParam0));
		}
	}
}

int func_549(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_554();
	iVar0 = func_552(iParam0, iVar0);
	iVar1 = Global_1628237[func_486() /*615*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_551())
	{
		iVar0 = func_551();
	}
	if (iVar0 > func_550())
	{
		iVar0 = func_550();
	}
	return iVar0;
}

int func_550()
{
	return Global_262145.f_14956;
}

int func_551()
{
	return Global_262145.f_16131;
}

int func_552(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_612(iParam0) * func_553());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_553()
{
	return Global_262145.f_16130;
}

var func_554()
{
	return Global_262145.f_12381;
}

int func_555(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_76(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_109(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_556(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar2, 0) && !func_76(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_557(int iParam0)
{
	func_558(iParam0, 7236);
}

void func_558(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_453(iParam1, -1, 0);
	func_451(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_559(int iParam0)
{
	func_558(iParam0, 7231);
}

int func_560(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_305(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_561(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_562(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_563(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_250(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_467())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_486();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_463(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_462(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_565(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_560("SMTICK_RONCUT", func_565(*iParam2));
				}
				*iParam2 = (*iParam2 - func_565(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_564(iVar2, iVar9);
				iVar6 = func_556(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_539(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_555(iVar20))
								{
									func_547(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_539(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_564(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_558(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_558(iParam1, 6117);
	}
}

int func_565(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_566(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_250(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_467())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_486();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_466(iVar15);
			iVar0 = (func_590(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_586(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_580(iVar16, iVar2);
				if (func_576(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_567(5);
				}
				iVar6 = func_556(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_539(108);
					}
					else
					{
						func_539(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_555(iVar20))
								{
									func_547(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_539(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_569(Global_262145.f_20572))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_569(Global_262145.f_20574))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_569(Global_262145.f_20576))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_569(Global_262145.f_20578))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_569(Global_262145.f_20580))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_569(Global_262145.f_20582))
				{
					func_560("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_569(Global_262145.f_20585))
				{
					func_560("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_569(Global_262145.f_20588))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_569(Global_262145.f_20590))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_569(Global_262145.f_20592))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_569(Global_262145.f_20594))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_569(Global_262145.f_20596))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_569(Global_262145.f_20598))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_569(Global_262145.f_20600))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_569(Global_262145.f_20602))
				{
					func_568("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_568(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2513218 = { func_67(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2513148.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar1, false, Global_2513148, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_305(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_573(15417, -1, -1))
			{
				func_572(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_573(15418, -1, -1))
			{
				func_572(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_573(15425, -1, -1))
			{
				func_572(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_573(15405, -1, -1))
			{
				func_572(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_573(15393, -1, -1))
			{
				func_572(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_573(15409, -1, -1))
			{
				func_572(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_573(15396, -1, -1))
			{
				func_572(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_573(15412, -1, -1))
			{
				func_572(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_573(15403, -1, -1))
			{
				func_572(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_573(15389, -1, -1))
			{
				func_572(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_573(15398, -1, -1))
			{
				func_572(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_573(15400, -1, -1))
			{
				func_572(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_573(15408, -1, -1))
			{
				func_572(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_573(15411, -1, -1))
			{
				func_572(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_573(15397, -1, -1))
			{
				func_572(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_573(15413, -1, -1))
			{
				func_572(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_573(15391, -1, -1))
			{
				func_572(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_573(15388, -1, -1))
			{
				func_572(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_573(15401, -1, -1))
			{
				func_572(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_573(15394, -1, -1))
			{
				func_572(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_573(15406, -1, -1))
			{
				func_572(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_573(15395, -1, -1))
			{
				func_572(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_573(15410, -1, -1))
			{
				func_572(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_573(15407, -1, -1))
			{
				func_572(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_573(15414, -1, -1))
			{
				func_572(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_573(15415, -1, -1))
			{
				func_572(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_573(15399, -1, -1))
			{
				func_572(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_573(15404, -1, -1))
			{
				func_572(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_573(15392, -1, -1))
			{
				func_572(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_573(15390, -1, -1))
			{
				func_572(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_573(15402, -1, -1))
			{
				func_572(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_573(15416, -1, -1))
			{
				func_572(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_148(209, -1))
			{
				func_570(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_573(15426, -1, -1))
			{
				func_572(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_573(15422, -1, -1))
			{
				func_572(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_573(15423, -1, -1))
			{
				func_572(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_573(15421, -1, -1))
			{
				func_572(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_573(15427, -1, -1))
			{
				func_572(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_573(15419, -1, -1))
			{
				func_572(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_573(15420, -1, -1))
			{
				func_572(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_570(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_571())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_149(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_571()
{
	return 1;
	return 0;
}

bool func_572(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_573(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_575(iParam0, iParam1);
	iVar2 = func_574(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_574(int iParam0)
{
	int iVar0;
	
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

int func_575(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_576(int iParam0)
{
	int iVar0;
	
	iVar0 = func_578(iParam0);
	return func_453(func_577(iVar0), -1, 0);
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_578(int iParam0)
{
	int iVar0;
	
	if (func_579(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_579(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_580(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_578(iParam0);
	iVar1 = func_577(iVar0);
	iVar2 = (func_453(iVar1, -1, 0) + iParam1);
	func_451(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_583(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_577(iVar0);
				iVar3 = (iVar3 + func_453(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_582(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_581(9357, iVar5, -1, 1);
	}
}

bool func_581(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_585(iParam0, iParam1);
	iVar2 = func_584(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_584(int iParam0)
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

int func_585(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_586(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_480(iParam1);
	if (func_579(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_587(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_587(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_587(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_579(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_589(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_579(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_579(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_591(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_454())
			{
				Var0 = { func_482() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_586(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_18595);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_18594);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_556(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_18584));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_539(86);
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (func_250(0))
			{
				Var14 = { func_592(func_486()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_586(func_486(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_18595));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_18594));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18634;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18635;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_592(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_193;
}

void func_593(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_123(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_608();
			}
			func_607();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_123(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_599(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_598(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_556(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_539(44);
					}
				}
				func_596(*iParam3);
				func_595();
				Global_2537071.f_5124.f_381 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_555(iVar9))
						{
							func_547(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_123(PLAYER::PLAYER_ID()))
		{
			func_594();
		}
	}
}

void func_594()
{
	int iVar0;
	
	iVar0 = Global_2586255[func_19()];
	iVar0++;
	func_450(3667, iVar0, -1, 1);
}

void func_595()
{
	int iVar0;
	
	iVar0 = Global_2586261[func_19()];
	iVar0++;
	func_450(3666, iVar0, -1, 1);
}

void func_596(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2586264[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_450(3668, iVar0, -1, 1);
	if (func_583(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_597(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_581(7666, iVar2, -1, 1);
	}
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
			break;
		
		case 2:
			return Global_262145.f_16275;
			break;
		
		case 3:
			return Global_262145.f_16276;
			break;
		
		case 4:
			return Global_262145.f_16277;
			break;
		
		case 5:
			return Global_262145.f_16278;
			break;
		
		case 6:
			return Global_262145.f_16279;
			break;
		
		case 7:
			return Global_262145.f_16280;
			break;
		
		case 8:
			return Global_262145.f_16281;
			break;
		
		case 9:
			return Global_262145.f_16282;
			break;
		
		case 10:
			return Global_262145.f_16283;
			break;
		
		case 11:
			return Global_262145.f_16284;
			break;
		
		case 12:
			return Global_262145.f_16285;
			break;
		
		case 13:
			return Global_262145.f_16286;
			break;
		
		case 14:
			return Global_262145.f_16287;
			break;
		
		case 15:
			return Global_262145.f_16288;
			break;
		
		case 16:
			return Global_262145.f_16289;
			break;
		
		case 17:
			return Global_262145.f_16290;
			break;
		
		case 18:
			return Global_262145.f_16291;
			break;
		
		case 19:
			return Global_262145.f_16292;
			break;
		
		case 20:
			return Global_262145.f_16293;
			break;
		
		case 21:
			return Global_262145.f_16294;
			break;
		
		case 22:
			return Global_262145.f_16295;
			break;
		
		case 23:
			return Global_262145.f_16296;
			break;
		
		case 24:
			return Global_262145.f_16297;
			break;
	}
	return 0;
}

var func_598(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_606(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_605(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_604(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_600(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_600(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_604(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = func_601(func_602(iParam0));
		return func_453(iVar0, -1, 0);
	}
	return 0;
}

int func_601(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_602(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_603(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_604(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

int func_605(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	if (func_603(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_607()
{
	int iVar0;
	
	iVar0 = Global_2586252[func_19()];
	iVar0++;
	Global_2586252[func_19()] = iVar0;
	func_450(3665, iVar0, -1, 1);
}

void func_608()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2586249[func_19()];
	iVar1 = Global_2586258[func_19()];
	iVar0++;
	iVar1++;
	Global_2586249[func_19()] = iVar0;
	Global_2586258[func_19()] = iVar1;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_128 = iVar1;
	func_450(3663, iVar0, -1, 1);
	func_450(3664, iVar1, -1, 1);
}

void func_609()
{
	if (func_467())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_610()
{
	if (func_467())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_611()
{
	if (func_467())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_612(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_28;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_484(1) && !func_250(1))
			{
				if (func_614(func_486()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 26);
}

int func_615(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15051;
		
		case 172:
			return Global_262145.f_15067;
		
		case 173:
			return Global_262145.f_15010;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18289;
		
		case 180:
			return Global_262145.f_18164;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18172;
		
		case 185:
			return Global_262145.f_18181;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18377;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18394;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18241;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18425;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18303;
		
		case 205:
			return Global_262145.f_18412;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18270;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18407;
		
		case 211:
			return Global_262145.f_18371;
		
		case 214:
			return Global_262145.f_18965;
		
		case 215:
			return Global_262145.f_18975;
		
		case 216:
			return Global_262145.f_18985;
		
		case 217:
			return Global_262145.f_18994;
		
		case 218:
			return Global_262145.f_19003;
		
		case 219:
			return Global_262145.f_19019;
		
		case 241:
			return Global_262145.f_24090;
		
		case 242:
			return Global_262145.f_24086;
		
		case 248:
			return Global_262145.f_24089;
		
		case 244:
			return Global_262145.f_24087;
		
		case 239:
			return Global_262145.f_24091;
		
		case 240:
			return Global_262145.f_24092;
		
		case 243:
			return Global_262145.f_26299;
		
		default:
	}
	return 0;
}

int func_616(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14993;
		
		case 171:
			return Global_262145.f_15052;
		
		case 172:
			return Global_262145.f_15068;
		
		case 173:
			return Global_262145.f_15011;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17090;
		
		case 168:
			return Global_262145.f_17089;
		
		case 179:
			return Global_262145.f_18290;
		
		case 180:
			return Global_262145.f_18165;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18173;
		
		case 185:
			return Global_262145.f_18182;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18378;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18395;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18242;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18426;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18304;
		
		case 205:
			return Global_262145.f_18413;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18271;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18408;
		
		case 211:
			return Global_262145.f_18372;
		
		case 214:
			return Global_262145.f_18966;
		
		case 215:
			return Global_262145.f_18976;
		
		case 216:
			return Global_262145.f_18986;
		
		case 217:
			return Global_262145.f_18995;
		
		case 218:
			return Global_262145.f_19004;
		
		case 219:
			return Global_262145.f_19020;
		
		case 178:
			if (func_467())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		
		case 188:
			if (func_467())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		
		case 225:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_21050;
			}
			break;
		
		case 226:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 227:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 229:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_22206;
			}
			break;
		
		case 230:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_22302;
			}
			break;
		
		case 233:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_22775;
			}
			break;
		
		case 241:
			return Global_262145.f_24097;
		
		case 242:
			return Global_262145.f_24093;
		
		case 244:
			return Global_262145.f_24094;
		
		case 248:
			return Global_262145.f_24096;
		
		case 239:
			return Global_262145.f_24098;
		
		case 240:
			return Global_262145.f_24099;
		
		case 237:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_23941;
			}
			break;
		
		case 238:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_24052;
			}
			break;
		
		case 249:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 243:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_454())
			{
				return Global_262145.f_26302;
			}
			break;
		
		case 158:
			if (func_467() && !func_454())
			{
				if (func_614(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_454())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_617(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_618(iParam0))
	{
		if (!func_467())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1))
	{
		if (func_319(iParam0))
		{
			*uParam1 = (Global_262145.f_18141 / 100f);
			*uParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24100;
			*uParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24101;
			*uParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24103;
			*uParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24104;
			*uParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24105;
			*uParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24106;
			*uParam2 = Global_262145.f_24106;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_319(iParam0))
	{
		*uParam1 = (Global_262145.f_18142 / 100f);
		*uParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24107;
		*uParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24108;
		*uParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24110;
		*uParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24111;
		*uParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24112;
		*uParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24113;
		*uParam2 = Global_262145.f_24113;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_253();
	if (iVar0 != func_65())
	{
		if (func_76(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_619()
{
	return (Local_80.f_115 * Global_262145.f_15026);
}

int func_620()
{
	return (Local_80.f_115 * Global_262145.f_15025);
}

void func_621(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_182(PLAYER::PLAYER_ID());
		Global_1674635.f_4 = func_732();
		Global_1674635.f_5 = func_731();
		if (func_129(PLAYER::PLAYER_ID()) || func_130(PLAYER::PLAYER_ID()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_725(bParam9);
		Global_1674635.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674635.f_9 = func_724(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_723();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_724(func_250(1));
		}
		Global_1674635.f_24 = func_722(PLAYER::PLAYER_ID());
		Global_1674635.f_28 = func_721(PLAYER::PLAYER_ID());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_719(iVar0);
	}
	else
	{
		iVar0 = func_105(PLAYER::PLAYER_ID());
	}
	if (func_319(iVar0))
	{
		Global_1674374.f_2 = func_732();
		Global_1674374.f_3 = func_731();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_715(iVar0, bParam0, func_718(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_714(func_486(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_713(func_486(), iParam2);
		}
		func_711(iVar0);
	}
	else if (func_324(iVar0))
	{
		Global_1674428.f_2 = func_732();
		Global_1674428.f_3 = func_731();
		Global_1674428.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_709(iVar0);
	}
	else if (func_408(iVar0))
	{
		Global_1674491.f_2 = func_732();
		Global_1674491.f_3 = func_731();
		Global_1674491.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_723();
		Global_1674491.f_42 = func_707(func_19(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_466(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_724((func_706(iVar1) || func_705(iVar1)));
		Global_1674491.f_30 = func_724(func_704(iVar1));
		Global_1674491.f_32 = func_724(func_703(iVar1));
		Global_1674491.f_33 = func_724(func_702(iVar1));
		Global_1674491.f_34 = func_724(func_701(iVar1));
		Global_1674491.f_35 = func_724(func_700(0, iVar1) == 1);
		Global_1674491.f_36 = func_724(func_699(iVar1));
		Global_1674491.f_37 = func_724(func_698(iVar1));
		Global_1674491.f_38 = func_724(func_697(iVar1));
		Global_1674491.f_39 = func_724(func_587(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_724(func_587(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_724(func_587(iVar1, iVar2, 1));
		if (func_696(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_695(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_693(iVar0);
	}
	else if (func_406(iVar0))
	{
		Global_1674535.f_2 = func_732();
		Global_1674535.f_3 = func_731();
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674535.f_10 = func_724(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_692(func_253());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_691();
		Global_1674535.f_29 = func_453(6107, -1, 0);
		Global_1674535.f_30 = func_453(6103, -1, 0);
		Global_1674535.f_31 = func_453(6104, -1, 0);
		Global_1674535.f_32 = func_453(6106, -1, 0);
		Global_1674535.f_33 = func_453(6105, -1, 0);
		Global_1674535.f_34 = func_453(6108, -1, 0);
		Global_1674535.f_36 = func_724(func_250(1));
		Global_1674535.f_37 = func_689();
		func_675();
		func_673(iVar0);
	}
	else if (func_404(iVar0))
	{
		Global_1674589.f_2 = func_732();
		Global_1674589.f_3 = func_731();
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674589.f_10 = func_724(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_453(6157, -1, 0);
		Global_1674589.f_25 = func_453(6162, -1, 0);
		Global_1674589.f_26 = func_453(6163, -1, 0);
		Global_1674589.f_27 = func_724((((func_672() || func_671()) || func_670()) || func_669(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_453(6164, -1, 0);
		Global_1674589.f_29 = func_724(func_668());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_732();
		Global_1674589.f_42 = func_724(func_250(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_666(iVar0);
	}
	else if (func_442(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_732();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_731();
		}
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_725(0);
		Global_1674725.f_7 = func_723();
		Global_1674725.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674725.f_10 = func_724(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_486() != -1)
		{
			Global_1674725.f_17 = func_665(func_486());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_721(PLAYER::PLAYER_ID());
		Global_1674725.f_29 = func_724(func_664(PLAYER::PLAYER_ID()));
		Global_1674725.f_30 = func_724(func_663(PLAYER::PLAYER_ID()));
		Global_1674725.f_31 = func_662(PLAYER::PLAYER_ID());
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_724(func_250(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_660(iVar0);
	}
	else if (func_446(iVar0))
	{
		Global_1674671.f_2 = func_732();
		Global_1674671.f_3 = func_731();
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_725(0);
		Global_1674671.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674671.f_10 = func_724(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_721(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_659(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_643(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_662(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_724(func_642(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_724(func_641(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_724(func_640(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_724(func_639(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_638(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_637(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_636(PLAYER::PLAYER_ID());
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_724(func_250(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_634(iVar0);
	}
	else if (func_441(iVar0))
	{
		Global_1674809.f_2 = func_732();
		Global_1674809.f_3 = func_731();
		Global_1674809.f_4 = func_633(func_486());
		Global_1674809.f_5 = func_632(func_486());
		if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_723();
		Global_1674809.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674809.f_10 = func_724(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_253() != -1)
		{
			Global_1674809.f_17 = func_665(func_253());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_631(PLAYER::PLAYER_ID());
		Global_1674809.f_27 = func_724(func_630(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_627(21, -1);
		Global_1674809.f_29 = func_724(func_626(PLAYER::PLAYER_ID()));
		func_624(iVar0);
	}
	else if (func_397(iVar0))
	{
		Global_1674884.f_6 = func_633(func_486());
		Global_1674884.f_7 = func_632(func_486());
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_724(func_250(1));
		}
		Global_1674884.f_10 = func_723();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_622(iVar0);
	}
	else
	{
		Global_1674356.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_124(PLAYER::PLAYER_ID()) || func_142(PLAYER::PLAYER_ID())) || func_150(PLAYER::PLAYER_ID()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_622(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1674884);
	func_623();
}

void func_623()
{
	struct<36> Var0;
	
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_624(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_625();
}

void func_625()
{
	struct<31> Var0;
	
	Global_1674809 = { Var0 };
}

int func_626(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_627(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_629(iParam0);
		if (iVar1 == 0 && func_453(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_628(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_721(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_628(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_453(7207, iParam0, 0) != 0;
}

int func_629(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_630(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_631(int iParam0)
{
	if (func_105(iParam0) == 243)
	{
		return func_445(iParam0);
	}
	return -1;
}

int func_632(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_633(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[0];
}

void func_634(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1674671);
	func_635();
}

void func_635()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

int func_636(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 12);
	}
	return 0;
}

int func_637(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 10);
	}
	return 0;
}

int func_638(int iParam0)
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 11);
	}
	return 0;
}

bool func_639(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 4);
}

bool func_640(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 3);
}

bool func_641(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 2);
}

bool func_642(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 1);
}

int func_643(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_65() || !func_658(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_653(iParam0, iParam2);
		
		case 1:
			return func_651(iParam0, iParam2);
		
		case 3:
			return func_650(iParam0);
		
		case 2:
			return func_645(iParam0, iParam2);
		
		case 4:
			return func_644(iParam0);
		
		default:
	}
	return 0;
}

bool func_644(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 6);
}

int func_645(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_649(iParam0);
		
		case 11:
			return func_648(iParam0);
		
		case 12:
			return func_647(iParam0);
		
		case 13:
			return func_646(iParam0);
		
		default:
	}
	return 0;
}

bool func_646(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 15);
}

bool func_647(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 14);
}

bool func_648(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 13);
}

bool func_649(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 12);
}

bool func_650(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 5);
}

int func_651(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_652(iParam0);
		
		case 6:
			return func_642(iParam0);
		
		case 7:
			return func_641(iParam0);
		
		case 8:
			return func_640(iParam0);
		
		case 9:
			return func_639(iParam0);
		
		default:
	}
	return 0;
}

bool func_652(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 0);
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_657(iParam0);
		
		case 1:
			return func_656(iParam0);
		
		case 2:
			return func_655(iParam0);
		
		case 3:
			return func_654(iParam0);
		
		case 4:
			return func_662(iParam0);
		
		default:
	}
	return 0;
}

bool func_654(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 10);
}

bool func_655(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 9);
}

bool func_656(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 8);
}

bool func_657(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_281.f_4, 7);
}

bool func_658(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_659(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_643(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_643(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_643(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_643(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_660(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1674725);
	func_661();
}

void func_661()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_662(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 31);
}

bool func_663(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 0);
}

bool func_664(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 19);
}

var func_665(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

void func_666(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1674589);
	func_667();
}

void func_667()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_668()
{
	return func_453(6156, -1, 0) != 0;
}

int func_669(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return 0;
}

bool func_670()
{
	return func_453(6164, -1, 0) == 3;
}

bool func_671()
{
	return func_453(6164, -1, 0) == 2;
}

bool func_672()
{
	return func_453(6164, -1, 0) == 1;
}

void func_673(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1674535);
	func_674();
}

void func_674()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_675()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_686(12));
		func_685(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1 /*141*/].f_66 != 0 && func_677(Global_1323615[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_676(Global_1323615[iVar1 /*141*/].f_66))
					{
						if (Global_1323615[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_677(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_684())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_683() && !func_682()) && !func_681()) && !func_680()) && !func_684())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_681())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_679(iParam0))
		{
			return 0;
		}
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_678(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_483())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_680()
{
	return 0;
}

int func_681()
{
	return 1;
}

int func_682()
{
	return 1;
}

int func_683()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_684()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_685(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_686(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_629(iParam0);
		return func_688(iVar0);
	}
	return (func_687(iParam0, -1) * iParam0);
}

int func_687(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_414(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_420(iParam1))
			{
				return 0;
			}
			else if (func_412(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_689()
{
	var uVar0;
	
	uVar0 = func_690();
	if (!func_467())
	{
		if (func_486() != func_65())
		{
			uVar0 = func_722(func_486()) + 1;
		}
	}
	return uVar0;
}

int func_690()
{
	return func_722(PLAYER::PLAYER_ID()) + 1;
}

int func_691()
{
	return func_453(6113, -1, 0);
}

int func_692(int iParam0)
{
	if (func_190(iParam0, 1))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

void func_693(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674491);
	func_694();
}

void func_694()
{
	struct<44> Var0;
	
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_695(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 12);
}

bool func_696(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 13);
}

int func_697(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 12) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 13)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_698(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (((((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 5)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 0)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_700(int iParam0, int iParam1)
{
	if (iParam1 == func_65())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_701(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 6) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_702(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 8);
}

bool func_703(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 7);
}

bool func_704(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 9);
}

bool func_705(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 11);
}

bool func_706(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 10);
}

int func_707(int iParam0, int iParam1)
{
	return func_453(func_708(iParam1), iParam0, 0);
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_709(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674428);
	func_710();
}

void func_710()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

void func_711(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674374);
	func_712();
}

void func_712()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_713(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_587(iParam0, iParam1, 2);
	bVar1 = func_587(iParam0, iParam1, 1);
	bVar2 = func_587(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_714(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_579(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_715(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_138(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_410(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_221(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_319(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_633(func_486()), func_632(func_486()), func_732(), func_731(), iVar1, iVar0);
	}
	func_717(iVar0);
	func_716(iVar0);
	return iVar0;
}

void func_716(int iParam0)
{
	int iVar0;
	
	iVar0 = func_453(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_490 = iVar0;
	func_451(3968, iVar0, -1, 1, 0);
}

void func_717(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

int func_718(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_124(PLAYER::PLAYER_ID()) || func_150(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_719(var uParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1674635);
	func_720();
}

void func_720()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_721(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_722(int iParam0)
{
	if (func_66(iParam0) == func_65())
	{
		return 0;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_19;
}

int func_723()
{
	int iVar0;
	
	if (func_454())
	{
		return 4;
	}
	else if (func_467())
	{
		if (func_614(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_250(1))
	{
		iVar0 = func_692(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_484(1))
	{
		if (func_614(func_486()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_724(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_725(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_182(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_105(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_730(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_728(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_727(PLAYER::PLAYER_ID());
			if (func_443(func_444(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_727(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_726(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_726(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_726(int iParam0)
{
	if (func_105(PLAYER::PLAYER_ID()) == 238 || func_105(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_499;
	}
	return -1;
}

int func_727(int iParam0)
{
	if (func_105(PLAYER::PLAYER_ID()) == 237 || func_105(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_498;
	}
	return -1;
}

int func_728(int iParam0)
{
	return func_729(iParam0, 150);
}

int func_729(int iParam0, int iParam1)
{
	if (func_182(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_730(int iParam0)
{
	return func_729(iParam0, 236);
}

int func_731()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_732()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_733(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65();
	iVar1 = func_65();
	iVar2 = func_65();
	return func_734(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_734(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_384(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_229(&(Var0.f_69), 4);
	return func_348(&Var0);
}

int func_735(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 != -1)
	{
		return func_192(iVar0);
	}
	return 1;
}

char* func_736(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_433(&(Global_1628237[iParam0 /*615*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0 /*615*/].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_120)
	{
		sVar0 = func_434(iParam0, 0);
		return sVar0;
	}
	if (((func_109(iParam0, 28) || func_109(PLAYER::PLAYER_ID(), 28)) || func_437(iParam0)) && !func_436(iParam0))
	{
		return func_434(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_65())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_434(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_65())
	{
		sVar0 = func_433(&(Global_1628237[iVar1 /*615*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_434(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_737()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_884() && !func_300())
	{
		return;
	}
	if (!func_385())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	}
	iVar1 = func_141(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_80.f_847)))
	{
		iVar2 = (func_10() - func_751(&(Local_80.f_847), 0, 0));
		iVar3 = (func_750() - Local_80.f_115);
		func_748(iVar2);
		if (iVar2 > 30000)
		{
			func_738(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_738(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_738(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_738(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_746(0) == 0)
	{
		return;
	}
	func_745();
	func_742(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_526(sParam4))
	{
		sVar0 = sParam4;
	}
	func_739(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_739(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_741(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_740(7, iVar0);
		Global_1378678.f_4562[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = uParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = uParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_740(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_741(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_742(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_741(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_740(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = iParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_744())
		{
			Global_1378678.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_743())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_743()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_744()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_745()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2462225 = 1;
}

int func_746(bool bParam0)
{
	if (func_747())
	{
		return 0;
	}
	if (func_283())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_996(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_747()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_748(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_83, 8))
	{
		func_749();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_83, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_83, 15);
				MISC::SET_BIT(&iLocal_83, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_83, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_83, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&iLocal_83, 11);
				}
			}
			else
			{
				MISC::IS_BIT_SET(iLocal_83, 11);
				if (!MISC::IS_BIT_SET(iLocal_83, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&iLocal_83, 14);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_83, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_83, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						MISC::SET_BIT(&iLocal_83, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_83, 9);
						}
					}
				}
			}
		}
	}
}

void func_749()
{
	if (MISC::IS_BIT_SET(iLocal_83, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_83, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_83, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_83, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_83, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_83, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_83, 16);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_83, 16))
				{
					if (!MISC::IS_BIT_SET(iLocal_83, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_83, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_83, 13))
					{
						MISC::SET_BIT(&iLocal_83, 10);
					}
				}
			}
		}
	}
}

int func_750()
{
	return 4;
}

int func_751(var uParam0, bool bParam1, bool bParam2)
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

void func_752()
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar3 = func_301();
		iVar2 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	}
	iVar4 = func_141(iVar2);
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_385())
		{
			if (func_769("HUNT_OBJ"))
			{
				func_816();
			}
			if (func_769("HUNT_OBJ1L"))
			{
				func_816();
			}
			if (func_769("HUNT_TOBJ"))
			{
				func_816();
			}
			if (func_769("HUNT_DOBJ"))
			{
				func_816();
			}
			if (func_769("HUNT_DOBJ1L"))
			{
				func_816();
			}
			return;
		}
	}
	else if (!MISC::IS_BIT_SET(Local_81[iVar3 /*14*/].f_1, 6))
	{
		func_816();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_769("HUNT_OBJ"))
		{
			func_816();
		}
		if (func_769("HUNT_OBJ1L"))
		{
			func_816();
		}
		if (func_769("HUNT_TOBJ"))
		{
			func_816();
		}
		if (func_769("HUNT_DOBJ"))
		{
			func_816();
		}
		if (func_769("HUNT_DOBJ1L"))
		{
			func_816();
		}
		return;
	}
	bVar5 = func_768() == true;
	if (iVar3 == Local_80.f_118)
	{
		if (!bVar5)
		{
			if (!func_769("HUNT_OBJ"))
			{
				func_765("HUNT_OBJ", 0);
			}
		}
		else if (!func_769("HUNT_OBJ1L"))
		{
			func_765("HUNT_OBJ1L", 0);
		}
	}
	else if (func_885() == Local_80.f_118)
	{
		if (!bVar5)
		{
			if (!func_769("HUNT_OBJ"))
			{
				func_765("HUNT_OBJ", 0);
			}
		}
		else if (!func_769("HUNT_OBJ1L"))
		{
			func_765("HUNT_OBJ1L", 0);
		}
	}
	else if (func_300())
	{
		if (Local_80.f_119 > -1)
		{
			if (!bVar5)
			{
				if (!func_769("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_736(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119)), 64);
					iVar0 = func_735(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
					func_753("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_769("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_736(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119)), 64);
				iVar0 = func_735(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119));
				func_753("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_753(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_754(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_754(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_764(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_758();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_757();
	func_756(bParam2);
	func_755();
	return 1;
}

void func_755()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_756(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_757()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_758()
{
	func_760();
	func_759(0);
}

void func_759(bool bParam0)
{
	bool bVar0;
	
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

void func_760()
{
	if (!func_763())
	{
	}
	if (func_762())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_761();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_761()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_762()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_763()
{
	if (!func_762())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_761();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_764(char* sParam0, char* sParam1)
{
	if (!func_762())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_765(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_766(sParam0))
	{
		return;
	}
	func_758();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_757();
	func_756(bParam1);
	func_755();
}

bool func_766(char* sParam0)
{
	if (!func_762())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_767(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_767(char* sParam0)
{
	if (!func_762())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_768()
{
	return (4 - Local_80.f_115);
}

int func_769(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_762())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_766(sParam0);
}

void func_770()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_884() && !func_300())
	{
		return;
	}
	if (!func_385())
	{
		return;
	}
	iVar1 = func_65();
	iVar2 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = func_301();
		iVar1 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_82, 1))
	{
		iVar0 = func_141(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_80.f_118 || func_885() == Local_80.f_118)
			{
				if (func_795(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_347(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1, 0);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_794(1);
						func_771(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_771(-1, 0, 0, -1, 0, 0);
				}
				func_347(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1, 0);
			}
		}
		MISC::SET_BIT(&iLocal_82, 1);
	}
}

void func_771(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_182(PLAYER::PLAYER_ID());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_486() != func_65())
		{
			Global_1674635.f_2 = func_633(func_486());
			Global_1674635.f_3 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674635.f_28 = func_721(PLAYER::PLAYER_ID());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_724(func_250(1));
		}
	}
	else
	{
		iVar0 = func_105(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_319(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_138(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_410(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_221(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_448(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_486() != func_65())
		{
			Global_1674374.f_4 = func_633(func_486());
			Global_1674374.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_480(iParam1);
			Global_1674374.f_41 = func_793();
			Global_1674374.f_42 = func_590(PLAYER::PLAYER_ID(), iParam1);
			Global_1674374.f_44 = func_714(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_467() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_408(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_792(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_445(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674491.f_1 = 2;
				break;
			
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_486() != func_65())
		{
			Global_1674491.f_4 = func_633(func_486());
			Global_1674491.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_324(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_486() != func_65())
		{
			Global_1674428.f_4 = func_633(func_486());
			Global_1674428.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_406(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_486() != func_65())
		{
			Global_1674535.f_4 = func_633(func_486());
			Global_1674535.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_707(func_19(), 5);
		Global_1674535.f_28 = func_724(func_791(PLAYER::PLAYER_ID()));
		Global_1674535.f_29 = func_453(6107, -1, 0);
		Global_1674535.f_30 = func_453(6103, -1, 0);
		Global_1674535.f_31 = func_453(6104, -1, 0);
		Global_1674535.f_32 = func_453(6106, -1, 0);
		Global_1674535.f_33 = func_453(6105, -1, 0);
		Global_1674535.f_34 = func_453(6108, -1, 0);
		Global_1674535.f_7 = func_723();
		Global_1674535.f_51 = func_724(bParam4);
	}
	else if (func_404(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_486() != func_65())
		{
			Global_1674589.f_4 = func_633(func_486());
			Global_1674589.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_453(6157, -1, 0);
		Global_1674589.f_25 = func_453(6162, -1, 0);
		Global_1674589.f_26 = func_453(6163, -1, 0);
		Global_1674589.f_27 = func_724((((func_672() || func_671()) || func_670()) || func_669(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_453(6164, -1, 0);
		Global_1674589.f_29 = func_724(func_668());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_723();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_443(func_444(PLAYER::PLAYER_ID()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_723();
		if (func_486() != func_65())
		{
			Global_1674725.f_4 = func_633(func_486());
			Global_1674725.f_5 = func_632(func_486());
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_486() != -1)
		{
			Global_1674725.f_17 = func_665(func_486());
		}
		Global_1674725.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674725.f_28 = func_721(PLAYER::PLAYER_ID());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_724(func_250(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_723();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_486() != func_65())
		{
			Global_1674671.f_4 = func_633(func_486());
			Global_1674671.f_5 = func_632(func_486());
		}
		Global_1674671.f_28 = func_721(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_659(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_643(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_662(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_724(func_642(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_724(func_641(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_724(func_640(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_724(func_639(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_638(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_637(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_636(PLAYER::PLAYER_ID());
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_724(func_250(1));
		}
		if (func_253() != func_65())
		{
			func_485(func_253(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674671.f_28 = func_721(PLAYER::PLAYER_ID());
	}
	else if (func_441(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_445(PLAYER::PLAYER_ID());
		Global_1674809.f_2 = func_732();
		Global_1674809.f_3 = func_731();
		Global_1674809.f_4 = func_633(func_486());
		Global_1674809.f_5 = func_632(func_486());
		Global_1674809.f_7 = func_723();
		Global_1674809.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_486() != -1)
		{
			Global_1674809.f_17 = func_665(func_486());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_724(func_630(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_627(21, -1);
	}
	else if (func_397(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_633(func_486());
		Global_1674884.f_7 = func_632(func_486());
		if (func_190(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_724(func_250(1));
		}
		if (func_486() != -1)
		{
			Global_1674884.f_9 = func_665(func_486());
		}
		Global_1674884.f_10 = func_723();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_486() != func_65())
		{
			Global_1674356 = func_633(func_486());
			Global_1674356.f_1 = func_632(func_486());
		}
		Global_1674356.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674356.f_13 = func_790();
		Global_1674356.f_15 = 0;
		if (func_484(1))
		{
			if (func_253() == func_486())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_789())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_788() || func_787()) || func_786()) || func_785()) || func_784()) || func_783(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_781(func_782(joaat("trailersmall2"))))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_775(func_780(joaat("caddy"))))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_706(PLAYER::PLAYER_ID()) || func_705(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_702(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_703(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_700(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_774(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_774(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_773(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_772(PLAYER::PLAYER_ID(), iVar2);
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_587(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_772(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_579(Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_773(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_774(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_700(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_775(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_627(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_686(11));
		func_685(iVar1, &iVar0, 1);
		iVar2 = func_627(func_777(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_453(func_776(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case joaat("MPSV_LP0_31"):
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("MPSV_LP0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("MPSV_LP0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("MPSV_LP0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("MPSV_LP0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("MPSV_LP0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("MPSV_LP0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_777(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_686(iVar0) && iParam0 < func_778(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_778(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_629(iParam0);
		return func_779(iVar0);
	}
	return (func_687(iParam0, -1) * iParam0 + 1);
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_780(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_685(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_453(func_776(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_783(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_784()
{
	return func_453(6542, -1, 0) != 0;
}

bool func_785()
{
	return func_453(6163, -1, 0) != 0;
}

bool func_786()
{
	return func_453(5380, -1, 0) != 0;
}

bool func_787()
{
	return func_453(3828, -1, 0) != 0;
}

bool func_788()
{
	return func_453(3223, -1, 0) != 0;
}

bool func_789()
{
	return func_453(5379, -1, 0) != 0;
}

int func_790()
{
	int iVar0;
	
	iVar0 = func_486();
	if (iVar0 != func_65())
	{
		return Global_1628237[iVar0 /*615*/].f_11.f_98;
	}
	return 0;
}

int func_791(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_792(int iParam0)
{
	if (func_105(iParam0) == 225 || func_105(iParam0) == 226)
	{
		return func_445(iParam0);
	}
	return -1;
}

var func_793()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_589(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_794(bool bParam0)
{
	if (bParam0)
	{
		if (!func_109(PLAYER::PLAYER_ID(), 9))
		{
			if (func_141(PLAYER::PLAYER_ID()) != 0)
			{
				func_110(9);
			}
		}
	}
	else if (func_109(PLAYER::PLAYER_ID(), 9))
	{
		func_108(9);
	}
}

int func_795(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_797(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_796(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_796(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_797(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_809();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_808() == 0)
	{
		func_806();
		return 0;
	}
	func_805(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_804(0);
		func_804(2);
		func_804(1);
	}
	else
	{
		func_809();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_804(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_804(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_804(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_804(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_809();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_428())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_803(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_800(1);
			func_803(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_798(uParam0, sParam1);
	return 1;
}

void func_798(var uParam0, char* sParam1)
{
	if (!func_799())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_799()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_65())
	{
		return 0;
	}
	if (func_150(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_800(int iParam0)
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
		if (func_802(14))
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
								func_169(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_169(&(Global_7363[iVar1 /*15*/]));
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
								func_169(&(Global_7363[iVar1 /*15*/]));
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
								func_169(&(Global_7363[iVar1 /*15*/]));
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
								func_169(&(Global_7363[iVar1 /*15*/]));
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
								func_169(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_801(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_801(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_169(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_169(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_169(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_169(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_169(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_802(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_803(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_804(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_805(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_806()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_807(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_807(struct<6> Param0, struct<6> Param1)
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

int func_808()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_807(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

void func_809()
{
	if (func_802(14))
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
		Global_19486 = func_810();
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

var func_810()
{
	func_811();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_811()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_814(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_813(PLAYER::PLAYER_PED_ID());
			if (func_812(iVar0) && (!func_802(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_812(Global_111638.f_2358.f_539.f_4321))
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

bool func_812(int iParam0)
{
	return iParam0 < 3;
}

int func_813(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_814(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_814(int iParam0)
{
	if (func_812(iParam0))
	{
		return func_815(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_815(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_816()
{
	if (!func_762())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_758();
}

void func_817()
{
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_819();
			func_312();
			if (Local_80.f_117 == 2)
			{
				Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_80.f_117 == 3)
			{
				Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_312();
			if (func_818())
			{
				func_749();
			}
			if (Local_80.f_117 == 3)
			{
				Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_898();
			break;
	}
}

bool func_818()
{
	return ((MISC::IS_BIT_SET(Local_80.f_1, 1) || MISC::IS_BIT_SET(Local_80.f_1, 3)) || MISC::IS_BIT_SET(Local_80.f_1, 5));
}

void func_819()
{
	func_839();
	func_838();
	func_770();
	func_752();
	func_828();
	func_827();
	func_822();
	func_821();
	func_737();
	func_820();
}

void func_820()
{
}

void func_821()
{
	if (func_818())
	{
		return;
	}
	if (!func_884())
	{
		return;
	}
	if (!Global_262145.f_15018)
	{
		return;
	}
	if (Local_80.f_115 == 0)
	{
		return;
	}
}

void func_822()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_884())
	{
		return;
	}
	if (func_818())
	{
		return;
	}
	fVar2 = func_151(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_89 != iVar0)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), false) };
				func_92(10, 0, 0, 0, 0);
				func_823(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_89 = iVar0;
				MISC::SET_BIT(&iLocal_82, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_343();
	}
}

void func_823(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		Global_2413899.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413899.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_824(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413899 = { Var0 };
}

int func_824(int iParam0)
{
	if (((func_825(iParam0, 1) || func_132(iParam0)) || func_106(iParam0, 0)) || func_394(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_825(int iParam0, bool bParam1)
{
	if (func_339() != 0)
	{
		return func_826(iParam0) != 0;
	}
	return func_280(iParam0, bParam1, 0);
}

int func_826(int iParam0)
{
	if (func_996(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

void func_827()
{
	int iVar0;
	
	if (iLocal_86 != Local_80.f_115)
	{
		if (func_884())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_80.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_15015)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15015, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_15016)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15016, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_15017)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_15017);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15017, false);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								}
								break;
						}
						iLocal_86 = Local_80.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_86 = Local_80.f_115;
		}
	}
}

void func_828()
{
	int iVar0;
	
	if (!func_385())
	{
		if (func_837("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar0 = func_141(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_837("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_82, 2))
	{
		if (!func_836(86))
		{
			if (func_830(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_80.f_118)
				{
					func_829("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_321(1);
					MISC::SET_BIT(&iLocal_82, 2);
				}
				else if (func_885() == Local_80.f_118)
				{
					func_829("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_321(1);
					MISC::SET_BIT(&iLocal_82, 2);
				}
				else if (func_300())
				{
					func_829("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_321(1);
					MISC::SET_BIT(&iLocal_82, 2);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_82, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_82, 3))
		{
			if (func_830(0, 1, 1, 1))
			{
				if (!func_837("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_80.f_118 || func_885() == Local_80.f_118)
					{
						func_322("HUNT_HELPB", -1);
						func_321(1);
						MISC::SET_BIT(&iLocal_82, 3);
					}
				}
			}
		}
	}
}

void func_829(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

int func_830(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_835())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_290())
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_280(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_834(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_833())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_832())
	{
		return 0;
	}
	if (func_831())
	{
		return 0;
	}
	if (func_283())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_2547056)
	{
		return 0;
	}
	if (func_95(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_831()
{
	return Global_2450632.f_591;
}

bool func_832()
{
	return Global_2450632.f_744;
}

bool func_833()
{
	return Global_2439138.f_3047.f_578;
}

int func_834(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_835()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_836(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

bool func_837(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_838()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_151(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_127(PLAYER::PLAYER_ID()))
		{
			func_126();
		}
	}
}

void func_839()
{
	if (func_144())
	{
		if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			func_112(0);
			MISC::CLEAR_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_141(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_884())
		{
			if (!func_143())
			{
				if (MISC::IS_BIT_SET(Local_80.f_1, 6))
				{
					func_112(1);
					MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_840()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_65();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_110, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_885() == Local_80.f_118)
							{
								if (func_858(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_112, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
				{
					if (func_857(iVar0))
					{
						MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_111, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), true), 10f, true))
						{
							MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_856(iVar0);
		if (func_385())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_97[iVar0]))
			{
				if (!func_818())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_97[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1));
							if (func_885() == Local_80.f_118)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_97[iVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_97[iVar0], 432);
								func_855(&(iLocal_97[iVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_97[iVar0], 480);
								func_855(&(iLocal_97[iVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_97[iVar0], true);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_97[iVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_97[iVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_97[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_97[iVar0]));
				}
				else if (func_818())
				{
					HUD::REMOVE_BLIP(&(iLocal_97[iVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_97[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_97[iVar0]));
		}
		func_854(iVar0);
		func_853(iVar0);
		func_851(iVar0);
		switch (Local_80.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_80.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2)))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_80.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || MISC::IS_BIT_SET(Local_80.f_108, iVar0))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_80.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (MISC::IS_BIT_SET(Local_80.f_108, iVar0))
											{
												MISC::CLEAR_BIT(&(Local_80.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
									{
										TASK::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 40000f, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_847(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, false, true);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), true);
									fVar5 = 0f;
									iVar4 = func_846(iVar0, &fVar5);
									if (iVar4 != func_65())
									{
										TASK::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, false);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_80.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_849(Local_80.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, false);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_80.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_849(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, false);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_849(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_849(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_849(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_884())
	{
		func_841();
	}
}

void func_841()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_842(uLocal_99[iVar0], &(Local_98[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_842(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_845())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_844(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_844(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_843(iParam1);
	}
}

void func_843(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_844(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_845()
{
	return Global_1312854;
}

int func_846(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+08f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (iVar4 == Local_80.f_118 || Local_81[iVar4 /*14*/].f_10 == Local_80.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Var3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != func_65())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_848(iParam0);
	if (iVar1 != func_65())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_848(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (func_190(iVar5, 1))
			{
				if (!MISC::IS_BIT_SET(Local_81[iVar3 /*14*/].f_1, 1))
				{
					if (func_66(iVar5) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Var4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_849(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_850(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_850(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_44(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_851(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	
	if (!func_385())
	{
		return;
	}
	if (func_141(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_884() && !func_300())
	{
		return;
	}
	if (func_818())
	{
		return;
	}
	if (func_884())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_80.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, true, true, 2, false, 0, 0, false);
			}
			else
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), false);
				func_852(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_852(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

void func_853(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bool bVar4;
	
	if (Local_80.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_80.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_885() != Local_80.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(Var1, Var2) < 5625f)
	{
		MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_80.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
	}
}

void func_854(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	if (Local_80.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_80.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_885() != Local_80.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_80.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(Var1, Var2) < 62500f)
	{
		MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_80.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar3 = NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_885() == Local_80.f_118)
				{
					if (SYSTEM::VDIST2(Var1, Var2) < 40000f)
					{
						MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
					if (func_858(iVar3))
					{
						MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_855(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_340(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_856(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_80.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_80.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), false))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), true) };
							Var3 = { Var2 };
							Var3.f_2 = (Var3.f_2 + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar1, false, false))
							{
								if (MISC::ABSF((Var2.f_2 - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_857(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_80.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_80.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_858(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_859())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
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

bool func_859()
{
	return Global_1574404;
}

void func_860()
{
	int iVar0;
	int iVar1;
	
	if (Local_80 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_85);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_818())
				{
					if (!func_884())
					{
						if (func_300())
						{
							if (func_190(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_118));
								if (func_76(iVar1, iVar0, 1))
								{
									if (!MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_85))
									{
										func_341(iVar1, 432, 1, 0);
										func_334(iVar1, func_340(iLocal_100), 1, 0);
										MISC::SET_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_85);
									}
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_85))
			{
				func_341(iVar1, 432, 0, 0);
				func_334(iVar1, func_340(iLocal_100), 0, 0);
				MISC::CLEAR_BIT(&(Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_85);
			}
		}
	}
	iLocal_85++;
	if (iLocal_85 >= 32)
	{
		iLocal_85 = 0;
	}
}

int func_861(bool bParam0)
{
	if (func_864(1))
	{
		return 1;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_253() == func_65() || !func_996(func_253(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_399(PLAYER::PLAYER_ID()))
	{
		if (func_863(PLAYER::PLAYER_ID()) && func_862())
		{
			return 1;
		}
	}
	return 0;
}

int func_862()
{
	switch (func_331(func_390(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_863(int iParam0)
{
	if (iParam0 != func_65() && func_996(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 4);
	}
	return 0;
}

int func_864(bool bParam0)
{
	bool bVar0;
	
	if (!func_484(1))
	{
		bVar0 = false;
		if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 != func_65())
		{
			if (func_996(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 4 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 8) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_140(func_105(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_539(31);
				if (func_319(func_105(PLAYER::PLAYER_ID())))
				{
					func_539(81);
				}
				if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 != func_65() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57))
				{
					Global_1626725 = func_360(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_252(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57))
					{
						func_539(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_865()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_80.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_99[iVar0] = Local_80.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_866()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_80.f_118 || func_885() == Local_80.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), false);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), false);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_867()
{
	if (Local_80.f_118 > -1)
	{
		iLocal_100 = func_735(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_118)));
	}
}

void func_868(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_337())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_869(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 != iParam0)
	{
		func_883(-1);
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 = iParam0;
		if (func_882() != -1)
		{
			func_881(-1);
		}
		if (func_880() != -1)
		{
			func_879(-1);
		}
		func_878(iParam2);
		func_876(iParam0);
		if (!func_116(iParam0))
		{
			fVar0 = func_115(iParam0);
			if (fVar0 != 1f)
			{
				func_868(fVar0);
				MISC::SET_BIT(&(Global_1674347.f_3), 1);
			}
		}
		if (!func_119(iParam0) || iParam3)
		{
			if (func_117(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1674347.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_143())
		{
			func_110(27);
		}
		if (bParam1)
		{
			if (!func_144())
			{
				func_112(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2537071.f_4555, 1) || MISC::IS_BIT_SET(Global_2537071.f_4555, 4)) || MISC::IS_BIT_SET(Global_2537071.f_4555, 0))
			{
				func_539(6);
			}
			func_875();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_132(PLAYER::PLAYER_ID()) && func_124(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 8);
		}
		func_871();
		if (func_870(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_871()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_874();
	iVar2 = func_66(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_76(iVar1, iVar2, 1) || func_872(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_872(int iParam0, int iParam1)
{
	if (func_190(iParam0, 1) && func_190(iParam1, 1))
	{
		return (func_873(iParam0) == func_66(iParam1) || func_873(iParam1) == func_66(iParam0));
	}
	return 0;
}

int func_873(int iParam0)
{
	if (func_190(iParam0, 1))
	{
		return Global_1628237[func_66(iParam0) /*615*/].f_11.f_484;
	}
	return func_65();
}

int func_874()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_486();
	if (iVar0 != func_65())
	{
		if (func_996(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1628237[iVar1 /*615*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_875()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 1))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 1);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 4);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 6))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 6);
	}
	MISC::CLEAR_BIT(&(Global_2537071.f_4555), 0);
	MISC::CLEAR_BIT(&(Global_2537071.f_4555), 2);
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_876(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_453(3791, -1, 0);
	iVar1 = func_877(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_451(3791, iVar0, -1, 1, 0);
	}
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_878(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628237[iVar0 /*615*/].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_181 = iParam0;
	}
}

void func_879(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_880()
{
	return Global_2537071.f_5124.f_340;
}

void func_881(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_882()
{
	return Global_2537071.f_5124.f_339;
}

void func_883(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_32 = iParam0;
}

int func_884()
{
	int iVar0;
	
	iVar0 = func_885();
	if (iVar0 > -1)
	{
		if (Local_80.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_885()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_65();
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = func_301();
		iVar1 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_81[iVar0 /*14*/].f_10 != -1)
	{
		return Local_81[iVar0 /*14*/].f_10;
	}
	if (func_123(iVar1))
	{
		Local_81[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_80.f_118)
		{
			func_794(1);
		}
	}
	else if (func_190(iVar1, 1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 != func_65())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_81[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_81[iVar0 /*14*/].f_10;
}

int func_886()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_887()
{
	return Local_80;
}

int func_888(int iParam0)
{
	return Local_81[iParam0 /*14*/];
}

int func_889()
{
	var uVar0;
	
	func_894(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_893())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_892())
	{
		return 1;
	}
	if (func_891(159))
	{
		if (!func_890())
		{
			return 1;
		}
	}
	if (func_891(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_337() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_337()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_890()
{
	return Global_2450632.f_598;
}

int func_891(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_892()
{
	return Global_2460680;
}

bool func_893()
{
	return Global_2450632.f_593;
}

void func_894(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
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
					func_895(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_895(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_996(Var0.f_1, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_896(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_896(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_897()
{
	SYSTEM::WAIT(0);
}

void func_898()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_82, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_884() || func_300())
				{
					func_621(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_82, 6);
				}
			}
		}
		uVar0 = Local_80.f_115;
		uVar1 = Local_80.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_944(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_87)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_88);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_82, 18))
	{
		func_346(1);
		MISC::CLEAR_BIT(&iLocal_82, 18);
	}
	func_943();
	if (Local_80.f_119 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_82, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_119)))
			{
			}
		}
	}
	if (func_81(0))
	{
		func_80(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (MISC::IS_BIT_SET(Local_80.f_871, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_80.f_865[iVar3], true);
				}
				iVar3++;
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_82, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_102);
		MISC::CLEAR_BIT(&iLocal_82, 17);
	}
	func_343();
	MISC::SET_BIT(&iLocal_83, 8);
	func_749();
	OBJECT::_0x78857FC65CADB909(true);
	func_794(0);
	func_900(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_333();
	func_899();
}

void func_899()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_900(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 167 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 168)
	{
		func_941();
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 4);
	}
	if ((func_454() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 190 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 192)
		{
			func_923(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 164 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 208) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 250) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 14) && !func_132(PLAYER::PLAYER_ID()))
		{
			func_112(0);
		}
	}
	else if (func_921(PLAYER::PLAYER_ID()) != -1)
	{
		func_883(-1);
	}
	func_920(func_65());
	if (func_81(16))
	{
		func_80(16);
	}
	func_917(0);
	func_878(-1);
	func_916();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_915(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_913(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_326();
	if ((func_220(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_912(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_138(iVar2))
	{
		func_909(-1, 1);
	}
	else if (((((func_325(iVar2) || func_908(iVar2)) || func_907(iVar2)) || func_408(iVar2)) || func_406(iVar2)) || func_404(iVar2))
	{
	}
	else
	{
		func_909(-1, 1);
	}
	func_108(19);
	func_108(20);
	func_108(21);
	func_108(22);
	func_108(27);
	func_80(3);
	func_80(4);
	func_80(7);
	func_906();
	if (func_124(PLAYER::PLAYER_ID()))
	{
		func_794(0);
	}
	func_108(29);
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 = func_65();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_82();
	}
	if (!func_132(PLAYER::PLAYER_ID()))
	{
		func_107();
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 8))
	{
		func_905("IMPEXP_SELFDES", 0);
		func_903("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 8);
	}
	func_901(iVar2, 0);
}

void func_901(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674347.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_902(iParam0));
			MISC::SET_BIT(&(Global_1674347.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674347.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_902(iParam0));
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 9);
	}
}

char* func_902(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_903(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_809();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_904(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_904(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_905(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_906()
{
	if (func_127(PLAYER::PLAYER_ID()))
	{
		func_108(25);
	}
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_908(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_909(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_326();
	}
	if (iParam0 > 0)
	{
		if (func_486() != func_65())
		{
			if (func_400(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2514606.f_93[func_911(iParam0)] = 1;
			}
		}
		iVar0 = func_911(159);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(157);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(148);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(164);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(142);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(152);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(166);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(170);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(173);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(179);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(200);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(201);
		if (func_910(iVar0, Global_262145.f_12606, bParam1))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(182);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(183);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(185);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(186);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(180);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(195);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(197);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(198);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(207);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(208);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(209);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(214);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(215);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(216);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(217);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(218);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(219);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(220);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(221);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_910(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_109(PLAYER::PLAYER_ID(), 19) && !func_109(PLAYER::PLAYER_ID(), 20)) && !func_109(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_8(&(Global_2514606[iParam0 /*2*/])))
	{
		if (func_751(&(Global_2514606[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_912(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_326();
	}
	if (iParam0 > 0)
	{
		if (func_486() != func_65())
		{
			Global_2514606.f_93[func_911(iParam0)] = 1;
		}
		iVar0 = func_911(155);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(163);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(160);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(153);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(162);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(154);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(171);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(172);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(199);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(194);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(193);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(210);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(205);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(189);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_911(211);
		if (func_910(iVar0, Global_262145.f_12607, 0))
		{
			func_162(&(Global_2514606[iVar0 /*2*/]));
			func_7(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_913(int iParam0)
{
	if (!func_28(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_337[iParam0 /*3*/], func_914(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_337[iParam0 /*3*/] = { func_914() };
	}
	if (!func_28(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_324[iParam0 /*3*/], func_914(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_324[iParam0 /*3*/] = { func_914() };
	}
}

Vector3 func_914()
{
	struct<3> Var0;
	
	return Var0;
}

void func_915(int iParam0)
{
	if (!func_28(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_150[iParam0 /*3*/], func_914(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_150[iParam0 /*3*/] = { func_914() };
	}
	if (!func_28(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_125[iParam0 /*3*/], func_914(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_125[iParam0 /*3*/] = { func_914() };
	}
}

void func_916()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_65();
	if (MISC::IS_BIT_SET(Global_1573344, 3))
	{
		MISC::CLEAR_BIT(&Global_1573344, 3);
	}
}

void func_917(bool bParam0)
{
	if (bParam0)
	{
		if (!func_431(PLAYER::PLAYER_ID(), 14))
		{
			func_919(14);
		}
	}
	else if (func_431(PLAYER::PLAYER_ID(), 14))
	{
		func_918(14);
	}
}

void func_918(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_5), iParam0);
}

void func_919(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_5), iParam0);
}

void func_920(int iParam0)
{
	if (func_123(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_484 != iParam0)
			{
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_484 = iParam0;
				if (iParam0 != func_65())
				{
				}
			}
		}
	}
}

int func_921(int iParam0)
{
	if (func_922(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

int func_922(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_923(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1) && func_940(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		func_927(iVar0, bParam2, bParam3);
		func_924(iVar0, 1);
	}
}

void func_924(int iParam0, bool bParam1)
{
	if (!func_926(iParam0))
	{
		return;
	}
	func_572(func_925(iParam0), bParam1, -1, 1);
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_925(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_926(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_927(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_772(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_939(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_938(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_937(iParam0, 0, bParam2);
	}
	else if (func_935(iParam0, bParam2))
	{
		iVar0 = func_934(iVar2, 0);
		iVar3 = func_714(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_933(iVar2, bParam2);
		iVar5 = func_934(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_932(iVar2) && func_931(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_939(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_930(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_929(iParam0, (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_933(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_934(iVar2, bParam2) / func_930(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_932(iVar2) && func_931(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_928(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_928(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return;
	}
	if (func_579(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0 /*876*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_929(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_930(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_579(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_931(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_579(iParam1) && func_932(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_932(int iParam0)
{
	return func_480(iParam0) == 5;
}

int func_933(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_480(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_934(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_480(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_587(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_931(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_935(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_573(15384, -1, -1);
	}
	return func_573(func_936(iParam0), -1, -1);
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_937(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_572(15384, bParam1, -1, 1);
		return;
	}
	func_572(func_936(iParam0), bParam1, -1, 1);
}

int func_938(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2513475[iParam0];
	iVar1 = func_772(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_932(iVar1))
	{
		if (func_931(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_939(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_940(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_589(iParam0, iParam1))
	{
		iVar0 = func_588(iParam0, iParam1);
		if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_941()
{
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 29);
	func_942(24);
}

void func_942(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

void func_943()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_87);
}

void func_944(var uParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_11 = Global_1674356.f_11;
	Var1.f_12 = Global_1674356.f_12;
	Var1.f_13 = Global_1674356.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1674356.f_15;
			Var2.f_15 = Global_1674356.f_16;
			Var2.f_16 = Global_1674356.f_17;
			STATS::_0x8D8ADB562F09A245(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1674356.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = uParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1674356.f_15;
			Var4.f_15 = uParam0;
			STATS::_0x88087EE1F28024AE(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1674356.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = uParam1;
			STATS::_0xFCC228E07217FCAC(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1674356.f_15;
			Var6.f_15 = uParam0;
			STATS::_0x678F86D8FC040BDB(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1674356.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1674356.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1674356.f_15;
			STATS::_0x282B6739644F4347(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1674356.f_15;
			STATS::_0xF06A6F41CB445443(&Var10);
		}
	}
	func_945();
}

void func_945()
{
	struct<18> Var0;
	
	Global_1674356 = { Var0 };
}

void func_946(struct<21> Param0)
{
	func_994(func_995(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_993(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_80, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_81, 449);
	if (!func_992())
	{
		func_898();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_989();
		func_947(0, 0, 0);
		Local_81[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_898();
	}
}

void func_947(int iParam0, int iParam1, bool bParam2)
{
	func_988();
	if (func_399(PLAYER::PLAYER_ID()))
	{
		func_950(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_949(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674342, 0);
				break;
			}
	}
	if (!func_467() && !func_190(PLAYER::PLAYER_ID(), 1))
	{
		if (func_147())
		{
			func_111(3);
		}
	}
	func_111(4);
	if (func_484(0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 = func_486();
	}
	if (func_319(iParam0))
	{
		func_712();
		Global_1674374.f_18 = func_692(func_253());
	}
	else if (func_324(func_921(PLAYER::PLAYER_ID())))
	{
		func_710();
		Global_1674428.f_18 = func_692(func_253());
	}
	if (bParam2)
	{
		if (!func_144())
		{
			func_112(1);
		}
	}
	func_948();
}

void func_948()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0 /*42*/].f_1 = func_65();
		Global_1366905.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_949(int iParam0, bool bParam1)
{
	return func_76(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_950(bool bParam0)
{
	int iVar0;
	
	func_942(33);
	func_942(34);
	func_942(35);
	func_942(36);
	func_942(37);
	func_942(38);
	func_942(39);
	func_942(40);
	func_942(43);
	func_942(41);
	func_942(54);
	func_942(42);
	func_942(47);
	func_987(23);
	func_987(24);
	func_942(92);
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 2);
	func_986();
	func_981();
	func_976();
	func_971();
	func_960();
	func_956();
	func_952();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_951(3))
	{
		func_987(3);
	}
	else if (func_951(4))
	{
		func_987(4);
	}
	else if (func_951(5))
	{
		func_987(5);
	}
	else if (func_951(6))
	{
		func_987(6);
	}
	else if (func_951(7))
	{
		func_987(7);
	}
	else if (((((((((((((((((func_951(0) || func_951(1)) || func_951(2)) || func_951(8)) || func_951(9)) || func_951(10)) || func_951(11)) || func_951(12)) || func_951(13)) || func_951(14)) || func_951(15)) || func_951(16)) || func_951(17)) || func_951(18)) || func_951(19)) || func_951(20)) || func_951(21)) || func_951(22))
	{
		func_987(8);
		func_987(0);
		func_987(1);
		func_987(2);
		func_987(9);
		func_987(10);
		func_987(11);
		func_987(12);
		func_987(13);
		func_987(14);
		func_987(15);
		func_987(16);
		func_987(17);
		func_987(18);
		func_987(19);
		func_987(20);
		func_987(21);
		func_987(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_951(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_14[iVar0], iVar1);
}

void func_952()
{
	if (func_954())
	{
		func_953(0);
		func_953(1);
		func_953(2);
		func_953(3);
	}
}

void func_953(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_33[iVar0]), iVar1);
}

int func_954()
{
	if (((func_955(0) || func_955(1)) || func_955(2)) || func_955(3))
	{
		return 1;
	}
	return 0;
}

bool func_955(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_33[iVar0], iVar1);
}

void func_956()
{
	if (func_958())
	{
		func_957(4);
		func_957(5);
		func_957(6);
		func_957(7);
	}
}

void func_957(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_31[iVar0]), iVar1);
}

int func_958()
{
	if (((func_959(4) || func_959(5)) || func_959(6)) || func_959(7))
	{
		return 1;
	}
	return 0;
}

bool func_959(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_31[iVar0], iVar1);
}

void func_960()
{
	int iVar0;
	
	if (func_970())
	{
		func_969(8);
		func_969(9);
		func_969(10);
		func_969(12);
		func_969(13);
		func_969(14);
		func_969(19);
		func_969(20);
		func_969(21);
		func_969(22);
		func_969(23);
		func_969(24);
		func_969(25);
		func_969(26);
		func_969(15);
		func_969(16);
		func_969(17);
		func_969(18);
		func_969(35);
		func_969(45);
		func_969(46);
		if (func_968(11))
		{
			func_969(11);
			iVar0 = func_453(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_451(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_968(48))
	{
		if (func_966(151, 3))
		{
			func_964(151, 3);
		}
		func_969(48);
	}
	if (func_968(49))
	{
		if (func_966(152, 3))
		{
			func_964(152, 3);
		}
		func_969(49);
	}
	if (func_968(50))
	{
		if (func_966(153, 3))
		{
			func_964(153, 3);
		}
		func_969(50);
	}
	if (func_968(51))
	{
		if (func_966(func_961(), 3))
		{
			func_964(func_961(), 3);
		}
		func_969(51);
	}
}

int func_961()
{
	if (func_963())
	{
		func_962(154, Global_19486, 1);
	}
	return 154;
}

void func_962(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_963()
{
	int iVar0;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_65()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_964(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_965(iParam0, iVar0, 0);
			func_962(iParam0, iVar0, 0);
		}
	}
}

void func_965(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_966(int iParam0, int iParam1)
{
	if (func_967(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_967(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_26[iVar0], iVar1);
}

void func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_26[iVar0]), iVar1);
}

int func_970()
{
	if (((((((((((((((((((((func_968(8) || func_968(9)) || func_968(10)) || func_968(12)) || func_968(11)) || func_968(13)) || func_968(14)) || func_968(19)) || func_968(20)) || func_968(21)) || func_968(22)) || func_968(23)) || func_968(24)) || func_968(25)) || func_968(26)) || func_968(15)) || func_968(16)) || func_968(17)) || func_968(18)) || func_968(35)) || func_968(45)) || func_968(46))
	{
		return 1;
	}
	return 0;
}

void func_971()
{
	if (func_975())
	{
		func_974(0);
		func_974(1);
		func_974(2);
		func_974(3);
		func_974(4);
		func_974(5);
		if (func_973(32))
		{
			if (func_966(func_972(), 3))
			{
				func_964(func_972(), 3);
			}
			func_974(32);
		}
	}
}

int func_972()
{
	if (func_963())
	{
		func_962(12, Global_19486, 1);
	}
	return 12;
}

bool func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_23[iVar0], iVar1);
}

void func_974(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_23[iVar0]), iVar1);
}

int func_975()
{
	if ((((func_973(1) || func_973(0)) || func_973(2)) || func_973(4)) || func_973(5))
	{
		return 1;
	}
	return 0;
}

void func_976()
{
	if (func_980())
	{
		func_979(0);
		func_979(1);
		func_979(2);
		func_979(3);
		func_979(4);
		func_979(5);
		func_979(6);
		func_979(7);
		if (func_978(8))
		{
			func_979(8);
		}
		if (func_978(15))
		{
			if (func_966(func_977(), 3))
			{
				func_964(func_977(), 3);
			}
			func_979(15);
		}
	}
}

int func_977()
{
	if (func_963())
	{
		func_962(20, Global_19486, 1);
	}
	return 20;
}

bool func_978(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_21[iVar0], iVar1);
}

void func_979(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_21[iVar0]), iVar1);
}

int func_980()
{
	if ((((((((func_978(0) || func_978(1)) || func_978(2)) || func_978(3)) || func_978(4)) || func_978(5)) || func_978(6)) || func_978(7)) || func_978(8))
	{
		return 1;
	}
	return 0;
}

void func_981()
{
	if (func_985())
	{
		func_984(0);
		func_984(1);
		func_984(2);
		func_984(3);
		func_984(4);
		func_984(5);
		func_984(6);
		func_984(7);
		func_984(8);
		func_984(9);
		func_984(10);
		func_984(11);
		func_984(12);
		if (func_983(13))
		{
			if (func_966(func_982(), 3))
			{
				func_964(func_982(), 3);
			}
			func_984(13);
		}
	}
}

int func_982()
{
	if (func_963())
	{
		func_962(76, Global_19486, 1);
	}
	return 76;
}

bool func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_19[iVar0], iVar1);
}

void func_984(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_19[iVar0]), iVar1);
}

int func_985()
{
	if ((((((((((((func_983(0) || func_983(1)) || func_983(2)) || func_983(3)) || func_983(4)) || func_983(5)) || func_983(6)) || func_983(7)) || func_983(8)) || func_983(9)) || func_983(10)) || func_983(11)) || func_983(12))
	{
		return 1;
	}
	return 0;
}

void func_986()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_987(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_988()
{
	struct<14> Var0;
	
	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

void func_989()
{
	int iVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_87);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574967[iVar1], iLocal_87);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_87, Global_1574967[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574967[iVar1], Global_1575012);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575012, Global_1574967[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_87, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("COP"), iLocal_87);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_87, Global_1575015[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575015[5], iLocal_87);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_87, Global_1575000);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575000, iLocal_87);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_87, Global_1575012);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1575012, iLocal_87);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1575012);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_87);
	func_991(1, &Global_1575012);
	func_990(&Global_1575012);
	func_990(&iLocal_87);
}

void func_990(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_991(int iParam0, var uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_992()
{
	int iVar0;
	
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
		if (func_893())
		{
			return 0;
		}
		if (func_891(157))
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

int func_993(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_899();
			}
			else
			{
				return 0;
			}
		}
		if (!func_845())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_899();
					}
					else
					{
						return 0;
					}
				}
				if (func_893())
				{
					if (!bParam2)
					{
						func_899();
					}
					else
					{
						return 0;
					}
				}
				if (func_891(157))
				{
					if (!bParam2)
					{
						func_899();
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
					func_899();
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
				func_899();
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
			func_899();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_994(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_899();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_995(int iParam0)
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
		
		case joaat("MPSV_LP0_31"):
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

int func_996(int iParam0, bool bParam1, bool bParam2)
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

